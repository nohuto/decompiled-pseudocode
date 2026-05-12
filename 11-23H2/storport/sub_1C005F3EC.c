/*
 * XREFs of sub_1C005F3EC @ 0x1C005F3EC
 * Callers:
 *     sub_1C0060C18 @ 0x1C0060C18 (sub_1C0060C18.c)
 * Callees:
 *     sub_1C0037EE0 @ 0x1C0037EE0 (sub_1C0037EE0.c)
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 *     sub_1C005CBE4 @ 0x1C005CBE4 (sub_1C005CBE4.c)
 *     sub_1C005CD80 @ 0x1C005CD80 (sub_1C005CD80.c)
 *     sub_1C006265C @ 0x1C006265C (sub_1C006265C.c)
 *     sub_1C00711A4 @ 0x1C00711A4 (sub_1C00711A4.c)
 */

__int64 __fastcall sub_1C005F3EC(__int64 a1)
{
  int v2; // ebx

  if ( (*(_BYTE *)(a1 + 450) & 2) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 96);
    if ( (byte_1C0093A04 & 4) != 0 )
      sub_1C005CD80(
        *(_QWORD *)(a1 + 24) + 5000LL,
        &stru_1C0089600,
        a1 + 169,
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
        5);
    *(_BYTE *)(a1 + 450) |= 2u;
    sub_1C00711A4(a1, 0LL);
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EF0C((__int64)off_1C0093070->AttachedDevice, 0x31u, (__int64)&unk_1C0083530, a1);
    }
    if ( (((__int64)*(unsigned int *)(a1 + 744) >> 1) & 0x7FFFFFFF) != 0 && !(unsigned __int8)sub_1C006265C(a1) )
    {
      if ( (byte_1C0093A04 & 2) != 0 )
        sub_1C005CBE4(
          a1 + 169,
          a1 + 160,
          a1 + 2024,
          *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4656LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_QWORD *)(a1 + 24) + 5000LL,
          *(_BYTE *)(a1 + 96),
          a1 + 2024,
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          *(_BYTE *)(a1 + 450) & 1,
          2);
      sub_1C0037EE0(*(_QWORD *)(a1 + 24), v2);
    }
  }
  return 0LL;
}
