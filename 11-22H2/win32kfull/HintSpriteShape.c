/*
 * XREFs of HintSpriteShape @ 0x1C00D3B40
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C008E968 (RecreateRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C00C881C (UnsetRedirectedWindow.c)
 *     SetRedirectedWindow @ 0x1C00D36F4 (SetRedirectedWindow.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01BC970 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01BCEF0 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C00D41D4 (GreHintSpriteShape.c)
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C011B17C (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

_BOOL8 __fastcall HintSpriteShape(__int64 a1, const struct tagWND *a2, __int64 a3, int a4)
{
  int v8; // eax
  _BYTE v10[144]; // [rsp+40h] [rbp-98h] BYREF

  memset_0(v10, 0, 0x88uLL);
  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v10);
  v8 = IsWindowDesktopComposed(a2);
  return (unsigned int)GreHintSpriteShape(a1, *(_QWORD *)a2, a3, v10, a4, v8, 1) != 0;
}
