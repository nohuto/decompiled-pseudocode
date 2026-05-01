/*
 * XREFs of wil::details::ScopeExitFn__lambda_49e46f0973678bb167648168d4574ab1___::_ScopeExitFn__lambda_49e46f0973678bb167648168d4574ab1___ @ 0x1804A379C
 * Callers:
 *     _CSnapAssistViewHost::Show_::_1_::dtor$2 @ 0x1804A500F (_CSnapAssistViewHost--Show_--_1_--dtor$2.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x1804A3EC0 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_49e46f0973678bb167648168d4574ab1___::_ScopeExitFn__lambda_49e46f0973678bb167648168d4574ab1___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(*(_QWORD *)a1);
  }
  return result;
}
