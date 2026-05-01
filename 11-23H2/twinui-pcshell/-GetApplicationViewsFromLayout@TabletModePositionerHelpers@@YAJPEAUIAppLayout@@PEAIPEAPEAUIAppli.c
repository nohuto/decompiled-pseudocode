/*
 * XREFs of ?GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x18056FB28
 * Callers:
 *     ?GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1805C58D0 (-GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPE.c)
 *     ?IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView@@PEAPEAU3@@Z @ 0x1805C5EB4 (-IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModePositionerHelpers::GetApplicationViewsFromLayout(
        TabletModePositionerHelpers *this,
        struct IAppLayout *a2,
        unsigned int *a3,
        struct IApplicationView **a4)
{
  int v8; // esi
  __int64 (__fastcall *v9)(TabletModePositionerHelpers *, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v15)(TabletModePositionerHelpers *, __int64, __int64, GUID *, __int64 *); // rbx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, GUID *, struct IApplicationView **); // rdi
  __int64 v19; // rax
  struct IApplicationView *v20; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v22; // [rsp+70h] [rbp+40h] BYREF
  struct IApplicationView *v23; // [rsp+78h] [rbp+48h] BYREF
  __int64 v24; // [rsp+80h] [rbp+50h] BYREF

  *(_QWORD *)a3 = 0LL;
  *a4 = 0LL;
  *(_DWORD *)a2 = 0;
  v8 = (*(__int64 (__fastcall **)(TabletModePositionerHelpers *, __int64))(*(_QWORD *)this + 80LL))(this, 1LL);
  if ( v8 )
  {
    v24 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    v9 = *(__int64 (__fastcall **)(TabletModePositionerHelpers *, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)this + 104LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
    v10 = v9(this, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v22);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 38LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"desktop\\internal\\shell\\inc\\private\\TabletModePositionerHelpers.h",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v23);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
      return v11;
    }
    v13 = v22;
    v14 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v22 + 48LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
    v10 = v14(v13, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v24);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 39LL;
      goto LABEL_11;
    }
    if ( v8 == 2 )
    {
      v15 = *(__int64 (__fastcall **)(TabletModePositionerHelpers *, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)this + 104LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
      v10 = v15(this, 1LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v22);
      v11 = v10;
      if ( v10 < 0 )
      {
        v12 = 43LL;
        goto LABEL_11;
      }
      v16 = v22;
      v17 = *(__int64 (__fastcall **)(__int64, GUID *, struct IApplicationView **))(*(_QWORD *)v22 + 48LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v23);
      v10 = v17(v16, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v23);
      v11 = v10;
      if ( v10 < 0 )
      {
        v12 = 44LL;
        goto LABEL_11;
      }
    }
    v19 = v24;
    v24 = 0LL;
    *(_QWORD *)a3 = v19;
    v20 = v23;
    v23 = 0LL;
    *a4 = v20;
    *(_DWORD *)a2 = v8;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v23);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
  }
  return 0LL;
}
