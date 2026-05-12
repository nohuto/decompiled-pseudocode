/*
 * XREFs of sub_1C00A21E0 @ 0x1C00A21E0
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C0008870 @ 0x1C0008870 (sub_1C0008870.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C0010124 @ 0x1C0010124 (sub_1C0010124.c)
 *     sub_1C00137B4 @ 0x1C00137B4 (sub_1C00137B4.c)
 *     sub_1C001AA84 @ 0x1C001AA84 (sub_1C001AA84.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C005DAE4 @ 0x1C005DAE4 (sub_1C005DAE4.c)
 */

__int64 __fastcall sub_1C00A21E0(__int64 a1, IRP *a2)
{
  __int64 v2; // r13
  unsigned int *v3; // rdi
  _DWORD *v4; // r14
  struct _IRP *MasterIrp; // rcx
  IRP *v7; // r15
  unsigned __int64 Options; // rdx
  __int64 IrpCount; // r9
  __int64 Flags; // r8
  int v11; // eax
  int v12; // ebx
  int v14; // r12d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // r15
  IRP *v21; // rax
  __int64 v22; // rdx
  char *v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // [rsp+20h] [rbp-10h]
  unsigned int v28; // [rsp+70h] [rbp+40h] BYREF
  IRP *v29; // [rsp+78h] [rbp+48h]
  _DWORD *v30; // [rsp+80h] [rbp+50h] BYREF

  v29 = a2;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  v28 = 0;
  v4 = 0LL;
  v30 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v7 = a2;
  if ( !MasterIrp
    || (Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options, (unsigned int)Options < 0x1C)
    || (IrpCount = (unsigned int)MasterIrp->AssociatedIrp.IrpCount,
        Options < IrpCount + (unsigned __int64)*(&MasterIrp->Flags + 1))
    || (Flags = MasterIrp->Flags, Options < Flags + (unsigned __int64)HIDWORD(MasterIrp->MdlAddress))
    || Options < Flags + IrpCount + 28 )
  {
    v12 = -1073741811;
    goto LABEL_12;
  }
  v11 = *(_DWORD *)(&MasterIrp->Size + 1);
  switch ( v11 )
  {
    case 1:
      goto LABEL_32;
    case -2147483646:
      v14 = 1;
      v15 = sub_1C00137B4(a1, (__int64)v7, (__int64 *)&v30, &v28);
      goto LABEL_17;
    case -2147483636:
LABEL_32:
      if ( !byte_1C0093AE9 )
      {
LABEL_11:
        v12 = -1073741637;
        goto LABEL_12;
      }
      break;
    case -2147483634:
    case -2147483633:
      break;
    default:
      goto LABEL_11;
  }
  v14 = 60;
  v15 = sub_1C005DAE4(a1, (__int64)v7, (__int64 *)&v30, &v28);
LABEL_17:
  v4 = v30;
  v12 = v15;
  if ( v15 >= 0 )
  {
    v30[3] = v14;
    v3 = (unsigned int *)sub_1C0007BA4(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v2 + 442), 0);
    if ( v3
      && (v17 = sub_1C0008424(((*(_DWORD *)(v2 + 484) + 7) & 0xFFFFFFF8) + 1104, v16, v2),
          v30 = (_DWORD *)v17,
          (v19 = v17) != 0) )
    {
      v20 = v17 + 48;
      sub_1C0004C64(v17 + 48, v18, 0, 0LL);
      v21 = v29;
      *(_QWORD *)(v20 + 176) = v29;
      *(_QWORD *)(v20 + 184) = v4;
      *(_QWORD *)(v20 + 168) = v3;
      *(_QWORD *)(v20 + 224) = a1;
      if ( *(_BYTE *)(v2 + 442) == 1 )
      {
        v22 = v3[13];
        *((_QWORD *)v3 + 10) = v21;
        v23 = (char *)v3 + v22;
        v3[15] = v28;
        *((_QWORD *)v3 + 12) = v20;
        *((_QWORD *)v3 + 8) = v4;
        v3[6] = 256;
        v3[10] = v14;
        *((_WORD *)v23 + 1) = *(_WORD *)(*(_QWORD *)(a1 + 24) + 56LL);
        v23[8] = *(_BYTE *)(a1 + 96);
        v23[9] = *(_BYTE *)(a1 + 97);
        v23[10] = *(_BYTE *)(a1 + 98);
      }
      else
      {
        v3[4] = v28;
        *(_WORD *)v3 = 88;
        *((_QWORD *)v3 + 6) = v20;
        *((_BYTE *)v3 + 2) = 2;
        *((_QWORD *)v3 + 3) = v4;
        v3[3] = 256;
        v3[5] = v14;
        *((_BYTE *)v3 + 5) = *(_BYTE *)(a1 + 96);
        *((_BYTE *)v3 + 6) = *(_BYTE *)(a1 + 97);
        *((_BYTE *)v3 + 7) = *(_BYTE *)(a1 + 98);
      }
      sub_1C0008870(v2, (__int64)v3, v19 + 1104);
      KeInitializeEvent((PRKEVENT)(v20 + 664), NotificationEvent, 0);
      sub_1C0010124(v20, (__int64)sub_1C00100B0);
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
        && BYTE1(off_1C0093070->Timer) )
      {
        sub_1C003F074((__int64)off_1C0093070->AttachedDevice, 0x24u, (__int64)&unk_1C0083530, v20, v3);
      }
      if ( *(_BYTE *)(v2 + 4306) )
        v25 = sub_1C0008DB8(v2, v20);
      else
        v25 = sub_1C0008E14(v2, (_QWORD *)v20, v24);
      v12 = v25;
      if ( v25 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v20 + 664), Executive, 0, 0, 0LL);
        if ( !byte_1C0093AE9 || (v12 = v4[5], v12 >= 0) )
          v12 = sub_1C0008570(*((_BYTE *)v3 + 3));
      }
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
        && BYTE1(off_1C0093070->Timer) )
      {
        LODWORD(v27) = *((unsigned __int8 *)v3 + 3);
        sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0x25u, (__int64)&unk_1C0083530, v12, v27);
      }
      sub_1C0008C44(v20, 0, v26);
      sub_1C00084E4(v2, (__int64)v30);
      v7 = v29;
    }
    else
    {
      v12 = -1073741670;
    }
  }
LABEL_12:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72536152u);
  if ( v3 )
  {
    if ( *(_BYTE *)(v2 + 442) == 1 )
    {
      *((_QWORD *)v3 + 10) = 0LL;
      *((_QWORD *)v3 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)v3 + 6) = 0LL;
      *((_QWORD *)v3 + 7) = 0LL;
    }
    sub_1C001AA84(v3);
  }
  v7->IoStatus.Information = 0LL;
  return sub_1C0003440(v7, 0, v12);
}
