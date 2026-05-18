/*
 * XREFs of sub_180044338 @ 0x180044338
 * Callers:
 *     sub_1800444BC @ 0x1800444BC (sub_1800444BC.c)
 *     sub_1800453E0 @ 0x1800453E0 (sub_1800453E0.c)
 *     sub_180045CF0 @ 0x180045CF0 (sub_180045CF0.c)
 *     sub_180046C14 @ 0x180046C14 (sub_180046C14.c)
 *     sub_180047E60 @ 0x180047E60 (sub_180047E60.c)
 *     sub_180048060 @ 0x180048060 (sub_180048060.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180044338(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 i; // r8
  __int64 v3; // rax

  v1 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v3 = *(unsigned __int8 *)(i + a1);
    v1 = 0x100000001B3LL * (v3 ^ v1);
  }
  return v1;
}
