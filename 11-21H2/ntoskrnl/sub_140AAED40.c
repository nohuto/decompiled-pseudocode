/*
 * XREFs of sub_140AAED40 @ 0x140AAED40
 * Callers:
 *     sub_140AAE8BC @ 0x140AAE8BC (sub_140AAE8BC.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_140AAED7C @ 0x140AAED7C (sub_140AAED7C.c)
 */

__int64 __fastcall sub_140AAED40(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  sub_1403A7C40();
  if ( (dword_140C0DF90 & 1) != 0 )
  {
    LOBYTE(v2) = a1;
    v3 = sub_140AAED7C(v2);
  }
  else
  {
    v3 = -1073741823;
  }
  sub_1403A7BF0();
  return v3;
}
