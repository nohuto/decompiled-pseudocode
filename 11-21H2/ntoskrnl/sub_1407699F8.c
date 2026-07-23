/*
 * XREFs of sub_1407699F8 @ 0x1407699F8
 * Callers:
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 *     sub_14078C4EC @ 0x14078C4EC (sub_14078C4EC.c)
 */

__int64 __fastcall sub_1407699F8(_OWORD *a1, _OWORD *a2, const void **a3)
{
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rbx

  if ( stru_140C46280.Header.SignalState )
    return 3221225865LL;
  v6 = *(unsigned __int16 *)a3 + 80;
  v7 = sub_14078C4EC((unsigned int)*(unsigned __int16 *)a3 + 192);
  v8 = v7;
  if ( !v7 )
    return 3221225495LL;
  *(_OWORD *)(v7 + 112) = *a1;
  *(_DWORD *)(v7 + 128) = 2;
  *(_DWORD *)(v7 + 148) = v6;
  *(_OWORD *)(v7 + 160) = *a2;
  memmove((void *)(v7 + 176), a3[1], *(unsigned __int16 *)a3);
  *(_WORD *)(v8 + 2 * ((unsigned __int64)*(unsigned __int16 *)a3 >> 1) + 176) = 0;
  return sub_14078C398(v8);
}
