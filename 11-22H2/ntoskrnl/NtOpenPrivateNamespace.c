/*
 * XREFs of NtOpenPrivateNamespace @ 0x1407C8C60
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     ObOpenObjectByPointer @ 0x1407379D0 (ObOpenObjectByPointer.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1407C9244 (ObpCaptureBoundaryDescriptor.c)
 *     ObpLookupNamespaceEntry @ 0x1407C97A0 (ObpLookupNamespaceEntry.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtOpenPrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  KPROCESSOR_MODE AccessMode; // r12
  __int64 v7; // rcx
  NTSTATUS result; // eax
  char *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 *v11; // rsi
  __int64 v12; // r14
  void *v13; // r14
  ULONG Attributes; // [rsp+40h] [rbp-38h]
  NTSTATUS P; // [rsp+48h] [rbp-30h]
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF

  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  Attributes = 0;
  if ( AccessMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NamespaceHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)NamespaceHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
    if ( ObjectAttributes )
    {
      if ( ((unsigned __int8)ObjectAttributes & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      Attributes = ObjectAttributes->Attributes;
    }
  }
  else if ( ObjectAttributes )
  {
    Attributes = ObjectAttributes->Attributes;
  }
  result = ObpCaptureBoundaryDescriptor(BoundaryDescriptor);
  if ( result >= 0 )
  {
    CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (__int64 *)(CurrentServerSiloGlobals + 720);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 720), 0LL);
    v12 = ObpLookupNamespaceEntry(CurrentServerSiloGlobals + 128, 0LL);
    ExFreePoolWithTag(0LL, 0x534E624Fu);
    if ( v12 && (v13 = *(void **)(v12 + 16)) != 0LL )
    {
      ObfReferenceObject(v13);
      ExReleasePushLockEx(v11, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      P = ObOpenObjectByPointer(
            v13,
            Attributes & (AccessMode != 0 ? 7666 : 73714),
            0LL,
            DesiredAccess,
            ObpDirectoryObjectType,
            AccessMode,
            &Handle);
      ObfDereferenceObject(v13);
      *NamespaceHandle = Handle;
      return P;
    }
    else
    {
      ExReleasePushLockEx(v11, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return -1073741766;
    }
  }
  return result;
}
