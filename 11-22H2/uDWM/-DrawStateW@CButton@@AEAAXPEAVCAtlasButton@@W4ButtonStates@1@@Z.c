/*
 * XREFs of ?DrawStateW@CButton@@AEAAXPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x1800ACFA4
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18002C1C0 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800AC788 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z @ 0x1800AD10C (-SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z.c)
 */

void __fastcall CButton::DrawStateW(__int64 a1, CAtlasedImage *a2, unsigned int a3)
{
  struct CBitmapSource *v5; // rdx
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // r8

  v5 = 0LL;
  v6 = 0LL;
  if ( a3 != 4 && *(_DWORD *)(a1 + 336) >= 4u )
  {
    v7 = (*(_BYTE *)(a1 + 288) & 0x10) == 0;
    v8 = 1LL;
    if ( v7 )
      v8 = a3;
    v5 = *(struct CBitmapSource **)(*(_QWORD *)(a1 + 312) + 8 * v8);
    if ( *(_DWORD *)(a1 + 368) >= 4u )
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8 * v8);
  }
  CAtlasedImage::SetBitmapSource(a2, v5);
  CAtlasButton::SetGlyphImage(
    a2,
    v6,
    v9,
    (unsigned int)(int)((double)*(int *)(a1 + 408) * *((double *)CDesktopManager::s_pDesktopManagerInstance + 53)));
  CAtlasButton::SetReverseRTLMirror(a2, (*(_BYTE *)(a1 + 288) & 0x20) != 0);
}
