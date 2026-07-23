/*
 * XREFs of IoSetPartitionInformationEx @ 0x140930A20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140650C18 @ 0x140650C18 (sub_140650C18.c)
 *     sub_140650D38 @ 0x140650D38 (sub_140650D38.c)
 *     sub_140651540 @ 0x140651540 (sub_140651540.c)
 *     sub_140930388 @ 0x140930388 (sub_140930388.c)
 */

NTSTATUS __stdcall IoSetPartitionInformationEx(
        PDEVICE_OBJECT DeviceObject,
        ULONG PartitionNumber,
        struct _SET_PARTITION_INFORMATION_EX *PartitionInfo)
{
  __int64 v5; // r9
  NTSTATUS v6; // ebx
  _QWORD v8[48]; // [rsp+20h] [rbp-198h] BYREF

  sub_140650C18((__int64)v8);
  v8[47] = 0LL;
  v8[0] = off_140006F60;
  v6 = sub_140930388((__int64)v8, v5);
  if ( v6 >= 0 )
    v6 = sub_140651540((__int64)v8, PartitionNumber, PartitionInfo);
  v8[0] = off_140006F60;
  sub_140650D38(v8);
  return v6;
}
