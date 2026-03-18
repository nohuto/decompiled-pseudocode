/*
 * XREFs of HalpTscTraceStatus @ 0x14050A830
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x14038D300 (HalpTscAdvSynchLeader.c)
 *     HalpTscFallbackToPlatformSource @ 0x14050A734 (HalpTscFallbackToPlatformSource.c)
 * Callees:
 *     EtwWriteEx @ 0x1402581E0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

void __fastcall HalpTscTraceStatus(PCEVENT_DESCRIPTOR EventDescriptor, int a2)
{
  REGHANDLE v3; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+78h] [rbp+10h] BYREF

  v5 = a2;
  if ( HalpDiagnosticEventsRegistered )
  {
    v3 = HalpDiagnosticEventHandle;
    if ( EtwEventEnabled(HalpDiagnosticEventHandle, EventDescriptor) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      UserData.Size = 4;
      EtwWriteEx(v3, EventDescriptor, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
