/*
 * XREFs of sub_140551BE0 @ 0x140551BE0
 * Callers:
 *     <none>
 * Callees:
 *     HeadlessDispatch @ 0x1403C2310 (HeadlessDispatch.c)
 *     sub_1405517A0 @ 0x1405517A0 (sub_1405517A0.c)
 *     sub_140551AA0 @ 0x140551AA0 (sub_140551AA0.c)
 */

void __fastcall sub_140551BE0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( !dword_140C54D50 )
  {
    sub_1405517A0();
    if ( byte_140C54D4A )
      VidSolidColorFill(a1, a2, a3, a4, a5);
    v9[0] = 37;
    dword_140C0CBE4 = 40;
    v9[1] = 40;
    HeadlessDispatch(9LL, (__int64)v9, 8LL, 0LL, 0LL);
    HeadlessDispatch(4LL, 0LL, 0LL, 0LL, 0LL);
    sub_140551AA0();
  }
}
