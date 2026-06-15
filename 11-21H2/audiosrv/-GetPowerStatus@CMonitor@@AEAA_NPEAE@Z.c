/*
 * XREFs of ?GetPowerStatus@CMonitor@@AEAA_NPEAE@Z @ 0x180120174
 * Callers:
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x1801221E0 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180123644 (-Start@CMonitor@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

char __fastcall CMonitor::GetPowerStatus(CMonitor *this, unsigned __int8 *a2)
{
  unsigned __int8 v2; // al
  _SYSTEM_POWER_STATUS SystemPowerStatus; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_BYTE *)this + 512);
  if ( v2 != 0xFF )
  {
    *a2 = v2;
    return 1;
  }
  if ( GetSystemPowerStatus(&SystemPowerStatus) )
  {
    *a2 = SystemPowerStatus.ACLineStatus;
    return 1;
  }
  *a2 = -1;
  return 0;
}
