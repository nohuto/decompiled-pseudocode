/*
 * XREFs of ?IsIntelFullDesktopClipRequired@@YA_NI@Z @ 0x1801039C8
 * Callers:
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x18001DB98 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall IsIntelFullDesktopClipRequired(int a1)
{
  int v1; // edx
  _DWORD *i; // rax

  v1 = 0;
  for ( i = &`IsIntelFullDesktopClipRequired'::`2'::s_deviceIds; a1 != *i; ++i )
  {
    if ( (unsigned int)++v1 >= 0x2B )
      return 0;
  }
  return 1;
}
