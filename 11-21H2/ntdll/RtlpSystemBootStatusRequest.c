/*
 * XREFs of RtlpSystemBootStatusRequest @ 0x18008D454
 * Callers:
 *     RtlGetSystemBootStatus @ 0x18008D3E0 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatus @ 0x18008D420 (RtlSetSystemBootStatus.c)
 *     RtlGetSystemBootStatusEx @ 0x1800F94B0 (RtlGetSystemBootStatusEx.c)
 *     RtlSetSystemBootStatusEx @ 0x1800F9660 (RtlSetSystemBootStatusEx.c)
 * Callees:
 *     NtPowerInformation @ 0x1800A4C40 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpSystemBootStatusRequest(int a1, __int64 a2, unsigned int a3, void *a4)
{
  unsigned __int64 OutputBufferLength; // rax
  _DWORD InputBuffer[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  if ( !a4 )
  {
    LODWORD(OutputBufferLength) = 0;
LABEL_3:
    InputBuffer[1] = 0;
    InputBuffer[3] = 0;
    InputBuffer[2] = a3;
    InputBuffer[0] = a1;
    v7 = a2;
    return NtPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, a4, OutputBufferLength);
  }
  OutputBufferLength = 4LL * a3;
  if ( OutputBufferLength <= 0xFFFFFFFF )
    goto LABEL_3;
  return -1073741675;
}
