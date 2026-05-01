/*
 * XREFs of ?Close@GamingOverlayExperienceManager@@UEAAJXZ @ 0x1803FB130
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18017AA2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::Close(GamingOverlayExperienceManager *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 312));
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::GetImpl'::`2'::impl,
    1u,
    v2,
    v3);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 31) + 344LL))(*((_QWORD *)this + 31), 0LL);
  v5 = v4;
  if ( v4 >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B1,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
