/*
 * XREFs of sub_18005E27C @ 0x18005E27C
 * Callers:
 *     sub_18005D638 @ 0x18005D638 (sub_18005D638.c)
 *     sub_1800E8560 @ 0x1800E8560 (sub_1800E8560.c)
 *     sub_1800EA840 @ 0x1800EA840 (sub_1800EA840.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005E27C(__int64 a1)
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
      return *(unsigned int *)(v3 + 8);
  }
  return result;
}
