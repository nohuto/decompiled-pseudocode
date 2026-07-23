/*
 * XREFs of PopDiagTraceEsState @ 0x140593394
 * Callers:
 *     PopEsUpdateState @ 0x1403C6434 (PopEsUpdateState.c)
 * Callees:
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

BOOLEAN PopDiagTraceEsState()
{
  BOOLEAN result; // al
  REGHANDLE v1; // rbx
  int v2; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  result = PopEsReason;
  v2 = PopEsReason;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ENERGY_SAVER_STATE);
    if ( result )
    {
      UserData.Reserved = 0;
      v6 = 0;
      UserData.Ptr = (ULONGLONG)&PopEsState;
      UserData.Size = 4;
      v4 = &v2;
      v5 = 4;
      return EtwWriteEx(v1, &POP_ETW_EVENT_ENERGY_SAVER_STATE, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
