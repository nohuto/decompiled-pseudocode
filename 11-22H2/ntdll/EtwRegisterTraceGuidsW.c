/*
 * XREFs of EtwRegisterTraceGuidsW @ 0x180060A40
 * Callers:
 *     EtwRegisterTraceGuidsA @ 0x180060A00 (EtwRegisterTraceGuidsA.c)
 * Callees:
 *     EtwNotificationRegister @ 0x1800327E0 (EtwNotificationRegister.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x1800539B0 (RtlSetLastWin32Error.c)
 *     EtwpCreateRegGuidsContext @ 0x180060B1C (EtwpCreateRegGuidsContext.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsW(
        __int64 a1,
        int a2,
        __int128 *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  __int128 v9; // xmm0
  __int64 RegGuidsContext; // rsi
  unsigned int LastErrorValue; // ebx
  unsigned __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF

  if ( !a1 || !a8 || !a3 || a4 > 0x10000 )
  {
    LastErrorValue = 87;
    goto LABEL_13;
  }
  v9 = *a3;
  *a8 = 0LL;
  v14 = v9;
  RegGuidsContext = EtwpCreateRegGuidsContext(a1, a2, (unsigned int)&v14, a4, a5);
  if ( !RegGuidsContext )
  {
    LastErrorValue = NtCurrentTeb()->LastErrorValue;
    if ( !LastErrorValue )
      return LastErrorValue;
LABEL_13:
    RtlSetLastWin32Error(LastErrorValue);
    return LastErrorValue;
  }
  LastErrorValue = EtwNotificationRegister(&v14, 2u, a1, RegGuidsContext, &v13);
  if ( LastErrorValue )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, RegGuidsContext);
    goto LABEL_13;
  }
  *a8 = v13;
  return LastErrorValue;
}
