/*
 * XREFs of sub_140AAB76C @ 0x140AAB76C
 * Callers:
 *     sub_1403A78F0 @ 0x1403A78F0 (sub_1403A78F0.c)
 *     sub_140551414 @ 0x140551414 (sub_140551414.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 *     BgkDisplayCharacter @ 0x140AB0670 (BgkDisplayCharacter.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_140AAC1BC @ 0x140AAC1BC (sub_140AAC1BC.c)
 */

__int64 sub_140AAB76C()
{
  unsigned int v0; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  sub_1403A7C40();
  if ( (dword_140C0DF90 & 1) != 0 )
    v0 = sub_140AAC1BC();
  else
    v0 = -1073741823;
  sub_1403A7BF0();
  return v0;
}
