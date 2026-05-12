/*
 * XREFs of sub_1C00627D8 @ 0x1C00627D8
 * Callers:
 *     sub_1C000F3C0 @ 0x1C000F3C0 (sub_1C000F3C0.c)
 * Callees:
 *     sub_1C0037EE0 @ 0x1C0037EE0 (sub_1C0037EE0.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EEB0 @ 0x1C003EEB0 (sub_1C003EEB0.c)
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 *     sub_1C005CBE4 @ 0x1C005CBE4 (sub_1C005CBE4.c)
 *     sub_1C005CD80 @ 0x1C005CD80 (sub_1C005CD80.c)
 *     sub_1C006265C @ 0x1C006265C (sub_1C006265C.c)
 *     sub_1C00639D8 @ 0x1C00639D8 (sub_1C00639D8.c)
 *     sub_1C00711A4 @ 0x1C00711A4 (sub_1C00711A4.c)
 */

char __fastcall sub_1C00627D8(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rax
  char result; // al

  v1 = *(_DWORD *)(a1 + 96);
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 )
  {
    if ( (HIDWORD(off_1C0093070->Timer) & 8) != 0 && BYTE1(off_1C0093070->Timer) >= 3u )
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x3Du, (__int64)&unk_1C0083530);
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 8) != 0
      && BYTE1(off_1C0093070->Timer) >= 3u )
    {
      sub_1C003EEB0(
        (__int64)off_1C0093070->AttachedDevice,
        0x3Eu,
        (__int64)&unk_1C0083530,
        (unsigned __int8)v1,
        BYTE1(v1),
        BYTE2(v1));
    }
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 && (*(_BYTE *)(v3 + 108) & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 2104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 5232LL));
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2184));
  if ( *(_DWORD *)(a1 + 1324) )
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
        3);
    return sub_1C0037EE0(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
  }
  if ( (unsigned __int8)sub_1C00639D8(a1) )
  {
    sub_1C00711A4(a1, 0LL);
    *(_BYTE *)(a1 + 450) |= 2u;
    if ( (byte_1C0093A04 & 4) != 0 )
      sub_1C005CD80(
        a1 + 169,
        &stru_1C0089600,
        a1 + 2024,
        *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4656LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5000LL,
        v1,
        SBYTE1(v1),
        SBYTE2(v1),
        a1 + 2024,
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        2);
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 8) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EF0C((__int64)off_1C0093070->AttachedDevice, 0x3Fu, (__int64)&unk_1C0083530, a1);
    }
  }
  result = sub_1C006265C(a1);
  if ( !result )
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
    return sub_1C0037EE0(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
  }
  return result;
}
