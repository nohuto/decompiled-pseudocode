/*
 * XREFs of CarLoggingExit @ 0x1406030C8
 * Callers:
 *     CarCleanup @ 0x140603390 (CarCleanup.c)
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x140603264 (McGenEventUnregister_EtwUnregister.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 CarLoggingExit()
{
  __int64 result; // rax
  REGHANDLE v1; // rcx

  result = (unsigned int)CarLogInitialized;
  if ( CarLogInitialized )
  {
    v1 = qword_140C090E0;
    qword_140C090E0 = 0LL;
    dword_140C090C0 = 0;
    EtwUnregister(v1);
    if ( CarEtwEventBook )
    {
      ExFreePoolWithTag(CarEtwEventBook, 0);
      CarEtwEventBook = 0LL;
    }
    _InterlockedExchange(&CarLogInitialized, 0);
    return McGenEventUnregister_EtwUnregister();
  }
  return result;
}
