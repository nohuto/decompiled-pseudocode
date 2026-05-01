/*
 * XREFs of ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEventInvocationContext@details@wil@@@Z @ 0x1804A8100
 * Callers:
 *     ?GetEventInvocationContext@?$EventInvocationContextProvider@$00@details@wil@@UEAAJPEAPEAUIEventInvocationContext@23@@Z @ 0x1804AB810 (-GetEventInvocationContext@-$EventInvocationContextProvider@$00@details@wil@@UEAAJPEAPEAUIEventI.c)
 *     ?Initialize@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJXZ @ 0x1804AC1F4 (-Initialize@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Intern.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802D4390 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVis_ea_1802D4390.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIEventInvocationContext@details@wil@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIEventInvocationContext@details@wil@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804A73A4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIEventInvocation.c)
 *     ??0?$EventInvocationContext@$00@details@wil@@QEAA@XZ @ 0x1804A9954 (--0-$EventInvocationContext@$00@details@wil@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@?$EventInvocationContext@$00@details@wil@@QEAAJXZ @ 0x1804AD0B0 (-RuntimeClassInitialize@-$EventInvocationContext@$00@details@wil@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContext<1>,wil::details::IEventInvocationContext,>(
        _QWORD *a1)
{
  void *v2; // rax
  int v3; // ebx
  void *v4; // rdi

  *a1 = 0LL;
  v2 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = (void *)wil::details::EventInvocationContext<1>::EventInvocationContext<1>(v2);
    v3 = wil::details::EventInvocationContext<1>::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,wil::details::IEventInvocationContext,Microsoft::WRL::FtmBase>>(
             (__int64)v4,
             &GUID_da6f771e_d39d_405e_aa6c_1a3cccb72a39,
             a1);
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release((__int64)v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
