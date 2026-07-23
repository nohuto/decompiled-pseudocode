/*
 * XREFs of sub_14045B77E @ 0x14045B77E
 * Callers:
 *     sub_140575CD8 @ 0x140575CD8 (sub_140575CD8.c)
 * Callees:
 *     sub_1403AF4FC @ 0x1403AF4FC (sub_1403AF4FC.c)
 *     sub_14056EFD8 @ 0x14056EFD8 (sub_14056EFD8.c)
 */

_QWORD *__fastcall sub_14045B77E(int a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  __int64 v6; // rsi
  int v7; // eax
  _QWORD *v8; // rbx

  result = (_QWORD *)*(unsigned int *)(a2 + 104);
  if ( ((unsigned __int8)result & 2) != 0 )
  {
    result = 0LL;
    if ( !*(_WORD *)(a2 + 102) )
    {
      v6 = *(_QWORD *)(a2 + 144);
      if ( a1 )
        v7 = sub_14056EFD8(a2);
      else
        v7 = sub_1403AF4FC(a2, *(_DWORD **)(v6 + 8));
      *(_DWORD *)(v6 + 16) = v7;
      v8 = (_QWORD *)(a2 + 8);
      result = *(_QWORD **)(a3 + 8);
      if ( *result != a3 )
        __fastfail(3u);
      *v8 = a3;
      v8[1] = result;
      *result = v8;
      *(_QWORD *)(a3 + 8) = v8;
    }
  }
  return result;
}
