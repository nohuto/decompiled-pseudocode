/*
 * XREFs of ?PositionAppOnScreen@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@I@Z @ 0x180039C10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowExperienceManager@LaunchManager@ContentManagement@@AEAAJPEAPEAUIWindowExperienceManager@2@@Z @ 0x180037414 (-GetWindowExperienceManager@LaunchManager@ContentManagement@@AEAAJPEAPEAUIWindowExperienceManage.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::LaunchManager::PositionAppOnScreen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  ContentManagement::LaunchManager *v7; // rcx
  int WindowExperienceManager; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ContentManagement::IWindowExperienceManager *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  WindowExperienceManager = ContentManagement::LaunchManager::GetWindowExperienceManager(v7, &v14);
  v9 = WindowExperienceManager;
  if ( WindowExperienceManager < 0 )
  {
    v10 = 340LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)WindowExperienceManager,
      v12);
    goto LABEL_6;
  }
  WindowExperienceManager = (*(__int64 (__fastcall **)(struct ContentManagement::IWindowExperienceManager *, __int64, __int64, _QWORD))(*(_QWORD *)v14 + 48LL))(
                              v14,
                              a2,
                              a3,
                              a4);
  v9 = WindowExperienceManager;
  if ( WindowExperienceManager < 0 )
  {
    v10 = 341LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  return v9;
}
