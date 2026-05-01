/*
 * XREFs of sub_18000DDC4 @ 0x18000DDC4
 * Callers:
 *     sub_18000C118 @ 0x18000C118 (sub_18000C118.c)
 *     sub_18000C314 @ 0x18000C314 (sub_18000C314.c)
 * Callees:
 *     sub_18000E81C @ 0x18000E81C (sub_18000E81C.c)
 */

__int64 __fastcall sub_18000DDC4(unsigned int *a1, unsigned int a2)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 result; // rax

  *a1 = a2;
  v2 = sub_18000E81C(a2);
  *(_DWORD *)(v3 + 4) = v2;
  result = v3;
  *(_BYTE *)(v3 + 8) = 0;
  return result;
}
