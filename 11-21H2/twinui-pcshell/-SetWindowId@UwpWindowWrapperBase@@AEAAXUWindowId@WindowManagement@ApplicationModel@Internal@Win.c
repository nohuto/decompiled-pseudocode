/*
 * XREFs of ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180418020
 * Callers:
 *     _lambda_cf8fce5bcb9a969599706c6ca6cec37d_::operator() @ 0x1804130B4 (_lambda_cf8fce5bcb9a969599706c6ca6cec37d_--operator().c)
 *     ?WindowDiscoveredFromShellHook@UwpWindowWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x180418B60 (-WindowDiscoveredFromShellHook@UwpWindowWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x180139680 (-PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804141EC (-CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@UwpWindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x180415948 (-NotifyGlobalComponentsForWindowStateChange@UwpWindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChang.c)
 *     ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180415C18 (-PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?PushPointerActivationPolicyToWindow@UwpWindowWrapperBase@@AEAAXXZ @ 0x180415E20 (-PushPointerActivationPolicyToWindow@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?PushZbidToWindow@UwpWindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x180415E9C (-PushZbidToWindow@UwpWindowWrapperBase@@AEAAXW4ZBID@@@Z.c)
 *     ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x180415F54 (-ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ @ 0x180418570 (-TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18041A898 (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 */

void __fastcall UwpWindowWrapperBase::SetWindowId(__int64 a1, int a2, int a3)
{
  HWND v4; // rbx
  __int64 v6; // rcx
  const char *v7; // r9
  int v8; // r15d
  int v9; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (HWND)a2;
  v6 = *(_QWORD *)(a1 + 272);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 224LL))(v6);
    v8 = *(_DWORD *)(a1 + 288);
    if ( (_DWORD)v4 != v8 )
    {
      *(_DWORD *)(a1 + 288) = (_DWORD)v4;
      WakeAllConditionVariable((PCONDITION_VARIABLE)(a1 + 296));
      UwpWindowReadyState::SetWindow(a1 + 352, v4, 0LL);
      v9 = 0;
      if ( !*(_QWORD *)(a1 + 552) )
        UwpWindowWrapperBase::CachePersistingStateName(a1, *(_DWORD *)(a1 + 288));
      if ( (_DWORD)v4 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 200LL))(a1, 0LL);
        if ( a3 != 1 )
        {
          UwpWindowWrapperBase::PushZbidToWindow(a1, *(_DWORD *)(a1 + 500));
          UwpWindowWrapperBase::PushBoundsToWindow(a1, 3);
          UwpWindowWrapperBase::PushPointerActivationPolicyToWindow((UwpWindowWrapperBase *)a1);
          LightweightPropertySet::PushLightweightPropertiesToWindow((LightweightPropertySet *)(a1 + 192), v4);
          UwpWindowWrapperBase::TryPushWindowResizingState((UwpWindowWrapperBase *)a1);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL))(a1);
      }
      else
      {
        LODWORD(v4) = v8;
        v9 = 1;
      }
      UwpWindowWrapperBase::NotifyGlobalComponentsForWindowStateChange(a1, (int)v4, v9);
      UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion((UwpWindowWrapperBase *)a1);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x692,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      v7);
  }
}
