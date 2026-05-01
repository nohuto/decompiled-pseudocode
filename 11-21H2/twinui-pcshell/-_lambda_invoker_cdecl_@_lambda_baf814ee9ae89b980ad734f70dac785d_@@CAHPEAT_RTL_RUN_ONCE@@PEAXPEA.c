/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_baf814ee9ae89b980ad734f70dac785d_@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1803CA0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJXZ @ 0x1803CF214 (-Initialize@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Intern.c)
 */

__int64 __fastcall _lambda_baf814ee9ae89b980ad734f70dac785d_::_lambda_invoker_cdecl_(
        PINIT_ONCE InitOnce,
        PVOID Parameter,
        PVOID *Context)
{
  unsigned int v3; // ebx
  signed int v4; // eax

  v3 = 0;
  if ( Context )
    *Context = 0LL;
  v4 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::Initialize(Parameter);
  if ( v4 >= 0 )
    return 1;
  else
    SetLastError(v4);
  return v3;
}
