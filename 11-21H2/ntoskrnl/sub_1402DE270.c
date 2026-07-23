/*
 * XREFs of sub_1402DE270 @ 0x1402DE270
 * Callers:
 *     sub_1402DE254 @ 0x1402DE254 (sub_1402DE254.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 *     sub_14078C4EC @ 0x14078C4EC (sub_14078C4EC.c)
 */

__int64 __fastcall sub_1402DE270(unsigned __int16 *a1)
{
  int v2; // esi
  __int64 v3; // rax
  __int64 v4; // rbx
  const void *v5; // rdx

  if ( stru_140C46280.Header.SignalState )
    return 3221225865LL;
  v2 = *a1 + 82;
  v3 = sub_14078C4EC((unsigned int)*a1 + 194);
  v4 = v3;
  if ( !v3 )
    return 3221225626LL;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_DWORD *)(v3 + 128) = 11;
  *(_QWORD *)(v3 + 136) = 0LL;
  *(_OWORD *)(v3 + 112) = xmmword_1400109B0;
  *(_DWORD *)(v3 + 144) = 0;
  *(_DWORD *)(v3 + 148) = v2;
  *(_QWORD *)(v3 + 152) = 0LL;
  v5 = (const void *)*((_QWORD *)a1 + 1);
  if ( v5 )
    memmove((void *)(v3 + 160), v5, *a1);
  *(_WORD *)(v4 + 2 * ((unsigned __int64)*a1 >> 1) + 160) = 0;
  return sub_14078C398(v4);
}
