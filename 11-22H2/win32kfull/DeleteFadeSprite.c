/*
 * XREFs of DeleteFadeSprite @ 0x1C01BCCA0
 * Callers:
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BBFB0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     StopFade @ 0x1C01BCD50 (StopFade.c)
 * Callees:
 *     UnsetLayeredWindow @ 0x1C00C8C24 (UnsetLayeredWindow.c)
 *     GreDeleteSprite @ 0x1C00C8F74 (GreDeleteSprite.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagWND *DeleteFadeSprite()
{
  struct tagWND *v0; // rbx
  struct tagWND *v1; // rax

  v0 = 0LL;
  if ( (gfade[12] & 8) != 0 )
  {
    v1 = (struct tagWND *)HMValidateHandleNoSecure(gfade[0], 1);
    v0 = v1;
    if ( v1 && (*(_BYTE *)(*((_QWORD *)v1 + 5) + 26LL) & 8) != 0 )
      UnsetLayeredWindow(v1, 0);
  }
  else
  {
    GreDeleteSprite(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, *(void **)gfade, 1);
  }
  *(_QWORD *)gfade = 0LL;
  return v0;
}
