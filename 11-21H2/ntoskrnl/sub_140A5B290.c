/*
 * XREFs of sub_140A5B290 @ 0x140A5B290
 * Callers:
 *     <none>
 * Callees:
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 *     sub_140A5B2F8 @ 0x140A5B2F8 (sub_140A5B2F8.c)
 *     sub_140AF9508 @ 0x140AF9508 (sub_140AF9508.c)
 */

__int64 sub_140A5B290()
{
  int v0; // edx
  __int64 v1; // r8

  if ( (unsigned int)sub_14036FA84() != 1 )
    return 0LL;
  if ( v0 == 19 )
    goto LABEL_7;
  if ( v0 != 12 )
  {
    if ( v0 != 17 )
      return 0LL;
    off_140C01D18[0] = (__int64 (__fastcall *)())sub_140524C10;
    off_140C01D20[0] = (__int64 (__fastcall *)())sub_140524E90;
LABEL_7:
    sub_140A5B2F8();
    return 0LL;
  }
  if ( v1 )
  {
    sub_140AF9508(v1);
    return 0LL;
  }
  return 3221225473LL;
}
