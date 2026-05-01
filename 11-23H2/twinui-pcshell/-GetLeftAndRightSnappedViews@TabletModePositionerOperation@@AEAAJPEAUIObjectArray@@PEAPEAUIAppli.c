/*
 * XREFs of ?GetLeftAndRightSnappedViews@TabletModePositionerOperation@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@1@Z @ 0x1805CB4BC
 * Callers:
 *     ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x1805CAE10 (-CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArr.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModePositionerOperation::GetLeftAndRightSnappedViews(
        TabletModePositionerOperation *this,
        struct IObjectArray *a2,
        struct IApplicationView **a3,
        struct IApplicationView **a4)
{
  HRESULT v8; // eax
  unsigned int v9; // ebx
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // rbx
  int v11; // eax
  HRESULT (__stdcall *v12)(IObjectArray *, UINT, const IID *const, void **); // rbx
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // ebx
  int v17; // r15d
  int v18; // edi
  int v19; // eax
  struct IApplicationView *v21; // [rsp+30h] [rbp-29h] BYREF
  struct IApplicationView *v22; // [rsp+38h] [rbp-21h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v24[40]; // [rsp+48h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a3 = 0LL;
  *a4 = 0LL;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8), v24);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v8 = IUnknown_QueryService(
         *((IUnknown **)this + 2),
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         &ppvOut);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v22 = 0LL;
    GetAt = a2->lpVtbl->GetAt;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
    v11 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, struct IApplicationView **))GetAt)(
            a2,
            0LL,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v22);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x158,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
        (const char *)(unsigned int)v11);
LABEL_17:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
      goto LABEL_18;
    }
    v21 = 0LL;
    v12 = a2->lpVtbl->GetAt;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
    v13 = ((__int64 (__fastcall *)(struct IObjectArray *, __int64, GUID *, struct IApplicationView **))v12)(
            a2,
            1LL,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v21);
    v9 = v13;
    if ( v13 < 0 )
    {
      v14 = (unsigned int)v13;
      v15 = 347LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
        (const char *)v14);
      goto LABEL_16;
    }
    v16 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, v22);
    v17 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, v22);
    v18 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, v21);
    v19 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, v21);
    if ( v16 && v19 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
      *a3 = v22;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
      *a4 = v21;
    }
    else
    {
      if ( !v17 || !v18 )
      {
        v9 = -2147024809;
        v14 = 2147942487LL;
        v15 = 367LL;
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
      *a4 = v22;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
      *a3 = v21;
    }
    v9 = 0;
LABEL_16:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x155,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
    (const char *)(unsigned int)v8);
LABEL_18:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  return v9;
}
