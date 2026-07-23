/*
 * XREFs of sub_140505964 @ 0x140505964
 * Callers:
 *     sub_14051FE4C @ 0x14051FE4C (sub_14051FE4C.c)
 *     sub_1405206E4 @ 0x1405206E4 (sub_1405206E4.c)
 *     sub_14052B218 @ 0x14052B218 (sub_14052B218.c)
 * Callees:
 *     <none>
 */

__int64 sub_140505964()
{
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_InterlockedExchangeAdd((volatile signed __int32 *)CurrentPrcb + 22, 2u) & 1) == 0 )
    return 0LL;
  _InterlockedExchangeAdd((volatile signed __int32 *)CurrentPrcb + 22, 0xFFFFFFFE);
  return 3221225473LL;
}
