/*
 * XREFs of RtlQueryVolumeDiskSpeedPolicy @ 0x18005F91C
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x18005F8B0 (RtlpDiskSpeedInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtDeviceIoControlFile @ 0x1800A0F90 (NtDeviceIoControlFile.c)
 */

NTSTATUS __fastcall RtlQueryVolumeDiskSpeedPolicy(void *a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK v4; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v5[4]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v6; // [rsp+70h] [rbp-28h] BYREF
  int v7; // [rsp+78h] [rbp-20h]

  v5[2] = 0;
  v5[1] = 0;
  v6 = 0LL;
  v7 = 0;
  v5[0] = 7;
  result = NtDeviceIoControlFile(a1, 0LL, 0LL, 0LL, &v4, 0x2D1400u, v5, 0xCu, &v6, 0xCu);
  if ( result >= 0 )
  {
    *a2 = (_BYTE)v7 != 0 ? 10 : 20;
    return 0;
  }
  if ( result == -1073741823 || result == -1073741808 )
  {
    *a2 = 10;
    return 0;
  }
  return result;
}
