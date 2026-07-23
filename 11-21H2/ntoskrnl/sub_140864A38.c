/*
 * XREFs of sub_140864A38 @ 0x140864A38
 * Callers:
 *     sub_140A47990 @ 0x140A47990 (sub_140A47990.c)
 * Callees:
 *     sub_14025E834 @ 0x14025E834 (sub_14025E834.c)
 */

__int64 __fastcall sub_140864A38(int a1, int *a2)
{
  int v2; // eax
  bool *v3; // r8
  __int64 result; // rax
  int v5; // ecx

  if ( a1 )
  {
    v2 = sub_14025E834();
    *v3 = v2 != 0;
    result = 0LL;
    v5 = 1;
  }
  else
  {
    result = 3221225507LL;
    v5 = 0;
  }
  *a2 = v5;
  return result;
}
