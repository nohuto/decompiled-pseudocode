/*
 * XREFs of wil::details::ScopeExitFn__lambda_f34acece6393082ae65dd9a39a5dfc96___::_ScopeExitFn__lambda_f34acece6393082ae65dd9a39a5dfc96___ @ 0x1801F1814
 * Callers:
 *     ?OnPriorityBoostRequested@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180473080 (-OnPriorityBoostRequested@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@.c)
 *     _CBaseTrayFlyoutExperienceManager::OnPriorityBoostRequested_::_1_::dtor$0 @ 0x18047315C (_CBaseTrayFlyoutExperienceManager--OnPriorityBoostRequested_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_f34acece6393082ae65dd9a39a5dfc96___::_ScopeExitFn__lambda_f34acece6393082ae65dd9a39a5dfc96___(
        _BYTE *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
    if ( v2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  }
  return result;
}
