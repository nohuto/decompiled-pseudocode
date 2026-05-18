/*
 * XREFs of sub_18001B02C @ 0x18001B02C
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_18008EA40 @ 0x18008EA40 (sub_18008EA40.c)
 * Callees:
 *     sub_18005D2CC @ 0x18005D2CC (sub_18005D2CC.c)
 */

__int64 __fastcall sub_18001B02C(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 != *(_DWORD *)(a1 + 316) )
  {
    *(_DWORD *)(a1 + 316) = a2;
    return sub_18005D2CC(a1, 2LL);
  }
  return result;
}
