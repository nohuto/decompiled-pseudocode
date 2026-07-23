/*
 * XREFs of sub_140950C38 @ 0x140950C38
 * Callers:
 *     sub_140944824 @ 0x140944824 (sub_140944824.c)
 *     sub_14095A67C @ 0x14095A67C (sub_14095A67C.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 *     sub_14078C4EC @ 0x14078C4EC (sub_14078C4EC.c)
 */

__int64 __fastcall sub_140950C38(int a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, const void **a6)
{
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // r15d
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int128 v15; // xmm0

  if ( stru_140C46280.Header.SignalState )
    return 3221225865LL;
  v9 = *(_QWORD *)(a4[39] + 40LL);
  if ( !v9 )
    return 3221225712LL;
  if ( a6 )
    v10 = *(unsigned __int16 *)a6;
  else
    v10 = 0;
  v11 = v10 + *(unsigned __int16 *)(v9 + 40) + 84;
  v12 = sub_14078C4EC(v11 + 112);
  if ( !v12 )
    return 3221225626LL;
  ObfReferenceObjectWithTag(a4, 0x56706E50u);
  *(_DWORD *)(v12 + 160) = a5;
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_DWORD *)(v12 + 148) = v11;
  *(_QWORD *)(v12 + 152) = a4;
  *(_QWORD *)(v12 + 136) = 0LL;
  memmove((void *)(v12 + 164), *(const void **)(v9 + 48), *(unsigned __int16 *)(v9 + 40));
  v13 = (unsigned __int64)*(unsigned __int16 *)(v9 + 40) >> 1;
  *(_WORD *)(v12 + 2 * v13 + 164) = 0;
  if ( a6 )
  {
    v14 = v12 + 2 * v13;
    memmove((void *)(v14 + 166), a6[1], *(unsigned __int16 *)a6);
    *(_WORD *)(v14 + 2 * ((unsigned __int64)*(unsigned __int16 *)a6 >> 1) + 166) = 0;
  }
  if ( a1 == 7 )
  {
    v15 = xmmword_14003B030;
  }
  else if ( a1 == 3 )
  {
    v15 = xmmword_14003B020;
  }
  else
  {
    v15 = xmmword_14003B010;
  }
  *(_DWORD *)(v12 + 128) = 6;
  *(_OWORD *)(v12 + 112) = v15;
  return sub_14078C398(v12);
}
