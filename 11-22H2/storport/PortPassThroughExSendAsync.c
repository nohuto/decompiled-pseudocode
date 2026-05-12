/*
 * XREFs of PortPassThroughExSendAsync @ 0x1C00A1DE0
 * Callers:
 *     RaidAdapterPassThrough @ 0x1C00A1BB8 (RaidAdapterPassThrough.c)
 * Callees:
 *     PortPassThroughBuildIrpEx @ 0x1C001DF14 (PortPassThroughBuildIrpEx.c)
 *     PortpEnableCancel @ 0x1C001E0EC (PortpEnableCancel.c)
 *     IsScsiPassThroughEx @ 0x1C001E51C (IsScsiPassThroughEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C001E544 (PortPassThroughFreeIrpEx.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0022040 (StorASyncScsiPassThroughCompletion.c)
 *     PortPassThroughExBasicValidation @ 0x1C0078628 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExFreeSrbEx @ 0x1C00786C4 (PortPassThroughExFreeSrbEx.c)
 *     PortPassThroughExValidate @ 0x1C00789BC (PortPassThroughExValidate.c)
 *     PortPassThroughSendAsync @ 0x1C00A1E80 (PortPassThroughSendAsync.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C00B04E4 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExGetDataBuffers @ 0x1C00B0828 (PortPassThroughExGetDataBuffers.c)
 */

__int64 __fastcall PortPassThroughExSendAsync(
        struct _DEVICE_OBJECT *a1,
        IRP *a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        void *a7,
        __int64 a8)
{
  unsigned int *v9; // r15
  void *v10; // rsi
  IRP *v13; // rdx
  int v15; // ebx
  unsigned int v16; // ecx
  __int64 Pool2; // rbp
  int v18; // r8d
  KPROCESSOR_MODE RequestorMode; // r8
  int v20; // ebx
  ULONG v21; // r10d
  void *v22; // rdx
  PIRP v23; // rax
  struct _MDL *v24; // r13
  IRP *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int AccessMode; // [rsp+20h] [rbp-68h]
  int v31; // [rsp+30h] [rbp-58h]
  int v32[2]; // [rsp+50h] [rbp-38h] BYREF
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-30h] BYREF

  *(_QWORD *)v32 = 0LL;
  v9 = 0LL;
  a7 = 0LL;
  v10 = 0LL;
  MemoryDescriptorList = 0LL;
  if ( !IsScsiPassThroughEx((__int64)a2) )
    return PortPassThroughSendAsync((int)a1, v13, a5, a6, v31, a8);
  v15 = PortPassThroughExBasicValidation(a2);
  if ( v15 >= 0 )
  {
    v16 = LODWORD(a2->AssociatedIrp.MasterIrp->MdlAddress) + 63;
    if ( v16 < 0x40 )
    {
      v15 = -1073741675;
    }
    else
    {
      Pool2 = ExAllocatePool2(64LL, v16, 1766878288LL);
      if ( Pool2 )
      {
        v15 = PortPassThroughExValidate((__int64)a1, a2, a3, a5, a6, (unsigned int *)Pool2);
        if ( v15 >= 0 )
        {
          LOBYTE(v18) = a3;
          PortPassThroughExGetDataBuffers(Pool2, (_DWORD)a2, v18, (unsigned int)v32, (__int64)&a7);
          if ( a3 )
            RequestorMode = a2->RequestorMode;
          else
            RequestorMode = 0;
          v20 = v32[0];
          if ( *(_QWORD *)v32 )
            v21 = *(_DWORD *)(Pool2 + 32);
          else
            v21 = *(_DWORD *)(Pool2 + 36);
          v22 = a7;
          if ( *(_QWORD *)v32 )
            v22 = *(void **)v32;
          v23 = PortPassThroughBuildIrpEx(
                  (__int64)a1,
                  v22,
                  v21,
                  *(_BYTE *)(Pool2 + 18) == 1,
                  RequestorMode,
                  a2,
                  *(_BYTE *)(Pool2 + 18) == 3,
                  a7,
                  *(_DWORD *)(Pool2 + 36),
                  &MemoryDescriptorList);
          v24 = MemoryDescriptorList;
          v25 = v23;
          if ( v23
            && (v26 = PortPassThroughExBuildSrbEx(
                        (_DWORD)a2,
                        Pool2,
                        v20,
                        (_DWORD)a7,
                        AccessMode,
                        (__int64)MemoryDescriptorList),
                (v9 = (unsigned int *)v26) != 0LL)
            && (*(_QWORD *)(v26 + 80) = v25,
                v25->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = v26,
                v27 = ExAllocatePool2(64LL, 48LL, 1766878288LL),
                (v10 = (void *)v27) != 0LL) )
          {
            *(_QWORD *)(v27 + 24) = v9;
            *(_QWORD *)(v27 + 8) = v25;
            v28 = v27;
            *(_BYTE *)v27 = a3;
            *(_QWORD *)(v27 + 16) = a2;
            *(_QWORD *)(v27 + 32) = StorASyncScsiPassThroughCompletion;
            *(_QWORD *)(v27 + 40) = a8;
            CurrentStackLocation = v25->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
            CurrentStackLocation[-1].Context = v10;
            CurrentStackLocation[-1].Control = -32;
            v15 = PortpEnableCancel((__int64)a2, v28);
            if ( v15 == 259 )
            {
              ExFreePoolWithTag((PVOID)Pool2, 0x69506C50u);
              IofCallDriver(a1, v25);
              return 259LL;
            }
          }
          else
          {
            v15 = -1073741670;
          }
          if ( v24 )
          {
            MmUnlockPages(v24);
            IoFreeMdl(v24);
          }
          if ( v25 )
            PortPassThroughFreeIrpEx(v25);
          if ( v9 )
            PortPassThroughExFreeSrbEx(v9);
          if ( v10 )
            ExFreePoolWithTag(v10, 0x69506C50u);
        }
        ExFreePoolWithTag((PVOID)Pool2, 0x69506C50u);
      }
      else
      {
        v15 = -1073741670;
      }
    }
  }
  a2->IoStatus.Status = v15;
  StorASyncScsiPassThroughCompletion(a2);
  return (unsigned int)v15;
}
