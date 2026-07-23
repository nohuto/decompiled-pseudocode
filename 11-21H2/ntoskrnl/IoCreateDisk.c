/*
 * XREFs of IoCreateDisk @ 0x140930510
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140650C18 @ 0x140650C18 (sub_140650C18.c)
 *     sub_140650D38 @ 0x140650D38 (sub_140650D38.c)
 *     sub_140650E68 @ 0x140650E68 (sub_140650E68.c)
 *     sub_140930388 @ 0x140930388 (sub_140930388.c)
 */

NTSTATUS __stdcall IoCreateDisk(PDEVICE_OBJECT DeviceObject, struct _CREATE_DISK *Disk)
{
  __int64 v3; // r8
  NTSTATUS v4; // ebx
  __int64 v5; // r8
  _QWORD v7[48]; // [rsp+20h] [rbp-198h] BYREF

  sub_140650C18((__int64)v7);
  v7[47] = 0LL;
  v7[0] = off_140006F60;
  v4 = sub_140930388((__int64)v7, v3);
  if ( v4 >= 0 )
    v4 = sub_140650E68((__int64)v7, (unsigned int *)Disk, v5);
  v7[0] = off_140006F60;
  sub_140650D38(v7);
  return v4;
}
