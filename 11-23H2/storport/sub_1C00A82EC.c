/*
 * XREFs of sub_1C00A82EC @ 0x1C00A82EC
 * Callers:
 *     sub_1C00161D0 @ 0x1C00161D0 (sub_1C00161D0.c)
 * Callees:
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 *     sub_1C0011B08 @ 0x1C0011B08 (sub_1C0011B08.c)
 *     sub_1C00140E4 @ 0x1C00140E4 (sub_1C00140E4.c)
 *     sub_1C0019CFC @ 0x1C0019CFC (sub_1C0019CFC.c)
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003275C @ 0x1C003275C (sub_1C003275C.c)
 *     sub_1C00353FC @ 0x1C00353FC (sub_1C00353FC.c)
 *     sub_1C0066EE4 @ 0x1C0066EE4 (sub_1C0066EE4.c)
 *     sub_1C00AA5B0 @ 0x1C00AA5B0 (sub_1C00AA5B0.c)
 */

__int64 __fastcall sub_1C00A82EC(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // r8
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-50h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-50h]
  union _LARGE_INTEGER v13; // [rsp+30h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-38h] BYREF
  GUID v15; // [rsp+50h] [rbp-20h] BYREF

  memset(&Event, 0, sizeof(Event));
  _InterlockedExchange((volatile __int32 *)(a1 + 88), 8);
  v4 = *(_QWORD *)(a1 + 4896);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 20) |= 4u;
    sub_1C0008BF0(a1, 0LL, 1LL);
  }
  sub_1C0019CFC(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  sub_1C0066EE4(*(_QWORD *)(a1 + 896), &Event);
  v13.QuadPart = -1200000000LL;
  v5 = KeWaitForSingleObject(&Event, Executive, 0, 0, &v13);
  if ( v5 )
  {
    v7 = byte_1C0093BE8 == 0;
    a2->IoStatus.Status = -1073741823;
    if ( !v7 )
    {
      v15 = 0LL;
      IoGetActivityIdIrp(a2, &v15);
      if ( (byte_1C0093A02 & 0x20) != 0 )
      {
        LODWORD(Timeout) = a2->IoStatus.Status;
        sub_1C003275C(v8, &stru_1C0083220, &v15, a2, Timeout);
      }
    }
  }
  else
  {
    v5 = sub_1C001A4C0(*(_QWORD *)(a1 + 8), 4u, v6, 0LL, 0);
    if ( v5 >= 0 )
    {
      sub_1C00353FC(a1);
      sub_1C0011B08(a1);
      sub_1C00AA5B0(a1 + 320);
      if ( byte_1C0093BE8 )
      {
        v15 = 0LL;
        IoGetActivityIdIrp(a2, &v15);
        if ( (byte_1C0093A02 & 0x20) != 0 )
        {
          LODWORD(Timeouta) = a2->IoStatus.Status;
          sub_1C003275C(v9, &stru_1C0083220, &v15, a2, Timeouta);
        }
      }
      a2->IoStatus.Status = 0;
      return (unsigned int)sub_1C00140E4(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
    }
  }
  return (unsigned int)v5;
}
