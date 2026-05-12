/*
 * XREFs of sub_1C005F5A4 @ 0x1C005F5A4
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0018124 @ 0x1C0018124 (sub_1C0018124.c)
 *     sub_1C001FCD0 @ 0x1C001FCD0 (sub_1C001FCD0.c)
 *     sub_1C001FE14 @ 0x1C001FE14 (sub_1C001FE14.c)
 *     sub_1C001FE60 @ 0x1C001FE60 (sub_1C001FE60.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C005DBC8 @ 0x1C005DBC8 (sub_1C005DBC8.c)
 *     sub_1C005DE40 @ 0x1C005DE40 (sub_1C005DE40.c)
 *     sub_1C005FAB4 @ 0x1C005FAB4 (sub_1C005FAB4.c)
 */

__int64 __fastcall sub_1C005F5A4(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  signed int Status; // edi
  __int64 v4; // r14
  int v6; // ecx
  struct _IRP *MasterIrp; // r15
  unsigned int Length; // r9d
  __int64 v10; // rbx
  _OWORD *v11; // rcx
  __int64 v12; // r9
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  ULONG_PTR v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rbp
  char v19; // al
  __int64 v20; // r8
  IRP *v21; // rax
  int v22; // eax
  IRP *v23; // r10
  _OWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // r9
  _OWORD *v27; // rax
  _OWORD *v28; // r15
  __int64 v29; // rcx
  __int128 v30; // xmm1
  bool v31; // cf
  _OWORD *v32; // r14
  __int128 v33; // xmm1
  IRP *v34; // rcx
  int v36; // [rsp+20h] [rbp-88h]
  int v37; // [rsp+20h] [rbp-88h]
  int v38; // [rsp+30h] [rbp-78h]
  PVOID Dst; // [rsp+40h] [rbp-68h]
  struct _IO_STATUS_BLOCK v40; // [rsp+48h] [rbp-60h] BYREF
  char v41; // [rsp+B0h] [rbp+8h] BYREF
  PIRP v42; // [rsp+B8h] [rbp+10h]
  PIRP Irp; // [rsp+C0h] [rbp+18h]
  PVOID P; // [rsp+C8h] [rbp+20h]

  v42 = a2;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = 0;
  v4 = *(_QWORD *)(a1 + 3336);
  v6 = *(_DWORD *)(a1 + 3344);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v40 = 0LL;
  v41 = 0;
  if ( (((v6 - 8) & 0xFFFFFFFD) != 0 || (*(_BYTE *)(a1 + 450) & 0x10) == 0) && v6 != 11 )
  {
    Status = -1073741637;
LABEL_54:
    v15 = 0LL;
    goto LABEL_55;
  }
  if ( CurrentStackLocation->Parameters.Create.Options < 0xC )
    goto LABEL_53;
  if ( Length < 0x20C )
  {
    Status = -1073741789;
    goto LABEL_54;
  }
  if ( !MasterIrp
    || *(_DWORD *)&MasterIrp->Type != 12
    || *(_DWORD *)(&MasterIrp->Size + 1) != 12
    || LODWORD(MasterIrp->MdlAddress) > 1 )
  {
LABEL_53:
    Status = -1073741811;
    goto LABEL_54;
  }
  v10 = MEMORY[0xFFFFF78000000014];
  if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
  {
    if ( v4 )
      goto LABEL_22;
    goto LABEL_20;
  }
  if ( !v4 )
  {
LABEL_20:
    v16 = sub_1C0007CF4(64LL, 528LL, 1414750546LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 3336) = v16;
    v4 = v16;
    if ( !v16 )
    {
      Status = -1073741670;
      goto LABEL_54;
    }
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(v4 + 520) & 1) != 0 && MEMORY[0xFFFFF78000000014] - *(_QWORD *)v4 < 0x430E23400uLL )
  {
    *(_DWORD *)&MasterIrp->Type = 524;
    v11 = (_OWORD *)(v4 + 8);
    *(_DWORD *)(&MasterIrp->Size + 1) = 524;
    v12 = 4LL;
    LOBYTE(MasterIrp->MdlAddress) = (*(_DWORD *)(v4 + 520) & 2) != 0;
    v13 = (_OWORD *)((char *)&MasterIrp->MdlAddress + 1);
    do
    {
      *v13 = *v11;
      v13[1] = v11[1];
      v13[2] = v11[2];
      v13[3] = v11[3];
      v13[4] = v11[4];
      v13[5] = v11[5];
      v13[6] = v11[6];
      v13 += 8;
      v14 = v11[7];
      v11 += 8;
      *(v13 - 1) = v14;
      --v12;
    }
    while ( v12 );
    *(_DWORD *)(v4 + 520) |= 1u;
    v15 = 524LL;
    *(_QWORD *)v4 = v10;
    goto LABEL_55;
  }
LABEL_22:
  v17 = *(_QWORD *)(a1 + 24);
  v18 = sub_1C0007BA4(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(v17 + 442), 1);
  if ( !v18 )
  {
    Status = -1073741801;
    goto LABEL_54;
  }
  P = (PVOID)sub_1C0007CF4(64LL, 512LL, 1918067026LL, *(_QWORD *)(a1 + 8));
  if ( P )
  {
    Dst = (PVOID)sub_1C0007CF4(64LL, 255LL, 1314087250LL, *(_QWORD *)(a1 + 8));
    if ( !Dst )
    {
      Status = -1073741801;
LABEL_28:
      v15 = 0LL;
      goto LABEL_29;
    }
    sub_1C005DE40(a1, (__int64)a2, v18, (__int64)Dst, v36, *(_BYTE *)(v17 + 442));
    Status = sub_1C005FAB4(a1, v18, &v41);
    if ( Status < 0 )
      goto LABEL_28;
    v19 = v41;
    v15 = 9LL;
    *(_DWORD *)&MasterIrp->Type = 524;
    *(_DWORD *)(&MasterIrp->Size + 1) = 9;
    LOBYTE(MasterIrp->MdlAddress) = v19;
    memset_0(Dst, 0, 0xFFuLL);
    sub_1C005DBC8(a1, (__int64)v42, v18, (__int64)P, v37, (__int64)Dst, v38, *(_BYTE *)(v17 + 442));
    v21 = sub_1C001FCD0(*(_QWORD *)(a1 + 8), v18, v20, &v40);
    Irp = v21;
    if ( !v21 )
    {
      Status = -1073741801;
      goto LABEL_29;
    }
    v22 = sub_1C0018124(*(PDEVICE_OBJECT *)(a1 + 8), v21);
    v23 = Irp;
    Status = v22;
    if ( v22 >= 0 )
    {
      Status = Irp->IoStatus.Status;
      if ( Status < 0 )
      {
LABEL_50:
        sub_1C001FE14(v23);
LABEL_29:
        ExFreePoolWithTag(P, 0x72536152u);
        if ( Dst )
          ExFreePoolWithTag(Dst, 0x4E536152u);
        goto LABEL_31;
      }
      Status = sub_1C001FE60(*(_BYTE *)(v18 + 3));
    }
    if ( Status >= 0 )
    {
      if ( *(_BYTE *)(v18 + 2) == 40 )
      {
        v24 = *(_OWORD **)(v18 + 64);
        v25 = *(_DWORD *)(v18 + 60);
      }
      else
      {
        v24 = *(_OWORD **)(v18 + 24);
        v25 = *(_DWORD *)(v18 + 16);
      }
      if ( v25 >= 0x200 )
      {
        v26 = 4LL;
        *(_DWORD *)(&MasterIrp->Size + 1) = 524;
        v27 = v24;
        v28 = (_OWORD *)((char *)&MasterIrp->MdlAddress + 1);
        v29 = 4LL;
        do
        {
          *v28 = *v27;
          v28[1] = v27[1];
          v28[2] = v27[2];
          v28[3] = v27[3];
          v28[4] = v27[4];
          v28[5] = v27[5];
          v28[6] = v27[6];
          v28 += 8;
          v30 = v27[7];
          v27 += 8;
          *(v28 - 1) = v30;
          --v29;
        }
        while ( v29 );
        v31 = v41 != 0;
        *(_QWORD *)v4 = v10;
        *(_DWORD *)(v4 + 520) = (v31 ? 2 : 0) | *(_DWORD *)(v4 + 520) & 0xFFFFFFFD | 1;
        v32 = (_OWORD *)(v4 + 8);
        do
        {
          *v32 = *v24;
          v32[1] = v24[1];
          v32[2] = v24[2];
          v32[3] = v24[3];
          v32[4] = v24[4];
          v32[5] = v24[5];
          v32[6] = v24[6];
          v32 += 8;
          v33 = v24[7];
          v24 += 8;
          *(v32 - 1) = v33;
          --v26;
        }
        while ( v26 );
        v15 = 524LL;
      }
      else
      {
        Status = -1073741823;
      }
    }
    goto LABEL_50;
  }
  Status = -1073741801;
  v15 = 0LL;
LABEL_31:
  if ( *(_BYTE *)(v17 + 442) == 1 )
  {
    *(_QWORD *)(v18 + 80) = 0LL;
    *(_QWORD *)(v18 + 104) = 0LL;
  }
  else
  {
    *(_QWORD *)(v18 + 48) = 0LL;
    *(_QWORD *)(v18 + 56) = 0LL;
    *(_QWORD *)(v18 + 32) = 0LL;
  }
  ExFreePoolWithTag((PVOID)v18, 0x72536152u);
LABEL_55:
  v34 = v42;
  v42->IoStatus.Information = v15;
  return sub_1C0003440(v34, 0, Status);
}
