/*
 * XREFs of ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x18018D0F4
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18005F9B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18010759C (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18018D150 (-DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?IsCurrentMonitorAlsoPrimary@ImmersiveMonitorHelper@@AEAA_NXZ @ 0x18018D2A8 (-IsCurrentMonitorAlsoPrimary@ImmersiveMonitorHelper@@AEAA_NXZ.c)
 *     ?IsCurrentMonitorConnected@ImmersiveMonitorHelper@@AEAA_NXZ @ 0x18018D300 (-IsCurrentMonitorConnected@ImmersiveMonitorHelper@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ImmersiveMonitorHelper::AdjustMonitorConnectedIfNeeded(ImmersiveMonitorHelper *this)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPARAM dwData; // [rsp+48h] [rbp+10h] BYREF
  struct IImmersiveMonitor *v10; // [rsp+50h] [rbp+18h] BYREF

  if ( !ImmersiveMonitorHelper::IsCurrentMonitorConnected(this)
    || !ImmersiveMonitorHelper::IsCurrentMonitorAlsoPrimary(this)
    || !ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(this, *((struct IImmersiveMonitor **)this + 8)) )
  {
    v10 = 0LL;
    v3 = *((_QWORD *)this + 9);
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v3 + 72LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
    v5 = v4(v3, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v10);
    v6 = retaddr;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, LPARAM *))(*(_QWORD *)v10 + 48LL))(v10, &dwData);
      v6 = retaddr;
      if ( v5 >= 0 )
      {
        if ( (_DWORD)dwData && ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(this, v10) )
        {
          ImmersiveMonitorHelper::ConnectToMonitor(this, (struct IUnknown *)v10);
          goto LABEL_10;
        }
LABEL_9:
        dwData = (LPARAM)this;
        EnumDisplayMonitors(
          0LL,
          0LL,
          CCLambdaAdapter_int____cdecl___HMONITOR_____HDC_____tagRECT_____int64__4_::Adapt__lambda_cee9152273d64ff48514b6f1981d3318___,
          (LPARAM)&dwData);
LABEL_10:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
        return 0LL;
      }
      v7 = 205LL;
    }
    else
    {
      v7 = 202LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v6,
      (void *)v7,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_9;
  }
  return 0LL;
}
