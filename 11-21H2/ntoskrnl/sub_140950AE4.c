/*
 * XREFs of sub_140950AE4 @ 0x140950AE4
 * Callers:
 *     sub_140944C08 @ 0x140944C08 (sub_140944C08.c)
 * Callees:
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 *     sub_14078C4EC @ 0x14078C4EC (sub_14078C4EC.c)
 */

__int64 __fastcall sub_140950AE4(__int128 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v10; // rax
  __int128 v11; // xmm0

  if ( stru_140C46280.Header.SignalState )
    return 3221225865LL;
  v10 = sub_14078C4EC(0xC0u);
  if ( !v10 )
    return 3221225626LL;
  *(_DWORD *)(v10 + 128) = 0;
  *(_QWORD *)(v10 + 24) = a2;
  *(_QWORD *)(v10 + 48) = a4;
  *(_QWORD *)(v10 + 56) = a5;
  v11 = *a1;
  *(_DWORD *)(v10 + 148) = 80;
  *(_QWORD *)(v10 + 136) = a3;
  *(_OWORD *)(v10 + 112) = v11;
  return sub_14078C398(v10);
}
