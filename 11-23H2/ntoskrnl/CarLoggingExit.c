/*
 * XREFs of CarLoggingExit @ 0x1405D3470
 * Callers:
 *     CarCleanup @ 0x1405D3738 (CarCleanup.c)
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x1405D360C (McGenEventUnregister_EtwUnregister.c)
 *     EtwUnregister @ 0x1407C0E00 (EtwUnregister.c)
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
    dword_140C09328 = 0;
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
