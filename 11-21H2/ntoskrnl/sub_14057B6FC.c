/*
 * XREFs of sub_14057B6FC @ 0x14057B6FC
 * Callers:
 *     sub_14057B504 @ 0x14057B504 (sub_14057B504.c)
 *     sub_14057B8F4 @ 0x14057B8F4 (sub_14057B8F4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14057B6FC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int *a6)
{
  __int16 v6; // bx

  v6 = a1;
  if ( !off_140C020B0 || !(unsigned __int8)sub_14042A5E0(a1, a2) )
    return 3221225473LL;
  *a6 = v6 & 0xFFF;
  return 0LL;
}
