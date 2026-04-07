/*
 * XREFs of ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x18004F4D0
 * Callers:
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18004F050 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001EE50 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025C70 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180038D40 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x1800391BC (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180050A64 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::Initialize(struct tagSIZE *this)
{
  int v2; // eax
  unsigned int v3; // edi
  void *Theme; // rax
  struct CBitmapSource **v5; // r9
  int v6; // eax
  struct CVisual **v7; // rsi
  int v8; // eax
  int inserted; // eax
  int BitmapFromAtlas; // eax

  v2 = CVisual::Initialize((CVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x26u);
  }
  else
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    v5 = (struct CBitmapSource **)&this[53];
    if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 19) + 324LL) )
    {
      BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 7, 0LL, v5);
      v3 = BitmapFromAtlas;
      if ( BitmapFromAtlas < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x2Cu);
        return v3;
      }
    }
    else
    {
      v6 = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 2, 0LL, v5);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x30u);
        return v3;
      }
    }
    v7 = (struct CVisual **)&this[52];
    this[41] = *(struct tagSIZE *)(*(_QWORD *)&this[53] + 24LL);
    LOBYTE(this[51].cx) = 0;
    this[44].cx = 0;
    this[44].cy = 1065353216;
    this[45].cx = 1065353216;
    this[45].cy = 1068708659;
    this[46].cx = 1067030938;
    this[43].cy = 1033476506;
    this[46].cy = 1028443341;
    this[42].cx = 1040522936;
    this[42].cy = 1061481551;
    this[43].cx = 1047285445;
    v8 = CImage::Create((struct CImage **)&this[52]);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x44u);
    }
    else
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)&this[4], *v7, 0LL, 0, 1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x45u);
      }
      else
      {
        CVisual::SetSize(*v7, this + 41);
        this[48] = 0LL;
        this[49] = 0LL;
        this[50] = 0LL;
        LOBYTE(this[36].cx) = 0;
      }
    }
  }
  return v3;
}
