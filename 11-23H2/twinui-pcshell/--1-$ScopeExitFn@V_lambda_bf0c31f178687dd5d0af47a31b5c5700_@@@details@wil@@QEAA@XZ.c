/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@@details@wil@@QEAA@XZ @ 0x180391824
 * Callers:
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$4 @ 0x1802BA96A (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$4.c)
 * Callees:
 *     ??R_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@QEBA@XZ @ 0x1800D9264 (--R_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@QEBA@XZ.c)
 */

void __fastcall wil::details::ScopeExitFn<_lambda_bf0c31f178687dd5d0af47a31b5c5700_>::~ScopeExitFn<_lambda_bf0c31f178687dd5d0af47a31b5c5700_>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    _lambda_bf0c31f178687dd5d0af47a31b5c5700_::operator()((__int64 **)a1);
  }
}
