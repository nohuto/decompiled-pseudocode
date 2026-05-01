/*
 * XREFs of ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x180460E24
 * Callers:
 *     _lambda_666d22edc2a9b06a02075e2b448fb99f_::operator() @ 0x1801B02D8 (_lambda_666d22edc2a9b06a02075e2b448fb99f_--operator().c)
 *     _lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_::operator() @ 0x1801B0638 (_lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_--operator().c)
 *     _lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::operator() @ 0x1801B09E4 (_lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_--operator().c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall TouchKeyboardExperienceManager::IsFrameReady(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // di
  TouchKeyboardExperienceManager *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = this;
  if ( !a2 )
    return 0;
  v5 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( (*(int (__fastcall **)(struct IApplicationFrame *, TouchKeyboardExperienceManager **))(*(_QWORD *)a2 + 24LL))(
         a2,
         &v7) < 0
    || (*(int (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v8) < 0 )
  {
    return 0;
  }
  if ( !v7 || !v8 )
    return 0;
  return v5;
}
