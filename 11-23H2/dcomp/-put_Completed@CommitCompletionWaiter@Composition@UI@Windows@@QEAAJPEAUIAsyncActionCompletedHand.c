/*
 * XREFs of ?put_Completed@CommitCompletionWaiter@Composition@UI@Windows@@QEAAJPEAUIAsyncActionCompletedHandler@Foundation@4@@Z @ 0x180064AA4
 * Callers:
 *     ?put_Completed@AsyncAction@CommitCompletionWaiter@Composition@UI@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@5@@Z @ 0x180064A40 (-put_Completed@AsyncAction@CommitCompletionWaiter@Composition@UI@Windows@@UEAAJPEAUIAsyncActionC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??$CreateAgileHelper@UIAsyncActionCompletedHandler@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAUIAsyncActionCompletedHandler@Foundation@Windows@@PEAPEAU345@@Z @ 0x180064B50 (--$CreateAgileHelper@UIAsyncActionCompletedHandler@Foundation@Windows@@@Details@WRL@Microsoft@@Y.c)
 *     ?AddInternal@?$EventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIAsyncActionCompletedHandler@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180064DA4 (-AddInternal@-$EventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U-$InvokeModeOption.c)
 */

__int64 __fastcall Windows::UI::Composition::CommitCompletionWaiter::put_Completed(
        Windows::UI::Composition::CommitCompletionWaiter *this,
        struct Windows::Foundation::IAsyncActionCompletedHandler *a2)
{
  int v4; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  if ( *((_QWORD *)this + 26) )
  {
    v4 = -2147483634;
    v6 = 51LL;
  }
  else
  {
    if ( a2 )
    {
      v8 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v8);
      v4 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IAsyncActionCompletedHandler>(a2, &v8);
      if ( v4 >= 0 )
      {
        if ( v8 )
          v4 = Microsoft::WRL::EventSource<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
                 (char *)this + 184,
                 v8,
                 *(_QWORD *)(*(_QWORD *)a2 + 24LL),
                 &v9);
        else
          v4 = -2147024809;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v8);
      if ( v4 >= 0 )
      {
        *((_QWORD *)this + 26) = a2;
        return 0LL;
      }
    }
    else
    {
      v4 = -2147024809;
    }
    v6 = 54LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcommitcompletionwaiter.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
