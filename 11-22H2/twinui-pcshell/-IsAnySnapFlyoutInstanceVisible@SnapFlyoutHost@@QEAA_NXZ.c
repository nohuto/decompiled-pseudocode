/*
 * XREFs of ?IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x18006C428
 * Callers:
 *     ?DisplaySettingsChange@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18006C3F0 (-DisplaySettingsChange@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     ?MonitorAdded@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180661AD0 (-MonitorAdded@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?OnShowWindowPolicy@CShellSnapComponent@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1806622E0 (-OnShowWindowPolicy@CShellSnapComponent@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x1806653A4 (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

bool __fastcall SnapFlyoutHost::IsAnySnapFlyoutInstanceVisible(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  char *i; // rdx
  std::_Ref_count_base *v4; // rcx
  __int64 v5; // rdx
  bool v6; // bl
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = this + 22;
  AcquireSRWLockShared(this + 22);
  for ( i = (char *)this[3].Ptr; ; i += 16 )
  {
    if ( i == this[4].Ptr )
    {
      v4 = 0LL;
      v5 = 0LL;
      goto LABEL_4;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)i + 8LL) + 339LL) )
      break;
  }
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    v8,
    i);
  v5 = v8[0];
  v4 = (std::_Ref_count_base *)v8[1];
LABEL_4:
  v6 = v5 != 0;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v6;
}
