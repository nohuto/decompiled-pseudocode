/*
 * XREFs of sub_1C0037500 @ 0x1C0037500
 * Callers:
 *     sub_1C00161D0 @ 0x1C00161D0 (sub_1C00161D0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00140E4 @ 0x1C00140E4 (sub_1C00140E4.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003275C @ 0x1C003275C (sub_1C003275C.c)
 *     sub_1C004C284 @ 0x1C004C284 (sub_1C004C284.c)
 *     sub_1C00B15EC @ 0x1C00B15EC (sub_1C00B15EC.c)
 *     sub_1C00B162C @ 0x1C00B162C (sub_1C00B162C.c)
 */

NTSTATUS __fastcall sub_1C0037500(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  PIO_SECURITY_CONTEXT SecurityContext; // rcx
  PIO_SECURITY_CONTEXT v6; // rcx
  PIO_SECURITY_CONTEXT v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx
  NTSTATUS Status; // [rsp+20h] [rbp-48h]
  GUID v12; // [rsp+30h] [rbp-38h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext == (PIO_SECURITY_CONTEXT)&unk_1C0088EB8
    || RtlCompareMemory(SecurityContext, &unk_1C0088EB8, 0x10uLL) == 16 )
  {
    v8 = sub_1C00B15EC(SecurityContext, a2, *(_QWORD *)(a1 + 32));
LABEL_14:
    a2->IoStatus.Status = v8;
    if ( v8 >= 0 )
      goto LABEL_8;
    return sub_1C0003440(a2, 0, v8);
  }
  v6 = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( v6 == (PIO_SECURITY_CONTEXT)&unk_1C0089540 || RtlCompareMemory(v6, &unk_1C0089540, 0x10uLL) == 16 )
  {
    v8 = sub_1C00B162C(v6, a2, *(_QWORD *)(a1 + 4312));
    goto LABEL_14;
  }
  v7 = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( v7 == (PIO_SECURITY_CONTEXT)&unk_1C0082F38 || RtlCompareMemory(v7, &unk_1C0082F38, 0x10uLL) == 16 )
  {
    v8 = sub_1C004C284(a1, a2);
    if ( v8 >= 0 )
      return sub_1C0003440(a2, 0, v8);
  }
LABEL_8:
  if ( byte_1C0093BE8 )
  {
    v12 = 0LL;
    IoGetActivityIdIrp(a2, &v12);
    if ( (byte_1C0093A02 & 0x20) != 0 )
    {
      Status = a2->IoStatus.Status;
      sub_1C003275C(v9, &stru_1C0083220, &v12, a2, Status);
    }
  }
  return sub_1C00140E4(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
