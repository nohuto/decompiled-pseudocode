/*
 * XREFs of NtRemoveIoCompletionEx @ 0x1407AE860
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IoRemoveIoCompletion @ 0x1402A9C40 (IoRemoveIoCompletion.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtRemoveIoCompletionEx(
        HANDLE IoCompletionHandle,
        PFILE_IO_COMPLETION_INFORMATION IoCompletionInformation,
        ULONG Count,
        PULONG NumEntriesRemoved,
        PLARGE_INTEGER Timeout,
        BOOLEAN Alertable)
{
  __int64 v7; // rdi
  PLARGE_INTEGER v10; // r15
  KPROCESSOR_MODE PreviousMode; // si
  PLIST_ENTRY *Pool2; // r14
  NTSTATUS v13; // ebx
  __int64 v15; // rcx
  ULONG v16[3]; // [rsp+44h] [rbp-F4h] BYREF
  LARGE_INTEGER v17; // [rsp+50h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-E0h] BYREF
  _BYTE P[128]; // [rsp+70h] [rbp-C8h] BYREF

  v7 = Count;
  v10 = Timeout;
  memset(P, 0, sizeof(P));
  v17.QuadPart = 0LL;
  v16[0] = 0;
  if ( (unsigned int)(v7 - 1) > 0x7FFFFFE )
    return -1073741811;
  *(_QWORD *)&v16[1] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(IoCompletionInformation, 32 * v7, 8u);
    v15 = (__int64)NumEntriesRemoved;
    if ( (unsigned __int64)NumEntriesRemoved >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    if ( Timeout )
    {
      *(_QWORD *)&v16[1] = &v17;
      if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
        v10 = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
      v17 = *v10;
    }
    v10 = *(PLARGE_INTEGER *)&v16[1];
  }
  else if ( !Timeout )
  {
    v10 = *(PLARGE_INTEGER *)&v16[1];
  }
  if ( (unsigned int)v7 > 0x10 )
  {
    Pool2 = (PLIST_ENTRY *)ExAllocatePool2(64LL, 8 * v7, 1866690377LL);
    if ( Pool2 )
      goto LABEL_7;
    LODWORD(v7) = 16;
  }
  Pool2 = (PLIST_ENTRY *)P;
LABEL_7:
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v13 = IoRemoveIoCompletion(
            (struct _KQUEUE *)Object,
            (__int64)IoCompletionInformation,
            Pool2,
            v7,
            v16,
            PreviousMode,
            v10,
            Alertable);
    ObfDereferenceObject(Object);
  }
  if ( Pool2 != (PLIST_ENTRY *)P )
    ExFreePoolWithTag(Pool2, 0);
  if ( v13 >= 0 )
    *NumEntriesRemoved = v16[0];
  return v13;
}
