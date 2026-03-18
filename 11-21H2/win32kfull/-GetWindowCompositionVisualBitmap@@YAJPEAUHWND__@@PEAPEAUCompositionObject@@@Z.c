/*
 * XREFs of ?GetWindowCompositionVisualBitmap@@YAJPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C01F0888
 * Callers:
 *     NtUserGetDCompositionHwndBitmap @ 0x1C01F3D30 (NtUserGetDCompositionHwndBitmap.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x1C024A2D0 (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall GetWindowCompositionVisualBitmap(HWND a1, struct CompositionObject **a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  __int64 v7; // rdx
  unsigned int WindowCompositionVisualBitmap; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = (struct tagWND *)v4;
  if ( v4 && (v5 = *(_QWORD *)(v4 + 40), (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v13;
    *((_QWORD *)&v13 + 1) = v4;
    HMLockObject(v4);
    if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*((_QWORD *)v6 + 2) + 424LL) )
    {
      WindowCompositionVisualBitmap = _GetWindowCompositionVisualBitmap(v6, a2);
    }
    else
    {
      WindowCompositionVisualBitmap = -1073741811;
      UserSetLastError(5LL, v7);
    }
    ThreadUnlock1(v10, v9, v11);
  }
  else
  {
    WindowCompositionVisualBitmap = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v5);
  return WindowCompositionVisualBitmap;
}
