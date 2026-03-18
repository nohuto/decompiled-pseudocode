/*
 * XREFs of MiUpdateOldWorkingSetPagesTail @ 0x14046C440
 * Callers:
 *     MiUpdateOldPte @ 0x14046C280 (MiUpdateOldPte.c)
 * Callees:
 *     MiFreeWsleList @ 0x140280C20 (MiFreeWsleList.c)
 *     MiProcessVmAccessedInfo @ 0x14046BFBE (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x14046C08C (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiUpdateOldWorkingSetPagesTail(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  _DWORD *v6; // rdx

  for ( i = *(_QWORD *)(a1 + 168);
        ;
        MiProcessVmAccessedInfo(
          a1,
          *(_DWORD **)(i + 208),
          (__int64 (__fastcall *)(__int64, _QWORD *, unsigned __int64, unsigned __int64, __int64))MiUpdateOldPagesEPTCallback,
          i) )
  {
    if ( *(_DWORD *)(i + 36) )
      MiFreeWsleList(*(_QWORD *)(a1 + 24), i + 24, 0);
    v6 = *(_DWORD **)(i + 208);
    if ( !v6 || !*v6 || !(unsigned int)MiQueryEPTAccessedState(a1, (__int64)v6, 0LL, a4) )
      break;
  }
  return 0LL;
}
