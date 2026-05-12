/*
 * XREFs of sub_1C00343D8 @ 0x1C00343D8
 * Callers:
 *     sub_1C003408C @ 0x1C003408C (sub_1C003408C.c)
 *     sub_1C005E814 @ 0x1C005E814 (sub_1C005E814.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 */

__int64 __fastcall sub_1C00343D8(__int64 a1, IRP *a2, _BYTE *a3, _BYTE *a4)
{
  __int64 v4; // r15
  struct _IRP *MasterIrp; // rdi
  unsigned int v9; // ebx
  unsigned int *v10; // r14
  __int64 v11; // rsi
  bool v12; // zf
  int Information; // eax
  bool v14; // cf
  __int64 v15; // rax
  unsigned int v16; // eax
  void *v17; // rcx
  char *v18; // r15
  void *v19; // rax
  void *v20; // rbp
  __int64 v21; // rdx
  int UserEvent; // eax
  __int64 v23; // rcx
  int v24; // ecx

  v4 = *(_QWORD *)(a1 + 64);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v9 = 0;
  v10 = 0LL;
  if ( *(_DWORD *)v4 == 1431193940 )
    v11 = *(_QWORD *)(v4 + 24);
  else
    v11 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1431193940 )
    v4 = 0LL;
  *a3 = 0;
  v12 = LODWORD(MasterIrp->MdlAddress) == 3;
  *a4 = 0;
  if ( v12 )
  {
    Information = MasterIrp->IoStatus.Information;
    if ( Information == 1 )
    {
      v14 = (unsigned __int8)LODWORD(MasterIrp->UserEvent) < 0xC0u;
    }
    else
    {
      if ( Information != 2 )
        goto LABEL_13;
      v14 = (unsigned __int8)LODWORD(MasterIrp->UserEvent) < 0x80u;
    }
    if ( v14 )
      return v9;
LABEL_13:
    if ( (*(_BYTE *)(v11 + 108) & 0x20) == 0 )
      goto LABEL_27;
    v15 = sub_1C0007CF4(64LL, 4176LL, 1918067026LL, a1);
    v10 = (unsigned int *)v15;
    if ( !v15 )
    {
      MasterIrp->Flags = 7;
      return (unsigned int)-1073741670;
    }
    *(_DWORD *)v15 = 28;
    *(_DWORD *)(v15 + 16) = 2954240;
    *(_QWORD *)(v15 + 4) = 0x4C4F434F544F5250LL;
    if ( v4 )
      v16 = *(_DWORD *)(v4 + 1320);
    else
      v16 = *(_DWORD *)(v11 + 4060);
    v10[3] = v16;
    v10[6] = 4148;
    v10[12] = 0;
    v10[7] = 48;
    v10[8] = 48;
    v10[9] = 3;
    v10[10] = 2;
    v10[11] = 5;
    v10[13] = 44;
    v10[14] = 4096;
    v9 = sub_1C001F308(v11, a2, v10, 0x1050u, 0LL, 0, 64);
    if ( (v9 & 0x80000000) == 0 )
    {
      v17 = *(void **)(v11 + 5320);
      v18 = (char *)v10 + v10[13] + 36;
      if ( !v17 )
      {
        v19 = (void *)sub_1C0007CF4(66LL, 4096LL, 1162043730LL, *(_QWORD *)(v11 + 8));
        v20 = v19;
        if ( !v19 )
        {
          MasterIrp->Flags = 7;
          v9 = -1073741670;
          goto LABEL_41;
        }
        memmove(v19, v18, 0x1000uLL);
        if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 5320), (signed __int64)v20, 0LL) )
          goto LABEL_26;
        ExFreePoolWithTag(v20, 0x45436152u);
        v17 = *(void **)(v11 + 5320);
      }
      memmove(v17, v18, 0x1000uLL);
    }
LABEL_26:
    *(_BYTE *)(v11 + 108) &= ~0x20u;
LABEL_27:
    v21 = *(_QWORD *)(v11 + 5320);
    if ( v21 )
    {
      UserEvent = (int)MasterIrp->UserEvent;
      v23 = (unsigned __int8)UserEvent;
      if ( LODWORD(MasterIrp->IoStatus.Information) != 1 )
        v23 = (unsigned __int8)UserEvent + 256LL;
      v24 = *(_DWORD *)(v21 + 4 * v23);
      if ( (v24 & 1) != 0 )
      {
        if ( (v24 & 0x18) != 0 || (v24 & 0x70000) == 0x20000 )
        {
          *a3 = 1;
        }
        else if ( (v24 & 4) != 0 || (v24 & 0x70000) == 0x10000 )
        {
          *a4 = 1;
        }
LABEL_40:
        if ( !v10 )
          return v9;
LABEL_41:
        ExFreePoolWithTag(v10, 0x72536152u);
        return v9;
      }
    }
    else if ( (unsigned __int8)LODWORD(MasterIrp->UserEvent) == 0x80 )
    {
      v9 = 0;
      goto LABEL_40;
    }
    MasterIrp->Flags = 3;
    v9 = -1073741808;
    goto LABEL_40;
  }
  return (unsigned int)-1056964602;
}
