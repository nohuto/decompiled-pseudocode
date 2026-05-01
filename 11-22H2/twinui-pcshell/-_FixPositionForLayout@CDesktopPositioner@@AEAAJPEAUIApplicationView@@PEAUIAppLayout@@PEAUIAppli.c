/*
 * XREFs of ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x1805B51A0
 * Callers:
 *     _lambda_8b454e1137a63a08af271cf145abd5bf_::operator() @ 0x1805B274C (_lambda_8b454e1137a63a08af271cf145abd5bf_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x180076D54 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAU3@H@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@1$$QEAH@Z @ 0x1805B2118 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUta.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x1805B23E0 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_1805B23E0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::_FixPositionForLayout(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IAppLayout *a3,
        struct IApplicationViewPosition *a4,
        struct IApplicationViewPosition **a5)
{
  bool v7; // si
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(struct IAppLayout *, struct IApplicationView *, __int64 *, _QWORD); // rbx
  int v12; // eax
  __int64 v13; // rdx
  struct IApplicationViewPosition *v14; // rax
  struct IApplicationViewPosition *v16; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+48h] [rbp-38h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h] BYREF
  __int128 v21; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *a5 = 0LL;
  v16 = a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
  if ( (*(unsigned int (__fastcall **)(struct IAppLayout *))(*(_QWORD *)a3 + 40LL))(a3)
    || !(*(unsigned int (__fastcall **)(struct IAppLayout *, struct IApplicationView *))(*(_QWORD *)a3 + 184LL))(a3, a2) )
  {
    goto LABEL_20;
  }
  v7 = (*(unsigned int (__fastcall **)(struct IAppLayout *))(*(_QWORD *)a3 + 48LL))(a3) != 0;
  v19 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v16,
              &v19) < 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IApplicationViewPosition *, __int128 *))(*(_QWORD *)v16 + 24LL))(v16, &v20);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 2282LL;
      goto LABEL_11;
    }
LABEL_8:
    if ( v7 )
    {
      v17 = 3;
      v8 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
             (__int64 *)&v16,
             (unsigned int *)&v17,
             &v20);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 2287LL;
        goto LABEL_11;
      }
      goto LABEL_19;
    }
    v18 = 0LL;
    v11 = *(__int64 (__fastcall **)(struct IAppLayout *, struct IApplicationView *, __int64 *, _QWORD))(*(_QWORD *)a3 + 152LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    v12 = v11(a3, a2, &v18, 0LL);
    v9 = v12;
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v18 + 56LL))(v18, 0LL, &v21);
      v17 = 3;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
      v12 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,tagRECT &,tagRECT &,int>(
              (void **)&v16,
              &v21,
              &v20,
              &v17);
      v9 = v12;
      if ( v12 >= 0 )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
LABEL_19:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
LABEL_20:
        v14 = v16;
        v16 = 0LL;
        *a5 = v14;
        v9 = 0;
        goto LABEL_21;
      }
      v13 = 2300LL;
    }
    else
    {
      v13 = 2296LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    goto LABEL_17;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v19 + 56LL))(v19, &v20);
  v9 = v8;
  if ( v8 >= 0 )
    goto LABEL_8;
  v10 = 2278LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v8);
LABEL_17:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
LABEL_21:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
  return v9;
}
