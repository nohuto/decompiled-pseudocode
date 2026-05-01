/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@@Details@23@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18043204C
 * Callers:
 *     ??$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18042B9D8 (--$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IAllUpViewHost>>,IAllUpViewHostInternal,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v3; // eax

  if ( *a2 == 949100983 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_389221b7_bf28_4d25_9501_b4491d822be1.Data2
      || a2[2] != *(_DWORD *)GUID_389221b7_bf28_4d25_9501_b4491d822be1.Data4 )
    {
      goto LABEL_12;
    }
    v3 = *(_DWORD *)&GUID_389221b7_bf28_4d25_9501_b4491d822be1.Data4[4];
  }
  else
  {
    if ( *a2 != 1229475324
      || a2[1] != *(_DWORD *)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data2
      || a2[2] != *(_DWORD *)GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data4 )
    {
      goto LABEL_12;
    }
    v3 = *(_DWORD *)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data4[4];
  }
  if ( a2[3] == v3 )
  {
    *a3 = a1;
    return 0LL;
  }
LABEL_12:
  if ( *a2 == -1811144131
    && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
    && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
    && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAllUpViewHostInternal,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(
           a1 + 120,
           a2);
}
