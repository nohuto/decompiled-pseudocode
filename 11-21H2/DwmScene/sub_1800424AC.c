/*
 * XREFs of sub_1800424AC @ 0x1800424AC
 * Callers:
 *     sub_1800457FC @ 0x1800457FC (sub_1800457FC.c)
 *     sub_18006FE60 @ 0x18006FE60 (sub_18006FE60.c)
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

__int64 *__fastcall sub_1800424AC(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rcx
  size_t v3; // r8
  __int64 *result; // rax

  v2 = (__int64 *)(a1 + 400);
  if ( v2 != a2 )
  {
    v3 = a2[2];
    if ( (unsigned __int64)a2[3] >= 0x10 )
      a2 = (__int64 *)*a2;
    return sub_180012190(v2, a2, v3);
  }
  return result;
}
