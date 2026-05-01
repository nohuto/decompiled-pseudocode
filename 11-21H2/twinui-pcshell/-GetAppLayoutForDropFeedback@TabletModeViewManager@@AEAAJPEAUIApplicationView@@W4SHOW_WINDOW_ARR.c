/*
 * XREFs of ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x18050B308
 * Callers:
 *     ?CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x18050B010 (-CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUn.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x18050BF30 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18011F2D0 (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180619AA4 (-s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModeViewManager::GetAppLayoutForDropFeedback(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  const struct _GUID *v11; // rdx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  void *v15; // rbx
  __int64 (__fastcall *v16)(void *, GUID *, __int64 *); // rdi
  __int64 v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+38h] [rbp-48h] BYREF
  void *v20; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+48h] [rbp-38h] BYREF
  __int128 v22; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *a4 = 0LL;
  v18 = 0LL;
  v7 = *(_QWORD *)(a1 + 120);
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 72LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  v9 = v8(v7, &v18);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( a3 == 1 )
    {
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v18 + 24LL))(v18, &v21);
      v21 = v22;
      v20 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
      v12 = CAppLayout_CreateInstance((const struct LAYOUT_ENVIRONMENT_DETAILS *)&v21, v11, &v20);
      v10 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x25D,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v12);
LABEL_13:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
        goto LABEL_16;
      }
      v19 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
      v13 = CAppLayoutItem::s_CreateInstance_View(a2, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v19);
      v10 = v13;
      if ( v13 < 0 )
      {
        v14 = 608LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
        goto LABEL_13;
      }
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v19 + 104LL))(v19, 0LL, &v22);
      (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v19 + 104LL))(v19, 1LL, &v22);
      v13 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD, _QWORD))(*(_QWORD *)v20 + 224LL))(v20, v19, 0LL, 0LL);
      v10 = v13;
      if ( v13 < 0 )
      {
        v14 = 611LL;
        goto LABEL_12;
      }
      v15 = v20;
      v16 = **(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v20;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
      v13 = v16(v15, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, &v18);
      v10 = v13;
      if ( v13 < 0 )
      {
        v14 = 612LL;
        goto LABEL_12;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
    *a4 = v18;
    v10 = 0;
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x252,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_16:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  return v10;
}
