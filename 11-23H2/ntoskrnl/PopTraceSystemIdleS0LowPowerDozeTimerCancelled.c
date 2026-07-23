/*
 * XREFs of PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x140992F78
 * Callers:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14032F250 (PopIdleCancelAoAcDozeS4Timer.c)
 * Callees:
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void __fastcall PopTraceSystemIdleS0LowPowerDozeTimerCancelled(int a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE_TIMER_CANCELLED) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 4;
      EtwWrite(v1, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE_TIMER_CANCELLED, 0LL, 1u, &UserData);
    }
  }
}
