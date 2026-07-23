/*
 * XREFs of PopSetHiberPersistedRegValue @ 0x1409893D8
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PopSetHiberFileSize @ 0x140989284 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x140989328 (PopSetHiberFileType.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041BCF0 (ZwSetValueKey.c)
 *     PopOpenHiberPersistedKey @ 0x1408228E0 (PopOpenHiberPersistedKey.c)
 */

__int64 __fastcall PopSetHiberPersistedRegValue(int a1, int a2)
{
  __int64 v2; // rdi
  NTSTATUS v3; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  Data = a2;
  KeyHandle = (HANDLE)-1LL;
  v2 = a1;
  DestinationString = 0LL;
  v3 = PopOpenHiberPersistedKey(&KeyHandle, 0x2001Fu);
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, (&PopHiberPersistedRegValueDatabase)[3 * v2]);
    v3 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
  }
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
