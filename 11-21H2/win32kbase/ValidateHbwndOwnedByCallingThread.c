/*
 * XREFs of ValidateHbwndOwnedByCallingThread @ 0x1C0144450
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ValidateHbwnd @ 0x1C0144300 (ValidateHbwnd.c)
 */

__int64 __fastcall ValidateHbwndOwnedByCallingThread(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  v4 = ValidateHbwnd(a1, a2, a3, a4);
  v8 = v4;
  if ( v4 )
  {
    v9 = *(_QWORD *)(v4 + 16);
    if ( v9 != W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      UserSetLastError(1400LL, v10, v11, v12);
      return 0LL;
    }
  }
  else
  {
    UserSetLastError(1400LL, v5, v6, v7);
  }
  return v8;
}
