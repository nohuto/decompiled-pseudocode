/*
 * XREFs of ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18004B894
 * Callers:
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x18004B7E8 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180010FC0 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180011268 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180023BB8 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004B95C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800BEE90 (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::_RegisterIconicRepresentation(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        HWND a3,
        char a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8,
        enum IconicRepresentationType *a9)
{
  unsigned int v9; // edi
  struct CWindowData *v11; // rsi
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // r8d
  int v17; // eax

  v9 = 0;
  v11 = a2;
  if ( a6 )
  {
    *(_DWORD *)a9 = 2;
    goto LABEL_4;
  }
  if ( !a4 || a5 )
  {
    *(_DWORD *)a9 = 0;
LABEL_4:
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetImpl'::`2'::impl,
      a2);
    goto LABEL_5;
  }
  *(_DWORD *)a9 = 1;
  if ( a7 )
    goto LABEL_4;
  v17 = CIconicBitmapRegistry::RequestBitmap(this, a2, 1);
  v9 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xBDu);
    return v9;
  }
LABEL_5:
  v13 = *(_DWORD *)a9;
  if ( a8 != (*(_DWORD *)a9 == 2) && (unsigned __int64)v11 < 0xFFFFFFFFFFFFFFFEuLL )
  {
    CIconicBitmapRegistry::RegisterBitmapInUse(this, v11, *(_DWORD *)a9 == 2);
    v13 = *(_DWORD *)a9;
  }
  v14 = (unsigned int)(v13 - 1);
  if ( (_DWORD)v14 )
  {
    if ( (_DWORD)v14 == 1 )
      v15 = 6;
    else
      v15 = 4;
  }
  else
  {
    v15 = 5;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(v14, (int)&UdwmSelectIconicRepresentation_Info, v15, a3);
  if ( IsWindowTab(v11) && !a6 && *(_DWORD *)a9 == 1 )
    *(_DWORD *)a9 = 0;
  return v9;
}
