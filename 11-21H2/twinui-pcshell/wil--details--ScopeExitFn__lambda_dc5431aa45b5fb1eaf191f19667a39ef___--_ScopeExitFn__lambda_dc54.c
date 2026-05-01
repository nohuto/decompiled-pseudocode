/*
 * XREFs of wil::details::ScopeExitFn__lambda_dc5431aa45b5fb1eaf191f19667a39ef___::_ScopeExitFn__lambda_dc5431aa45b5fb1eaf191f19667a39ef___ @ 0x1803DEFEC
 * Callers:
 *     _WindowEventDispatcher::OverrideNavigationLevelForView_::_1_::dtor$1 @ 0x1803E54E7 (_WindowEventDispatcher--OverrideNavigationLevelForView_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_dc5431aa45b5fb1eaf191f19667a39ef___::_ScopeExitFn__lambda_dc5431aa45b5fb1eaf191f19667a39ef___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)a1 + 312LL))(**(_QWORD **)a1, 2LL);
  }
  return result;
}
