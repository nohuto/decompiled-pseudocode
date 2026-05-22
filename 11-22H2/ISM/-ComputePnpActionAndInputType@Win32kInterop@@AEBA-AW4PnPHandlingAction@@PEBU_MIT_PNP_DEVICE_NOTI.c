/*
 * XREFs of ?ComputePnpActionAndInputType@Win32kInterop@@AEBA?AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@PEAW4InputType@@@Z @ 0x180040108
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180040030 (std--_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DE_ea_180040030.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003DD8C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4R.c)
 */

__int64 __fastcall Win32kInterop::ComputePnpActionAndInputType(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int16 v6; // bx
  __int16 v7; // si

  if ( *(_DWORD *)a2 )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 1:
        *a3 = 2;
        return 1LL;
      case 2:
        *a3 = 4;
        return 1LL;
      case 4:
        *a3 = 32;
        return 1LL;
    }
  }
  else
  {
    v6 = *(_WORD *)(a2 + 20);
    v7 = *(_WORD *)(a2 + 22);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MultiProcessISM>::GetImpl'::`2'::impl,
      1u,
      (__int64)a3,
      a4);
    if ( v6 == 13 && v7 == 15 )
    {
      *a3 = 2048;
      return 1LL;
    }
  }
  *a3 = 0;
  return 0LL;
}
