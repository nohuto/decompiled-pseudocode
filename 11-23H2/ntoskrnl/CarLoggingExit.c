/*
 * XREFs of CarLoggingExit @ 0x1405D39E0
 * Callers:
 *     CarCleanup @ 0x1405D3CA8 (CarCleanup.c)
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x1405D3B7C (McGenEventUnregister_EtwUnregister.c)
 *     EtwUnregister @ 0x1407C10D0 (EtwUnregister.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 CarLoggingExit()
{
  __int64 result; // rax
  REGHANDLE v1; // rcx

  result = (unsigned int)CarLogInitialized;
  if ( CarLogInitialized )
  {
    v1 = RegHandle;
    RegHandle = 0LL;
    dword_140C09318 = 0;
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
