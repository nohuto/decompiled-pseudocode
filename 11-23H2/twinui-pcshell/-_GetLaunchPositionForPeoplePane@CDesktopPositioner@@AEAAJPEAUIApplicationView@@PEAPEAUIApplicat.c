/*
 * XREFs of ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1805B5590
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_a0ddf70ccc630128835bd0152b09c205__&_::Run @ 0x180212ED0 (wil--details--functor_wrapper_void__lambda_a0ddf70ccc630128835bd0152b09c205__-_--Run.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18003064C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ??0CCommonApplicationViewPosition@@QEAA@XZ @ 0x180031094 (--0CCommonApplicationViewPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x180031130 (-Attach@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180044940 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x180057AC8 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1805B4F08 (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::_GetLaunchPositionForPeoplePane(
        CDesktopPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        struct IApplicationViewPosition **a3)
{
  __int64 *AddressOf; // rax
  struct IImmersiveApplication **v8; // r8
  int ApplicationFromView; // eax
  int v10; // ebx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, GUID *, __int64 *); // rdi
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, _QWORD, void **); // rbx
  void **v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  CCommonApplicationViewPosition *v20; // rax
  CCommonApplicationViewPosition *v21; // rax
  __int64 v22; // rcx
  struct IApplicationViewPosition *v23; // rax
  struct IApplicationViewPosition *v24; // [rsp+30h] [rbp-39h] BYREF
  __int64 v25; // [rsp+38h] [rbp-31h] BYREF
  RECT rc; // [rsp+40h] [rbp-29h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-19h] BYREF
  __int64 v28; // [rsp+58h] [rbp-11h] BYREF
  int v29; // [rsp+60h] [rbp-9h] BYREF
  struct tagSIZE v30; // [rsp+68h] [rbp-1h] BYREF
  RECT v31; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v32; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *a3 = 0LL;
  if ( !*((_QWORD *)this + 42) )
    return 2147943568LL;
  v28 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v28);
  ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)AddressOf, v8);
  v10 = ApplicationFromView;
  if ( ApplicationFromView >= 0 )
  {
    v25 = 0LL;
    v11 = v28;
    v12 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v28 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
    v13 = v12(v11, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v25);
    v10 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C1,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v13);
LABEL_29:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
      goto LABEL_30;
    }
    v14 = 0;
    pv = 0LL;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 32LL))(v25, &v29) < 0 )
      goto LABEL_14;
    v14 = ~v29;
    v15 = *((_QWORD *)this + 42);
    v16 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v15 + 96LL);
    v17 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
    v18 = v16(v15, v14, v17);
    v10 = v18;
    if ( v18 < 0 )
    {
      v19 = 1737LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v18);
      goto LABEL_27;
    }
    if ( v14 && pv )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, LPVOID, RECT *))(**((_QWORD **)this + 42) + 112LL))(
              *((_QWORD *)this + 42),
              pv,
              &v31);
      v10 = v18;
      if ( v18 < 0 )
      {
        v19 = 1749LL;
        goto LABEL_20;
      }
    }
    else
    {
LABEL_14:
      v18 = (*(__int64 (__fastcall **)(_QWORD, RECT *))(**((_QWORD **)this + 42) + 120LL))(*((_QWORD *)this + 42), &v31);
      v10 = v18;
      if ( v18 < 0 )
      {
        v19 = 1745LL;
        goto LABEL_20;
      }
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tagSIZE *))(**((_QWORD **)this + 42) + 104LL))(
            *((_QWORD *)this + 42),
            v14,
            &v30);
    v10 = v18;
    if ( v18 < 0 )
    {
      v19 = 1753LL;
      goto LABEL_20;
    }
    rc = v31;
    v18 = CDesktopPositioner::_CalculateTaskbarFlyoutPosition(this, &rc, v30, &v32);
    v10 = v18;
    if ( v18 < 0 )
    {
      v19 = 1756LL;
      goto LABEL_20;
    }
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
    v24 = 0LL;
    v20 = (CCommonApplicationViewPosition *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)&rc.left = v20;
    if ( v20 )
    {
      v21 = CCommonApplicationViewPosition::CCommonApplicationViewPosition(v20);
      *(_QWORD *)&rc.left = 0LL;
      Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&rc, (__int64)v21);
      v22 = *(_QWORD *)&rc.left;
      *(struct tagRECT *)(*(_QWORD *)&rc.left + 16LL) = v32;
      v10 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
              v22,
              (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
              &v24);
      Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease((__int64 *)&rc.left);
      if ( v10 >= 0 )
      {
        v23 = v24;
        v24 = 0LL;
        *a3 = v23;
        v10 = 0;
        goto LABEL_26;
      }
    }
    else
    {
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&rc);
      v10 = -2147024882;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6DF,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v10);
LABEL_26:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
LABEL_27:
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6BE,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)ApplicationFromView);
LABEL_30:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v28);
  return (unsigned int)v10;
}
