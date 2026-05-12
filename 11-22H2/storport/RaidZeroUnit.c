/*
 * XREFs of RaidZeroUnit @ 0x1C0018EF8
 * Callers:
 *     RaidCreateUnit @ 0x1C0018888 (RaidCreateUnit.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaCreateTagList @ 0x1C00A00A4 (RaCreateTagList.c)
 */

__int64 __fastcall RaidZeroUnit(_DWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0xDC0uLL);
  *a1 = 1431193940;
  RaCreateTagList(a1 + 128);
  *((_BYTE *)a1 + 500) = 0;
  *((_QWORD *)a1 + 61) = 1LL;
  a1[24] = RaidNullAddress;
  result = 134684677LL;
  a1[340] = 134684677;
  a1[360] = 134684677;
  a1[380] = 134684677;
  a1[400] = 134684677;
  a1[420] = 134684677;
  *(_QWORD *)(a1 + 123) = 1LL;
  a1[330] = 10;
  return result;
}
