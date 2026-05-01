/*
 * XREFs of ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18045D6AC
 * Callers:
 *     _lambda_41fdec79629b933043b6dd44cc33a98f_::operator() @ 0x1801AFDF8 (_lambda_41fdec79629b933043b6dd44cc33a98f_--operator().c)
 *     _lambda_78d65514523b09204dbef74fe9d00fb5_::operator() @ 0x1801B0448 (_lambda_78d65514523b09204dbef74fe9d00fb5_--operator().c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18022E232 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x18045C530 (-AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 *     ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x18045E620 (-GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x18045F8A4 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z @ 0x180462A30 (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x180463708 (-OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z.c)
 *     ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x180463910 (-OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x1804650F0 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1803D55B0 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x180460EE0 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::FindViewInfo(RTL_SRWLOCK *a1, int a2, __int64 *a3)
{
  RTL_SRWLOCK *v3; // rdi
  KBViewInfo **Ptr; // r10
  KBViewInfo **i; // r9
  unsigned int v9; // ebx

  v3 = a1 + 53;
  AcquireSRWLockShared(a1 + 53);
  Ptr = (KBViewInfo **)a1[55].Ptr;
  for ( i = (KBViewInfo **)a1[54].Ptr; i != Ptr && (!KBViewInfo::IsValid(*i) || *((_DWORD *)*i + 26) != a2); i += 2 )
    ;
  if ( i == a1[55].Ptr )
  {
    v9 = -2147023728;
  }
  else
  {
    std::shared_ptr<FlyoutView>::operator=(a3, i);
    v9 = 0;
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v9;
}
