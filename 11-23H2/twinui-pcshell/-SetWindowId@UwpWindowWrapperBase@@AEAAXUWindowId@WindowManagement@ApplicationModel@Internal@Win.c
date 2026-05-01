/*
 * XREFs of ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18009FAF0
 * Callers:
 *     ?WindowDiscoveredFromShellHook@UwpWindowWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x18009F9B0 (-WindowDiscoveredFromShellHook@UwpWindowWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 *     _lambda_e1e333736bfc613a027e396b29f06629_::operator() @ 0x1801F8DB0 (_lambda_e1e333736bfc613a027e396b29f06629_--operator().c)
 * Callees:
 *     ?CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009EEE0 (-CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel.c)
 *     ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1800A01EC (-PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1800A03FC (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800A07B4 (-ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@UwpWindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1800A0A5C (-NotifyGlobalComponentsForWindowStateChange@UwpWindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChang.c)
 *     ?TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800A0E34 (-TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?PushZbidToWindow@UwpWindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x1801294DC (-PushZbidToWindow@UwpWindowWrapperBase@@AEAAXW4ZBID@@@Z.c)
 *     ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x18019C118 (-PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z.c)
 *     ?PushPointerActivationPolicyToWindow@UwpWindowWrapperBase@@AEAAXXZ @ 0x1801A10AC (-PushPointerActivationPolicyToWindow@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UwpWindowWrapperBase::SetWindowId(__int64 a1, int a2, int a3)
{
  const char *v5; // r9
  int v6; // edi
  unsigned int v7; // r14d
  HWND v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v8 = (HWND)a2;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x6A2,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      v5);
    return;
  }
  v6 = *(_DWORD *)(a1 + 296);
  if ( (_DWORD)v8 != v6 )
  {
    *(_DWORD *)(a1 + 296) = (_DWORD)v8;
    WakeAllConditionVariable((PCONDITION_VARIABLE)(a1 + 304));
    UwpWindowReadyState::SetWindow(a1 + 360, v8, 0LL);
    v7 = 0;
    if ( !*(_QWORD *)(a1 + 560) )
      UwpWindowWrapperBase::CachePersistingStateName(a1, *(_DWORD *)(a1 + 296));
    if ( (_DWORD)v8 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 200LL))(a1, 0LL);
      if ( a3 != 1 )
      {
        UwpWindowWrapperBase::PushZbidToWindow(a1, *(unsigned int *)(a1 + 508));
        UwpWindowWrapperBase::PushBoundsToWindow(a1, 3LL);
        UwpWindowWrapperBase::PushPointerActivationPolicyToWindow((UwpWindowWrapperBase *)a1);
        LightweightPropertySet::PushLightweightPropertiesToWindow((LightweightPropertySet *)(a1 + 200), v8);
        UwpWindowWrapperBase::TryPushWindowResizingState((UwpWindowWrapperBase *)a1);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL))(a1);
    }
    else
    {
      LODWORD(v8) = v6;
      v7 = 1;
    }
    UwpWindowWrapperBase::NotifyGlobalComponentsForWindowStateChange(a1, (int)v8, v7);
    UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion((UwpWindowWrapperBase *)a1);
  }
}
