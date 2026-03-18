/*
 * XREFs of ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800BD210
 * Callers:
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800BCFA4 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801C890C (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18004FA7C (-PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LegacyPresentRequired@COverlayContext@@AEBA_NXZ @ 0x1800BD2D4 (-LegacyPresentRequired@COverlayContext@@AEBA_NXZ.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800C6990 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801DF7EC (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 */

__int64 __fastcall COverlayContext::Present(
        COverlayContext *this,
        struct IOverlaySwapChain *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6)
{
  CDirectFlipInfo *v6; // rsi
  COverlayContext *v9; // rcx
  unsigned int v10; // r8d
  _QWORD *v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20[2]; // [rsp+40h] [rbp-38h] BYREF

  v6 = (CDirectFlipInfo *)*((_QWORD *)this + 1396);
  if ( v6 )
  {
    *(_OWORD *)v20 = *(_OWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 168LL))(*(_QWORD *)this) + 20);
    v18 = CDirectFlipInfo::Present(v6, a2, (__int64)v20);
    v14 = v18;
    if ( v18 >= 0 || (MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x9E5u), v14 == -2003304309) )
    {
      *((_BYTE *)this + 11304) = 1;
    }
    else
    {
      COverlayContext::ClearDirectFlip(this);
      *((_BYTE *)this + 11310) = 1;
    }
  }
  else
  {
    *((_BYTE *)this + 11304) = 0;
    if ( a6 || COverlayContext::LegacyPresentRequired(this) )
    {
      v12 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64))(*(_QWORD *)a2 + 176LL))(a2, 1LL);
      v14 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x9CEu);
      }
      else
      {
        *((_DWORD *)this + 2820) = 0;
        *((_BYTE *)this + 11296) = 1;
        *((_BYTE *)this + 11305) = 0;
      }
    }
    else
    {
      v16 = COverlayContext::PresentMPO(v9, (__int64)a2, v10, v11);
      v14 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x9C4u);
    }
  }
  return v14;
}
