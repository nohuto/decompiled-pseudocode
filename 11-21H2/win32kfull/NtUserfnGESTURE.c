/*
 * XREFs of NtUserfnGESTURE @ 0x1C0200E70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     SendGestureMessage @ 0x1C02213C4 (SendGestureMessage.c)
 */

__int64 __fastcall NtUserfnGESTURE(__int64 a1, int a2, int a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v7; // rdi
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  v12[0] = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a2 == 281
    && a6 >= 0x29E
    && (a6 <= 0x29F || a6 > 0x2AA && (a6 <= 0x2AC || a6 > 0x2B0 && (a6 <= 0x2B4 || a6 - 695 <= 1))) )
  {
    if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      UserSetLastError(1400LL, 281LL);
    }
    else if ( !(unsigned int)SendGestureMessage(a1, 281, a3, a4, a5, a6, (__int64)v12) )
    {
      return v7;
    }
  }
  return v12[0];
}
