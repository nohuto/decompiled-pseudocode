/*
 * XREFs of sub_140B2C0C0 @ 0x140B2C0C0
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405D3C64 @ 0x1405D3C64 (sub_1405D3C64.c)
 *     RtlSetSystemBootStatus @ 0x1407EDAF0 (RtlSetSystemBootStatus.c)
 *     RtlGetSystemBootStatus @ 0x14085F000 (RtlGetSystemBootStatus.c)
 *     sub_140B2C124 @ 0x140B2C124 (sub_140B2C124.c)
 */

int sub_140B2C0C0()
{
  int result; // eax
  __int128 DataBuffer; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+30h] [rbp-18h]

  sub_140B2C124();
  v2 = 0;
  DataBuffer = 0LL;
  result = RtlGetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
  if ( result >= 0 )
  {
    if ( HIDWORD(DataBuffer) )
    {
      sub_1405D3C64();
      v2 = 0;
      DataBuffer = 0LL;
      return RtlSetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
    }
  }
  return result;
}
