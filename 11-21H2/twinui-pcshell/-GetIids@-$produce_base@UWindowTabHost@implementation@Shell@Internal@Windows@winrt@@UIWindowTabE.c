/*
 * XREFs of ?GetIids@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180578020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension,void>::GetIids(
        __int64 a1)
{
  __int64 v1; // r9

  v1 = a1 - 8;
  if ( !a1 )
    v1 = 24LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
}
