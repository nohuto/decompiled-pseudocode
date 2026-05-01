/*
 * XREFs of ??$try_as@UIPropertySet@Collections@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUIPropertySet@Collections@123@XZ @ 0x1800F7ACC
 * Callers:
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1801CC024 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     _anonymous_namespace_::TryGetTextFromProperty @ 0x1801CC24C (_anonymous_namespace_--TryGetTextFromProperty.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::try_as<winrt::Windows::Foundation::Collections::IPropertySet>(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IPropertySet>, &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
