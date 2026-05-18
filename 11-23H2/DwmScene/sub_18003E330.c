/*
 * XREFs of sub_18003E330 @ 0x18003E330
 * Callers:
 *     sub_180011ED4 @ 0x180011ED4 (sub_180011ED4.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_180013E14 @ 0x180013E14 (sub_180013E14.c)
 *     sub_180013E78 @ 0x180013E78 (sub_180013E78.c)
 *     sub_18001636C @ 0x18001636C (sub_18001636C.c)
 *     sub_180024B5C @ 0x180024B5C (sub_180024B5C.c)
 *     sub_18002DE64 @ 0x18002DE64 (sub_18002DE64.c)
 *     sub_18003B6E0 @ 0x18003B6E0 (sub_18003B6E0.c)
 *     sub_18003B9D0 @ 0x18003B9D0 (sub_18003B9D0.c)
 *     sub_18003BFD0 @ 0x18003BFD0 (sub_18003BFD0.c)
 *     sub_18003BFF8 @ 0x18003BFF8 (sub_18003BFF8.c)
 *     sub_18003C094 @ 0x18003C094 (sub_18003C094.c)
 *     sub_18003C1F0 @ 0x18003C1F0 (sub_18003C1F0.c)
 *     sub_18003C2A8 @ 0x18003C2A8 (sub_18003C2A8.c)
 *     sub_18003C334 @ 0x18003C334 (sub_18003C334.c)
 *     sub_18003C3B4 @ 0x18003C3B4 (sub_18003C3B4.c)
 *     sub_18003C4C0 @ 0x18003C4C0 (sub_18003C4C0.c)
 *     sub_18003C588 @ 0x18003C588 (sub_18003C588.c)
 *     sub_18003C72C @ 0x18003C72C (sub_18003C72C.c)
 *     sub_18003C858 @ 0x18003C858 (sub_18003C858.c)
 *     sub_18003C8C8 @ 0x18003C8C8 (sub_18003C8C8.c)
 *     sub_18003D07C @ 0x18003D07C (sub_18003D07C.c)
 *     sub_18003D2E4 @ 0x18003D2E4 (sub_18003D2E4.c)
 *     sub_18003D390 @ 0x18003D390 (sub_18003D390.c)
 *     sub_18003DF4C @ 0x18003DF4C (sub_18003DF4C.c)
 *     sub_18003E008 @ 0x18003E008 (sub_18003E008.c)
 *     sub_18003E0C8 @ 0x18003E0C8 (sub_18003E0C8.c)
 *     sub_18003F104 @ 0x18003F104 (sub_18003F104.c)
 *     sub_18003F1B0 @ 0x18003F1B0 (sub_18003F1B0.c)
 *     sub_180041924 @ 0x180041924 (sub_180041924.c)
 *     sub_180041D50 @ 0x180041D50 (sub_180041D50.c)
 *     sub_180042270 @ 0x180042270 (sub_180042270.c)
 *     sub_180042604 @ 0x180042604 (sub_180042604.c)
 *     sub_180062640 @ 0x180062640 (sub_180062640.c)
 *     sub_1800626A4 @ 0x1800626A4 (sub_1800626A4.c)
 *     sub_180062708 @ 0x180062708 (sub_180062708.c)
 *     sub_18006276C @ 0x18006276C (sub_18006276C.c)
 *     sub_180068E68 @ 0x180068E68 (sub_180068E68.c)
 *     sub_18006BADC @ 0x18006BADC (sub_18006BADC.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_180070EDC @ 0x180070EDC (sub_180070EDC.c)
 *     sub_180071014 @ 0x180071014 (sub_180071014.c)
 *     sub_18008156C @ 0x18008156C (sub_18008156C.c)
 *     sub_180095A60 @ 0x180095A60 (sub_180095A60.c)
 *     sub_180096C00 @ 0x180096C00 (sub_180096C00.c)
 *     sub_1800A4FA0 @ 0x1800A4FA0 (sub_1800A4FA0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_18002A37C @ 0x18002A37C (sub_18002A37C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18003E330(__int64 a1)
{
  char result; // al
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]

  result = sub_18001265C(a1, &v2);
  if ( v2 )
    result = sub_18002A37C(v2 + 16);
  if ( v3 )
    return sub_180010530(v3);
  return result;
}
