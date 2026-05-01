/*
 * XREFs of ??$try_as@UIDashboardExtension2@Dashboard@Shell@UI@WindowsUdk@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUIDashboardExtension2@Dashboard@Shell@UI@WindowsUdk@3@XZ @ 0x18017F76C
 * Callers:
 *     _lambda_7e165926cc5ca9dec4eb8af005e3d0c6_::operator() @ 0x1801C51CC (_lambda_7e165926cc5ca9dec4eb8af005e3d0c6_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
