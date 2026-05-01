/*
 * XREFs of ?StartGipControllerWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x180407A1C
 * Callers:
 *     ?StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1800A8F58 (-StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x1804003E8 (-HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVGipControllerWatcher@Gaming@Internal@Windows@@PEAVGipSystemButtonEventArgs@234@@Foundation@Windows@@V_lambda_baaf4cb12b19c908b42db85550aea0de_@@$0?0PEAUIGipControllerWatcher@Gaming@Internal@3@PEAUIGipSystemButtonEventArgs@673@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVGipControllerWatcher@Gaming@Internal@Windows@@PEAUIGipControllerWatcher@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVGipSystemButtonEventArgs@Gaming@Internal@Windows@@PEAUIGipSystemButtonEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUIGipControllerWatcher@Gaming@Internal@3@PEAUIGipSystemButtonEventArgs@563@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_baaf4cb12b19c908b42db85550aea0de_@@@Z @ 0x1803F82C4 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVGipControllerWatcher@Gaming@Internal@Windows.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GamingOverlayExperienceManager::StartGipControllerWatcher(_QWORD *a1)
{
  _QWORD *v2; // r14
  _QWORD *v3; // r15
  __int64 v4; // rbx
  int ActivationFactory; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  void *v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+28h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v2 = a1 + 30;
  if ( !a1[30] )
  {
    v3 = a1 + 28;
    if ( !a1[28] )
    {
      v12 = 0LL;
      v15 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Internal.Gaming.GipControllerWatcher",
        0x2Du,
        0x2Cu);
      v4 = v15;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
      ActivationFactory = RoGetActivationFactory(v4, &GUID_d738e8ac_c3c8_4864_bdaa_20714029ed19, &v12);
      v6 = ActivationFactory;
      if ( ActivationFactory >= 0 )
      {
        ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 64LL))(v12, v2);
        v6 = ActivationFactory;
        if ( ActivationFactory >= 0 )
        {
          *(_QWORD *)&v13 = GamingOverlayExperienceManager::OnRawSystemButtonEvent;
          DWORD2(v13) = 0;
          hstringHeader.Reserved.Reserved1 = a1;
          *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v13;
          v8 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v8 )
            v9 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Gaming::GipControllerWatcher *,Windows::Internal::Gaming::IGipControllerWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::Gaming::GipSystemButtonEventArgs *,Windows::Internal::Gaming::IGipSystemButtonEventArgs *>>::*)(Windows::Internal::Gaming::IGipControllerWatcher *,Windows::Internal::Gaming::IGipSystemButtonEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Gaming::GipControllerWatcher *,Windows::Internal::Gaming::GipSystemButtonEventArgs *>,_lambda_baaf4cb12b19c908b42db85550aea0de_,-1,Windows::Internal::Gaming::IGipControllerWatcher *,Windows::Internal::Gaming::IGipSystemButtonEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Gaming::GipControllerWatcher *,Windows::Internal::Gaming::GipSystemButtonEventArgs *>,_lambda_baaf4cb12b19c908b42db85550aea0de_,-1,Windows::Internal::Gaming::IGipControllerWatcher *,Windows::Internal::Gaming::IGipSystemButtonEventArgs *>(
                   (__int64)v8,
                   (__int64)&hstringHeader);
          else
            v9 = 0LL;
          *(_QWORD *)&v13 = v9;
          v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)*v2 + 48LL))(*v2, v9, v3);
          v6 = v10;
          if ( v10 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1247,
              (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
              (const char *)(unsigned int)v10);
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          goto LABEL_15;
        }
        v7 = 4668LL;
      }
      else
      {
        v7 = 4666LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_15:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
      return v6;
    }
  }
  return 0LL;
}
