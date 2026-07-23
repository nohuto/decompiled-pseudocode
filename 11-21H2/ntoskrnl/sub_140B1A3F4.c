/*
 * XREFs of sub_140B1A3F4 @ 0x140B1A3F4
 * Callers:
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     EtwWriteStartScenario @ 0x14081C9F0 (EtwWriteStartScenario.c)
 */

int sub_140B1A3F4()
{
  int result; // eax
  ULONGLONG RegHandle; // [rsp+30h] [rbp-20h] BYREF
  GUID OutputBuffer; // [rsp+38h] [rbp-18h] BYREF

  RegHandle = 0LL;
  qword_140C166E0 = 0LL;
  dword_140C166E8 = 0;
  EtwRegister(&stru_140C0C5A8, (PETWENABLECALLBACK)sub_140864FC0, 0LL, &qword_140C166C0);
  EtwRegister(&stru_140C0C588, (PETWENABLECALLBACK)sub_14081C860, 0LL, &qword_140C166C8);
  EtwRegister(&stru_140C0C598, (PETWENABLECALLBACK)sub_1409DA7D0, 0LL, &qword_140C166D0);
  EtwRegister(&stru_140C0C578, (PETWENABLECALLBACK)sub_140808C50, 0LL, &qword_140C166D8);
  result = EtwRegister(&stru_140012678, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    OutputBuffer.Data1 = 1729382729;
    *(_DWORD *)&OutputBuffer.Data2 = 1213813042;
    *(_DWORD *)OutputBuffer.Data4 = 933705344;
    *(_DWORD *)&OutputBuffer.Data4[4] = -668649292;
    EtwWriteStartScenario((PVOID *)RegHandle, &stru_140012668, &OutputBuffer, 0, 0LL);
    return EtwUnregister(RegHandle);
  }
  return result;
}
