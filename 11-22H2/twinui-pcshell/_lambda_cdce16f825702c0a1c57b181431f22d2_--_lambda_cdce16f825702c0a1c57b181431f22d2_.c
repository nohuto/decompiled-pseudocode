/*
 * XREFs of _lambda_cdce16f825702c0a1c57b181431f22d2_::_lambda_cdce16f825702c0a1c57b181431f22d2_ @ 0x1801E7F6C
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cdce16f825702c0a1c57b181431f22d2_____lambda_cdce16f825702c0a1c57b181431f22d2___ @ 0x1801E62B4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cdce16f825702.c)
 * Callees:
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1800B060C (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag__ea_1800B060C.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1801BC6D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_cdce16f825702c0a1c57b181431f22d2_::_lambda_cdce16f825702c0a1c57b181431f22d2_(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // r8d
  _QWORD *v5; // rcx

  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)a1,
    a2);
  *(_QWORD *)a1 = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::`vftable';
  winrt::hstring::hstring((winrt::hstring *)(a1 + 320), (winrt::impl **)(a2 + 320), v4);
  *(_BYTE *)(a1 + 328) = *(_BYTE *)(a2 + 328);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    (winrt::Windows::Foundation::IUnknown *)(a1 + 336),
    (_QWORD *)(a2 + 336));
  *(_BYTE *)(a1 + 344) = *(_BYTE *)(a2 + 344);
  v5 = (_QWORD *)(a2 + 352);
  *(_QWORD *)(a1 + 352) = 0LL;
  if ( a1 + 352 != a2 + 352 )
  {
    *(_QWORD *)(a1 + 352) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)(a1 + 360) = *(_QWORD *)(a2 + 360);
  return a1;
}
