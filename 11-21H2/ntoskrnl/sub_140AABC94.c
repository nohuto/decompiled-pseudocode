/*
 * XREFs of sub_140AABC94 @ 0x140AABC94
 * Callers:
 *     sub_1403A78F0 @ 0x1403A78F0 (sub_1403A78F0.c)
 *     sub_140B56D04 @ 0x140B56D04 (sub_140B56D04.c)
 *     sub_140B572D0 @ 0x140B572D0 (sub_140B572D0.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 */

__int64 (__fastcall **sub_140AABC94())()
{
  __int64 (__fastcall **v0)(); // rbx
  __int64 (__fastcall **v1)(); // rcx

  v0 = 0LL;
  sub_1403A7C40();
  if ( (dword_140C0DF90 & 1) != 0 )
  {
    v1 = off_140C04D00;
    if ( !qword_140C0E038 )
      v1 = 0LL;
    v0 = v1;
  }
  sub_1403A7BF0();
  return v0;
}
