/*
 * XREFs of IoReadPartitionTableEx @ 0x140930890
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140650C18 @ 0x140650C18 (sub_140650C18.c)
 *     sub_140650D38 @ 0x140650D38 (sub_140650D38.c)
 *     sub_140651304 @ 0x140651304 (sub_140651304.c)
 *     sub_140930388 @ 0x140930388 (sub_140930388.c)
 */

NTSTATUS __stdcall IoReadPartitionTableEx(
        PDEVICE_OBJECT DeviceObject,
        struct _DRIVE_LAYOUT_INFORMATION_EX **DriveLayout)
{
  __int64 v3; // r8
  NTSTATUS v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD v8[48]; // [rsp+20h] [rbp-198h] BYREF

  sub_140650C18((__int64)v8);
  v8[47] = 0LL;
  v8[0] = off_140006F60;
  v4 = sub_140930388((__int64)v8, v3);
  if ( v4 >= 0 )
    v4 = sub_140651304((__int64)v8, DriveLayout, v5, v6);
  v8[0] = off_140006F60;
  sub_140650D38(v8);
  return v4;
}
