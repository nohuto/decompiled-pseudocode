/*
 * XREFs of EtwRegisterTraceGuidsW @ 0x180015410
 * Callers:
 *     EtwRegisterTraceGuidsA @ 0x18008C6F0 (EtwRegisterTraceGuidsA.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800067C0 (RtlSetLastWin32Error.c)
 *     EtwpCreateRegGuidsContext @ 0x180015308 (EtwpCreateRegGuidsContext.c)
 *     EtwNotificationRegister @ 0x180016730 (EtwNotificationRegister.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsW(
        PETW_NOTIFICATION_CALLBACK Callback,
        __int64 a2,
        GUID *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        ULONGLONG *a8)
{
  GUID v9; // xmm0
  char *v10; // rsi
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
  v10 = EtwpCreateRegGuidsContext((__int64)Callback, a2, &Guid, a4, a5);
  if ( !v10 )
  {
    LastErrorValue = NtCurrentTeb()->LastErrorValue;
    if ( !LastErrorValue )
      return LastErrorValue;
LABEL_13:
    RtlSetLastWin32Error(LastErrorValue);
    return LastErrorValue;
  }
  LastErrorValue = EtwNotificationRegister(&Guid, 2u, Callback, v10, &RegHandle);
  if ( LastErrorValue )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    goto LABEL_13;
  }
  *a8 = RegHandle;
  return LastErrorValue;
}
