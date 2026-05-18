/*
 * XREFs of sub_1800DFA94 @ 0x1800DFA94
 * Callers:
 *     sub_1800DE810 @ 0x1800DE810 (sub_1800DE810.c)
 * Callees:
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180058B2C @ 0x180058B2C (sub_180058B2C.c)
 *     sub_1800DFC64 @ 0x1800DFC64 (sub_1800DFC64.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DFA94(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  _QWORD **v5; // rdi
  _QWORD *i; // rbx

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    if ( v4 > 0x7FFFFFFFFFFFFFFLL )
      sub_180011B80();
    sub_1800DFC64(a2);
  }
  v5 = *(_QWORD ***)(a1 + 72);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(a2 + 16) )
    {
      sub_180058B2C((char **)a2, *(char **)(a2 + 8), (__int64)(i + 2));
    }
    else
    {
      sub_180012440(*(_QWORD **)(a2 + 8), (__int64)(i + 2));
      *(_QWORD *)(a2 + 8) += 32LL;
    }
  }
  return a2;
}
