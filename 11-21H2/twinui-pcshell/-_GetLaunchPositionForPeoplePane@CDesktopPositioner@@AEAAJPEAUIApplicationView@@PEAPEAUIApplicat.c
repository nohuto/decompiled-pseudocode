/*
 * XREFs of ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1804FCE30
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_97c766e59a20c5e973ffeb930e3c2b3f__&_::Run @ 0x1801B49A0 (wil--details--functor_wrapper_void__lambda_97c766e59a20c5e973ffeb930e3c2b3f__-_--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18007A3FC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180098FE0 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?close_reset@?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@SAXPEAG@Z @ 0x18022A5AE (-close_reset@-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constant@_K$0A@.c)
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1804FC7A8 (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::_GetLaunchPositionForPeoplePane(
        CDesktopPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        struct IApplicationViewPosition **a3)
{
  __int64 *AddressOf; // rax
  struct IImmersiveApplication **v7; // r8
  int ApplicationFromView; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64, GUID *, __int64 *); // rdi
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD, LPVOID *); // r14
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  struct IApplicationViewPosition *v19; // rax
  void *v21; // [rsp+30h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-31h] BYREF
  __int64 v23; // [rsp+40h] [rbp-29h] BYREF
  __int64 v24; // [rsp+48h] [rbp-21h] BYREF
  int v25; // [rsp+50h] [rbp-19h] BYREF
  struct tagSIZE v26; // [rsp+58h] [rbp-11h] BYREF
  RECT rc; // [rsp+60h] [rbp-9h] BYREF
  RECT v28; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v29; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v24 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v24);
  ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)AddressOf, v7);
  v9 = ApplicationFromView;
  if ( ApplicationFromView >= 0 )
  {
    v23 = 0LL;
    v10 = v24;
    v11 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v24 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
    v12 = v11(v10, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v23);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x581,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v12);
LABEL_24:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
      goto LABEL_25;
    }
    v13 = 0;
    pv = 0LL;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 32LL))(v23, &v25) < 0 )
      goto LABEL_12;
    v13 = ~v25;
    v14 = *((_QWORD *)this + 38);
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, LPVOID *))(*(_QWORD *)v14 + 96LL);
    pv = 0LL;
    v16 = v15(v14, (unsigned int)~v25, &pv);
    v9 = v16;
    if ( v16 < 0 )
    {
      v17 = 1417LL;
      goto LABEL_18;
    }
    if ( v13 && pv )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, LPVOID, RECT *))(**((_QWORD **)this + 38) + 112LL))(
              *((_QWORD *)this + 38),
              pv,
              &v28);
      v9 = v16;
      if ( v16 < 0 )
      {
        v17 = 1429LL;
        goto LABEL_18;
      }
    }
    else
    {
LABEL_12:
      v16 = (*(__int64 (__fastcall **)(_QWORD, RECT *))(**((_QWORD **)this + 38) + 120LL))(*((_QWORD *)this + 38), &v28);
      v9 = v16;
      if ( v16 < 0 )
      {
        v17 = 1425LL;
        goto LABEL_18;
      }
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tagSIZE *))(**((_QWORD **)this + 38) + 104LL))(
            *((_QWORD *)this + 38),
            v13,
            &v26);
    v9 = v16;
    if ( v16 >= 0 )
    {
      rc = v28;
      v16 = CDesktopPositioner::_CalculateTaskbarFlyoutPosition(this, &rc, v26, &v29);
      v9 = v16;
      if ( v16 >= 0 )
      {
        v21 = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
        v18 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                &v21,
                &v29);
        v9 = v18;
        if ( v18 >= 0 )
        {
          v19 = (struct IApplicationViewPosition *)v21;
          v21 = 0LL;
          *a3 = v19;
          v9 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59F,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v18);
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
        goto LABEL_23;
      }
      v17 = 1436LL;
    }
    else
    {
      v17 = 1433LL;
    }
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v16);
LABEL_23:
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&pv);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x57E,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)ApplicationFromView);
LABEL_25:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  return v9;
}
