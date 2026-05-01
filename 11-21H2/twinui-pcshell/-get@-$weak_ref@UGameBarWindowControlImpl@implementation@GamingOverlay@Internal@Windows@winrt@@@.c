/*
 * XREFs of ?get@?$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEBA?AU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@2@XZ @ 0x180344590
 * Callers:
 *     ??$?RAEBUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@AEBUIClientWindowReadyForPresentationChangedEventArgs@12345@@_lambda_bef65ec9d7e5e7cbe5d032e5d418e177_@@QEBAXAEBUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@AEBUIClientWindowReadyForPresentationChangedEventArgs@23456@@Z @ 0x180340DF0 (--$-RAEBUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@AEBUIClientWindowRe.c)
 *     _lambda_990a3a94af437e7dcdd96bcbb6b9cde9_::operator() @ 0x1803416D0 (_lambda_990a3a94af437e7dcdd96bcbb6b9cde9_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::get(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  if ( v2 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      winrt::impl::guid_v<winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>,
      &v6);
    if ( v6 )
      v3 = v6 - 16;
    *a2 = v3;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
