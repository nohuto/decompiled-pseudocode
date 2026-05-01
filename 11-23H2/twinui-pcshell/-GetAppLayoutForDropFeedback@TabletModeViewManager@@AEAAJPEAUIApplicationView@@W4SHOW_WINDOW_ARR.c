/*
 * XREFs of ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x1805C3818
 * Callers:
 *     ?CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x1805C3520 (-CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUn.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x1805C4460 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18016C4CC (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180798460 (-s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModeViewManager::GetAppLayoutForDropFeedback(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  const struct _GUID *v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  void *v16; // rbx
  __int64 (__fastcall *v17)(void *, GUID *, __int64 *); // rdi
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  void *v21; // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+48h] [rbp-38h] BYREF
  __int128 v23; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *a4 = 0LL;
  v19 = 0LL;
  v7 = *(_QWORD *)(a1 + 120);
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 72LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  v9 = v8(v7, &v19);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( a3 == 1 )
    {
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v19 + 24LL))(v19, &v22);
      v22 = v23;
      v21 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
      v13 = CAppLayout_CreateInstance((const struct LAYOUT_ENVIRONMENT_DETAILS *)&v22, v11, &v21, v12);
      v10 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x25D,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v13);
LABEL_13:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
        goto LABEL_16;
      }
      v20 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
      v14 = CAppLayoutItem::s_CreateInstance_View(a2, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v20);
      v10 = v14;
      if ( v14 < 0 )
      {
        v15 = 608LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
        goto LABEL_13;
      }
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v20 + 104LL))(v20, 0LL, &v23);
      (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v20 + 104LL))(v20, 1LL, &v23);
      v14 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 224LL))(v21, v20, 0LL, 0LL);
      v10 = v14;
      if ( v14 < 0 )
      {
        v15 = 611LL;
        goto LABEL_12;
      }
      v16 = v21;
      v17 = **(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v21;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
      v14 = v17(v16, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, &v19);
      v10 = v14;
      if ( v14 < 0 )
      {
        v15 = 612LL;
        goto LABEL_12;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
    *a4 = v19;
    v10 = 0;
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x252,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_16:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  return v10;
}
