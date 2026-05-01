/*
 * XREFs of wil::details::ScopeExitFn__lambda_51bb635e1ede125b1e9590b7696bcce9___::_ScopeExitFn__lambda_51bb635e1ede125b1e9590b7696bcce9___ @ 0x1802152B4
 * Callers:
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180602EA0 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     _CVirtualDesktopManager::RemoveDesktopInternal_::_1_::dtor$2 @ 0x180603334 (_CVirtualDesktopManager--RemoveDesktopInternal_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_51bb635e1ede125b1e9590b7696bcce9_::operator() @ 0x18021533C (_lambda_51bb635e1ede125b1e9590b7696bcce9_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_51bb635e1ede125b1e9590b7696bcce9___::_ScopeExitFn__lambda_51bb635e1ede125b1e9590b7696bcce9___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_51bb635e1ede125b1e9590b7696bcce9_::operator()();
  }
  return result;
}
