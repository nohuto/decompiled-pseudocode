/*
 * XREFs of sub_140AAB248 @ 0x140AAB248
 * Callers:
 *     sub_140A4E794 @ 0x140A4E794 (sub_140A4E794.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_140AAB280 @ 0x140AAB280 (sub_140AAB280.c)
 */

__int64 sub_140AAB248()
{
  unsigned int v0; // ebx

  sub_1403A7C40();
  if ( (dword_140C0DF90 & 1) != 0 )
    v0 = sub_140AAB280();
  else
    v0 = -1073741823;
  sub_1403A7BF0();
  return v0;
}
