/*
 * XREFs of sub_18005E25C @ 0x18005E25C
 * Callers:
 *     sub_18007A1F8 @ 0x18007A1F8 (sub_18007A1F8.c)
 *     sub_1800E502C @ 0x1800E502C (sub_1800E502C.c)
 *     sub_1800E5DE4 @ 0x1800E5DE4 (sub_1800E5DE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005E25C(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return *(unsigned int *)(v3 + 20);
  }
  return result;
}
