/*
 * XREFs of ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01DEFB0
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0078980 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToChildWindow(HWND a1, int a2)
{
  __int64 v3; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF

  v3 = HMValidateHandleNoSecure((int)a1, 1);
  v4 = (struct tagWND *)v3;
  if ( !v3 )
    return 0LL;
  v5 = *(_QWORD *)(v3 + 40);
  if ( (*(_DWORD *)(v5 + 288) & 0xFu) - 2 > 1 || *(_WORD *)(v5 + 286) )
    return 0LL;
  v11[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v11;
  v11[1] = v4;
  HMLockObject(v4);
  xxxSendMessage((ULONG_PTR)v4);
  if ( a2 )
    xxxSetWindowPos(v4, 0LL, 0LL, 0LL, 0, 0, 55);
  ThreadUnlock1(v8, v7, v9);
  return 1LL;
}
