/*
 * XREFs of ProcLibTraceEnergyEsuRundown @ 0x1C0025008
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C002EE50 (ProcLibTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 */

BOOLEAN ProcLibTraceEnergyEsuRundown()
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  char *v2; // [rsp+40h] [rbp-28h]
  int v3; // [rsp+48h] [rbp-20h]
  int v4; // [rsp+4Ch] [rbp-1Ch]

  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_ENERGY_ESU_RUNDOWN);
  if ( result )
  {
    UserData.Reserved = 0;
    v4 = 0;
    UserData.Ptr = (unsigned __int64)&word_1C001F8D8;
    UserData.Size = 1;
    v2 = (char *)&word_1C001F8D8 + 1;
    v3 = 1;
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_ENERGY_ESU_RUNDOWN, 0LL, (ULONG)2, &UserData);
  }
  return result;
}
