/*
 * XREFs of sub_1409509D8 @ 0x1409509D8
 * Callers:
 *     sub_140947450 @ 0x140947450 (sub_140947450.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 *     sub_14078C4EC @ 0x14078C4EC (sub_14078C4EC.c)
 */

__int64 __fastcall sub_1409509D8(_QWORD *Object)
{
  __int64 v3; // rdi
  int v4; // ebp
  __int64 v5; // rbx
  const void *v6; // rdx

  if ( stru_140C46280.Header.SignalState )
    return 3221225865LL;
  if ( Object )
    v3 = *(_QWORD *)(Object[39] + 40LL);
  else
    v3 = 0LL;
  v4 = *(unsigned __int16 *)(v3 + 40) + 82;
  v5 = sub_14078C4EC((unsigned int)*(unsigned __int16 *)(v3 + 40) + 194);
  if ( !v5 )
    return 3221225626LL;
  ObfReferenceObjectWithTag(Object, 0x56706E50u);
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 48) = 0LL;
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_DWORD *)(v5 + 128) = 1;
  *(_QWORD *)(v5 + 136) = 0LL;
  *(_OWORD *)(v5 + 112) = xmmword_14003B040;
  *(_DWORD *)(v5 + 144) = 0;
  *(_DWORD *)(v5 + 148) = v4;
  *(_QWORD *)(v5 + 152) = Object;
  v6 = *(const void **)(v3 + 48);
  if ( v6 )
    memmove((void *)(v5 + 160), v6, *(unsigned __int16 *)(v3 + 40));
  *(_WORD *)(v5 + 2 * ((unsigned __int64)*(unsigned __int16 *)(v3 + 40) >> 1) + 160) = 0;
  return sub_14078C398(v5);
}
