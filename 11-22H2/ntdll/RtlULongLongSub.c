/*
 * XREFs of RtlULongLongSub @ 0x18000723C
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x180006034 (LdrpResSearchResourceInsideDirectory.c)
 *     RtlCalculateUserShadowStackSizes @ 0x1800EC1C0 (RtlCalculateUserShadowStackSizes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongSub(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v3; // r9

  if ( a1 < a2 )
    v3 = -1LL;
  else
    v3 = a1 - a2;
  *a3 = v3;
  return a1 < a2 ? 0xC0000095 : 0;
}
