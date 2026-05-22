/*
 * XREFs of Windows::UI::Composition::AreEffectsSupportedWorker @ 0x180067050
 * Callers:
 *     ?AreEffectsFast@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x180066FD0 (-AreEffectsFast@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJPEAE@Z.c)
 *     ?AreEffectsSupported@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x180160CD0 (-AreEffectsSupported@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180066F3C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEAA?AW4Variant_EffectSupport@@W4VariantReportingKind@3@_N@Z @ 0x180067090 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEA.c)
 */

char __fastcall Windows::UI::Composition::AreEffectsSupportedWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl

  if ( !*(_DWORD *)(a1 + 12) )
    return 0;
  v4 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EffectSupport>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_EffectSupport>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EffectSupport>::__private_GetVariant(`wil::Feature<__WilFeatureTraits_Feature_EffectSupport>::GetImpl'::`2'::impl) == 1 )
    return 0;
  return v4;
}
