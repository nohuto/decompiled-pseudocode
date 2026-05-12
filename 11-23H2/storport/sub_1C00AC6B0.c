/*
 * XREFs of sub_1C00AC6B0 @ 0x1C00AC6B0
 * Callers:
 *     sub_1C00AB210 @ 0x1C00AB210 (sub_1C00AB210.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

__int64 __fastcall sub_1C00AC6B0(__int64 a1, IRP *a2)
{
  unsigned int v2; // r8d
  _DWORD *p_Type; // rdx
  int v6; // ecx

  v2 = 0;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 4 )
  {
    v2 = -1073741789;
LABEL_11:
    a2->IoStatus.Information = 0LL;
    return sub_1C0003440(a2, 0, v2);
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x20) == 0 )
  {
LABEL_4:
    v2 = -1073741637;
    goto LABEL_11;
  }
  p_Type = &a2->AssociatedIrp.MasterIrp->Type;
  v6 = p_Type[1];
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_4;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 96) & 0xFFFFFF) == 0 )
    {
      v2 = -1073741808;
      goto LABEL_11;
    }
    *p_Type = *(_DWORD *)(a1 + 96) & 0xFFFFFF;
    a2->IoStatus.Information = 4LL;
  }
  return sub_1C0003440(a2, 0, v2);
}
