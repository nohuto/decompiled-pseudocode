/*
 * XREFs of sub_1C00228E0 @ 0x1C00228E0
 * Callers:
 *     sub_1C00A0950 @ 0x1C00A0950 (sub_1C00A0950.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C005AD74 @ 0x1C005AD74 (sub_1C005AD74.c)
 */

__int64 __fastcall sub_1C00228E0(__int64 a1, IRP *a2)
{
  unsigned int v2; // ebx
  struct _IRP *MasterIrp; // rsi
  size_t Length; // rbp
  int v8; // ecx
  __int64 v9; // rcx
  int v10; // eax

  v2 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( *(_DWORD *)(a1 + 3344) != 17 )
  {
LABEL_2:
    v2 = -1073741637;
    goto LABEL_3;
  }
  v8 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v8 )
  {
    if ( v8 == 1 )
      return sub_1C0003440(a2, 0, v2);
    goto LABEL_2;
  }
  if ( (unsigned int)Length < 0x10 )
  {
    if ( (unsigned int)Length >= 8 )
    {
      *(_DWORD *)&MasterIrp->Type = 16;
      *(_DWORD *)(&MasterIrp->Size + 1) = 16;
      a2->IoStatus.Information = 8LL;
      return sub_1C0003440(a2, 0, v2);
    }
    v2 = -1073741789;
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(a1 + 24);
  if ( *(char *)(v9 + 109) < 0 || (v10 = sub_1C005AD74(*(_QWORD *)(v9 + 8), v9 + 5688), v2 = v10, v10 >= 0) )
  {
    memset_0(MasterIrp, 0, Length);
    *(_DWORD *)&MasterIrp->Type = 16;
    *(_DWORD *)(&MasterIrp->Size + 1) = 16;
    MasterIrp->MdlAddress = (PMDL)*(unsigned int *)(*(_QWORD *)(a1 + 24) + 5688LL);
    a2->IoStatus.Information = 16LL;
    return sub_1C0003440(a2, 0, v2);
  }
  if ( v10 != -2147483643 )
LABEL_3:
    a2->IoStatus.Information = 0LL;
  return sub_1C0003440(a2, 0, v2);
}
