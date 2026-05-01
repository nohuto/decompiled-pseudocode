/*
 * XREFs of ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800E562C
 * Callers:
 *     ?OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1801A1F50 (-OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1801062DC (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_2c78e3d2d08e88abfa65ae966e57a982_::operator() @ 0x180144938 (_lambda_2c78e3d2d08e88abfa65ae966e57a982_--operator().c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180144BF0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIBaseExperie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F194 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?get@?$static_lazy@VToastCenterLogging@@@details@wil@@QEAAPEAVToastCenterLogging@@P6AXXZ@Z @ 0x1801A9428 (-get@-$static_lazy@VToastCenterLogging@@@details@wil@@QEAAPEAVToastCenterLogging@@P6AXXZ@Z.c)
 *     ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801AA05C (-LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801BBB70 (-SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801BBBD4 (-SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RegisterForDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801E0B70 (-RegisterForDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA-AUfire_and_forget.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1804394F4 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CToastCenterExperienceManager::OnShellReady(CToastCenterExperienceManager *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, void *, GUID *, __int64 *); // rbx
  int v7; // eax
  int v8; // edi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD); // rdi
  int v11; // eax
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v13)(_QWORD, GUID *, char *); // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // eax
  unsigned __int64 v23; // r9
  const struct DiagnosticsInfo *v24; // [rsp+20h] [rbp-49h]
  _BYTE v25[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, char *); // [rsp+38h] [rbp-31h] BYREF
  __int64 v27; // [rsp+40h] [rbp-29h] BYREF
  __int64 v28; // [rsp+48h] [rbp-21h] BYREF
  int v29[2]; // [rsp+50h] [rbp-19h] BYREF
  int v30; // [rsp+5Ch] [rbp-Dh]
  _QWORD v31[3]; // [rsp+60h] [rbp-9h] BYREF
  HSTRING_HEADER v32; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v33; // [rsp+90h] [rbp+27h]
  __int64 *v34; // [rsp+98h] [rbp+2Fh]
  int v35; // [rsp+A0h] [rbp+37h]
  int v36; // [rsp+A4h] [rbp+3Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *((_BYTE *)this + 465) = 1;
  v2 = *((_QWORD *)this + 53);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)this + 53) = 0LL;
  }
  v3 = *(_DWORD **)(wil::details::static_lazy<ToastCenterLogging>::get(
                      v2,
                      _lambda_bf79752da0796684e7476bfa6049aec2_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v3 > 5u && tlgKeywordOn((__int64)v3, 0x200000000000LL) )
  {
    v28 = 0x1000000LL;
    v34 = &v28;
    v35 = 8;
    v36 = 0;
    tlgWriteTransfer_EventWriteTransfer(
      v4,
      (unsigned __int8 *)dword_18084A5D0,
      0LL,
      0LL,
      3u,
      (PEVENT_DATA_DESCRIPTOR)&v32);
  }
  v27 = 0LL;
  v5 = *((_QWORD *)this + 84);
  v6 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
  v7 = v6(v5, &unk_1808135C0, &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5, &v27);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x276,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v7,
      (int)v24);
    goto LABEL_21;
  }
  v26 = 0LL;
  v9 = v27;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v27 + 48LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v26);
  v33 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v32,
    L"Windows.Internal.ShellExperience.ActionCenter",
    0x2Eu,
    0x2Du);
  v11 = v10(v9, v33, &v26);
  v8 = v11;
  if ( v11 < 0 )
  {
    v20 = 634LL;
  }
  else
  {
    v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v26;
    v13 = **v26;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 90);
    v11 = v13(v12, &GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861, (char *)this + 720);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v14 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v15 = v14;
      if ( v14 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>>(v14);
        v15[2] = this;
        *v15 = off_1807BA9E0;
      }
      else
      {
        v15 = 0LL;
      }
      v28 = (__int64)v15;
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(**((_QWORD **)this + 90) + 64LL))(
              *((_QWORD *)this + 90),
              v15,
              (char *)this + 736);
      v8 = v16;
      if ( v16 < 0 )
      {
        v21 = 648LL;
      }
      else
      {
        v31[0] = &v27;
        v31[1] = &v26;
        v31[2] = this;
        v32.Reserved.Reserved1 = retaddr;
        *(_QWORD *)&v32.Reserved.Reserved2[8] = "pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp";
        *(_QWORD *)&v32.Reserved.Reserved2[16] = 0LL;
        LOWORD(v33) = 650;
        LOBYTE(v18) = 3;
        LOBYTE(v17) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
          v17,
          v18);
        wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v29);
        v22 = lambda_2c78e3d2d08e88abfa65ae966e57a982_::operator()(v31);
        v8 = v22;
        if ( v22 < 0 )
          wil::details::ReportFeatureError(
            (wil::details *)(unsigned int)v22,
            (int)v29,
            (struct wil::ThreadErrorContext *)0x1C53B1D,
            (unsigned int)&v32,
            v24);
        if ( *(_QWORD *)v29 )
          *(_DWORD *)(*(_QWORD *)v29 + 16LL) = v30;
        if ( v8 < 0 )
        {
          v23 = (unsigned int)v8;
          v21 = 693LL;
LABEL_37:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
            (const char *)v23,
            (int)v24);
LABEL_18:
          if ( v15 )
            (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
          goto LABEL_20;
        }
        v16 = CToastCenterExperienceManager::SubscribeToNewNotificationWnf(this);
        v8 = v16;
        if ( v16 < 0 )
        {
          v21 = 696LL;
        }
        else
        {
          v16 = CToastCenterExperienceManager::SubscribeToCriticalNotificationWnf(this);
          v8 = v16;
          if ( v16 < 0 )
          {
            v21 = 699LL;
          }
          else
          {
            v16 = CToastCenterExperienceManager::LookupToastQueue(this);
            v8 = v16;
            if ( v16 >= 0 )
            {
              CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync(this, v25);
              v8 = 0;
              goto LABEL_18;
            }
            v21 = 701LL;
          }
        }
      }
      v23 = (unsigned int)v16;
      goto LABEL_37;
    }
    v20 = 636LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v11,
    (int)v24);
LABEL_20:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v26);
LABEL_21:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
  return (unsigned int)v8;
}
