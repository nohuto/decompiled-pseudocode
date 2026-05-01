/*
 * XREFs of ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x180074BD4
 * Callers:
 *     ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x1800212CC (-_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180039C18 (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180076880 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180074724 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::_UpdateApplication(__int64 a1, __int64 a2, _OWORD *a3, char a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int v10; // ecx
  RECT rcSrc; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 112LL))(*(_QWORD *)(a1 + 440));
  }
  else if ( (a4 & 0x10) != 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 320LL))(*(_QWORD *)(a1 + 440));
  }
  if ( (a4 & 3) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 440);
    v9 = a1 + 288;
    if ( (*(int (__fastcall **)(__int64, RECT *))(*(_QWORD *)v8 + 128LL))(v8, &rcSrc) >= 0 )
      CopyRect((LPRECT)(v9 + 16), &rcSrc);
    if ( a3 )
    {
      *(_OWORD *)(v9 + 76) = *a3;
      *(_OWORD *)(v9 + 92) = a3[1];
      *(_OWORD *)(v9 + 108) = a3[2];
    }
    v10 = 2;
    if ( *(_QWORD *)(v9 + 176) && (a4 & 1) != 0 )
      return (unsigned int)CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(v9) == 1;
    return v10;
  }
  else if ( (a4 & 4) == 0 )
  {
    LOBYTE(v4) = (unsigned int)CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(a1 + 288) == 1;
  }
  return v4;
}
