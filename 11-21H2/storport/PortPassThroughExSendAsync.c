/*
 * XREFs of PortPassThroughExSendAsync @ 0x1C008860C
 * Callers:
 *     RaidAdapterPassThrough @ 0x1C0088544 (RaidAdapterPassThrough.c)
 * Callees:
 *     PortPassThroughBuildIrpEx @ 0x1C001510C (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C0015538 (PortPassThroughFreeIrpEx.c)
 *     PortpEnableCancel @ 0x1C0021F34 (PortpEnableCancel.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0022B60 (StorASyncScsiPassThroughCompletion.c)
 *     PortPassThroughExBasicValidation @ 0x1C0068DF8 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExFreeSrbEx @ 0x1C0068EA4 (PortPassThroughExFreeSrbEx.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C0068F10 (PortPassThroughExGetBasicStructureSize.c)
 *     PortPassThroughExValidate @ 0x1C00691C4 (PortPassThroughExValidate.c)
 *     PortPassThroughSendAsync @ 0x1C00889F4 (PortPassThroughSendAsync.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0093BB0 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExGetDataBuffers @ 0x1C0093F38 (PortPassThroughExGetDataBuffers.c)
 */

__int64 __fastcall PortPassThroughExSendAsync(
        struct _DEVICE_OBJECT *a1,
        IRP *a2,
        char a3,
        ULONG a4,
        int a5,
        int a6,
        PMDL MemoryDescriptorList,
        __int64 a8)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _BYTE *v12; // r13
  int v13; // r9d
  void *v14; // r14
  int BasicStructureSize; // ebx
  __int64 Pool2; // rsi
  int v18; // r8d
  KPROCESSOR_MODE RequestorMode; // cl
  int v20; // ebx
  ULONG v21; // r8d
  void *v22; // rdx
  PIRP v23; // r15
  struct _MDL *v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  _IO_STACK_LOCATION *v28; // rax
  ULONG AccessMode; // [rsp+20h] [rbp-40h]
  int v30; // [rsp+30h] [rbp-30h]
  int v31[4]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+48h] BYREF
  ULONG v34; // [rsp+B8h] [rbp+58h] BYREF

  v34 = a4;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_QWORD *)v31 = 0LL;
  v33 = 0LL;
  v34 = 0;
  v12 = 0LL;
  v13 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 315460;
  MemoryDescriptorList = 0LL;
  v14 = 0LL;
  if ( (v13 & 0xFFFFFFFB) != 0 )
    return PortPassThroughSendAsync((int)a1, a2, a5, a6, v30, a8);
  BasicStructureSize = PortPassThroughExBasicValidation(a2);
  if ( BasicStructureSize < 0 )
    goto LABEL_27;
  BasicStructureSize = PortPassThroughExGetBasicStructureSize((__int64)a2, &v34);
  if ( BasicStructureSize < 0 )
    goto LABEL_27;
  Pool2 = ExAllocatePool2(64LL, v34, 1766878288LL);
  if ( !Pool2 )
  {
    BasicStructureSize = -1073741670;
LABEL_27:
    a2->IoStatus.Status = BasicStructureSize;
    StorASyncScsiPassThroughCompletion(a2);
    return (unsigned int)BasicStructureSize;
  }
  BasicStructureSize = PortPassThroughExValidate((__int64)a1, a2, a3, a5, a6, (unsigned int *)Pool2);
  if ( BasicStructureSize < 0 )
  {
LABEL_26:
    ExFreePoolWithTag((PVOID)Pool2, 0x69506C50u);
    goto LABEL_27;
  }
  LOBYTE(v18) = a3;
  PortPassThroughExGetDataBuffers(Pool2, (_DWORD)a2, v18, (unsigned int)v31, (__int64)&v33);
  if ( a3 )
    RequestorMode = a2->RequestorMode;
  else
    RequestorMode = 0;
  v20 = v31[0];
  if ( *(_QWORD *)v31 )
    v21 = *(_DWORD *)(Pool2 + 32);
  else
    v21 = *(_DWORD *)(Pool2 + 36);
  v22 = (void *)v33;
  if ( *(_QWORD *)v31 )
    v22 = *(void **)v31;
  v23 = PortPassThroughBuildIrpEx(
          (__int64)a1,
          v22,
          v21,
          *(_BYTE *)(Pool2 + 18) == 1,
          RequestorMode,
          a2,
          *(_BYTE *)(Pool2 + 18) == 3,
          (void *)v33,
          *(_DWORD *)(Pool2 + 36),
          &MemoryDescriptorList);
  if ( !v23
    || (v25 = PortPassThroughExBuildSrbEx((int)a2, Pool2, v20, v33, AccessMode, (__int64)MemoryDescriptorList),
        (v12 = (_BYTE *)v25) == 0LL)
    || (*(_QWORD *)(v25 + 80) = v23,
        v23->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = v25,
        v26 = ExAllocatePool2(64LL, 48LL, 1766878288LL),
        (v14 = (void *)v26) == 0LL) )
  {
    BasicStructureSize = -1073741670;
LABEL_18:
    v24 = MemoryDescriptorList;
    if ( MemoryDescriptorList )
    {
      MmUnlockPages(MemoryDescriptorList);
      IoFreeMdl(v24);
    }
    if ( v23 )
      PortPassThroughFreeIrpEx(v23);
    if ( v12 )
      PortPassThroughExFreeSrbEx(v12);
    if ( v14 )
      ExFreePoolWithTag(v14, 0x69506C50u);
    goto LABEL_26;
  }
  *(_QWORD *)(v26 + 24) = v12;
  *(_QWORD *)(v26 + 8) = v23;
  v27 = v26;
  *(_BYTE *)v26 = a3;
  *(_QWORD *)(v26 + 16) = a2;
  *(_QWORD *)(v26 + 32) = StorASyncScsiPassThroughCompletion;
  *(_QWORD *)(v26 + 40) = a8;
  v28 = v23->Tail.Overlay.CurrentStackLocation;
  v28[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
  v28[-1].Context = v14;
  v28[-1].Control = -32;
  BasicStructureSize = PortpEnableCancel((__int64)a2, v27);
  if ( BasicStructureSize != 259 )
    goto LABEL_18;
  ExFreePoolWithTag((PVOID)Pool2, 0x69506C50u);
  IofCallDriver(a1, v23);
  return 259LL;
}
