/*
 * XREFs of ?UnsubscribeFromServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180084810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180118258 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopComponent::UnsubscribeFromServices(
        CVirtualDesktopComponent *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  int v21; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v28; // [rsp+50h] [rbp+20h] BYREF
  char v29; // [rsp+60h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13), &v29);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 15) + 232LL))(*((_QWORD *)this + 15), 0LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x162,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v4,
      v26);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14), 0LL);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x163,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v5,
      v26);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 20) + 24LL))(*((_QWORD *)this + 20), 0LL);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x164,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v6,
      v26);
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), 0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x165,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v7,
      v26);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24));
  v10 = *((_QWORD *)this + 22);
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 72LL))(v10, 0LL);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x16A,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v11,
        v26);
  }
  if ( *((_DWORD *)this + 61) )
  {
    v28 = 0LL;
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v28);
    v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
            a2,
            &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &v28);
    v14 = retaddr;
    if ( v13 < 0 )
    {
      v23 = 368LL;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 32LL))(v28, *((unsigned int *)this + 61));
      v14 = retaddr;
      if ( v13 >= 0 )
      {
LABEL_15:
        *((_DWORD *)this + 61) = 0;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v28);
        goto LABEL_16;
      }
      v23 = 370LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v14,
      (void *)v23,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v13,
      v26);
    goto LABEL_15;
  }
LABEL_16:
  if ( !*((_DWORD *)this + 62) )
    goto LABEL_20;
  v28 = 0LL;
  v15 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v28);
  v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v15)(
          a2,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &v28);
  v17 = retaddr;
  if ( v16 < 0 )
  {
    v24 = 378LL;
LABEL_34:
    wil::details::in1diag3::_Log_Hr(
      v17,
      (void *)v24,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v16,
      v26);
    goto LABEL_19;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 80LL))(v28, *((unsigned int *)this + 62));
  v17 = retaddr;
  if ( v16 < 0 )
  {
    v24 = 380LL;
    goto LABEL_34;
  }
LABEL_19:
  *((_DWORD *)this + 62) = 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v28);
LABEL_20:
  if ( !*((_DWORD *)this + 63) )
    goto LABEL_24;
  v28 = 0LL;
  v18 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
  v19 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v18)(
          a2,
          &GUID_5090de35_ed23_43be_9714_586c5041026a,
          &GUID_5090de35_ed23_43be_9714_586c5041026a,
          &v28);
  v20 = retaddr;
  if ( v19 < 0 )
  {
    v25 = 388LL;
LABEL_37:
    wil::details::in1diag3::_Log_Hr(
      v20,
      (void *)v25,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v19,
      v26);
    goto LABEL_23;
  }
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 32LL))(v28, *((unsigned int *)this + 63));
  v20 = retaddr;
  if ( v19 < 0 )
  {
    v25 = 390LL;
    goto LABEL_37;
  }
LABEL_23:
  *((_DWORD *)this + 63) = 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
LABEL_24:
  LOBYTE(v9) = 3;
  LOBYTE(v8) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VDSLTest>::GetImpl'::`2'::impl,
    v8,
    v9);
  if ( *((_BYTE *)this + 240) )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18F,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v21,
        v26);
    *((_BYTE *)this + 240) = 0;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v29);
  return 0LL;
}
