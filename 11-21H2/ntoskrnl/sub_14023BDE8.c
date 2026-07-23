/*
 * XREFs of sub_14023BDE8 @ 0x14023BDE8
 * Callers:
 *     sub_1402F9680 @ 0x1402F9680 (sub_1402F9680.c)
 *     sub_1402FB0E0 @ 0x1402FB0E0 (sub_1402FB0E0.c)
 *     sub_140384600 @ 0x140384600 (sub_140384600.c)
 *     sub_14038473C @ 0x14038473C (sub_14038473C.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 */

bool __fastcall sub_14023BDE8(__int64 a1)
{
  __int64 v2; // rdi

  v2 = qword_140C5AE78;
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == *(_BYTE *)qword_140C5AE78
      && RtlCompareMemory((const void *)(a1 + 2), (const void *)(qword_140C5AE78 + 2), 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v2 + 8);
}
