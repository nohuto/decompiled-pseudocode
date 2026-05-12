/*
 * XREFs of sub_1C00A2F90 @ 0x1C00A2F90
 * Callers:
 *     sub_1C00A2D68 @ 0x1C00A2D68 (sub_1C00A2D68.c)
 * Callees:
 *     sub_1C001EBC4 @ 0x1C001EBC4 (sub_1C001EBC4.c)
 *     sub_1C001ED9C @ 0x1C001ED9C (sub_1C001ED9C.c)
 *     sub_1C001F1CC @ 0x1C001F1CC (sub_1C001F1CC.c)
 *     sub_1C001F1F4 @ 0x1C001F1F4 (sub_1C001F1F4.c)
 *     sub_1C0022E40 @ 0x1C0022E40 (sub_1C0022E40.c)
 *     sub_1C0078E58 @ 0x1C0078E58 (sub_1C0078E58.c)
 *     sub_1C0078EF4 @ 0x1C0078EF4 (sub_1C0078EF4.c)
 *     sub_1C00791EC @ 0x1C00791EC (sub_1C00791EC.c)
 *     sub_1C00A3030 @ 0x1C00A3030 (sub_1C00A3030.c)
 *     sub_1C00B1760 @ 0x1C00B1760 (sub_1C00B1760.c)
 *     sub_1C00B1AA4 @ 0x1C00B1AA4 (sub_1C00B1AA4.c)
 */

__int64 __fastcall sub_1C00A2F90(
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
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int AccessMode; // [rsp+20h] [rbp-68h]
  int v31; // [rsp+30h] [rbp-58h]
  int v32[2]; // [rsp+50h] [rbp-38h] BYREF
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-30h] BYREF

  *(_QWORD *)v32 = 0LL;
  v9 = 0LL;
  a7 = 0LL;
  v10 = 0LL;
  MemoryDescriptorList = 0LL;
  if ( !sub_1C001F1CC((__int64)a2) )
    return sub_1C00A3030((int)a1, v13, a5, a6, v31, a8);
  v15 = sub_1C0078E58(a2);
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
        v15 = sub_1C00791EC((__int64)a1, a2, a3, a5, a6, (unsigned int *)Pool2);
        if ( v15 >= 0 )
        {
          LOBYTE(v18) = a3;
          sub_1C00B1AA4(Pool2, (_DWORD)a2, v18, (unsigned int)v32, (__int64)&a7);
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
          v23 = sub_1C001EBC4(
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
            && (v26 = sub_1C00B1760((_DWORD)a2, Pool2, v20, (_DWORD)a7, AccessMode, (__int64)MemoryDescriptorList),
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
            *(_QWORD *)(v27 + 32) = sub_1C0022E40;
            *(_QWORD *)(v27 + 40) = a8;
            CurrentStackLocation = v25->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_1C001EB00;
            CurrentStackLocation[-1].Context = v10;
            CurrentStackLocation[-1].Control = -32;
            v15 = sub_1C001ED9C((__int64)a2, v28);
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
            sub_1C001F1F4(v25);
          if ( v9 )
            sub_1C0078EF4(v9);
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
  sub_1C0022E40(a2);
  return (unsigned int)v15;
}
