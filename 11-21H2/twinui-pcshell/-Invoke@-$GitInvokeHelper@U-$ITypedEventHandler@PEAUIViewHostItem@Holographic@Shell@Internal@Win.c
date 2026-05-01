/*
 * XREFs of ?Invoke@?$GitInvokeHelper@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@UEAAJPEAUIViewHostItem@Holographic@Shell@34@PEAUIViewHostItemEventArgs@6734@@Z @ 0x1803CF470
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EF16C (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>>,2>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  Microsoft::WRL::AgileRef *v5; // rbx
  int v6; // ebx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = (Microsoft::WRL::AgileRef *)(a1 + 48);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  if ( *(_QWORD *)v5 )
  {
    v6 = Microsoft::WRL::AgileRef::InternalResolve(v5, &GUID_51138146_2222_5c17_8573_ba988d39cbe4, &v8);
    if ( v6 >= 0 )
      v6 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, a2, a3);
  }
  else
  {
    v8 = 0LL;
    v6 = -2147024809;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v6;
}
