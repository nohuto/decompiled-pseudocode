/*
 * XREFs of RtlpCreateExecutionRequiredRequest @ 0x180118220
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF258 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18009F110 (NtQueryInformationProcess.c)
 *     NtPowerInformation @ 0x18009F9C0 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpCreateExecutionRequiredRequest(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  HANDLE v6; // [rsp+38h] [rbp-29h] BYREF
  int v7; // [rsp+40h] [rbp-21h]
  char v8; // [rsp+44h] [rbp-1Dh]
  void *v9; // [rsp+48h] [rbp-19h]
  _DWORD InputBuffer[2]; // [rsp+50h] [rbp-11h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  __int64 ProcessInformation[7]; // [rsp+78h] [rbp+17h] BYREF
  char v13; // [rsp+B0h] [rbp+4Fh]
  HANDLE OutputBuffer; // [rsp+D8h] [rbp+77h] BYREF

  ProcessInformation[0] = 64LL;
  result = NtQueryInformationProcess(a1, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    if ( (v13 & 0x40) != 0 )
    {
      InputBuffer[0] = 0;
      InputBuffer[1] = 1;
      RtlInitUnicodeString(&DestinationString, L"QueryDebugInformation request");
      v5 = NtPowerInformation(PlmPowerRequestCreate, InputBuffer, 0x28u, &OutputBuffer, 8u);
      if ( v5 >= 0 )
      {
        v6 = OutputBuffer;
        v7 = 3;
        v8 = 1;
        v9 = a1;
        v5 = NtPowerInformation(PowerRequestAction, &v6, 0x18u, 0LL, 0);
        if ( v5 >= 0 )
          *a2 = OutputBuffer;
        else
          NtClose(OutputBuffer);
      }
      return v5;
    }
    else
    {
      *a2 = 0LL;
      return 0;
    }
  }
  return result;
}
