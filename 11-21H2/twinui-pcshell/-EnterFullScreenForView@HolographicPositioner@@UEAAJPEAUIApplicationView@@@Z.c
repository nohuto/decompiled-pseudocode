/*
 * XREFs of ?EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803CE2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803CA298 (--$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@-$ComPtr@UIViewHostItem.c)
 *     _LogEventWithViewHostItemData__ @ 0x1803CC618 (_LogEventWithViewHostItemData__.c)
 *     ?_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D13E0 (-_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1803D1ADC (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::EnterFullScreenForView(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  HolographicPositioner *v3; // rsi
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = (HolographicPositioner *)((char *)this - 128);
  HolographicPositioner::_FindViewHostItem((char *)this - 128, &v10, a2);
  if ( !v10 )
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x410,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL);
    goto LABEL_10;
  }
  LogEventWithViewHostItemData__(
    (__int64)v10,
    (void (__fastcall *)(PCWSTR *, int *))HolographicPositionerTelemetry::EnterFullScreenForView<unsigned short const *,unsigned int &>);
  v11 = 0LL;
  v5 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal>(
         &v10,
         &v11);
  v4 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 104LL))(v11);
    v4 = v5;
    if ( v5 >= 0 )
    {
      HolographicPositioner::_EnsureHolographicViewConfiguration(v3, a2);
      v4 = 0;
      goto LABEL_9;
    }
    v6 = 1047LL;
  }
  else
  {
    v6 = 1046LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v5);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
LABEL_10:
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[2])(v7);
  }
  return v4;
}
