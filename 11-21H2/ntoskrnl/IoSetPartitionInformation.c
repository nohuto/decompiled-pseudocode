/*
 * XREFs of IoSetPartitionInformation @ 0x140930940
 * Callers:
 *     sub_140611020 @ 0x140611020 (sub_140611020.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140650C18 @ 0x140650C18 (sub_140650C18.c)
 *     sub_140650D38 @ 0x140650D38 (sub_140650D38.c)
 *     sub_140651540 @ 0x140651540 (sub_140651540.c)
 *     sub_140930388 @ 0x140930388 (sub_140930388.c)
 */

NTSTATUS __stdcall IoSetPartitionInformation(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG PartitionNumber,
        ULONG PartitionType)
{
  char v5; // di
  NTSTATUS v7; // ebx
  _DWORD v9[2]; // [rsp+20h] [rbp-E0h] BYREF
  char v10; // [rsp+28h] [rbp-D8h]
  _BYTE v11[111]; // [rsp+29h] [rbp-D7h] BYREF
  _QWORD v12[48]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = PartitionType;
  sub_140650C18((__int64)v12);
  v12[47] = 0LL;
  v12[0] = off_140006F60;
  v9[1] = 0;
  memset(v11, 0, sizeof(v11));
  v9[0] = 0;
  v10 = v5;
  v7 = sub_140930388((__int64)v12, (__int64)DeviceObject);
  if ( v7 >= 0 )
    v7 = sub_140651540((__int64)v12, PartitionNumber, v9);
  v12[0] = off_140006F60;
  sub_140650D38(v12);
  return v7;
}
