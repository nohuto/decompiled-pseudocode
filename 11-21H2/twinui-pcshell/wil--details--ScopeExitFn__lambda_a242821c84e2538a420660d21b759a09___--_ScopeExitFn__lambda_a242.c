/*
 * XREFs of wil::details::ScopeExitFn__lambda_a242821c84e2538a420660d21b759a09___::_ScopeExitFn__lambda_a242821c84e2538a420660d21b759a09___ @ 0x1801B5548
 * Callers:
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180547810 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     _CVirtualDesktopManager::RemoveDesktopInternal_::_1_::dtor$4 @ 0x180547D0F (_CVirtualDesktopManager--RemoveDesktopInternal_--_1_--dtor$4.c)
 * Callees:
 *     _lambda_a242821c84e2538a420660d21b759a09_::operator() @ 0x1801B57D8 (_lambda_a242821c84e2538a420660d21b759a09_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_a242821c84e2538a420660d21b759a09___::_ScopeExitFn__lambda_a242821c84e2538a420660d21b759a09___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_a242821c84e2538a420660d21b759a09_::operator()();
  }
  return result;
}
