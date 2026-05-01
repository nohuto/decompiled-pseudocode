/*
 * XREFs of ?SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1804648DC
 * Callers:
 *     ?AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x18045C530 (-AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180164788 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop@@@detai.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NUtagRECT@@@Z @ 0x180460EC0 (-IsRectNull@KeyboardHosting@@YA_NUtagRECT@@@Z.c)
 *     ?NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z @ 0x180472B68 (-NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::SendPrimaryViewAnimationStartingEvent(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2,
        __int64 a3,
        __int64 a4)
{
  bool IsRectNull; // al
  const struct tagRECT *v7; // rdx
  KeyboardHosting::TabTipAdapter *v8; // r9
  unsigned int v9; // r8d
  int v10; // ebx
  __int64 v11; // rdx
  int v13[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  *(_OWORD *)v13 = *(_OWORD *)((char *)a2 + 136);
  IsRectNull = KeyboardHosting::IsRectNull((KeyboardHosting *)v13, (struct tagRECT *)((char *)a2 + 136));
  v9 = *((_DWORD *)this + 289);
  if ( IsRectNull )
  {
    v10 = KeyboardHosting::TabTipAdapter::NotifyPrimaryViewAnimationStarting(
            v8,
            (const struct tagRECT *)((char *)a2 + 120),
            v9);
    if ( v10 < 0 )
    {
      v11 = 1106LL;
      goto LABEL_4;
    }
  }
  else
  {
    v10 = KeyboardHosting::TabTipAdapter::NotifyPrimaryViewAnimationStarting(v8, v7, v9);
    if ( v10 < 0 )
    {
      v11 = 1100LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  return 0LL;
}
