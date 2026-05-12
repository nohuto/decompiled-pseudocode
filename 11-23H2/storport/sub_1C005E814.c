/*
 * XREFs of sub_1C005E814 @ 0x1C005E814
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00343D8 @ 0x1C00343D8 (sub_1C00343D8.c)
 *     sub_1C0057F14 @ 0x1C0057F14 (sub_1C0057F14.c)
 *     sub_1C00630BC @ 0x1C00630BC (sub_1C00630BC.c)
 */

NTSTATUS __fastcall sub_1C005E814(__int64 a1, IRP *a2)
{
  __int64 CurrentStackLocation; // rcx
  IRP *v4; // rbx
  signed int v5; // eax
  __int64 v7; // r8
  char v8; // [rsp+38h] [rbp+10h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v4 = a2;
  v9 = 0;
  if ( *(_DWORD *)(CurrentStackLocation + 16) < 0x10u )
  {
    v5 = -1073741820;
LABEL_11:
    v4->IoStatus.Information = 0LL;
    return sub_1C0003440(v4, 0, v5);
  }
  if ( SHIDWORD(a2->AssociatedIrp.MasterIrp->MdlAddress) < 0 )
  {
    ++a2->CurrentLocation;
    a2->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)(CurrentStackLocation + 72);
    return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  }
  v5 = sub_1C0057F14(CurrentStackLocation, (__int64)a2);
  if ( v5 < 0 )
    goto LABEL_11;
  v5 = sub_1C00343D8(*(_QWORD *)(a1 + 8), v4, &v8, &v9);
  if ( v5 < 0 )
    goto LABEL_11;
  a2 = v4;
  if ( v8 )
  {
    ++v4->CurrentLocation;
    ++v4->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  }
  LOBYTE(v7) = v9;
  v5 = sub_1C00630BC(a1, v4, v7);
  if ( v5 < 0 )
    goto LABEL_11;
  return sub_1C0003440(v4, 0, v5);
}
