/*
 * XREFs of sub_18003E370 @ 0x18003E370
 * Callers:
 *     sub_180011E04 @ 0x180011E04 (sub_180011E04.c)
 *     sub_180012ED8 @ 0x180012ED8 (sub_180012ED8.c)
 *     sub_180013C74 @ 0x180013C74 (sub_180013C74.c)
 *     sub_180013D44 @ 0x180013D44 (sub_180013D44.c)
 *     sub_18002DB6C @ 0x18002DB6C (sub_18002DB6C.c)
 *     sub_18003B728 @ 0x18003B728 (sub_18003B728.c)
 *     sub_18003B7C4 @ 0x18003B7C4 (sub_18003B7C4.c)
 *     sub_18003C0D0 @ 0x18003C0D0 (sub_18003C0D0.c)
 *     sub_18003C998 @ 0x18003C998 (sub_18003C998.c)
 *     sub_18003D00C @ 0x18003D00C (sub_18003D00C.c)
 *     sub_18003D07C @ 0x18003D07C (sub_18003D07C.c)
 *     sub_18003D19C @ 0x18003D19C (sub_18003D19C.c)
 *     sub_18003D3C8 @ 0x18003D3C8 (sub_18003D3C8.c)
 *     sub_18003D424 @ 0x18003D424 (sub_18003D424.c)
 *     GsDriverEntry @ 0x18003D48C (GsDriverEntry.c)
 *     sub_18003D4D0 @ 0x18003D4D0 (sub_18003D4D0.c)
 *     sub_18003D504 @ 0x18003D504 (sub_18003D504.c)
 *     sub_18003D8B4 @ 0x18003D8B4 (sub_18003D8B4.c)
 *     sub_18003D8E8 @ 0x18003D8E8 (sub_18003D8E8.c)
 *     sub_18003D938 @ 0x18003D938 (sub_18003D938.c)
 *     sub_18003D980 @ 0x18003D980 (sub_18003D980.c)
 *     sub_18003DA14 @ 0x18003DA14 (sub_18003DA14.c)
 *     sub_18003DC28 @ 0x18003DC28 (sub_18003DC28.c)
 *     sub_18003DD48 @ 0x18003DD48 (sub_18003DD48.c)
 *     sub_18003E008 @ 0x18003E008 (sub_18003E008.c)
 *     sub_18003E0C8 @ 0x18003E0C8 (sub_18003E0C8.c)
 *     sub_18003E160 @ 0x18003E160 (sub_18003E160.c)
 *     sub_1800618F8 @ 0x1800618F8 (sub_1800618F8.c)
 *     sub_1800619C8 @ 0x1800619C8 (sub_1800619C8.c)
 *     sub_180061AE8 @ 0x180061AE8 (sub_180061AE8.c)
 *     sub_180061C08 @ 0x180061C08 (sub_180061C08.c)
 *     sub_180061D28 @ 0x180061D28 (sub_180061D28.c)
 *     sub_180071014 @ 0x180071014 (sub_180071014.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 */

char __fastcall sub_18003E370(__int64 a1)
{
  char result; // al
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]

  result = sub_18001265C(a1, &v2);
  if ( v2 )
    result = sub_18002A404(v2 + 16);
  if ( v3 )
    return sub_180010530(v3);
  return result;
}
