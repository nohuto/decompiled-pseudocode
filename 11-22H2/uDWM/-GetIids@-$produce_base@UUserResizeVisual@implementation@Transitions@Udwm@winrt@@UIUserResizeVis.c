/*
 * XREFs of ?GetIids@?$produce_base@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800ED8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual,void>::GetIids(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 - 8) & -(__int64)(a1 != 0);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
}
