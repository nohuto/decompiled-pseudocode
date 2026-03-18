/*
 * XREFs of ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01BC970
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C008E138 (zzzUpdateWindowsAfterModeChange.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BD720 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     GetRedirectionFlags @ 0x1C008EC3C (GetRedirectionFlags.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C008EC6C (ChangeRedirectionParentInDCEs.c)
 *     HintSpriteShape @ 0x1C00D3B40 (HintSpriteShape.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00D54CC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 */

__int64 __fastcall RestoreOldRedirectionBitmap(struct tagWND *a1, HBITMAP a2)
{
  unsigned int v4; // edi

  v4 = SetRedirectionBitmap(a1, a2, 0);
  if ( v4 )
  {
    if ( (GetRedirectionFlags((__int64)a1) & 1) != 0 )
      HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, (__int64)a2, 1);
    ChangeRedirectionParentInDCEs(a1, 1u);
  }
  return v4;
}
