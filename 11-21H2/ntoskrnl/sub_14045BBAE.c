/*
 * XREFs of sub_14045BBAE @ 0x14045BBAE
 * Callers:
 *     sub_140332110 @ 0x140332110 (sub_140332110.c)
 *     sub_1403731C0 @ 0x1403731C0 (sub_1403731C0.c)
 *     sub_1403C48E0 @ 0x1403C48E0 (sub_1403C48E0.c)
 *     sub_14045BDA0 @ 0x14045BDA0 (sub_14045BDA0.c)
 *     sub_140596EA0 @ 0x140596EA0 (sub_140596EA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14045BBAE(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *a1;
  if ( (_DWORD)v2 == a1[1] )
    return 1LL;
  *(_QWORD *)&a1[2 * v2 + 2] = a2 & 0xFFFFFFFFFFFFF000uLL;
  result = 0LL;
  ++*a1;
  return result;
}
