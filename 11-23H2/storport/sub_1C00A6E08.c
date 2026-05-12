/*
 * XREFs of sub_1C00A6E08 @ 0x1C00A6E08
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C0008870 @ 0x1C0008870 (sub_1C0008870.c)
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C0010124 @ 0x1C0010124 (sub_1C0010124.c)
 *     sub_1C001AA84 @ 0x1C001AA84 (sub_1C001AA84.c)
 *     sub_1C0023E3C @ 0x1C0023E3C (sub_1C0023E3C.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 *     sub_1C003B5E0 @ 0x1C003B5E0 (sub_1C003B5E0.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C00569E4 @ 0x1C00569E4 (sub_1C00569E4.c)
 */

__int64 __fastcall sub_1C00A6E08(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  int v3; // ebx
  unsigned int *v4; // r14
  unsigned int *v7; // rsi
  size_t Length; // r12
  struct _IRP *MasterIrp; // rdi
  int MdlAddress_high; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r15
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r8
  char *v22; // r12
  int v23; // ecx
  __int128 v24; // xmm0
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  ULONG_PTR v28; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+30h] [rbp-48h]
  unsigned int v32; // [rsp+88h] [rbp+10h] BYREF
  size_t Size; // [rsp+90h] [rbp+18h]
  PVOID P; // [rsp+98h] [rbp+20h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v32 = 0;
  v4 = 0LL;
  P = 0LL;
  v7 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  LODWORD(Size) = CurrentStackLocation->Parameters.Read.Length;
  if ( !sub_1C0023E3C() )
    goto LABEL_60;
  if ( a2->Tail.Overlay.Thread != KeGetCurrentThread() )
  {
    v4 = (unsigned int *)P;
LABEL_60:
    v3 = -1073741790;
    goto LABEL_61;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( !MasterIrp
    || CurrentStackLocation->Parameters.Create.Options < 0x14
    || (unsigned int)Length < 0x24
    || *(_DWORD *)&MasterIrp->Type != 20
    || *(_DWORD *)(&MasterIrp->Size + 1) != 20
    || (MdlAddress_high = HIDWORD(MasterIrp->MdlAddress)) == 0
    || MdlAddress_high >= 4
    || (int)MasterIrp->Flags >= 1 )
  {
    v3 = -1073741811;
    return sub_1C0003440(a2, 0, v3);
  }
  if ( MdlAddress_high == 1 )
  {
    memset_0(a2->AssociatedIrp.MasterIrp, 0, Length);
    *(_DWORD *)&MasterIrp->Type = 36;
    *(_OWORD *)&MasterIrp->MdlAddress = xmmword_1C00841B8;
    if ( (unsigned int)Length >= 0x1200038 )
    {
      LODWORD(MasterIrp->ThreadListEntry.Flink) = 18874392;
      HIDWORD(MasterIrp->ThreadListEntry.Flink) = 2;
      LODWORD(MasterIrp->ThreadListEntry.Blink) = *(_DWORD *)(a1 + 4868);
      HIDWORD(MasterIrp->ThreadListEntry.Blink) = *(_DWORD *)(a1 + 4864);
      memmove(&MasterIrp->IoStatus, *(const void **)(a1 + 4872), 48LL * *(unsigned int *)(a1 + 4868));
      LODWORD(MasterIrp[90742].UserEvent) = *(_DWORD *)(a1 + 5576);
      HIDWORD(MasterIrp[90742].UserEvent) = *(_DWORD *)(a1 + 5580);
      MasterIrp->AssociatedIrp.IrpCount = 18874392;
      *(_DWORD *)(&MasterIrp->Size + 1) = 18874424;
      a2->IoStatus.Information = 18874424LL;
    }
    else
    {
      MasterIrp->AssociatedIrp.IrpCount = 18874392;
      v3 = -2147483643;
      *(_DWORD *)(&MasterIrp->Size + 1) = 36;
      a2->IoStatus.Information = 36LL;
    }
    return sub_1C0003440(a2, 0, v3);
  }
  if ( (unsigned int)(MdlAddress_high - 2) > 1 )
  {
    v3 = -1073741637;
    return sub_1C0003440(a2, 0, v3);
  }
  v3 = sub_1C00569E4(*(_QWORD *)(a1 + 8), (__int64)a2, Length, &P, &v32);
  if ( v3 >= 0 )
  {
    v7 = (unsigned int *)sub_1C0007BA4(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(a1 + 442), 0);
    if ( v7 )
    {
      v12 = sub_1C0008424(((*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8) + 1104, v11, a1);
      v31 = v12;
      v14 = v12;
      if ( v12 )
      {
        v15 = v12 + 48;
        sub_1C0004C64(v12 + 48, v13, 0, 0LL);
        v4 = (unsigned int *)P;
        v16 = v32;
        *(_QWORD *)(v15 + 184) = P;
        *(_QWORD *)(v15 + 176) = a2;
        *(_QWORD *)(v15 + 168) = v7;
        if ( *(_BYTE *)(a1 + 442) == 1 )
        {
          v7[15] = v16;
          *((_QWORD *)v7 + 12) = v15;
          *((_QWORD *)v7 + 10) = a2;
          v7[5] = 2;
          *((_QWORD *)v7 + 8) = v4;
          v7[6] = 256;
          v7[10] = *(_DWORD *)(a1 + 4060);
          v17 = v7[13];
          *(_WORD *)((char *)v7 + v17 + 8) = 0;
          *((_BYTE *)v7 + v17 + 10) = 0;
        }
        else
        {
          v7[4] = v16;
          *(_WORD *)v7 = 88;
          *((_QWORD *)v7 + 6) = v15;
          *((_BYTE *)v7 + 2) = 2;
          *((_QWORD *)v7 + 3) = v4;
          v7[3] = 256;
          v18 = *(_DWORD *)(a1 + 4060);
          *(_WORD *)((char *)v7 + 5) = 0;
          v7[5] = v18;
          *((_BYTE *)v7 + 7) = 0;
        }
        sub_1C0008870(a1, (__int64)v7, v14 + 1104);
        KeInitializeEvent((PRKEVENT)(v15 + 664), NotificationEvent, 0);
        sub_1C0010124(v15, (__int64)sub_1C00100B0);
        if ( HIDWORD(MasterIrp->MdlAddress) == 2 )
          *(_BYTE *)(v15 + 17) |= 8u;
        if ( HIDWORD(MasterIrp->MdlAddress) == 3 && *(_QWORD *)(a1 + 4896) )
          sub_1C0008BF0(a1, 0LL, 1LL);
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
          && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
          && BYTE1(off_1C0093070->Timer) )
        {
          sub_1C003F074((__int64)off_1C0093070->AttachedDevice, 0x4Du, (__int64)&unk_1C0083210, v15, v7);
        }
        if ( *(_BYTE *)(a1 + 4306) )
          v20 = sub_1C0008DB8(a1, v15);
        else
          v20 = sub_1C0008E14(a1, (_QWORD *)v15, v19);
        v3 = v20;
        if ( v20 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v15 + 664), Executive, 0, 0, 0LL);
          v3 = sub_1C0008570(*((_BYTE *)v7 + 3));
        }
        if ( HIDWORD(MasterIrp->MdlAddress) == 3 )
        {
          if ( (*(_BYTE *)(v15 + 17) & 1) != 0 )
          {
            sub_1C0037008(a1, *(unsigned int *)(v15 + 748));
            *(_BYTE *)(v15 + 17) &= ~1u;
          }
          if ( *(_QWORD *)(a1 + 4896) )
            sub_1C0008BB4(a1, 0LL, 0LL);
        }
        if ( v3 < 0 )
        {
          v28 = 0LL;
        }
        else
        {
          v22 = (char *)v4 + *v4;
          memset_0(MasterIrp, 0, (unsigned int)Size);
          v23 = v4[5];
          if ( v23 == 6 )
          {
            *(_DWORD *)&MasterIrp->Type = 36;
            v3 = -2147483643;
            MasterIrp->AssociatedIrp.IrpCount = *((_DWORD *)v22 + 8);
            v24 = *((_OWORD *)v22 + 1);
            *(_DWORD *)(&MasterIrp->Size + 1) = 36;
            *(_OWORD *)&MasterIrp->MdlAddress = v24;
            a2->IoStatus.Information = 36LL;
LABEL_58:
            sub_1C0008C44(v15, 0, v21);
            sub_1C00084E4(a1, v31);
            goto LABEL_61;
          }
          if ( v23 )
          {
            v25 = sub_1C003B5E0(v23);
            a2->IoStatus.Information = 0LL;
            v3 = v25;
            goto LABEL_58;
          }
          v26 = Size - 32;
          *(_DWORD *)&MasterIrp->Type = 36;
          v27 = *((_DWORD *)v22 + 8);
          if ( v27 >= v26 )
            v27 = v26;
          *(_DWORD *)(&MasterIrp->Size + 1) = v27 + 32;
          MasterIrp->AssociatedIrp.IrpCount = v27;
          *(_OWORD *)&MasterIrp->MdlAddress = *((_OWORD *)v22 + 1);
          memmove(&MasterIrp->ThreadListEntry, v22 + 40, v27);
          v28 = *(unsigned int *)(&MasterIrp->Size + 1);
        }
        a2->IoStatus.Information = v28;
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
          && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
          && BYTE1(off_1C0093070->Timer) )
        {
          LODWORD(Timeout) = *((unsigned __int8 *)v7 + 3);
          sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0x4Eu, (__int64)&unk_1C0083210, v3, Timeout);
        }
        goto LABEL_58;
      }
    }
    v3 = -1073741670;
  }
  v4 = (unsigned int *)P;
LABEL_61:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72536152u);
  if ( v7 )
  {
    if ( *(_BYTE *)(a1 + 442) == 1 )
    {
      *((_QWORD *)v7 + 10) = 0LL;
      *((_QWORD *)v7 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)v7 + 6) = 0LL;
      *((_QWORD *)v7 + 7) = 0LL;
    }
    sub_1C001AA84(v7);
  }
  return sub_1C0003440(a2, 0, v3);
}
