/*
 * XREFs of NtAlpcCreatePortSection @ 0x14076C740
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     AlpcpDeleteBlob @ 0x14071C18C (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14071E9AC (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSection @ 0x14076C8D8 (AlpcpCreateSection.c)
 */

NTSTATUS __cdecl NtAlpcCreatePortSection(
        HANDLE PortHandle,
        ULONG Flags,
        HANDLE SectionHandle,
        SIZE_T SectionSize,
        PALPC_HANDLE AlpcSectionHandle,
        PSIZE_T ActualSectionSize)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  KPROCESSOR_MODE v12; // r9
  int Section; // ebx
  PVOID v14; // rsi
  ULONG_PTR v15; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (Flags & 0xFFFBFFFF) != 0 || (Flags & 0x40000) != 0 && SectionHandle )
  {
    Section = -1073741811;
  }
  else
  {
    if ( PreviousMode )
    {
      v10 = 0x7FFFFFFF0000LL;
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)AlpcSectionHandle < 0x7FFFFFFF0000LL )
        v11 = (__int64)AlpcSectionHandle;
      *(_QWORD *)v11 = *(_QWORD *)v11;
      if ( (unsigned __int64)ActualSectionSize < 0x7FFFFFFF0000LL )
        v10 = (__int64)ActualSectionSize;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
    v12 = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    Section = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v12, &Object, 0LL);
    if ( Section >= 0 )
    {
      v14 = Object;
      Section = AlpcpCreateSection(Object, (PVOID)SectionSize, (__int64)&BugCheckParameter2);
      if ( Section >= 0 )
      {
        v15 = BugCheckParameter2;
        *AlpcSectionHandle = *(HANDLE *)(BugCheckParameter2 + 24);
        *ActualSectionSize = *(_QWORD *)(v15 + 8);
        AlpcpDereferenceBlobEx(v15, 1);
      }
      ObfDereferenceObject(v14);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return Section;
}
