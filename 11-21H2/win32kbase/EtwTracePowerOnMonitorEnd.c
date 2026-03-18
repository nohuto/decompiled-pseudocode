/*
 * XREFs of EtwTracePowerOnMonitorEnd @ 0x1C007D59C
 * Callers:
 *     PowerOnMonitor @ 0x1C007D2B0 (PowerOnMonitor.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C0146DE0 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C014F9C8 (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePowerOnMonitorEnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &PowerOnMonitorEnd, a3, (unsigned int)a1);
  return result;
}
