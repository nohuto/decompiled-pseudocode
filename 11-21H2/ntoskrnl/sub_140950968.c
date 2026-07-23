/*
 * XREFs of sub_140950968 @ 0x140950968
 * Callers:
 *     sub_1406797C8 @ 0x1406797C8 (sub_1406797C8.c)
 * Callees:
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 *     sub_14078C4EC @ 0x14078C4EC (sub_14078C4EC.c)
 */

__int64 __fastcall sub_140950968(_OWORD *a1)
{
  __int64 v3; // rax

  if ( stru_140C46280.Header.SignalState )
    return 3221225865LL;
  v3 = sub_14078C4EC(0xC0u);
  if ( !v3 )
    return 3221225626LL;
  *(_DWORD *)(v3 + 128) = 7;
  *(_DWORD *)(v3 + 148) = 80;
  *(_OWORD *)(v3 + 112) = xmmword_14003AFF0;
  *(_OWORD *)(v3 + 160) = *a1;
  return sub_14078C398(v3);
}
