/*
 * XREFs of sub_140950B80 @ 0x140950B80
 * Callers:
 *     sub_14074C8DC @ 0x14074C8DC (sub_14074C8DC.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 *     sub_14078C4EC @ 0x14078C4EC (sub_14078C4EC.c)
 */

__int64 __fastcall sub_140950B80(const void **a1)
{
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdi

  if ( stru_140C46280.Header.SignalState )
    return 3221225865LL;
  v3 = *(unsigned __int16 *)a1 + 82;
  v4 = sub_14078C4EC((unsigned int)*(unsigned __int16 *)a1 + 194);
  v5 = v4;
  if ( !v4 )
    return 3221225626LL;
  *(_DWORD *)(v4 + 128) = 8;
  *(_DWORD *)(v4 + 148) = v3;
  *(_OWORD *)(v4 + 112) = xmmword_14003B000;
  memmove((void *)(v4 + 160), a1[1], *(unsigned __int16 *)a1);
  *(_WORD *)(v5 + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 160) = 0;
  *(_WORD *)(v5 + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 162) = 0;
  return sub_14078C398(v5);
}
