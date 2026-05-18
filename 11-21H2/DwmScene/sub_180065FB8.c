/*
 * XREFs of sub_180065FB8 @ 0x180065FB8
 * Callers:
 *     sub_180063D14 @ 0x180063D14 (sub_180063D14.c)
 * Callees:
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 *     sub_180066028 @ 0x180066028 (sub_180066028.c)
 *     sub_180066258 @ 0x180066258 (sub_180066258.c)
 *     sub_18006642C @ 0x18006642C (sub_18006642C.c)
 *     sub_1800664E8 @ 0x1800664E8 (sub_1800664E8.c)
 */

__int64 __fastcall sub_180065FB8(__int64 a1)
{
  char v2; // si
  char v3; // di
  __int64 result; // rax
  char v5; // r11

  v2 = sub_1800664E8();
  v3 = sub_180066258(a1);
  result = sub_180066028(a1);
  v5 = result;
  if ( v3 || (_BYTE)result )
    result = sub_18006642C(a1);
  if ( v2 || v3 || v5 )
    return sub_180065D00(a1);
  return result;
}
