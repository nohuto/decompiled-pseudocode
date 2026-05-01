/*
 * XREFs of ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18002497C
 * Callers:
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x180024624 (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180024724 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z @ 0x1803C43B0 (-SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z.c)
 * Callees:
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180024A4C (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo(__int64 a1, _OWORD *a2, char a3)
{
  unsigned int v6; // ecx
  RECT rcSrc; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(int (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)(a1 + 152) + 128LL))(*(_QWORD *)(a1 + 152), &rcSrc) >= 0 )
    CopyRect((LPRECT)(a1 + 16), &rcSrc);
  if ( a2 )
  {
    *(_OWORD *)(a1 + 76) = *a2;
    *(_OWORD *)(a1 + 92) = a2[1];
    *(_OWORD *)(a1 + 108) = a2[2];
  }
  v6 = 2;
  if ( *(_QWORD *)(a1 + 176) && (a3 & 1) != 0 )
    return (unsigned int)CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(a1) == 1;
  return v6;
}
