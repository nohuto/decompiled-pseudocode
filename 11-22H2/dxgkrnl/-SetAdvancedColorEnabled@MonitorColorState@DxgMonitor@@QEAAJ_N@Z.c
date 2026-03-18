/*
 * XREFs of ?SetAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C03CDEB8
 * Callers:
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02263C8 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C03C40A4 (MonitorEnableDisableAdvancedColor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     DxgkIsConsoleSessionDispBrokerEnabled @ 0x1C01E6318 (DxgkIsConsoleSessionDispBrokerEnabled.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(DxgMonitor::MonitorColorState *this, char a2)
{
  __int64 v5; // rcx
  __int64 v6; // r9
  bool v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  DxgkIsConsoleSessionDispBrokerEnabled(&v7);
  if ( v7 )
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    return 3221225659LL;
  }
  else
  {
    v5 = *(_QWORD *)this;
    *((_BYTE *)this + 384) = a2;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5) )
    {
      LOBYTE(v6) = a2;
      (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(**((_QWORD **)this + 1) + 152LL))(
        *((_QWORD *)this + 1),
        4LL,
        L"AdvancedColorEnabled",
        v6);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 128LL))(*(_QWORD *)this, 3LL);
    return 0LL;
  }
}
