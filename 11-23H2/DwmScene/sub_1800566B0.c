/*
 * XREFs of sub_1800566B0 @ 0x1800566B0
 * Callers:
 *     sub_18006F308 @ 0x18006F308 (sub_18006F308.c)
 *     sub_1800CE0A0 @ 0x1800CE0A0 (sub_1800CE0A0.c)
 *     sub_1800CECC0 @ 0x1800CECC0 (sub_1800CECC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800566B0(__int64 a1)
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
