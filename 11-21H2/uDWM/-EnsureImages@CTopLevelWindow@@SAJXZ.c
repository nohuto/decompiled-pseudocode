/*
 * XREFs of ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x18004F984
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18004F63C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x180016ACC (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025C70 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18004FBF0 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x1800508C0 (-CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z @ 0x180050C3C (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180050E74 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180050FB0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

__int64 CTopLevelWindow::EnsureImages(void)
{
  unsigned int v0; // ebx
  void *Theme; // rdi
  void *v2; // rbp
  void *v3; // r14
  HINSTANCE v4; // rsi
  HRESULT NCAreaHelper; // eax
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  volatile signed __int32 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned int iPropId; // [rsp+20h] [rbp-58h]
  CBaseObject *v15; // [rsp+40h] [rbp-38h] BYREF
  MARGINS pMargins; // [rsp+48h] [rbp-30h] BYREF

  v0 = 0;
  if ( dword_1801464E8 )
    return v0;
  Theme = (void *)CDesktopManager::GetTheme(0);
  v2 = (void *)CDesktopManager::GetTheme(1);
  v3 = (void *)CDesktopManager::GetTheme(2);
  v4 = (HINSTANCE)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 68);
  NCAreaHelper = CTopLevelWindow::EnsureWindowFrames();
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 684;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, NCAreaHelper, iPropId);
    return v0;
  }
  NCAreaHelper = CBitmapSource::Create(v4, Theme, v6, &CTopLevelWindow::s_pbsNonClientAtlas);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 691;
    goto LABEL_21;
  }
  NCAreaHelper = CBitmapSource::Create(v4, v2, v7, &CTopLevelWindow::s_pbsTouchAtlas);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 698;
    goto LABEL_21;
  }
  NCAreaHelper = CBitmapSource::Create(v4, v3, v8, &CTopLevelWindow::s_pbsPenAtlas);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 705;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1801174F0,
                   &dword_180117428,
                   *(struct CTopLevelWindow::WindowFrame **)CTopLevelWindow::s_rgpwfWindowFrames,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8));
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 752;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_180117490,
                   &dword_1801174E8,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 16),
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 24));
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 796;
    goto LABEL_21;
  }
  CTopLevelWindow::ReadSystemColors();
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_180117430,
                   &dword_180117428,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 32),
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 40));
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 837;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::CreateGlyphsFromAtlas(Theme);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 840;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(Theme, 45, 1u, &pMargins, &v15);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 846;
    goto LABEL_21;
  }
  NCAreaHelper = GetThemeMargins(Theme, 0LL, 45, 0, 3602, 0LL, &pMargins);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 851;
    goto LABEL_21;
  }
  v9 = (volatile signed __int32 *)v15;
  v10 = 6LL;
  v11 = 0LL;
  *((MARGINS *)v15 + 3) = pMargins;
  do
  {
    v12 = *(_QWORD *)(v11 + CTopLevelWindow::s_rgpwfWindowFrames);
    if ( v12 )
    {
      *(_QWORD *)(v12 + 1840) = v9;
      _InterlockedIncrement(v9 + 2);
      *(_DWORD *)(*(_QWORD *)(v11 + CTopLevelWindow::s_rgpwfWindowFrames) + 1864LL) = 0;
      v9 = (volatile signed __int32 *)v15;
    }
    v11 += 8LL;
    --v10;
  }
  while ( v10 );
  CBaseObject::Release((CBaseObject *)v9);
  return v0;
}
