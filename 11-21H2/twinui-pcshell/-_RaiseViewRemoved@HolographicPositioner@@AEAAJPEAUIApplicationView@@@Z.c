/*
 * XREFs of ?_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D341C
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18009CA90 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D2038 (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803CA298 (--$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@-$ComPtr@UIViewHostItem.c)
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemEventArgs@@@Z @ 0x1803CA684 (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArg.c)
 *     ??$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$T@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@@012@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$QEA$$T@Z @ 0x1803CB1CC (--$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holograp_ea_1803CB1CC.c)
 *     _LogEventWithViewHostItemData__ @ 0x1803CC618 (_LogEventWithViewHostItemData__.c)
 *     ?InternalRelease@?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1803CF41C (-InternalRelease@-$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::_RaiseViewRemoved(HolographicPositioner *this, struct IApplicationView *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 35);
  if ( v3 )
  {
    (*v3)[9](v3, (GUID *)&v13, (__int64 *)a2);
    v3 = v13;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v3 )
  {
    LogEventWithViewHostItemData__(
      (__int64)v3,
      (void (__fastcall *)(PCWSTR *, int *))HolographicPositionerTelemetry::HolographicViewRemoved<unsigned short const *,unsigned int &>);
    v14 = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal>(
           &v13,
           &v14);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1547LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v4);
LABEL_17:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      v3 = v13;
      goto LABEL_20;
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 80LL))(v14);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1548LL;
      goto LABEL_9;
    }
    v15 = 0LL;
    v10 = 0LL;
    v7 = Microsoft::WRL::Details::MakeAndInitialize<ViewHostItemEventArgs,ViewHostItemEventArgs,enum Windows::Internal::Shell::Holographic::ViewHostItemEventType const &,std::nullptr_t>(
           &v15,
           &dword_1806E139C,
           &v10);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 1552LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<ViewHostItemEventArgs>::InternalRelease(&v15);
      goto LABEL_17;
    }
    v10 = v15;
    v11 = v13;
    v7 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Windows::Internal::Shell::Holographic::IViewHostItem *,ViewHostItemEventArgs *>(
           (char *)this + 312,
           (volatile int *)&v11,
           &v10);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 1553LL;
      goto LABEL_16;
    }
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 120LL))(v14);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 1556LL;
      goto LABEL_16;
    }
    Microsoft::WRL::ComPtr<ViewHostItemEventArgs>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    v3 = v13;
  }
  v5 = 0;
LABEL_20:
  if ( v3 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v3)[2])(v3);
  }
  return v5;
}
