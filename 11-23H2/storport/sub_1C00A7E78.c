/*
 * XREFs of sub_1C00A7E78 @ 0x1C00A7E78
 * Callers:
 *     sub_1C00161D0 @ 0x1C00161D0 (sub_1C00161D0.c)
 * Callees:
 *     sub_1C00140E4 @ 0x1C00140E4 (sub_1C00140E4.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003275C @ 0x1C003275C (sub_1C003275C.c)
 */

NTSTATUS __fastcall sub_1C00A7E78(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  NTSTATUS Status; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  a2->IoStatus.Status = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 88), 3);
  if ( byte_1C0093BE8 )
  {
    v7 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( (byte_1C0093A02 & 0x20) != 0 )
    {
      Status = a2->IoStatus.Status;
      sub_1C003275C(v4, &stru_1C0083220, &v7, a2, Status);
    }
  }
  return sub_1C00140E4(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
