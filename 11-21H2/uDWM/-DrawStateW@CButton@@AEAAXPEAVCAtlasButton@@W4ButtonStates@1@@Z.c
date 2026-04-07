/*
 * XREFs of ?DrawStateW@CButton@@AEAAXPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180005B0C
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180032070 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z @ 0x180005BC4 (-SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180005C30 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CButton::DrawStateW(__int64 a1, __int64 a2, unsigned int a3)
{
  struct CBitmapSource *v5; // rdx
  __int64 v6; // rsi
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // r8
  char result; // al
  __int64 v11; // rcx

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
  CAtlasedImage::SetBitmapSource((CAtlasedImage *)a2, v5);
  CAtlasButton::SetGlyphImage(
    a2,
    v6,
    v9,
    (unsigned int)(int)((double)*(int *)(a1 + 408) * *((double *)CDesktopManager::s_pDesktopManagerInstance + 51)));
  result = (*(_BYTE *)(a1 + 288) & 0x20) != 0;
  if ( *(_BYTE *)(a2 + 144) != result )
  {
    v11 = *(_QWORD *)(a2 + 80);
    *(_BYTE *)(a2 + 144) = result;
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, 0x2000LL);
  }
  return result;
}
