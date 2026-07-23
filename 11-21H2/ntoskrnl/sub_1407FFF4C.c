/*
 * XREFs of sub_1407FFF4C @ 0x1407FFF4C
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A4E3A0 @ 0x140A4E3A0 (sub_140A4E3A0.c)
 * Callees:
 *     sub_14025E900 @ 0x14025E900 (sub_14025E900.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_1403B63D0 @ 0x1403B63D0 (sub_1403B63D0.c)
 */

void __fastcall sub_1407FFF4C(char a1)
{
  int v1; // eax

  if ( a1 )
  {
    dword_140C54900 = dword_140C48DF0;
    if ( dword_140C54CDC )
    {
      sub_14025E900(1u);
      sub_1402E2D20((unsigned __int64)&stru_140C48DA0, -900000000LL, 0, 0, (__int64)&stru_140C48D60);
    }
    sub_1403B63D0(4);
  }
  else
  {
    sub_14025E900(4u);
    if ( dword_140C54CDC && (dword_140C0B8C0 & 1) != 0 )
    {
      if ( KeCancelTimer(&stru_140C48DA0) )
        sub_1403B63D0(1);
    }
    v1 = dword_140C54900;
    dword_140C54900 = 0;
    dword_140C48DF0 = v1;
  }
}
