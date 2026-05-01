/*
 * XREFs of ??$as@U?$IReference@_N@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$IReference@_N@123@XZ @ 0x1801D0388
 * Callers:
 *     ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1801D06E4 (-GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 *     ?GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1801D07C4 (-GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Foundation::IReference<bool>>(
        __int64 (__fastcall ****a1)(_QWORD, void *, _QWORD **),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, void *, _QWORD **); // rcx
  unsigned int v4; // eax
  _QWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = *a1;
  if ( v2 )
  {
    v6 = 0LL;
    v4 = (**v2)(v2, &winrt::impl::guid_v<winrt::Windows::Foundation::IReference<bool>>, &v6);
    winrt::check_hresult(v4);
    *a2 = v6;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
