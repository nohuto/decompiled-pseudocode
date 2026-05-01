/*
 * XREFs of ??$try_as@UIDashboardExtension6@Dashboard@Shell@UI@WindowsUdk@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x180694A84
 * Callers:
 *     _lambda_0c5affb431bf714a4aabb516927c6336_::operator() @ 0x180235F10 (_lambda_0c5affb431bf714a4aabb516927c6336_--operator().c)
 *     _lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_::operator() @ 0x180236F2C (_lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::try_as<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension6>(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension6>, &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
