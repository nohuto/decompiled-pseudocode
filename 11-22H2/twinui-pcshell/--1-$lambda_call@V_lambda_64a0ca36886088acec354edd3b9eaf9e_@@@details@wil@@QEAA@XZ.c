/*
 * XREFs of ??1?$lambda_call@V_lambda_64a0ca36886088acec354edd3b9eaf9e_@@@details@wil@@QEAA@XZ @ 0x18024F750
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$1 @ 0x180250E90 (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_ResumeCo.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x180251170 (_winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimA_ea_180251170.c)
 * Callees:
 *     ??R_lambda_64a0ca36886088acec354edd3b9eaf9e_@@QEBA@XZ @ 0x18024FE10 (--R_lambda_64a0ca36886088acec354edd3b9eaf9e_@@QEBA@XZ.c)
 */

__int64 __fastcall wil::details::lambda_call<_lambda_64a0ca36886088acec354edd3b9eaf9e_>::~lambda_call<_lambda_64a0ca36886088acec354edd3b9eaf9e_>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    *(_BYTE *)(a1 + 40) = 0;
    _lambda_64a0ca36886088acec354edd3b9eaf9e_::operator()();
  }
  return std::wstring::_Tidy_deallocate(a1 + 8);
}
