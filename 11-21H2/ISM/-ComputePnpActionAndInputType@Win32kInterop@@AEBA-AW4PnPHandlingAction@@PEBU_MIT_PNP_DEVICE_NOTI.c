/*
 * XREFs of ?ComputePnpActionAndInputType@Win32kInterop@@AEBA?AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@PEAW4InputType@@@Z @ 0x1800DEC64
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x18003FCF0 (-ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D0EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4R.c)
 */

__int64 __fastcall Win32kInterop::ComputePnpActionAndInputType(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int16 v5; // bx
  __int16 v6; // si

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
    v5 = *(_WORD *)(a2 + 20);
    v6 = *(_WORD *)(a2 + 22);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MultiProcessISM>::GetImpl'::`2'::impl,
      1u,
      (__int64)a3,
      a4);
    if ( v5 == 13 && v6 == 15 )
    {
      *a3 = 2048;
      return 1LL;
    }
  }
  *a3 = 0;
  return 0LL;
}
