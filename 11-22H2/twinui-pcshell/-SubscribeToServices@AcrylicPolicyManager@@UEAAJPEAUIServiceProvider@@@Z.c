/*
 * XREFs of ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E9D30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsDeviceAcrylicCapable@@YA_NXZ @ 0x18005F4C0 (-IsDeviceAcrylicCapable@@YA_NXZ.c)
 *     ?IsBatterySaverEnabled@@YA_NXZ @ 0x1800AC9A0 (-IsBatterySaverEnabled@@YA_NXZ.c)
 *     ?RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180127B90 (-RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x18012874C (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180190E88 (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ @ 0x18019DE34 (-_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ.c)
 *     ?RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ @ 0x18019DEB8 (-RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ??$Register@UIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVAcrylicPolicyManager@@@SmartCookie@@QEAAJPEAUIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVAcrylicPolicyManager@@@Z @ 0x1801B1030 (--$Register@UIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@P.c)
 *     ?_IsHighContrast@AcrylicPolicyManager@@CA_NXZ @ 0x1801BB778 (-_IsHighContrast@AcrylicPolicyManager@@CA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AcrylicPolicyManager::SubscribeToServices(AcrylicPolicyManager *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int updated; // eax
  unsigned int v6; // ebx
  int v7; // edi
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  updated = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
              a2,
              &IID_IImmersiveWindowMessageService,
              &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
              &v17);
  v6 = updated;
  if ( updated < 0 )
  {
    v13 = 115LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)updated,
      v15);
    goto LABEL_8;
  }
  v7 = AcrylicPolicyManager::RegisterForCompositionCapabilitiesChange((AcrylicPolicyManager *)((char *)this - 48));
  if ( v7 < 0 )
  {
    v14 = 116LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v7,
      v15);
    v6 = v7;
    goto LABEL_8;
  }
  v10 = SmartCookie::Register<IImmersiveWindowMessageService,long (IImmersiveWindowMessageService::*)(unsigned int,IImmersiveWindowMessageNotification *,unsigned long *),long (IImmersiveWindowMessageService::*)(unsigned long),int,AcrylicPolicyManager *>(
          (int)this - 48 + 200,
          v17,
          v8,
          v9);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (unsigned int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v10,
      v15);
    v14 = 117LL;
    goto LABEL_12;
  }
  v7 = AcrylicPolicyManager::RegisterForTransparencyChange((AcrylicPolicyManager *)((char *)this - 48));
  if ( v7 < 0 )
  {
    v14 = 119LL;
    goto LABEL_12;
  }
  v7 = AcrylicPolicyManager::RegisterForEnergySaverStateChange((AcrylicPolicyManager *)((char *)this - 48));
  if ( v7 < 0 )
  {
    v14 = 120LL;
    goto LABEL_12;
  }
  *((_BYTE *)this + 307) = IsBatterySaverEnabled(v11);
  *((_BYTE *)this + 308) = IsDeviceAcrylicCapable();
  *((_BYTE *)this + 305) = AcrylicPolicyManager::_IsHighContrast();
  *((_BYTE *)this + 306) = AcrylicPolicyManager::_IsTransparencyEnabled();
  updated = AcrylicPolicyManager::UpdateAcrylicState((AcrylicPolicyManager *)((char *)this - 48), 1);
  v6 = updated;
  if ( updated < 0 )
  {
    v13 = 127LL;
    goto LABEL_16;
  }
  v6 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  return v6;
}
