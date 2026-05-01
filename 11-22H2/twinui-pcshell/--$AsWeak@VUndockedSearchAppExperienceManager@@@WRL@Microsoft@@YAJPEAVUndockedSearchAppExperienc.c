/*
 * XREFs of ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800B52B4
 * Callers:
 *     ?RequestSearchAppToHide@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180038E08 (-RequestSearchAppToHide@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?RegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180060644 (-RegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1800B0B84 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     ?ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1800B3444 (-ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@U.c)
 *     ?RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B363C (-RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180112970 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ??$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IInputHostLayoutChangesHandler@Shell@Internal@Windows@@QEAAJPEAVUndockedSearchAppExperienceManager@@P84@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@22@ZP84@EAAJ13@Z@Z @ 0x1801722CC (--$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IInputHostLayoutChangesHandler@S.c)
 *     ??$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVUndockedSearchAppExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x18017296C (--$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IImmersiveWindowMessageNotificat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180169244 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperien.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsWeak<UndockedSearchAppExperienceManager>(__int64 a1, __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rbx
  int v5; // edi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,IInitializeTrustedComponentForegroundControl,IDeferralMessage>>(
         a1,
         &_uuidof__AUIWeakReferenceSource_Details_Platform__,
         &v10);
  if ( v3 < 0 )
  {
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    return (unsigned int)v3;
  }
  else
  {
    v9 = 0LL;
    v4 = v10;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v9);
    if ( v5 < 0 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      return (unsigned int)v5;
    }
    else
    {
      v6 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = 0LL;
      v7 = *a2;
      *a2 = v6;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      return 0LL;
    }
  }
}
