/*
 * XREFs of sub_140A5B590 @ 0x140A5B590
 * Callers:
 *     <none>
 * Callees:
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 *     sub_140B27788 @ 0x140B27788 (sub_140B27788.c)
 */

__int64 sub_140A5B590()
{
  int v0; // edx
  __int64 v1; // r8

  if ( (unsigned int)sub_14036FA84() == 1 )
  {
    if ( v0 == 7 )
    {
      sub_140B27788(v1);
    }
    else if ( v0 == 17 )
    {
      off_140C01CC8[0] = (__int64 (__fastcall *)())sub_14090A6D0;
      off_140C01CD0[0] = sub_140A628D0;
      off_140C01CD8[0] = sub_140A62700;
      off_140C01CE0[0] = (__int64 (__fastcall *)())sub_14090A880;
      off_140C01D28[0] = sub_140524190;
      off_140C01D38[0] = sub_140A621A0;
      off_140C01D40[0] = sub_140A62970;
      off_140C01D30[0] = sub_140524390;
    }
  }
  return 0LL;
}
