/*
 * XREFs of EtwWriteStartScenario @ 0x14081C9F0
 * Callers:
 *     sub_1403DED94 @ 0x1403DED94 (sub_1403DED94.c)
 *     sub_1407FD930 @ 0x1407FD930 (sub_1407FD930.c)
 *     sub_140B1A3F4 @ 0x140B1A3F4 (sub_140B1A3F4.c)
 * Callees:
 *     sub_14025A19C @ 0x14025A19C (sub_14025A19C.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x14041F140 (ZwTraceControl.c)
 *     sub_1406E6A98 @ 0x1406E6A98 (sub_1406E6A98.c)
 */

__int64 __fastcall EtwWriteStartScenario(
        PVOID *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        GUID *OutputBuffer,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int v9; // edi
  ULONG ReturnLength; // [rsp+30h] [rbp-58h] BYREF
  __int128 v12; // [rsp+38h] [rbp-50h] BYREF

  ReturnLength = 0;
  v12 = 0LL;
  if ( EventDescriptor && OutputBuffer )
  {
    if ( EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    {
      v9 = sub_14025A19C(RegHandle, 0, &v12);
      if ( v9 >= 0 )
      {
        if ( OutputBuffer->Data1
          || OutputBuffer->Data2
          || OutputBuffer->Data3
          || OutputBuffer->Data4[0]
          || OutputBuffer->Data4[1]
          || OutputBuffer->Data4[2]
          || OutputBuffer->Data4[3]
          || OutputBuffer->Data4[4]
          || OutputBuffer->Data4[5]
          || OutputBuffer->Data4[6]
          || OutputBuffer->Data4[7]
          || (v9 = ZwTraceControl(EtwActivityIdCreate, 0LL, 0, OutputBuffer, 0x10u, &ReturnLength), v9 >= 0) )
        {
          v9 = EtwWrite((REGHANDLE)RegHandle, EventDescriptor, OutputBuffer, UserDataCount, UserData);
          sub_1406E6A98((__int64)&v12, (__int64)OutputBuffer, &EventDescriptor->Id, 10);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741816;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
