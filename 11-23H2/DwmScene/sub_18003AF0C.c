/*
 * XREFs of sub_18003AF0C @ 0x18003AF0C
 * Callers:
 *     sub_18003ADB0 @ 0x18003ADB0 (sub_18003ADB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003AF0C(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r8

  v2 = *a1;
  *a1 = *a2;
  *a2 = v2;
  result = a2[1];
  v4 = a1[1];
  a1[1] = result;
  a2[1] = v4;
  return result;
}
