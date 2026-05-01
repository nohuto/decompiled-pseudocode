/*
 * XREFs of ??$AsWeak@VMiniSearchExperienceManager@@@WRL@Microsoft@@YAJPEAVMiniSearchExperienceManager@@PEAVWeakRef@01@@Z @ 0x18005ECE4
 * Callers:
 *     ?RuntimeClassInitialize@MiniSearchExperienceManager@@QEAAJPEAUIServiceProvider@@V?$unique_ptr@VIUndockedMiniSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedMiniSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VIMiniSearchAppPositioner@@U?$default_delete@VIMiniSearchAppPositioner@@@wistd@@@4@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18005DF9C (-RuntimeClassInitialize@MiniSearchExperienceManager@@QEAAJPEAUIServiceProvider@@V-$unique_ptr@VI.c)
 *     ??$RuntimeClassInitialize@VMiniSearchExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVMiniSearchExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x18005EB3C (--$RuntimeClassInitialize@VMiniSearchExperienceManager@@@IImmersiveWindowMessageNotificationHand.c)
 *     ?Show@MiniSearchExperienceManager@@AEAAJ_N@Z @ 0x1801A8090 (-Show@MiniSearchExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIMiniSearch@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIMiniSearch@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18005DC24 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIMiniSearch@@@De.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsWeak<MiniSearchExperienceManager>(__int64 a1, __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rbx
  int v5; // edi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMiniSearch>>(
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
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
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
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      return 0LL;
    }
  }
}
