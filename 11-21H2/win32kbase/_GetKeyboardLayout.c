/*
 * XREFs of _GetKeyboardLayout @ 0x1C004FE60
 * Callers:
 *     GetActiveHKL @ 0x1C003F290 (GetActiveHKL.c)
 *     NtUserGetKeyboardLayout @ 0x1C004FE30 (NtUserGetKeyboardLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ?IsWinstaLessSession@@YA_NXZ @ 0x1C004FF00 (-IsWinstaLessSession@@YA_NXZ.c)
 */

__int64 __fastcall GetKeyboardLayout(int a1)
{
  HANDLE v1; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rax
  _QWORD **v5; // rdi
  _QWORD *i; // rbx

  v1 = (HANDLE)a1;
  if ( IsWinstaLessSession() )
  {
    v3 = gspklGlobalActive;
  }
  else
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( (_DWORD)v1 )
    {
      v5 = (_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 456) + 168LL);
      for ( i = *v5; i != v5; i = (_QWORD *)*i )
      {
        if ( PsGetThreadId((PETHREAD)*(i - 93)) == v1 )
        {
          v3 = *(i - 38);
          goto LABEL_4;
        }
      }
      return 0LL;
    }
    v3 = *(_QWORD *)(ThreadWin32Thread + 440);
  }
LABEL_4:
  if ( v3 )
    return *(_QWORD *)(v3 + 40);
  return 0LL;
}
