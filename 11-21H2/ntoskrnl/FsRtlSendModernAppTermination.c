/*
 * XREFs of FsRtlSendModernAppTermination @ 0x14024C440
 * Callers:
 *     sub_14024C370 @ 0x14024C370 (sub_14024C370.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall FsRtlSendModernAppTermination(_DWORD *Buffer, ULONG Length, int a3)
{
  WNF_STATE_NAME v3; // rax
  _DWORD v5[2]; // [rsp+40h] [rbp-28h] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-20h] BYREF

  if ( Buffer && Length )
  {
    if ( Length > 0x1000 )
      return -2147483643;
  }
  else
  {
    v5[0] = -1;
    Buffer = v5;
    v5[1] = 0;
    Length = 4;
  }
  if ( !a3 )
  {
    v3 = (WNF_STATE_NAME)0x4192022BA3BC0875LL;
    goto LABEL_7;
  }
  if ( a3 == 1 )
  {
    v3 = (WNF_STATE_NAME)0xD941D2BA3BC1075LL;
LABEL_7:
    StateName = v3;
    return ZwUpdateWnfStateData(&StateName, Buffer, Length, 0LL, 0LL, 0, 0);
  }
  return -1073741811;
}
