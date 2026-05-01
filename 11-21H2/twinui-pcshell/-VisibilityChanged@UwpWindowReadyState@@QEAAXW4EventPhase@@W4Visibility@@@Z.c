/*
 * XREFs of ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18041A98C
 * Callers:
 *     ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804047EC (-SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1804067C0 (-v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1804179A0 (-SetRegistration@UwpWindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIn.c)
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800295B4 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18041A638 (-Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ @ 0x18041A780 (-IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ.c)
 *     ?Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18041A868 (-Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x18041AA24 (-_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ.c)
 */

char __fastcall UwpWindowReadyState::VisibilityChanged(UwpWindowReadyState *a1)
{
  int v2; // edx
  __int64 v3; // rcx
  char IsReadyForPresentation; // di
  int v5; // r8d
  int *v6; // rcx
  int v7; // r8d
  UwpWindowReadyState *v8; // rcx
  char result; // al

  IsReadyForPresentation = UwpWindowReadyState::IsReadyForPresentation(a1);
  if ( v5 != 1 )
  {
    if ( !v2 )
      goto LABEL_11;
    v6 = (int *)(v3 + 8);
    v7 = 1;
    goto LABEL_10;
  }
  if ( !v2 )
  {
    if ( !*(_BYTE *)(v3 + 24) )
      goto LABEL_11;
    v6 = (int *)(v3 + 8);
    if ( (*(_BYTE *)v6 & 1) == 0 )
      goto LABEL_11;
    v7 = 2;
LABEL_10:
    UwpWindowReadyState::WaitFlags::Set(v6, (__int64 *)a1, v7);
    goto LABEL_11;
  }
  UwpWindowReadyState::WaitFlags::Clear((int *)(v3 + 8), (__int64 *)a1, 1);
  if ( UwpWindowReadyState::IsReadyForPresentation(a1) )
    UwpWindowReadyState::_WaitForUnfreezeIfNecessary(v8);
LABEL_11:
  result = UwpWindowReadyState::IsReadyForPresentation(a1);
  if ( IsReadyForPresentation != result )
    return std::_Func_class<void,bool>::operator()((__int64)a1 + 40, result);
  return result;
}
