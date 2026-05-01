/*
 * XREFs of ?UnsubscribeFromServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x18005D0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005D764 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CVirtualDesktopComponent::UnsubscribeFromServices(
        CVirtualDesktopComponent *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  int v28; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v30; // [rsp+50h] [rbp+20h] BYREF
  char v31; // [rsp+60h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13), &v31);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 15) + 216LL))(*((_QWORD *)this + 15), 0LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x184,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v4,
      v28);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14), 0LL);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x185,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v5,
      v28);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 20) + 24LL))(*((_QWORD *)this + 20), 0LL);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x186,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v6,
      v28);
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), 0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x187,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v7,
      v28);
  v8 = *((_QWORD *)this + 25);
  if ( v8 )
  {
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, 0LL);
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18A,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v24,
        v28);
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24));
  v9 = *((_QWORD *)this + 22);
  if ( v9 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 72LL))(v9, 0LL);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x190,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v10,
        v28);
  }
  if ( *((_DWORD *)this + 65) )
  {
    v30 = 0LL;
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
    v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
            a2,
            &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &v30);
    v13 = retaddr;
    if ( v12 < 0 )
    {
      v25 = 406LL;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 32LL))(v30, *((unsigned int *)this + 65));
      v13 = retaddr;
      if ( v12 >= 0 )
      {
LABEL_16:
        *((_DWORD *)this + 65) = 0;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
        goto LABEL_17;
      }
      v25 = 408LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v13,
      (void *)v25,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v12,
      v28);
    goto LABEL_16;
  }
LABEL_17:
  if ( !*((_DWORD *)this + 66) )
    goto LABEL_21;
  v30 = 0LL;
  v14 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
  v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v14)(
          a2,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &v30);
  v16 = retaddr;
  if ( v15 < 0 )
  {
    v26 = 416LL;
LABEL_37:
    wil::details::in1diag3::_Log_Hr(
      v16,
      (void *)v26,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v15,
      v28);
    goto LABEL_20;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 80LL))(v30, *((unsigned int *)this + 66));
  v16 = retaddr;
  if ( v15 < 0 )
  {
    v26 = 418LL;
    goto LABEL_37;
  }
LABEL_20:
  *((_DWORD *)this + 66) = 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
LABEL_21:
  if ( !*((_DWORD *)this + 67) )
    goto LABEL_25;
  v30 = 0LL;
  v17 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
  v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v17)(
          a2,
          &GUID_5090de35_ed23_43be_9714_586c5041026a,
          &GUID_5090de35_ed23_43be_9714_586c5041026a,
          &v30);
  v19 = retaddr;
  if ( v18 < 0 )
  {
    v27 = 426LL;
LABEL_40:
    wil::details::in1diag3::_Log_Hr(
      v19,
      (void *)v27,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v18,
      v28);
    goto LABEL_24;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 32LL))(v30, *((unsigned int *)this + 67));
  v19 = retaddr;
  if ( v18 < 0 )
  {
    v27 = 428LL;
    goto LABEL_40;
  }
LABEL_24:
  *((_DWORD *)this + 67) = 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
LABEL_25:
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0LL);
  LOBYTE(v20) = 3;
  LOBYTE(v21) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VDSLTest>::GetImpl'::`2'::impl,
    v21,
    v20);
  if ( *((_BYTE *)this + 256) )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 24LL))(*((_QWORD *)this + 30));
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C3,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v22,
        v28);
    *((_BYTE *)this + 256) = 0;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v31);
  return 0LL;
}
