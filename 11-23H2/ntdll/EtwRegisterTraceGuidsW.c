/*
 * XREFs of EtwRegisterTraceGuidsW @ 0x18005DBB0
 * Callers:
 *     EtwRegisterTraceGuidsA @ 0x18005DB70 (EtwRegisterTraceGuidsA.c)
 * Callees:
 *     EtwNotificationRegister @ 0x180032680 (EtwNotificationRegister.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x180053850 (RtlSetLastWin32Error.c)
 *     EtwpCreateRegGuidsContext @ 0x18005DC8C (EtwpCreateRegGuidsContext.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsW(
        PETW_NOTIFICATION_CALLBACK Callback,
        int a2,
        GUID *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        ULONGLONG *a8)
{
  GUID v9; // xmm0
  void *RegGuidsContext; // rsi
  unsigned __int32 LastErrorValue; // ebx
  ULONGLONG RegHandle; // [rsp+30h] [rbp-38h] BYREF
  GUID Guid; // [rsp+38h] [rbp-30h] BYREF

  if ( !Callback || !a8 || !a3 || a4 > 0x10000 )
  {
    LastErrorValue = 87;
    goto LABEL_13;
  }
  v9 = *a3;
  *a8 = 0LL;
  Guid = v9;
  RegGuidsContext = (void *)EtwpCreateRegGuidsContext((_DWORD)Callback, a2, (unsigned int)&Guid, a4, a5);
  if ( !RegGuidsContext )
  {
    LastErrorValue = NtCurrentTeb()->LastErrorValue;
    if ( !LastErrorValue )
      return LastErrorValue;
LABEL_13:
    RtlSetLastWin32Error(LastErrorValue);
    return LastErrorValue;
  }
  LastErrorValue = EtwNotificationRegister(&Guid, 2u, Callback, RegGuidsContext, &RegHandle);
  if ( LastErrorValue )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, RegGuidsContext);
    goto LABEL_13;
  }
  *a8 = RegHandle;
  return LastErrorValue;
}
