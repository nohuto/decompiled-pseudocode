/*
 * XREFs of EtwWriteEndScenario @ 0x140843CD0
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1403A1008 (PnpCompleteSystemStartProcess.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140991128 (PopDiagTracePowerTransitionEnd.c)
 *     PopGracefulShutdown @ 0x140AA08D0 (PopGracefulShutdown.c)
 * Callees:
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     EtwGetProviderIdFromHandle @ 0x1403697B4 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x1407E576C (WdipStartEndScenario.c)
 */

NTSTATUS __fastcall EtwWriteEndScenario(
        ULONG_PTR *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF

  v10 = 0LL;
  if ( !EventDescriptor || !ActivityId )
    return -1073741811;
  if ( !EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    return -1073741816;
  result = EtwGetProviderIdFromHandle(RegHandle, 0, &v10);
  if ( result >= 0 )
  {
    WdipStartEndScenario((__int64)&v10, (__int64)ActivityId, &EventDescriptor->Id, 11);
    return EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
  }
  return result;
}
