/*
 * XREFs of ??$try_as@UIDashboardExtension2@Dashboard@Shell@UI@WindowsUdk@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1801AFC78
 * Callers:
 *     _lambda_60b8aa6facbf2fdf4ec9aef88bd8d45a_::operator() @ 0x18023693C (_lambda_60b8aa6facbf2fdf4ec9aef88bd8d45a_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::try_as<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension2>(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension2>, &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
