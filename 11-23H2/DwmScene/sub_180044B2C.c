/*
 * XREFs of sub_180044B2C @ 0x180044B2C
 * Callers:
 *     sub_18007E470 @ 0x18007E470 (sub_18007E470.c)
 * Callees:
 *     sub_180044358 @ 0x180044358 (sub_180044358.c)
 */

__int64 __fastcall sub_180044B2C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // ax

  v4 = sub_180044358(a1, (__int64)&unk_1801D6DA8, a3);
  return sub_180044B58(a1, v4);
}
