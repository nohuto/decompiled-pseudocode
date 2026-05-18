/*
 * XREFs of sub_1800DA8B4 @ 0x1800DA8B4
 * Callers:
 *     sub_1800D8DC4 @ 0x1800D8DC4 (sub_1800D8DC4.c)
 *     sub_1800D99A0 @ 0x1800D99A0 (sub_1800D99A0.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_1800DA8B4(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    while ( v1 != v3 )
    {
      v4 = v1[1];
      if ( v4 )
        sub_180010530(v4);
      v1 += 2;
    }
    result = sub_1800100E8(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
