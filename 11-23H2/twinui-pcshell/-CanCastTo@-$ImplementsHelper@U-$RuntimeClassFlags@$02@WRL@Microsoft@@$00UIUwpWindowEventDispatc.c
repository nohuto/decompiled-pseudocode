/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIUwpWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@UIWindowEventDispatcherHostTermination@ViewManagerInterop@89Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CA220
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIUwpWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@UIWindowEventDispatcherHostTermination@ViewManagerInterop@89Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C9DC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEvent.c)
 *     ??$MakeAndInitialize@VUwpWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18018FE8C (--$MakeAndInitialize@VUwpWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 *     ??$AsWeak@VUwpWindowEventDispatcher@@@WRL@Microsoft@@YAJPEAVUwpWindowEventDispatcher@@PEAVWeakRef@01@@Z @ 0x1804CE250 (--$AsWeak@VUwpWindowEventDispatcher@@@WRL@Microsoft@@YAJPEAVUwpWindowEventDispatcher@@PEAVWeakRe.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CBBA0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IUwpWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection,Windows::Internal::Shell::ViewManagerInterop::IWindowEventDispatcherHostTermination>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r11d
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned int CanCastTo; // eax
  __int64 v13; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // r10
  __int64 v18; // rcx
  void **v19; // r8
  void *v20; // r9
  __int64 v21; // r10
  unsigned int v22; // r11d
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r9

  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_c003ad8f_609c_4f72_980c_76060cb652ab) )
  {
    if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_22347704_c4ce_4e82_afeb_c6a00e06cc3a)
      || (unsigned int)InlineIsEqualGUID(v6, &GUID_58c1ac38_4edf_4ada_aa81_375958b4c848)
      || (unsigned int)InlineIsEqualGUID(v10, &GUID_f12382e8_15a2_49d0_8c5d_5f886a12cb9c) )
    {
      *v7 = v8;
      return v9;
    }
    v11 = v8 + 8;
    if ( *(_DWORD *)a2 == -214933634
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_f3305f7e_8b9b_41f2_be95_4e832447c357.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_f3305f7e_8b9b_41f2_be95_4e832447c357.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_f3305f7e_8b9b_41f2_be95_4e832447c357.Data4[4] )
    {
      goto LABEL_29;
    }
    if ( *(_DWORD *)a2 == 1943455045
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_73d6c545_9771_4aba_bb8c_713133ed635a.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_73d6c545_9771_4aba_bb8c_713133ed635a.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_73d6c545_9771_4aba_bb8c_713133ed635a.Data4[4] )
    {
      *v7 = v11 + 8;
      CanCastTo = v9;
    }
    else
    {
      CanCastTo = -2147467262;
    }
    if ( CanCastTo != -2147467262 )
      return CanCastTo;
    if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_030de2aa_3f4c_47de_9c7b_0bada6462586)
      || (unsigned int)InlineIsEqualGUID(v13, &GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c) )
    {
LABEL_29:
      *v7 = v11;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                    v11 + 8,
                    a2);
      if ( CanCastTo != -2147467262 )
        return CanCastTo;
      if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db) )
      {
        if ( (unsigned int)InlineIsEqualGUID(v15, &GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2)
          || (unsigned int)InlineIsEqualGUID(v18, &GUID_4637e79c_de03_4aef_8a87_e796659e5e8d)
          || (unsigned int)InlineIsEqualGUID(v23, &GUID_8a6f7053_3035_4eb7_8020_551e80a67998) )
        {
          *v19 = v20;
        }
        else
        {
          if ( !(unsigned int)InlineIsEqualGUID(v24, &GUID_f5ff3735_0d15_416a_adad_a11939bdd4c1) )
          {
            CanCastTo = -2147467262;
            goto LABEL_20;
          }
          *v19 = (void *)(v25 + 8);
        }
        CanCastTo = v22;
LABEL_20:
        if ( CanCastTo == -2147467262 )
        {
          CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                        (Microsoft::WRL::FtmBase *)(v21 + 48),
                        (const struct _GUID *)a2,
                        v19);
          if ( CanCastTo == -2147467262 )
            return (unsigned int)-2147467262;
        }
        return CanCastTo;
      }
      *v16 = v17;
    }
    return v9;
  }
  *v4 = v5;
  return 0LL;
}
