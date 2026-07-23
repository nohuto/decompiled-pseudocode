/*
 * XREFs of sub_140B29BDC @ 0x140B29BDC
 * Callers:
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 */

__int64 sub_140B29BDC()
{
  __int64 result; // rax

  sub_1402D6B0C((__int64)&unk_140D00B38, 0xD245DCu, 0, 0, (__int64)&qword_14000EFB0, 1);
  dword_140D068EC |= 2u;
  sub_1402D6B0C((__int64)&unk_140D00B30, 0xCE8A33u, 0, 0, (__int64)&qword_14000EFB0, 1);
  dword_140D068EC |= 4u;
  sub_1402D6B0C((__int64)&unk_140D00B28, 0xDE148Cu, 0, 0, (__int64)&qword_14000EFB0, 1);
  dword_140D068EC |= 0x10u;
  sub_1402D6B0C((__int64)&unk_140D00B08, 0xFDEFC5u, 0, 0, (__int64)&qword_14000EFB0, 1);
  dword_140D068EC |= 0x200u;
  sub_1402D6B0C((__int64)&unk_140D00B20, 0xDF826Fu, 0, 0, (__int64)&qword_14000EFB0, 1);
  dword_140D068EC |= 0x40u;
  sub_1402D6B0C((__int64)&unk_140D00B18, 0xDEF75Cu, 0, 0, (__int64)&qword_14000EFB0, 1);
  dword_140D05190 = 1;
  sub_1402D6B0C((__int64)&unk_140D00B10, 0xE4A238u, 0, 0, (__int64)&qword_14000EFB0, 1);
  dword_140D068EC |= 0x80u;
  result = sub_1402D6B0C((__int64)&unk_140D00B00, 0xFDEFDFu, 0, 0, (__int64)&qword_14000EFB0, 1);
  dword_140D068EC |= 0x400u;
  if ( dword_140D05300 != 1 )
  {
    result = sub_1402D6B0C((__int64)&unk_140D00AE0, 0x122938Eu, 0, 0, (__int64)&qword_14000EFB0, 1);
    dword_140D068EC |= 0x8000u;
  }
  return result;
}
