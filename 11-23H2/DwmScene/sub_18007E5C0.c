/*
 * XREFs of sub_18007E5C0 @ 0x18007E5C0
 * Callers:
 *     sub_18007C6AC @ 0x18007C6AC (sub_18007C6AC.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180024E60 @ 0x180024E60 (sub_180024E60.c)
 */

__int64 __fastcall sub_18007E5C0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax

  v4 = sub_180024E60(a2);
  result = sub_18001090C(v4);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + (a2 << 6);
  return result;
}
