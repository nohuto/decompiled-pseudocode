/*
 * XREFs of _lambda_1e36923a9b749c25b7f1ddb2e1df24d1_::operator() @ 0x1801B4BF4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e36923a9b749c25b7f1ddb2e1df24d1__&_::Run @ 0x1801B4D30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1e36923a9b749c25b7f1ddb2e1df24d1__-_--Run.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ApplySizeConstraints@JointResize@@AEAAXXZ @ 0x180527CB8 (-ApplySizeConstraints@JointResize@@AEAAXXZ.c)
 *     ?CalculatePointFromRect@JointResize@@AEAA?AUtagPOINT@@UtagRECT@@@Z @ 0x180528004 (-CalculatePointFromRect@JointResize@@AEAA-AUtagPOINT@@UtagRECT@@@Z.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x180528E9C (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18052A514 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?UpdateSizeConstraints@SecondaryViewInfo@JointResize@@QEAAXPEAUIImmersiveMonitor@@@Z @ 0x18052B0C4 (-UpdateSizeConstraints@SecondaryViewInfo@JointResize@@QEAAXPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall lambda_1e36923a9b749c25b7f1ddb2e1df24d1_::operator()(JointResize **a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  JointResize *v8; // rcx
  JointResize::SecondaryViewInfo *v9; // rsi
  JointResize::SecondaryViewInfo *v10; // rdi
  struct tagRECT v11; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)*a1 + 256) )
    return 2147947423LL;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
    a2);
  v4 = (_QWORD *)JointResize::CalculatePointFromRect(*a1, &v11);
  LOBYTE(v5) = 1;
  *((_QWORD *)*a1 + 39) = *v4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
    v5);
  JointResize::DestroyGhostDivider(*a1);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    v6,
    v7);
  v8 = *a1;
  v9 = (JointResize::SecondaryViewInfo *)*((_QWORD *)*a1 + 28);
  v10 = (JointResize::SecondaryViewInfo *)*((_QWORD *)*a1 + 27);
  if ( v10 != v9 )
  {
    do
    {
      JointResize::SecondaryViewInfo::UpdateSizeConstraints(v10, *((struct IImmersiveMonitor **)*a1 + 24));
      v10 = (JointResize::SecondaryViewInfo *)((char *)v10 + 88);
    }
    while ( v10 != v9 );
    v8 = *a1;
  }
  JointResize::ApplySizeConstraints(v8);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 31) + 24LL))(*((_QWORD *)*a1 + 31));
  return 0LL;
}
