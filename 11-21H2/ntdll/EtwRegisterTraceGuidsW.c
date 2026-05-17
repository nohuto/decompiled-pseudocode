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
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  int v8; // ebx
  __int128 v9; // xmm0
  char *v10; // rsi
  unsigned int LastErrorValue; // ebx
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF

  v8 = a1;
  if ( !a1 || !a8 || !a3 || a4 > 0x10000 )
  {
    LastErrorValue = 87;
    goto LABEL_13;
  }
  v9 = *a3;
  *a8 = 0LL;
  v14 = v9;
  v10 = EtwpCreateRegGuidsContext(a1, a2, &v14, a4, a5);
  if ( !v10 )
  {
    LastErrorValue = NtCurrentTeb()->LastErrorValue;
    if ( !LastErrorValue )
      return LastErrorValue;
LABEL_13:
    RtlSetLastWin32Error(LastErrorValue);
    return LastErrorValue;
  }
  LastErrorValue = EtwNotificationRegister((unsigned int)&v14, 2, v8, (_DWORD)v10, (__int64)&v13);
  if ( LastErrorValue )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v10);
    goto LABEL_13;
  }
  *a8 = v13;
  return LastErrorValue;
}
