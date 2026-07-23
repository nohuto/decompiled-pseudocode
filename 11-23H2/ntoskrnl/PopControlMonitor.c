/*
 * XREFs of PopControlMonitor @ 0x140997F70
 * Callers:
 *     PopScreenOff @ 0x140998434 (PopScreenOff.c)
 *     PopScreenOn @ 0x140998480 (PopScreenOn.c)
 * Callees:
 *     TtmIsEnabled @ 0x1407A6280 (TtmIsEnabled.c)
 *     PopInvokeWin32Callout @ 0x1407D3B8C (PopInvokeWin32Callout.c)
 *     TtmSessionMonitorControl @ 0x1409A4A80 (TtmSessionMonitorControl.c)
 */

__int64 __fastcall PopControlMonitor(unsigned int *a1, unsigned int a2)
{
  int v5; // [rsp+20h] [rbp-30h] BYREF
  char v6; // [rsp+24h] [rbp-2Ch]
  __int16 v7; // [rsp+25h] [rbp-2Bh]
  char v8; // [rsp+27h] [rbp-29h]
  __int64 v9; // [rsp+28h] [rbp-28h]
  unsigned int *v10; // [rsp+30h] [rbp-20h]
  __int64 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]
  unsigned int v13; // [rsp+68h] [rbp+18h] BYREF

  v13 = a2;
  if ( TtmIsEnabled() )
    return TtmSessionMonitorControl(a2, a1[1], *a1);
  v7 = 0;
  v8 = 0;
  v11 = 0LL;
  v6 = 0;
  v12 = 0LL;
  v9 = 8LL;
  v5 = 3;
  v10 = a1;
  return PopInvokeWin32Callout(5, (__int64)&v5, 1, (int *)&v13);
}
