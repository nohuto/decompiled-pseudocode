/*
 * XREFs of sub_180090D00 @ 0x180090D00
 * Callers:
 *     sub_180058180 @ 0x180058180 (sub_180058180.c)
 *     sub_180069D0C @ 0x180069D0C (sub_180069D0C.c)
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

__int64 *__fastcall sub_180090D00(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rcx
  size_t v3; // r8
  __int64 *result; // rax

  v2 = (__int64 *)(a1 + 16);
  if ( v2 != a2 )
  {
    v3 = a2[2];
    if ( (unsigned __int64)a2[3] >= 0x10 )
      a2 = (__int64 *)*a2;
    return sub_180012190(v2, a2, v3);
  }
  return result;
}
