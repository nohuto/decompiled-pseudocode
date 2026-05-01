/*
 * XREFs of ?UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ @ 0x18050CB9C
 * Callers:
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x18050BAC0 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x18050BF30 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabletModeViewManager::UpdateLayoutItemsSizeConstraints(TabletModeViewManager *this)
{
  __int64 v1; // rdi
  __int64 (__fastcall *v2)(__int64, __int64 *); // rbx
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v10 = 0LL;
  v9 = 0LL;
  v1 = *((_QWORD *)this + 15);
  v2 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 72LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  v3 = v2(v1, &v10);
  v4 = retaddr;
  if ( v3 < 0 )
  {
    v5 = 639LL;
LABEL_3:
    wil::details::in1diag3::_Log_Hr(
      v4,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_4;
  }
  v6 = v10;
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 128LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v9);
  v3 = v7(v6, &v9);
  v4 = retaddr;
  if ( v3 < 0 )
  {
    v5 = 640LL;
    goto LABEL_3;
  }
  while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v9 + 24LL))(v9, 1LL, v11) >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 304LL))(v12);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x285,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)v8);
  }
LABEL_4:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
}
