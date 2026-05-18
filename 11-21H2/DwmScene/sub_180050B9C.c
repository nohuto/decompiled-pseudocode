/*
 * XREFs of sub_180050B9C @ 0x180050B9C
 * Callers:
 *     sub_180050C00 @ 0x180050C00 (sub_180050C00.c)
 *     sub_180050D2C @ 0x180050D2C (sub_180050D2C.c)
 *     sub_180050E54 @ 0x180050E54 (sub_180050E54.c)
 *     sub_180050F64 @ 0x180050F64 (sub_180050F64.c)
 *     sub_1800512C8 @ 0x1800512C8 (sub_1800512C8.c)
 *     sub_180051338 @ 0x180051338 (sub_180051338.c)
 *     sub_1800535FC @ 0x1800535FC (sub_1800535FC.c)
 *     sub_180053850 @ 0x180053850 (sub_180053850.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_180050B9C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 56;
    do
    {
      sub_180010910(v3 + 16);
      sub_180010910(v3);
      sub_180010910(v3 - 16);
      sub_180010910(v3 - 32);
      sub_180010910(v3 - 56);
      v3 += 88LL;
      result = v3 - 56;
    }
    while ( v3 - 56 != a2 );
  }
  return result;
}
