/*
 * XREFs of ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800A0000
 * Callers:
 *     ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009EC20 (-OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Intern.c)
 *     ?v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18009FFE0 (-v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1800A0C80 (-SetRegistration@UwpWindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIn.c)
 *     ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804E162C (-SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800522CC (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x1800A0550 (-_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ.c)
 *     ?IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ @ 0x1800A05A0 (-IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ.c)
 *     ?Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x1800C2E68 (-Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x1800C3144 (-Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 */

void __fastcall UwpWindowReadyState::VisibilityChanged(_BYTE *a1, int a2, int a3)
{
  _DWORD *v3; // rsi
  char v5; // di
  char v6; // bp
  __int64 v7; // r8
  UwpWindowReadyState *v8; // rcx

  v3 = a1 + 8;
  v5 = 1;
  v6 = *(_QWORD *)a1 && !*v3;
  if ( a3 == 1 )
  {
    if ( a2 )
    {
      UwpWindowReadyState::WaitFlags::Clear(a1 + 8, a1, 1LL);
      if ( UwpWindowReadyState::IsReadyForPresentation((UwpWindowReadyState *)a1) )
        UwpWindowReadyState::_WaitForUnfreezeIfNecessary(v8);
    }
    else if ( a1[24] && (*(_BYTE *)v3 & 1) != 0 )
    {
      v7 = 2LL;
      goto LABEL_7;
    }
  }
  else if ( a2 )
  {
    v7 = 1LL;
LABEL_7:
    UwpWindowReadyState::WaitFlags::Set(a1 + 8, a1, v7);
  }
  if ( !*(_QWORD *)a1 || *v3 )
    v5 = 0;
  if ( v6 != v5 )
    std::_Func_class<void,bool>::operator()((__int64)(a1 + 40), v5);
}
