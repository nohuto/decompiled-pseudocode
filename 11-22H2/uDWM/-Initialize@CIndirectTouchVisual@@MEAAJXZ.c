/*
 * XREFs of ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C5680
 * Callers:
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x1800AEC80 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001B570 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x18001E800 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180020544 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18003BB58 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18004722C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C5FCC (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::Initialize(CIndirectTouchVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  unsigned __int64 *v6; // rsi
  __int64 v7; // rax
  int v8; // eax
  int inserted; // eax
  int v11; // [rsp+20h] [rbp-18h]

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                   Theme,
                                   8,
                                   0xFu,
                                   0LL,
                                   (__int64)this + 392);
    v3 = BitmapsFromAtlasImageStrip;
    if ( BitmapsFromAtlasImageStrip >= 0 )
    {
      v6 = (unsigned __int64 *)((char *)this + 384);
      v7 = *(_QWORD *)(**((_QWORD **)this + 49) + 24LL);
      *((_DWORD *)this + 106) = -1;
      *((_DWORD *)this + 76) = 0;
      *(_QWORD *)((char *)this + 316) = v7;
      *((_DWORD *)this + 82) = 1041865114;
      *((_DWORD *)this + 84) = 1041865114;
      *((_DWORD *)this + 83) = 1036831949;
      *((_DWORD *)this + 85) = 1051372202;
      *((_DWORD *)this + 86) = 1059760810;
      v8 = CImage::Create((struct CImage **)this + 48);
      v3 = v8;
      if ( v8 >= 0 )
      {
        inserted = VisualCollection::InsertRelative((CIndirectTouchVisual *)((char *)this + 32), *v6, 0LL, 0, v11);
        v3 = inserted;
        if ( inserted >= 0 )
        {
          CVisual::SetSize((CVisual *)*v6, (const struct tagSIZE *)((char *)this + 316));
          *((_QWORD *)this + 45) = 0LL;
          *((_QWORD *)this + 46) = 0LL;
          *((_QWORD *)this + 47) = 0LL;
          *((_DWORD *)this + 87) = 0;
          *((_DWORD *)this + 88) = 0;
          CIndirectTouchVisual::UpdateOpacityAndSource(this);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x37u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x36u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, 0x28u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x25u);
  }
  return v3;
}
