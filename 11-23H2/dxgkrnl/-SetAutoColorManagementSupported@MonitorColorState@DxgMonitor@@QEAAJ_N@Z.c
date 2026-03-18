/*
 * XREFs of ?SetAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C0226818
 * Callers:
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02263C8 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C019DDDC (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetAutoColorManagementSupported(
        DxgMonitor::MonitorColorState *this,
        char a2)
{
  char v2; // r9
  __int64 v5; // r9

  v2 = a2;
  if ( a2 && DxgMonitor::MonitorColorState::EdidSupportsHDR(this) )
  {
    WdLogSingleEntry0(2LL);
    return 3221225659LL;
  }
  else if ( *((_BYTE *)this + 385) == v2 )
  {
    return 255LL;
  }
  else
  {
    *((_BYTE *)this + 385) = v2;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this) )
    {
      LOBYTE(v5) = *((_BYTE *)this + 385);
      (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(**((_QWORD **)this + 1) + 152LL))(
        *((_QWORD *)this + 1),
        4LL,
        L"AutoColorManagementSupported",
        v5);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 128LL))(*(_QWORD *)this, 5LL);
    return 0LL;
  }
}
