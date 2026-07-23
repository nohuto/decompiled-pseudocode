/*
 * XREFs of MiResetAccessBitsTail @ 0x1403488E0
 * Callers:
 *     MiResetAccessBitPte @ 0x14027BCB0 (MiResetAccessBitPte.c)
 * Callees:
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiProcessVmAccessedInfo @ 0x14046C3BE (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x14046C48C (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiResetAccessBitsTail(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rax
  _DWORD *v4; // rdx

  for ( i = *(_QWORD *)(a1 + 168); ; MiProcessVmAccessedInfo(a1, *(_QWORD *)(i + 16), MiResetAccessBitsEPTCallback, i) )
  {
    v3 = *(_QWORD *)(i + 8);
    if ( v3 )
    {
      MiFlushTbList(*(int **)(i + 8));
      v3 = *(_QWORD *)(i + 8);
    }
    v4 = *(_DWORD **)(i + 16);
    if ( !v4 || !*v4 || !(unsigned int)MiQueryEPTAccessedState(a1, v4, v3 != 0) )
      break;
  }
  return 0LL;
}
