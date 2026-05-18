/*
 * XREFs of sub_18005E428 @ 0x18005E428
 * Callers:
 *     sub_1800E8560 @ 0x1800E8560 (sub_1800E8560.c)
 *     sub_1800EA210 @ 0x1800EA210 (sub_1800EA210.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005E428(__int64 a1)
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
      return *(unsigned int *)(v3 + 12);
  }
  return result;
}
