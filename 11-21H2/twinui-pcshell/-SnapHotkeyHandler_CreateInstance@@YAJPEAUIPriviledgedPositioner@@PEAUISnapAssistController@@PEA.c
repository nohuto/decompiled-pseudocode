/*
 * XREFs of ?SnapHotkeyHandler_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEAUIImmersiveMonitorManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUITabletModeController@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FF650
 * Callers:
 *     ?PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ @ 0x1800DB690 (-PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VHotkeyHandler@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistController@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUITabletModeController@@@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyHandler@@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistController@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUITabletModeController@@@Z @ 0x1800FF3E4 (--$MakeAndInitialize@VHotkeyHandler@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistControl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapHotkeyHandler_CreateInstance(
        struct IPriviledgedPositioner *a1,
        struct ISnapAssistController *a2,
        struct IImmersiveMonitorManager *a3,
        struct IApplicationViewCollection *a4,
        struct IImmersiveSettingsCache *a5,
        struct ITabletModeController *a6,
        const struct _GUID *a7,
        void **a8)
{
  void **v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IPriviledgedPositioner *v14; // [rsp+60h] [rbp+20h] BYREF
  struct ISnapAssistController *v15; // [rsp+68h] [rbp+28h] BYREF
  struct IImmersiveMonitorManager *v16; // [rsp+70h] [rbp+30h] BYREF
  struct IApplicationViewCollection *v17; // [rsp+78h] [rbp+38h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v14 = a1;
  v8 = a8;
  *a8 = 0LL;
  a8 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a8);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<HotkeyHandler,HotkeyHandler,IPriviledgedPositioner * &,ISnapAssistController * &,IImmersiveMonitorManager * &,IApplicationViewCollection * &,IImmersiveSettingsCache * &,ITabletModeController * &>(
         (HotkeyHandler **)&a8,
         &v14,
         &v15,
         &v16,
         &v17,
         &a5,
         &a6);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 897LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_3;
  }
  v9 = (*(__int64 (__fastcall **)(void **, GUID *, void **))*a8)(a8, &GUID_1646a5c2_c6f3_4070_91ad_4da266c6f197, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 898LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a8);
  return v10;
}
