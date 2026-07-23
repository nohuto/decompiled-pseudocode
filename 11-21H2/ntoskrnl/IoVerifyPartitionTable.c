/*
 * XREFs of IoVerifyPartitionTable @ 0x140930AE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140650C18 @ 0x140650C18 (sub_140650C18.c)
 *     sub_140650D38 @ 0x140650D38 (sub_140650D38.c)
 *     sub_1406515AC @ 0x1406515AC (sub_1406515AC.c)
 *     sub_140930388 @ 0x140930388 (sub_140930388.c)
 */

NTSTATUS __stdcall IoVerifyPartitionTable(PDEVICE_OBJECT DeviceObject, BOOLEAN FixErrors)
{
  __int64 v3; // r8
  NTSTATUS v4; // ebx
  _QWORD v6[48]; // [rsp+20h] [rbp-198h] BYREF

  sub_140650C18((__int64)v6);
  v6[47] = 0LL;
  v6[0] = off_140006F60;
  v4 = sub_140930388((__int64)v6, v3);
  if ( v4 >= 0 )
    v4 = sub_1406515AC((__int64)v6, FixErrors);
  v6[0] = off_140006F60;
  sub_140650D38(v6);
  return v4;
}
