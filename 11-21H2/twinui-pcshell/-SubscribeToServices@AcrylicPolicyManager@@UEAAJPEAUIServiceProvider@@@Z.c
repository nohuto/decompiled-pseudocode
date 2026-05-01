/*
 * XREFs of ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18005BC60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDeviceAcrylicCapable@@YA_NXZ @ 0x180015724 (-IsDeviceAcrylicCapable@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x18005BDBC (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 *     ?RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ @ 0x18005BE64 (-RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ @ 0x18005BF20 (-_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ.c)
 *     ?_IsHighContrast@AcrylicPolicyManager@@CA_NXZ @ 0x18005BFCC (-_IsHighContrast@AcrylicPolicyManager@@CA_NXZ.c)
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x18005C018 (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBatterySaverEnabled@@YA_NXZ @ 0x1800E1744 (-IsBatterySaverEnabled@@YA_NXZ.c)
 *     ?RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1800E2138 (-RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ??$Register@UIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVAcrylicPolicyManager@@@SmartCookie@@QEAAJPEAUIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVAcrylicPolicyManager@@@Z @ 0x18010BA64 (--$Register@UIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  updated = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
              a2,
              &IID_IImmersiveWindowMessageService,
              &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
              &v16);
  v6 = updated;
  if ( updated < 0 )
  {
    v12 = 115LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)updated,
      v14);
    goto LABEL_8;
  }
  v7 = AcrylicPolicyManager::RegisterForCompositionCapabilitiesChange((AcrylicPolicyManager *)((char *)this - 48));
  if ( v7 < 0 )
  {
    v13 = 116LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v7,
      v14);
    v6 = v7;
    goto LABEL_8;
  }
  v10 = SmartCookie::Register<IImmersiveWindowMessageService,long (IImmersiveWindowMessageService::*)(unsigned int,IImmersiveWindowMessageNotification *,unsigned long *),long (IImmersiveWindowMessageService::*)(unsigned long),int,AcrylicPolicyManager *>(
          (int)this - 48 + 200,
          v16,
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
      v14);
    v13 = 117LL;
    goto LABEL_12;
  }
  v7 = AcrylicPolicyManager::RegisterForTransparencyChange((AcrylicPolicyManager *)((char *)this - 48));
  if ( v7 < 0 )
  {
    v13 = 119LL;
    goto LABEL_12;
  }
  v7 = AcrylicPolicyManager::RegisterForEnergySaverStateChange((AcrylicPolicyManager *)((char *)this - 48));
  if ( v7 < 0 )
  {
    v13 = 120LL;
    goto LABEL_12;
  }
  *((_BYTE *)this + 307) = IsBatterySaverEnabled();
  *((_BYTE *)this + 308) = IsDeviceAcrylicCapable();
  *((_BYTE *)this + 305) = AcrylicPolicyManager::_IsHighContrast();
  *((_BYTE *)this + 306) = AcrylicPolicyManager::_IsTransparencyEnabled();
  updated = AcrylicPolicyManager::UpdateAcrylicState((AcrylicPolicyManager *)((char *)this - 48), 1);
  v6 = updated;
  if ( updated < 0 )
  {
    v12 = 127LL;
    goto LABEL_16;
  }
  v6 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  return v6;
}
