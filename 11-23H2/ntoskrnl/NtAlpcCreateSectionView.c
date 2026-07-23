/*
 * XREFs of NtAlpcCreateSectionView @ 0x1407B9DB0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     AlpcpDeleteView @ 0x14071C2E8 (AlpcpDeleteView.c)
 *     AlpcReferenceBlobByHandle @ 0x14071DDF8 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x14071EB3C (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSectionView @ 0x1407B9FA4 (AlpcpCreateSectionView.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  __int64 v7; // rcx
  KPROCESSOR_MODE v8; // r9
  int SectionView; // ebx
  PVOID v10; // r13
  void *v11; // r15
  ULONG_PTR v12; // rsi
  PVOID Object[2]; // [rsp+30h] [rbp-48h] BYREF
  _ALPC_DATA_VIEW_ATTR v15; // [rsp+40h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  memset(&v15, 0, 28);
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
    goto LABEL_24;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)ViewAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ViewAttributes < 0x7FFFFFFF0000LL )
      v7 = (__int64)ViewAttributes;
    *(_BYTE *)v7 = *(_BYTE *)v7;
    *(_BYTE *)(v7 + 31) = *(_BYTE *)(v7 + 31);
    v15 = *ViewAttributes;
  }
  else
  {
    v15 = *ViewAttributes;
  }
  if ( v15.Flags || !v15.ViewSize || v15.ViewBase )
  {
LABEL_24:
    SectionView = -1073741811;
  }
  else
  {
    v8 = KeGetCurrentThread()->PreviousMode;
    Object[0] = 0LL;
    SectionView = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v8, Object, 0LL);
    if ( SectionView >= 0 )
    {
      v10 = Object[0];
      v11 = (void *)AlpcReferenceBlobByHandle(
                      (_QWORD *)(*((_QWORD *)Object[0] + 2) + 40LL),
                      (int)v15.SectionHandle,
                      AlpcSectionType);
      Object[1] = v11;
      if ( v11 )
      {
        SectionView = AlpcpCreateSectionView((ULONG_PTR)v11, v10, (__int64)&BugCheckParameter2);
        if ( SectionView >= 0 )
        {
          if ( PreviousMode )
          {
            v12 = BugCheckParameter2;
            ViewAttributes->ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
            ViewAttributes->ViewSize = *(_QWORD *)(v12 + 48);
            if ( SectionView < 0 )
              AlpcpDeleteView(v12);
          }
          else
          {
            v12 = BugCheckParameter2;
            ViewAttributes->ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
            ViewAttributes->ViewSize = *(_QWORD *)(v12 + 48);
          }
          AlpcpDereferenceBlobEx(v12, 1);
        }
        AlpcpDereferenceBlobEx((ULONG_PTR)v11, 1);
      }
      else
      {
        SectionView = -1073741816;
      }
      ObfDereferenceObject(v10);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return SectionView;
}
