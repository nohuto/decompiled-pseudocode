/*
 * XREFs of MiSimpleAgeWorkingSetTail @ 0x14045BD30
 * Callers:
 *     MiSimpleAgePte @ 0x140596EA0 (MiSimpleAgePte.c)
 * Callees:
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiProcessVmAccessedInfo @ 0x14045BBD4 (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x14045BCA2 (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiSimpleAgeWorkingSetTail(__int64 a1)
{
  __int64 i; // rbx
  _DWORD *v3; // rdx

  for ( i = *(_QWORD *)(a1 + 168);
        ;
        MiProcessVmAccessedInfo(
          a1,
          *(_DWORD **)(i + 248),
          (__int64 (__fastcall *)(__int64, _QWORD *, unsigned __int64, unsigned __int64, __int64))MiSimpleAgeWorkingSetEPTCallback,
          i) )
  {
    MiFlushTbList(*(_QWORD *)(i + 56));
    v3 = *(_DWORD **)(i + 248);
    if ( !v3 || !*v3 || !(unsigned int)MiQueryEPTAccessedState(a1, v3) )
      break;
  }
  return 0LL;
}
