/*
 * XREFs of sub_1408618D8 @ 0x1408618D8
 * Callers:
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 */

__int64 sub_1408618D8()
{
  __int64 result; // rax

  sub_1402D6B0C((__int64)&unk_140D00AF8, 0x1188553u, 0, 0, (__int64)&qword_14000EFB0, 1);
  dword_140D068EC |= 0x800u;
  sub_1402D6B0C((__int64)&unk_140D00AF0, 0x1188600u, 0, 0, (__int64)&qword_14000EFB0, 1);
  dword_140D068EC |= 0x1000u;
  result = sub_1402D6B0C((__int64)&unk_140D00AE8, 0x126E6F7u, 0, 0, (__int64)&qword_14000EFB0, 1);
  dword_140D068EC |= 0x4000u;
  return result;
}
