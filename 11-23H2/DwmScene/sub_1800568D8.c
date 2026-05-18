/*
 * XREFs of sub_1800568D8 @ 0x1800568D8
 * Callers:
 *     sub_1800D11F0 @ 0x1800D11F0 (sub_1800D11F0.c)
 *     sub_1800D2AA0 @ 0x1800D2AA0 (sub_1800D2AA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800568D8(__int64 a1)
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
