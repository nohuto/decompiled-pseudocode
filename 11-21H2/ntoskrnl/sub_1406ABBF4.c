/*
 * XREFs of sub_1406ABBF4 @ 0x1406ABBF4
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1406AA510 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406AB670 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     sub_1406AC2DC @ 0x1406AC2DC (sub_1406AC2DC.c)
 *     sub_14092FEAC @ 0x14092FEAC (sub_14092FEAC.c)
 *     sub_14092FF10 @ 0x14092FF10 (sub_14092FF10.c)
 * Callees:
 *     sub_1406ABC90 @ 0x1406ABC90 (sub_1406ABC90.c)
 */

_QWORD *__fastcall sub_1406ABBF4(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  _QWORD *result; // rax
  __int64 v5; // rcx

  v2 = (_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 104) = 0;
  *(_WORD *)(a1 + 72) &= ~2u;
  *(_DWORD *)(a1 + 108) = 0;
  result = *(_QWORD **)(a1 + 48);
  do
  {
    if ( (_QWORD *)result[1] != v2 || (v5 = *result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v2 = v5;
    *(_QWORD *)(v5 + 8) = v2;
    *result = 0LL;
    result = (_QWORD *)sub_1406ABC90((PIRP)(result - 21), 1);
    if ( !a2 )
      break;
    result = (_QWORD *)*v2;
  }
  while ( (_QWORD *)*v2 != v2 );
  return result;
}
