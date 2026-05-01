/*
 * XREFs of ?IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView@@PEAPEAU3@@Z @ 0x18050DA50
 * Callers:
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x180502EF0 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803CA2F4 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x1804B31C8 (-GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIAppli.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ScreenManagerHelpers::IsRelatedWin32ViewPresentInLayout(
        ScreenManagerHelpers *this,
        __int64 (__fastcall ***a2)(struct IAppLayout *, GUID *, __int64 *),
        struct IApplicationView *a3,
        struct IApplicationView **a4)
{
  __int64 (__fastcall *v7)(struct IAppLayout *, GUID *, __int64 *); // rbx
  int ApplicationViewsFromLayout; // ebx
  __int64 *AddressOf; // rbx
  __int64 *v10; // rax
  int (__fastcall *v11)(struct IAppLayout *, GUID **); // rbx
  int v12; // eax
  __int64 v13; // rdx
  DWORD WindowThreadProcessId; // ebx
  __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  HWND v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  GUID *v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h]
  __int64 v22; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v24; // [rsp+98h] [rbp+38h] BYREF
  HWND hWnd; // [rsp+A0h] [rbp+40h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+48h] BYREF

  *(_QWORD *)a3 = 0LL;
  v16 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  ApplicationViewsFromLayout = v7((struct IAppLayout *)a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v16);
  if ( ApplicationViewsFromLayout >= 0 )
  {
    if ( !(*(unsigned int (__fastcall **)(ScreenManagerHelpers *))(*(_QWORD *)this + 48LL))(this) )
    {
      ApplicationViewsFromLayout = -2147019873;
      goto LABEL_23;
    }
    v26 = 0LL;
    v19 = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v19);
    v10 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v26);
    ApplicationViewsFromLayout = TabletModePositionerHelpers::GetApplicationViewsFromLayout(
                                   this,
                                   (struct IAppLayout *)&hWnd,
                                   (unsigned int *)v10,
                                   (struct IApplicationView **)AddressOf);
    if ( ApplicationViewsFromLayout < 0 )
    {
LABEL_22:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v26);
      goto LABEL_23;
    }
    v17 = 0LL;
    ApplicationViewsFromLayout = Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(&v26, &v17);
    if ( ApplicationViewsFromLayout < 0 )
    {
LABEL_21:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
      goto LABEL_22;
    }
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v24 = 0;
    v11 = (int (__fastcall *)(struct IAppLayout *, GUID **))(*a2)[17];
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
    v21 = -1LL;
    v22 = -1LL;
    if ( v11((struct IAppLayout *)a2, &v20) >= 0
      && v20
      && LOWORD(v20->Data1)
      && (int)(*v26)[19](v26, v20, (__int64 *)&v24) >= 0
      && v24 )
    {
      v12 = (**v26)(v26, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, (__int64 *)a3);
      ApplicationViewsFromLayout = v12;
      if ( v12 < 0 )
      {
        v13 = 38LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
          (const char *)(unsigned int)v12);
      }
    }
    else
    {
      hWnd = 0LL;
      v18 = 0LL;
      ApplicationViewsFromLayout = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v17 + 24LL))(v17, &hWnd);
      if ( ApplicationViewsFromLayout < 0 )
        goto LABEL_20;
      ApplicationViewsFromLayout = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v16 + 24LL))(v16, &v18);
      if ( ApplicationViewsFromLayout < 0 )
        goto LABEL_20;
      WindowThreadProcessId = GetWindowThreadProcessId(hWnd, 0LL);
      if ( WindowThreadProcessId != GetWindowThreadProcessId(v18, 0LL) )
      {
        ApplicationViewsFromLayout = -2147467259;
        goto LABEL_20;
      }
      v12 = (**v26)(v26, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, (__int64 *)a3);
      ApplicationViewsFromLayout = v12;
      if ( v12 < 0 )
      {
        v13 = 52LL;
        goto LABEL_18;
      }
    }
LABEL_20:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
    goto LABEL_21;
  }
LABEL_23:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  return (unsigned int)ApplicationViewsFromLayout;
}
