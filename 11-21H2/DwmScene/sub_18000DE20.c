/*
 * XREFs of sub_18000DE20 @ 0x18000DE20
 * Callers:
 *     sub_18000CB44 @ 0x18000CB44 (sub_18000CB44.c)
 *     sub_18000CD6C @ 0x18000CD6C (sub_18000CD6C.c)
 * Callees:
 *     sub_18000E82C @ 0x18000E82C (sub_18000E82C.c)
 */

__int64 __fastcall sub_18000DE20(unsigned int *a1, unsigned int a2)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 result; // rax

  *a1 = a2;
  v2 = sub_18000E82C(a2);
  *(_DWORD *)(v3 + 4) = v2;
  result = v3;
  *(_BYTE *)(v3 + 8) = 0;
  return result;
}
