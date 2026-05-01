/*
 * XREFs of ?Initialize@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJXZ @ 0x1804AC1F4
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_baf814ee9ae89b980ad734f70dac785d_@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1804A70C0 (-_lambda_invoker_cdecl_@_lambda_baf814ee9ae89b980ad734f70dac785d_@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEventInvocationContext@details@wil@@@Z @ 0x1804A8100 (--$MakeAndInitialize@V-$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::Initialize(
        __int64 a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 (__fastcall *v5)(__int64, __int64); // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 32) )
  {
    v1 = *(_QWORD *)(a1 + 40);
    if ( !v1 )
    {
      v2 = -2147024882;
      v3 = 680LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (int)"onecore\\internal\\sdk\\inc\\wil\\WrlEvent.h",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
    v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 48LL);
    v6 = a1 + 48;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 48));
    v2 = v5(v1, v6);
    if ( v2 < 0 )
    {
      v3 = 681LL;
      goto LABEL_4;
    }
  }
  else
  {
    v7 = (_QWORD *)(a1 + 48);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 48));
    v2 = Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContext<1>,wil::details::IEventInvocationContext,>(v7);
    if ( v2 < 0 )
    {
      v3 = 685LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
