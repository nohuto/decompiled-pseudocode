/*
 * XREFs of wil::details::ScopeExitFn__lambda_54377822ac2a636b8281ab34bef84262___::_ScopeExitFn__lambda_54377822ac2a636b8281ab34bef84262___ @ 0x180544654
 * Callers:
 *     _CVirtualDesktopManager::SetDesktopIsPerMonitor_::_1_::dtor$1 @ 0x180548082 (_CVirtualDesktopManager--SetDesktopIsPerMonitor_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_54377822ac2a636b8281ab34bef84262___::_ScopeExitFn__lambda_54377822ac2a636b8281ab34bef84262___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 136LL) + 112LL))(*(_QWORD *)(*(_QWORD *)a1 + 136LL));
  }
  return result;
}
