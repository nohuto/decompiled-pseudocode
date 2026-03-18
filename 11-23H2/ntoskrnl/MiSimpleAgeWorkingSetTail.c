/*
 * XREFs of MiSimpleAgeWorkingSetTail @ 0x14046C210
 * Callers:
 *     MiSimpleAgePte @ 0x140635090 (MiSimpleAgePte.c)
 * Callees:
 *     MiFlushTbList @ 0x140279880 (MiFlushTbList.c)
 *     MiProcessVmAccessedInfo @ 0x14046BFBE (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x14046C08C (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiSimpleAgeWorkingSetTail(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // r9
  _DWORD *v4; // rdx

  for ( i = *(_QWORD *)(a1 + 168);
        ;
        MiProcessVmAccessedInfo(
          a1,
          *(_DWORD **)(i + 248),
          (__int64 (__fastcall *)(__int64, _QWORD *, unsigned __int64, unsigned __int64, __int64))MiSimpleAgeWorkingSetEPTCallback,
          i) )
  {
    MiFlushTbList(*(int **)(i + 56));
    v4 = *(_DWORD **)(i + 248);
    if ( !v4 || !*v4 || !(unsigned int)MiQueryEPTAccessedState(a1, (__int64)v4, 1LL, v3) )
      break;
  }
  return 0LL;
}
