/*
 * XREFs of sub_1C005F2F4 @ 0x1C005F2F4
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C001FA9C @ 0x1C001FA9C (sub_1C001FA9C.c)
 *     sub_1C00573B0 @ 0x1C00573B0 (sub_1C00573B0.c)
 */

NTSTATUS __fastcall sub_1C005F2F4(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  signed int v5; // esi
  __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+58h] [rbp+10h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  P = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v8 = 0;
  if ( CurrentStackLocation->Parameters.Create.Options >= 0x10 )
  {
    if ( ((__int64)a2->AssociatedIrp.MasterIrp->MdlAddress & 1) != 0 )
    {
      ++a2->CurrentLocation;
      a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
    }
    v5 = sub_1C00573B0(*(_QWORD *)(a1 + 8), (__int64)a2, (__int64 *)&P, &v8);
    if ( v5 >= 0 )
    {
      if ( !P )
        goto LABEL_10;
      v5 = sub_1C001FA9C(a1, (__int64)a2, (__int64)P, v8, 0LL, v7, 128);
    }
    if ( P )
      ExFreePoolWithTag(P, 0x72536152u);
    goto LABEL_10;
  }
  v5 = -1073741820;
LABEL_10:
  a2->IoStatus.Information = 0LL;
  return sub_1C0003440(a2, 0, v5);
}
