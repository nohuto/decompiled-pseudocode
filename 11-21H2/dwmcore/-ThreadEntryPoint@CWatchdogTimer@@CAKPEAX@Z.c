/*
 * XREFs of ?ThreadEntryPoint@CWatchdogTimer@@CAKPEAX@Z @ 0x1800F8AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWatchdogTimer::ThreadEntryPoint(PVOID Parameter)
{
  while ( !*((_BYTE *)Parameter + 25) )
  {
    if ( !WaitForSingleObject(*((HANDLE *)Parameter + 2), 0xFFFFFFFF) )
    {
      if ( *((_BYTE *)Parameter + 25) )
        return 0LL;
      if ( *((_BYTE *)Parameter + 24) )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Parameter + 8LL))(Parameter);
    }
  }
  return 0LL;
}
