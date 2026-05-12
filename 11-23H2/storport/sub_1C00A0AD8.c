/*
 * XREFs of sub_1C00A0AD8 @ 0x1C00A0AD8
 * Callers:
 *     sub_1C00A0950 @ 0x1C00A0950 (sub_1C00A0950.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00A0B3C @ 0x1C00A0B3C (sub_1C00A0B3C.c)
 */

__int64 __fastcall sub_1C00A0AD8(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP *MasterIrp; // r9
  int v5; // edx
  signed int v6; // eax
  ULONG Length; // [rsp+38h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = *(_DWORD *)(&MasterIrp->Size + 1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( v5 )
  {
    if ( v5 == 1 )
      v6 = 0;
    else
      v6 = -1073741637;
  }
  else
  {
    v6 = sub_1C00A0B3C(a1, MasterIrp, &Length);
    if ( v6 < 0 )
      a2->IoStatus.Information = 0LL;
    else
      a2->IoStatus.Information = Length;
  }
  return sub_1C0003440(a2, 0, v6);
}
