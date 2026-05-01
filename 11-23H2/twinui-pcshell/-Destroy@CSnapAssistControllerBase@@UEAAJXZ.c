/*
 * XREFs of ?Destroy@CSnapAssistControllerBase@@UEAAJXZ @ 0x180192F60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSnapAssistControllerBase::Destroy(CSnapAssistControllerBase *this)
{
  __int64 v1; // rdx
  std::_Ref_count_base *v3; // rcx

  v1 = *((unsigned int *)this + 74);
  if ( (_DWORD)v1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 32LL))(*((_QWORD *)this + 14));
    *((_DWORD *)this + 74) = 0;
  }
  LOBYTE(v1) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    v1);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return 0LL;
}
