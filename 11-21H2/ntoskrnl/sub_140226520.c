/*
 * XREFs of sub_140226520 @ 0x140226520
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140226520(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *((int *)KeGetCurrentPrcb() + 22) > 0 && (*((_BYTE *)KeGetCurrentPrcb() + 88) & 1) == 0 && off_140C02520[9] )
    sub_14042A5E0(a1, a2, a3);
  return 0LL;
}
