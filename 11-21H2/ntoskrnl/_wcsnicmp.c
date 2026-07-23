/*
 * XREFs of _wcsnicmp @ 0x1403E15D0
 * Callers:
 *     sub_140561B8C @ 0x140561B8C (sub_140561B8C.c)
 *     sub_1405DBA8C @ 0x1405DBA8C (sub_1405DBA8C.c)
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 *     sub_1406769E0 @ 0x1406769E0 (sub_1406769E0.c)
 *     sub_1406773CC @ 0x1406773CC (sub_1406773CC.c)
 *     sub_1406774E8 @ 0x1406774E8 (sub_1406774E8.c)
 *     sub_1406775C8 @ 0x1406775C8 (sub_1406775C8.c)
 *     sub_140677764 @ 0x140677764 (sub_140677764.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14068BB80 (IoVolumeDeviceNameToGuidPath.c)
 *     sub_1406C1A74 @ 0x1406C1A74 (sub_1406C1A74.c)
 *     sub_1406C46B4 @ 0x1406C46B4 (sub_1406C46B4.c)
 *     sub_1406C6268 @ 0x1406C6268 (sub_1406C6268.c)
 *     sub_1406DCB10 @ 0x1406DCB10 (sub_1406DCB10.c)
 *     sub_1406EA354 @ 0x1406EA354 (sub_1406EA354.c)
 *     sub_1406F0FCC @ 0x1406F0FCC (sub_1406F0FCC.c)
 *     sub_140761234 @ 0x140761234 (sub_140761234.c)
 *     sub_140767130 @ 0x140767130 (sub_140767130.c)
 *     sub_140772B6C @ 0x140772B6C (sub_140772B6C.c)
 *     sub_14077EAF0 @ 0x14077EAF0 (sub_14077EAF0.c)
 *     sub_140783DB8 @ 0x140783DB8 (sub_140783DB8.c)
 *     sub_140802FBC @ 0x140802FBC (sub_140802FBC.c)
 *     sub_14080397C @ 0x14080397C (sub_14080397C.c)
 *     sub_140811F10 @ 0x140811F10 (sub_140811F10.c)
 *     sub_140813744 @ 0x140813744 (sub_140813744.c)
 *     sub_14091FEFC @ 0x14091FEFC (sub_14091FEFC.c)
 *     sub_140933EEC @ 0x140933EEC (sub_140933EEC.c)
 *     sub_1409379A8 @ 0x1409379A8 (sub_1409379A8.c)
 *     sub_140953700 @ 0x140953700 (sub_140953700.c)
 *     sub_14095C264 @ 0x14095C264 (sub_14095C264.c)
 *     sub_1409BBF5C @ 0x1409BBF5C (sub_1409BBF5C.c)
 *     sub_1409BC59C @ 0x1409BC59C (sub_1409BC59C.c)
 *     sub_1409D0588 @ 0x1409D0588 (sub_1409D0588.c)
 *     sub_1409D0A60 @ 0x1409D0A60 (sub_1409D0A60.c)
 *     sub_1409D1048 @ 0x1409D1048 (sub_1409D1048.c)
 *     sub_1409D1B40 @ 0x1409D1B40 (sub_1409D1B40.c)
 *     sub_1409D3874 @ 0x1409D3874 (sub_1409D3874.c)
 *     sub_1409F4B98 @ 0x1409F4B98 (sub_1409F4B98.c)
 *     sub_1409F4CD8 @ 0x1409F4CD8 (sub_1409F4CD8.c)
 *     sub_1409F4DA0 @ 0x1409F4DA0 (sub_1409F4DA0.c)
 *     sub_140A12DA0 @ 0x140A12DA0 (sub_140A12DA0.c)
 *     sub_140A13308 @ 0x140A13308 (sub_140A13308.c)
 *     sub_140A1582C @ 0x140A1582C (sub_140A1582C.c)
 *     sub_140A172D4 @ 0x140A172D4 (sub_140A172D4.c)
 *     sub_140A17E60 @ 0x140A17E60 (sub_140A17E60.c)
 *     sub_140A18114 @ 0x140A18114 (sub_140A18114.c)
 *     sub_140A1DB40 @ 0x140A1DB40 (sub_140A1DB40.c)
 *     sub_140A22404 @ 0x140A22404 (sub_140A22404.c)
 *     sub_140B4DE2C @ 0x140B4DE2C (sub_140B4DE2C.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  int v3; // r9d
  size_t v4; // rbx
  const wchar_t *v5; // r11
  signed __int64 v6; // r10
  __int16 v7; // cx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r8

  v3 = 0;
  v4 = MaxCount;
  v5 = Str2;
  if ( MaxCount )
  {
    v6 = (char *)Str1 - (char *)Str2;
    do
    {
      v7 = *(const wchar_t *)((char *)v5 + v6);
      v8 = v7 + 32;
      if ( (unsigned __int16)(v7 - 65) > 0x19u )
        v8 = *(const wchar_t *)((char *)v5 + v6);
      v9 = *v5++;
      v10 = v9 + 32;
      if ( (unsigned __int16)(v9 - 65) > 0x19u )
        v10 = v9;
      --v4;
    }
    while ( v4 && v8 && v8 == v10 );
    return v8 - v10;
  }
  return v3;
}
