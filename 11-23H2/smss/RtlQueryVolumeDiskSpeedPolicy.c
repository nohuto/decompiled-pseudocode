/*
 * XREFs of RtlQueryVolumeDiskSpeedPolicy @ 0x14000D6CC
 * Callers:
 *     SmpCreateVolumeDescriptor @ 0x14000CE94 (SmpCreateVolumeDescriptor.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     NtDeviceIoControlFile_0 @ 0x140011100 (NtDeviceIoControlFile_0.c)
 */

NTSTATUS __fastcall RtlQueryVolumeDiskSpeedPolicy(void *a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v4; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v5[4]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v6; // [rsp+70h] [rbp-28h] BYREF
  int v7; // [rsp+78h] [rbp-20h]

  v5[2] = 0;
  v5[1] = 0;
  v6 = 0LL;
  v7 = 0;
  v5[0] = 7;
  result = NtDeviceIoControlFile_0(a1, 0LL, 0LL, 0LL, &v4, 0x2D1400u, v5, 0xCu, &v6, 0xCu);
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
