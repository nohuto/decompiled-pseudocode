/*
 * XREFs of ?IsScanoutCompatible@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1800133E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PresentationAPIDisableScanoutProtection@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180248EA0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PresentationAPIDisableScanoutProtection@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PresentationAPIWithIFlip@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180248F24 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PresentationAPIWithIFlip@@@details@wil@@Q.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::IsScanoutCompatible(CGlobalCompositionSurfaceInfo *this)
{
  char v1; // bl
  __int64 v3; // rcx
  __int64 v4; // r8

  v1 = 1;
  if ( *((_DWORD *)this + 31) == 3 )
  {
    if ( *((_BYTE *)this + 284) )
    {
      if ( *((_BYTE *)this + 120) )
      {
        if ( !*((_DWORD *)this + 98) )
          return v1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_PresentationAPIDisableScanoutProtection>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_PresentationAPIDisableScanoutProtection>::GetImpl'::`2'::impl,
          0LL);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000000) != 0 )
        {
          v4 = 2LL;
          goto LABEL_12;
        }
      }
      else
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_PresentationAPIWithIFlip>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_PresentationAPIWithIFlip>::GetImpl'::`2'::impl,
          0LL);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000000) != 0 )
        {
          v4 = 1LL;
          goto LABEL_12;
        }
      }
    }
    else
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_PresentationAPIDisableScanoutProtection>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_PresentationAPIDisableScanoutProtection>::GetImpl'::`2'::impl,
        0LL);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000000) != 0 )
      {
        v4 = 0LL;
LABEL_12:
        McTemplateU0q_EventWriteTransfer(v3, &CompSurfInfo_ScanoutIncompatible, v4);
      }
    }
    return 0;
  }
  return v1;
}
