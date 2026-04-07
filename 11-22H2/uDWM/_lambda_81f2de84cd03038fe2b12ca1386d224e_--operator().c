/*
 * XREFs of _lambda_81f2de84cd03038fe2b12ca1386d224e_::operator() @ 0x1800D9A68
 * Callers:
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E0870 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180045FD8 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 */

void __fastcall lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()(__int64 a1, CAnimatedTransitionVisual **a2)
{
  CGroupingStoryboard *v4; // rcx

  CAnimatedTransitionVisual::SetBeginAlpha(a2[5], *(float *)(a1 + 8));
  v4 = *(CGroupingStoryboard **)a1;
  *((_BYTE *)a2[5] + 971) = 1;
  *((_BYTE *)a2[5] + 984) = 1;
  CGroupingStoryboard::_SetUnifiedCenter(v4, (struct CAnimationComponent *)a2);
}
