/*
 * XREFs of NtCreateSemaphore @ 0x1407336E0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeSemaphore @ 0x1402B32C0 (KeInitializeSemaphore.c)
 *     ObCreateObjectEx @ 0x140730870 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  PHANDLE v6; // rdi
  char PreviousMode; // si
  NTSTATUS inserted; // ecx
  __int64 v10; // [rsp+20h] [rbp-58h]
  PRKSEMAPHORE Semaphore; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h] BYREF

  v6 = SemaphoreHandle;
  v12 = 0LL;
  Semaphore = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)SemaphoreHandle >= 0x7FFFFFFF0000LL )
      SemaphoreHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *SemaphoreHandle = *SemaphoreHandle;
  }
  if ( MaximumCount <= 0 || InitialCount < 0 || InitialCount > MaximumCount )
    return -1073741811;
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExSemaphoreObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v10,
               32,
               0,
               0,
               &Semaphore,
               0LL);
  if ( inserted >= 0 )
  {
    KeInitializeSemaphore(Semaphore, InitialCount, MaximumCount);
    inserted = ObInsertObjectEx(Semaphore, 0LL, 0, 0LL, (__int64)&v12);
    LODWORD(Semaphore) = inserted;
    if ( inserted >= 0 )
      *v6 = (HANDLE)v12;
  }
  return inserted;
}
