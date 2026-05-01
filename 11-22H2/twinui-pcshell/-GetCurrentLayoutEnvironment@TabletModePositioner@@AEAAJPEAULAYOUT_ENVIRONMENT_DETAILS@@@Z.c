/*
 * XREFs of ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18016BE9C
 * Callers:
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x1801077CC (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1805BD1A4 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x1805BDC4C (-LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18016BFC0 (-GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?InitLayoutEnv@ImmersiveApplicationLayout@@YAXPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18016C7E0 (-InitLayoutEnv@ImmersiveApplicationLayout@@YAXPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::GetCurrentLayoutEnvironment(
        IUnknown **this,
        struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  enum DEVICE_SCALE_FACTOR v6; // eax
  __int64 v8; // rdx
  IUnknown *v9; // rcx
  enum DEVICE_SCALE_FACTOR v10; // [rsp+20h] [rbp-60h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-58h] BYREF
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v14[16]; // [rsp+50h] [rbp-30h] BYREF
  enum DEVICE_SCALE_FACTOR v15; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  ImmersiveApplicationLayout::InitLayoutEnv(a2, a2);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         this[2],
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &ppvOut);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 2223LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_7;
  }
  v12 = 0LL;
  v4 = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)ppvOut + 72LL))(ppvOut, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 2226LL;
    goto LABEL_11;
  }
  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)ppvOut + 88LL))(ppvOut, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 2229LL;
    goto LABEL_11;
  }
  if ( TabletModePositioner::GetScaleFactor((TabletModePositioner *)this, &v10) < 0 )
  {
    v9 = this[31];
    if ( v9 )
    {
      ((void (__fastcall *)(IUnknown *, _BYTE *))v9->lpVtbl[1].QueryInterface)(v9, v14);
      v6 = v15;
    }
    else
    {
      v6 = SCALE_100_PERCENT;
    }
    v10 = v6;
  }
  else
  {
    v6 = v10;
  }
  *(_OWORD *)((char *)a2 + 24) = v12;
  *(_OWORD *)a2 = v13;
  *((_DWORD *)a2 + 4) = v6;
  v5 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}
