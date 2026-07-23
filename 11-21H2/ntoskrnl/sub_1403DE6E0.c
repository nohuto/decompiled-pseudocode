/*
 * XREFs of sub_1403DE6E0 @ 0x1403DE6E0
 * Callers:
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 */

NTSTATUS sub_1403DE6E0()
{
  NTSTATUS result; // eax
  _OWORD SystemInformation[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  result = ZwQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL);
  if ( result >= 0 )
  {
    if ( (BYTE8(SystemInformation[0]) & 1) != 0 )
      byte_140C0D77C = 0;
    if ( (SystemInformation[0] & 4) != 0 )
    {
      dword_140C0D778 = 2;
    }
    else
    {
      if ( (SystemInformation[0] & 2) == 0 )
      {
LABEL_6:
        result = DWORD1(SystemInformation[0]);
        qword_140C09850 = DWORD1(SystemInformation[0]);
        return result;
      }
      dword_140C0D778 = 3;
    }
    byte_140D04900 = 1;
    goto LABEL_6;
  }
  return result;
}
