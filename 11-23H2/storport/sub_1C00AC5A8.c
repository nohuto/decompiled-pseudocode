/*
 * XREFs of sub_1C00AC5A8 @ 0x1C00AC5A8
 * Callers:
 *     sub_1C00AB210 @ 0x1C00AB210 (sub_1C00AB210.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 */

__int64 __fastcall sub_1C00AC5A8(__int64 a1, IRP *a2)
{
  unsigned int v2; // ebx
  const void *v4; // rdx
  int v5; // ecx

  v2 = 0;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 0x1000 )
  {
    v2 = -1073741789;
LABEL_7:
    a2->IoStatus.Information = 0LL;
    return sub_1C0003440(a2, 0, v2);
  }
  v4 = *(const void **)(a1 + 3472);
  if ( !v4 )
    goto LABEL_6;
  v5 = *(_DWORD *)(&a2->AssociatedIrp.MasterIrp->Size + 1);
  if ( !v5 )
  {
    memmove(a2->AssociatedIrp.MasterIrp, v4, 0x1000uLL);
    a2->IoStatus.Information = 4096LL;
    return sub_1C0003440(a2, 0, v2);
  }
  if ( v5 != 1 )
  {
LABEL_6:
    v2 = -1073741637;
    goto LABEL_7;
  }
  return sub_1C0003440(a2, 0, v2);
}
