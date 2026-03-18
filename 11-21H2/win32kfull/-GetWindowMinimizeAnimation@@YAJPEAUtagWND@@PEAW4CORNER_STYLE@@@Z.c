/*
 * XREFs of ?GetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z @ 0x1C0212958
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1C004D030 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall GetWindowMinimizeAnimation(struct tagWND *a1, enum CORNER_STYLE *a2)
{
  unsigned int v5; // ebx
  _DWORD v6[16]; // [rsp+20h] [rbp-58h] BYREF

  if ( g_defaultFrameStyle == -1 )
    return 3221225485LL;
  v5 = -1073741816;
  memset(v6, 0, sizeof(v6));
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v6) )
  {
    v5 = 0;
    *(_DWORD *)a2 = v6[10];
  }
  return v5;
}
