/*
 * XREFs of ProcLibTraceRegisterValueChange @ 0x1C00035A0
 * Callers:
 *     HwDebugUpdateRegister @ 0x1C0003490 (HwDebugUpdateRegister.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 */

BOOLEAN __fastcall ProcLibTraceRegisterValueChange(__int64 a1)
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 v3; // [rsp+40h] [rbp-28h]
  int v4; // [rsp+48h] [rbp-20h]
  int v5; // [rsp+4Ch] [rbp-1Ch]
  __int64 v6; // [rsp+70h] [rbp+8h] BYREF

  v6 = a1;
  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_HARDWARE_DEBUG_REGISTER_VALUE_CHANGE);
  if ( result )
  {
    UserData.Reserved = 0;
    v5 = 0;
    UserData.Ptr = (unsigned __int64)&v6;
    UserData.Size = 8;
    v3 = v6 + 16;
    v4 = 8;
    return EtwWrite(
             (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
             &PPM_ETW_HARDWARE_DEBUG_REGISTER_VALUE_CHANGE,
             0LL,
             (ULONG)2,
             &UserData);
  }
  return result;
}
