/*
 * XREFs of ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800CD9A0
 * Callers:
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x1800AEFE8 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001B570 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x18001E800 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180020544 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18003ACD0 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180046FE0 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18004722C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPressTapVisual::Initialize(struct tagSIZE *this)
{
  int v2; // eax
  unsigned int v3; // edi
  void *Theme; // rax
  struct CBitmapSource **v5; // r9
  int BitmapFromAtlas; // eax
  int v7; // eax
  int v8; // eax
  unsigned __int64 *v9; // r15
  int v10; // eax
  unsigned __int64 *v11; // r14
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-28h]
  unsigned int v15; // [rsp+20h] [rbp-28h]

  v2 = CVisual::Initialize((CVisual *)this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 2, 0LL, v5);
    v3 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
    {
      this[47].cy = 1067030938;
      this[48].cx = 1072064102;
      this[48].cy = 1065353216;
      this[49] = (struct tagSIZE)1067869798LL;
      this[50].cx = 0;
      this[50].cy = 150;
      this[46].cx = 1050253722;
      this[46].cy = 1059760811;
      this[47].cx = 1051372203;
      this[51] = 0LL;
      LOBYTE(this[36].cx) = 0;
      v7 = CDesktopManager::MonitorDpiFromPoint(0LL);
      v8 = MulDiv(50, v7, 96);
      v9 = (unsigned __int64 *)&this[44];
      this[43].cy = v8;
      this[42].cy = v8;
      this[43].cx = v8;
      this[42].cx = v8;
      v10 = CImage::Create((struct CImage **)&this[44]);
      v3 = v10;
      if ( v10 >= 0 )
      {
        v11 = (unsigned __int64 *)&this[45];
        v12 = CImage::Create((struct CImage **)&this[45]);
        v3 = v12;
        if ( v12 >= 0 )
        {
          VisualCollection::InsertRelative((VisualCollection *)&this[4], *v9, 0LL, 0, v14);
          VisualCollection::InsertRelative((VisualCollection *)&this[4], *v11, 0LL, 0, v15);
          CVisual::SetSize((CVisual *)*v9, this + 42);
          CVisual::SetSize((CVisual *)*v11, this + 43);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x44u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x43u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x25u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x22u);
  }
  return v3;
}
