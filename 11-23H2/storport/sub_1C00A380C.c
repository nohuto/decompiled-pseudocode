/*
 * XREFs of sub_1C00A380C @ 0x1C00A380C
 * Callers:
 *     sub_1C00A0950 @ 0x1C00A0950 (sub_1C00A0950.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00A3884 @ 0x1C00A3884 (sub_1C00A3884.c)
 */

__int64 __fastcall sub_1C00A380C(__int64 a1, IRP *a2)
{
  bool v2; // zf
  struct _IRP *MasterIrp; // rdx
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // r8d
  ULONG Length; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 136) == 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( v2 )
  {
    v8 = -1073741637;
  }
  else
  {
    v6 = *(_DWORD *)(&MasterIrp->Size + 1);
    if ( v6 )
    {
      if ( v6 == 1 )
        v7 = 0;
      else
        v7 = -1073741637;
    }
    else
    {
      v7 = sub_1C00A3884(a1, MasterIrp, &Length);
      if ( v7 < 0 )
        a2->IoStatus.Information = 0LL;
      else
        a2->IoStatus.Information = Length;
    }
    v8 = v7;
  }
  return sub_1C0003440(a2, 0, v8);
}
