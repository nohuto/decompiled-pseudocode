/*
 * XREFs of ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804AFFB4
 * Callers:
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804AECE8 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804A4310 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITas_ea_1804A4310.c)
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemEventArgs@@@Z @ 0x1804A7708 (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArg.c)
 *     ??$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$T@Details@WRL@Microsoft@@YAJPEAPEAVViewHostItemEventArgs@@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$QEA$$T@Z @ 0x1804A8188 (--$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Int.c)
 *     _LogEventWithViewHostItemData__ @ 0x1804A96F8 (_LogEventWithViewHostItemData__.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::_RaiseViewAdded(HolographicPositioner *this, struct IApplicationView *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  v13 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 35);
  v4 = *v3;
  v13 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, char *, __int64 *))(v4 + 48))(
         v3,
         a2,
         (char *)this + 288,
         &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 1512LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_14;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 34) + 56LL))(*((_QWORD *)this + 34), v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 1514LL;
    goto LABEL_5;
  }
  LogEventWithViewHostItemData__(
    v13,
    (void (__fastcall *)(PCWSTR *, int *))HolographicPositionerTelemetry::HolographicViewAdded<unsigned short const *,unsigned int &>);
  v15 = 0LL;
  v14 = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<ViewHostItemEventArgs,ViewHostItemEventArgs,enum Windows::Internal::Shell::Holographic::ViewHostItemEventType const &,std::nullptr_t>(
         &v14,
         dword_180894DC8,
         &v15);
  v6 = v8;
  v9 = v14;
  if ( v8 < 0 )
  {
    v10 = 1519LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_12;
  }
  v15 = v13;
  v8 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Windows::Internal::Shell::Holographic::IViewHostItem *,ViewHostItemEventArgs *>(
         (char *)this + 304,
         (volatile int *)&v15,
         &v14);
  v6 = v8;
  if ( v8 < 0 )
  {
    v10 = 1520LL;
    goto LABEL_10;
  }
  v6 = 0;
LABEL_12:
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::Release(v9);
LABEL_14:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  return v6;
}
