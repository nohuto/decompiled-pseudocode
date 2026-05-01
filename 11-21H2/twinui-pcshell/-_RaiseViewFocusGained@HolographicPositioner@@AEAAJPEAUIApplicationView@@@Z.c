/*
 * XREFs of ?_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D323C
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18009CA90 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemEventArgs@@@Z @ 0x1803CA684 (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArg.c)
 *     ??$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$T@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@@012@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$QEA$$T@Z @ 0x1803CB1CC (--$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holograp_ea_1803CB1CC.c)
 *     ?InternalRelease@?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1803CF41C (-InternalRelease@-$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1803D1ADC (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicPositioner::_RaiseViewFocusGained(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-10h] BYREF
  __int64 v9; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 v12; // [rsp+58h] [rbp+28h] BYREF

  HolographicPositioner::_FindViewHostItem((__int64)this, &v12);
  if ( v12 )
  {
    v11 = 0LL;
    v8 = 0LL;
    v3 = Microsoft::WRL::Details::MakeAndInitialize<ViewHostItemEventArgs,ViewHostItemEventArgs,enum Windows::Internal::Shell::Holographic::ViewHostItemEventType const &,std::nullptr_t>(
           &v11,
           &dword_1806E13A4,
           &v8);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 1598LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v3);
      Microsoft::WRL::ComPtr<ViewHostItemEventArgs>::InternalRelease(&v11);
      goto LABEL_9;
    }
    v8 = v11;
    v9 = v12;
    v3 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Windows::Internal::Shell::Holographic::IViewHostItem *,ViewHostItemEventArgs *>(
           (char *)this + 312,
           (volatile int *)&v9,
           &v8);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 1599LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<ViewHostItemEventArgs>::InternalRelease(&v11);
  }
  v4 = 0;
LABEL_9:
  v6 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v4;
}
