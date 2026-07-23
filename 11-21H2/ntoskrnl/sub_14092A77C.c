/*
 * XREFs of sub_14092A77C @ 0x14092A77C
 * Callers:
 *     sub_14092A29C @ 0x14092A29C (sub_14092A29C.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryWnfStateNameInformation @ 0x14041E4E0 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 */

__int64 sub_14092A77C()
{
  unsigned int v0; // ebx
  int v1; // edi
  int v3; // [rsp+40h] [rbp-38h] BYREF
  ULONGLONG RegHandle; // [rsp+48h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-28h] BYREF

  v0 = 0;
  RegHandle = 0LL;
  v3 = 0;
  v1 = 0;
  if ( ZwQueryWnfStateNameInformation(&stru_140037718, WnfInfoSubscribersPresent, 0LL, &v3, 4u) >= 0 && v3 )
    v1 = ZwUpdateWnfStateData(&stru_140037718, 0LL, 0, 0LL, 0LL, 0, 0) >= 0;
  if ( EtwRegister(&stru_14003AC50, 0LL, 0LL, &RegHandle) >= 0 )
  {
    EventDescriptor = 0LL;
    if ( EtwEventEnabled(RegHandle, &EventDescriptor) && EtwWrite(RegHandle, &EventDescriptor, 0LL, 0, 0LL) >= 0 )
      ++v1;
    EtwUnregister(RegHandle);
  }
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
