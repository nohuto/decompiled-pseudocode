/*
 * XREFs of sub_140356AF0 @ 0x140356AF0
 * Callers:
 *     sub_140356454 @ 0x140356454 (sub_140356454.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_140356AF0(__int64 a1, __int64 a2, signed int a3)
{
  int *v3; // rax

  if ( (unsigned int)a3 <= 5 && byte_140002ED0[136 * a3] == 1 )
    v3 = *(int **)(a1 + 8LL * a3 + 72);
  else
    v3 = *(int **)(a2 + 8LL * a3 + 56);
  if ( (*v3 & 4) == 0 )
    sub_1405CAE6C(0x667uLL, (ULONG_PTR)v3, a3, *v3);
  *v3 &= ~4u;
  return sub_14042A5E0(a1, a2);
}
