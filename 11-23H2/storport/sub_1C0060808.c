/*
 * XREFs of sub_1C0060808 @ 0x1C0060808
 * Callers:
 *     sub_1C00A0950 @ 0x1C00A0950 (sub_1C00A0950.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C001FA9C @ 0x1C001FA9C (sub_1C001FA9C.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0057060 @ 0x1C0057060 (sub_1C0057060.c)
 *     sub_1C00622C0 @ 0x1C00622C0 (sub_1C00622C0.c)
 */

__int64 __fastcall sub_1C0060808(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // r15
  _DWORD *v3; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v7; // edx
  size_t Length; // r12
  signed int v9; // esi
  int v10; // ecx
  unsigned int v12; // ebx
  __int64 v13; // [rsp+28h] [rbp-40h]
  int v14; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0LL;
  v14 = 0;
  P = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = *(_DWORD *)(&MasterIrp->Size + 1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      v9 = -1073741637;
LABEL_21:
      a2->IoStatus.Information = 0LL;
      return sub_1C0003440(a2, 0, v9);
    }
LABEL_7:
    v9 = 0;
    return sub_1C0003440(a2, 0, v9);
  }
  if ( (unsigned int)Length < 0x28 )
  {
    if ( (unsigned int)Length < 8 )
    {
      v9 = -1073741789;
      goto LABEL_21;
    }
    *(_DWORD *)&MasterIrp->Type = 40;
    *(_DWORD *)(&MasterIrp->Size + 1) = 40;
    a2->IoStatus.Information = 8LL;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 564LL) & 0x20) == 0 )
  {
LABEL_16:
    v9 = sub_1C00622C0(a1, a2);
    goto LABEL_17;
  }
  v9 = sub_1C0057060(*(_QWORD *)(a1 + 8), (__int64)a2, &P, &v14);
  if ( v9 < 0 )
  {
    v3 = P;
  }
  else
  {
    v3 = P;
    v9 = sub_1C001FA9C(a1, (__int64)a2, (__int64)P, v14, 0LL, v13, 64);
    if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -2147483643 )
    {
      if ( (unsigned int)(v9 + 1073741822) > 0xE || (v10 = 18433, !_bittest(&v10, v9 + 1073741822)) )
      {
        if ( v9 != -1073741637 )
          goto LABEL_17;
      }
      goto LABEL_16;
    }
    v12 = v3[8];
    memset_0(MasterIrp, 0, Length);
    if ( (unsigned int)Length >= v12 )
      LODWORD(Length) = v12;
    memmove(MasterIrp, v3 + 7, (unsigned int)Length);
    *(_DWORD *)&MasterIrp->Type = 40;
    a2->IoStatus.Information = (unsigned int)Length;
  }
LABEL_17:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72536152u);
  if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -2147483643 )
    goto LABEL_21;
  return sub_1C0003440(a2, 0, v9);
}
