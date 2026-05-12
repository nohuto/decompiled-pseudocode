/*
 * XREFs of sub_1C005E0A0 @ 0x1C005E0A0
 * Callers:
 *     sub_1C0060C18 @ 0x1C0060C18 (sub_1C0060C18.c)
 * Callees:
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 *     sub_1C005CD80 @ 0x1C005CD80 (sub_1C005CD80.c)
 *     sub_1C0071034 @ 0x1C0071034 (sub_1C0071034.c)
 */

__int64 __fastcall sub_1C005E0A0(__int64 a1)
{
  unsigned int v2; // eax

  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
  {
    if ( (byte_1C0093A04 & 8) != 0 )
    {
      v2 = *(_DWORD *)(a1 + 96);
      sub_1C005CD80(
        v2 >> 8,
        &stru_1C0089430,
        a1 + 186,
        *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4656LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5000LL,
        v2,
        SBYTE1(v2),
        SBYTE2(v2),
        a1 + 2024,
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        4);
    }
    sub_1C0071034(a1);
    *(_BYTE *)(a1 + 450) &= ~2u;
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EF0C((__int64)off_1C0093070->AttachedDevice, 0x30u, (__int64)&unk_1C0083530, a1);
    }
  }
  return 0LL;
}
