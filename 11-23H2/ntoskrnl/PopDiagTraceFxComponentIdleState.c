/*
 * XREFs of PopDiagTraceFxComponentIdleState @ 0x14035C84C
 * Callers:
 *     PopFxProcessWork @ 0x1403128C4 (PopFxProcessWork.c)
 *     PoFxCompleteIdleState @ 0x14035C560 (PoFxCompleteIdleState.c)
 * Callees:
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x140312D84 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxComponentIdleState(__int64 a1, int a2, unsigned int a3)
{
  BOOLEAN result; // al
  REGHANDLE v4; // rbx
  __int64 v5; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v7; // [rsp+58h] [rbp-28h]
  int v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+64h] [rbp-1Ch]
  int *v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+70h] [rbp-10h]
  int v12; // [rsp+74h] [rbp-Ch]
  int v13; // [rsp+98h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+A0h] [rbp+20h] BYREF

  v14 = a3;
  v13 = a2;
  v5 = a1;
  result = (unsigned __int8)PopFxAddLogEntry(a1, a2, 8, a3);
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_IDLE_STATE);
    if ( result )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      v8 = 4;
      v7 = &v13;
      v10 = (int *)&v14;
      v11 = 4;
      UserData.Size = 8;
      return EtwWriteEx(v4, &POP_ETW_EVENT_COMPONENT_IDLE_STATE, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}
