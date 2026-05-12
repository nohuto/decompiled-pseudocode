/*
 * XREFs of sub_1C00AB32C @ 0x1C00AB32C
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003275C @ 0x1C003275C (sub_1C003275C.c)
 */

NTSTATUS __fastcall sub_1C00AB32C(__int64 a1, IRP *a2)
{
  __int64 v5; // rcx
  NTSTATUS Status; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 8 )
  {
    if ( byte_1C0093BE8 )
    {
      v7 = 0LL;
      IoGetActivityIdIrp(a2, &v7);
      if ( (byte_1C0093A02 & 8) != 0 )
      {
        Status = a2->IoStatus.Status;
        sub_1C003275C(v5, &stru_1C0089210, &v7, a2, Status);
      }
    }
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  }
  else
  {
    a2->IoStatus.Information = 0LL;
    return sub_1C0003440(a2, 0, 0xC00000EF);
  }
}
