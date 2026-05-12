/*
 * XREFs of sub_1C003BBA4 @ 0x1C003BBA4
 * Callers:
 *     sub_1C00A0DEC @ 0x1C00A0DEC (sub_1C00A0DEC.c)
 * Callees:
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0057060 @ 0x1C0057060 (sub_1C0057060.c)
 */

__int64 __fastcall sub_1C003BBA4(__int64 a1, IRP *a2, _QWORD *a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP *MasterIrp; // r15
  size_t Length; // rbp
  unsigned int v9; // esi
  int v10; // eax
  _DWORD *v11; // r14
  unsigned int v12; // ebx
  ULONG v14; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  P = 0LL;
  v14 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *a3 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options >= 8 )
  {
    if ( (unsigned int)Length >= 0x28 )
    {
      v10 = sub_1C0057060(*(_QWORD *)(a1 + 8), a2, &P, &v14);
      v11 = P;
      v9 = v10;
      if ( v10 >= 0 )
      {
        v9 = sub_1C001F308(a1, a2, (unsigned int *)P, v14, 0LL, 0, 64);
        if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
        {
          v12 = v11[8];
          memset_0(MasterIrp, 0, Length);
          if ( (unsigned int)Length >= v12 )
            LODWORD(Length) = v12;
          memmove(MasterIrp, v11 + 7, (unsigned int)Length);
          *(_DWORD *)&MasterIrp->Type = 40;
          *a3 = (unsigned int)Length;
        }
      }
      if ( v11 )
        ExFreePoolWithTag(v11, 0x72536152u);
    }
    else if ( (unsigned int)Length < 8 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *a3 = 8LL;
      v9 = 0;
      *(_DWORD *)&MasterIrp->Type = 40;
      *(_DWORD *)(&MasterIrp->Size + 1) = 40;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v9;
}
