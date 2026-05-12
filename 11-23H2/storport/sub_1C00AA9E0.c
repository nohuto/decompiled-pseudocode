/*
 * XREFs of sub_1C00AA9E0 @ 0x1C00AA9E0
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003275C @ 0x1C003275C (sub_1C003275C.c)
 *     sub_1C00B1508 @ 0x1C00B1508 (sub_1C00B1508.c)
 */

__int64 __fastcall sub_1C00AA9E0(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edi
  NTSTATUS Status; // [rsp+20h] [rbp-38h]
  GUID v8; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  if ( (int)sub_1C00B1508(*(_QWORD *)(v2 + 8)) < 0 )
  {
    v5 = -1073741808;
    sub_1C0003440(a2, 0, 0xC0000010);
  }
  else
  {
    if ( byte_1C0093BE8 )
    {
      v8 = 0LL;
      IoGetActivityIdIrp(a2, &v8);
      if ( (byte_1C0093A02 & 8) != 0 )
      {
        Status = a2->IoStatus.Status;
        sub_1C003275C(v4, &stru_1C0089210, &v8, a2, Status);
      }
    }
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 8), a2);
  }
  return v5;
}
