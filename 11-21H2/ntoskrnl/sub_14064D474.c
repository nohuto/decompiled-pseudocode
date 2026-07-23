/*
 * XREFs of sub_14064D474 @ 0x14064D474
 * Callers:
 *     sub_140A6BDD0 @ 0x140A6BDD0 (sub_140A6BDD0.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_14064E738 @ 0x14064E738 (sub_14064E738.c)
 */

__int64 sub_14064D474()
{
  unsigned int v0; // ebx

  sub_1403A7C40();
  if ( (dword_140C0DF90 & 2) != 0 )
    v0 = sub_14064E738();
  else
    v0 = -1073741823;
  sub_1403A7BF0();
  return v0;
}
