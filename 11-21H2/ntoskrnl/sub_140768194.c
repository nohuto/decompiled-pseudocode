/*
 * XREFs of sub_140768194 @ 0x140768194
 * Callers:
 *     sub_1406EA5EC @ 0x1406EA5EC (sub_1406EA5EC.c)
 *     sub_140768798 @ 0x140768798 (sub_140768798.c)
 * Callees:
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 *     sub_14078C4EC @ 0x14078C4EC (sub_14078C4EC.c)
 */

__int64 __fastcall sub_140768194(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  v4 = sub_14078C4EC(192LL);
  if ( !v4 )
    return 3221225626LL;
  *(_QWORD *)(v4 + 24) = a1;
  *(_DWORD *)(v4 + 128) = 1;
  *(_QWORD *)(v4 + 136) = a2;
  *(_OWORD *)(v4 + 112) = xmmword_1400108D0;
  *(_DWORD *)(v4 + 148) = 80;
  return sub_14078C398(v4);
}
