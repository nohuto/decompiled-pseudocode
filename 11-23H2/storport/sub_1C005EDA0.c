/*
 * XREFs of sub_1C005EDA0 @ 0x1C005EDA0
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0035CA0 @ 0x1C0035CA0 (sub_1C0035CA0.c)
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 *     sub_1C00403E4 @ 0x1C00403E4 (sub_1C00403E4.c)
 *     sub_1C005CD80 @ 0x1C005CD80 (sub_1C005CD80.c)
 *     sub_1C0061A08 @ 0x1C0061A08 (sub_1C0061A08.c)
 *     sub_1C0071034 @ 0x1C0071034 (sub_1C0071034.c)
 */

__int64 __fastcall sub_1C005EDA0(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rcx
  unsigned int v5; // ebx
  _BYTE *v6; // rax
  char v7; // al
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // dx
  unsigned int *v10; // rdx
  unsigned int v11; // ecx
  bool v12; // zf
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned int IrpCount; // r8d
  ULONG Flags; // r8d
  PDEVICE_OBJECT v17; // rcx
  unsigned __int16 v18; // dx
  unsigned int SystemBuffer_high; // r8d
  ULONG v20; // edx
  unsigned int v21; // r8d
  int Flink; // r9d
  unsigned int v23; // edx
  unsigned int v24; // edx
  __int64 v25; // rax

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 972) || *(_DWORD *)(a1 + 980) || *(_DWORD *)(a1 + 976) || (*(_BYTE *)(a1 + 450) & 1) != 0 )
  {
    v8 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      goto LABEL_84;
    }
    v9 = 39;
    goto LABEL_83;
  }
  v6 = *(_BYTE **)(a1 + 104);
  if ( v6 )
  {
    v7 = *v6 & 0x1F;
    if ( v7 )
    {
      if ( v7 != 20 )
      {
        v8 = off_1C0093070;
        if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
          || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
          || BYTE1(off_1C0093070->Timer) < 2u )
        {
          goto LABEL_84;
        }
        v9 = 40;
LABEL_83:
        sub_1C003EF0C((__int64)v8->AttachedDevice, v9, (__int64)&unk_1C0083530, a1);
LABEL_84:
        v5 = -1073741637;
        goto LABEL_85;
      }
    }
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x24 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EF0C((__int64)off_1C0093070->AttachedDevice, 0x29u, (__int64)&unk_1C0083530, a1);
    }
    v5 = -1073741820;
    goto LABEL_85;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 36 || *(_DWORD *)(&MasterIrp->Size + 1) != 36 )
  {
    v17 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v18 = 42;
    goto LABEL_77;
  }
  if ( !LOBYTE(MasterIrp->MdlAddress) )
  {
    if ( *(_BYTE *)(a1 + 3280) )
    {
      v10 = *(unsigned int **)(a1 + 504);
      v11 = *v10;
      *v10 &= ~2u;
      if ( (v11 & 4) == 0 )
        *v10 = v11 & 0xFFFFFFFC;
      *(_QWORD *)(a1 + 3320) = -1LL;
      v12 = (*(_BYTE *)(a1 + 450) & 2) == 0;
      *(_BYTE *)(a1 + 3280) = 0;
      *(_QWORD *)(a1 + 3292) = 0LL;
      *(_QWORD *)(a1 + 3300) = 0LL;
      *(_DWORD *)(a1 + 3288) = 0;
      if ( !v12 )
      {
        if ( (byte_1C0093A04 & 8) != 0 )
        {
          v13 = *(_DWORD *)(a1 + 96);
          sub_1C005CD80(
            v13 >> 8,
            &stru_1C0089430,
            a1 + 186,
            *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4656LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
            *(_QWORD *)(a1 + 24) + 5000LL,
            v13,
            SBYTE1(v13),
            SBYTE2(v13),
            a1 + 2024,
            (const char *)(a1 + 160),
            (const char *)(a1 + 169),
            (const char *)(a1 + 186),
            3);
        }
        sub_1C0071034(a1);
        *(_BYTE *)(a1 + 450) &= ~2u;
      }
      sub_1C0061A08(a1);
      *(_BYTE *)(a1 + 3308) = 1;
      v5 = 0;
    }
    else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
           && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
           && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EF0C((__int64)off_1C0093070->AttachedDevice, 0x2Bu, (__int64)&unk_1C0083530, a1);
    }
    goto LABEL_85;
  }
  v14 = *(&MasterIrp->Flags + 1);
  if ( v14 < 0x3E8 || v14 != 1000 * (v14 / 0x3E8) )
  {
    v17 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v18 = 44;
    goto LABEL_77;
  }
  IrpCount = MasterIrp->AssociatedIrp.IrpCount;
  if ( IrpCount < 0x3E8 || IrpCount != 1000 * (IrpCount / 0x3E8) )
  {
    v17 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v18 = 45;
    goto LABEL_77;
  }
  Flags = MasterIrp->Flags;
  if ( Flags != -1 && Flags != 500 * (Flags / 0x1F4) )
  {
    v17 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v18 = 46;
LABEL_77:
    sub_1C003EF0C((__int64)v17->AttachedDevice, v18, (__int64)&unk_1C0083530, a1);
LABEL_78:
    v5 = -1073741811;
    goto LABEL_85;
  }
  SystemBuffer_high = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
  if ( SystemBuffer_high != -1 && SystemBuffer_high != 500 * (SystemBuffer_high / 0x1F4) )
  {
    v17 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v18 = 47;
    goto LABEL_77;
  }
  *(_DWORD *)(a1 + 3284) = HIDWORD(MasterIrp->MdlAddress);
  *(_DWORD *)(a1 + 3296) = *(&MasterIrp->Flags + 1) / 0x3E8;
  v20 = MasterIrp->Flags;
  if ( v20 == -1 )
    v21 = -1;
  else
    v21 = v20 / 0x1F4;
  *(_DWORD *)(a1 + 3304) = v21;
  *(_DWORD *)(a1 + 3300) = MasterIrp->AssociatedIrp.IrpCount / 0x3E8u;
  Flink = (int)MasterIrp->ThreadListEntry.Flink;
  *(_DWORD *)(a1 + 3292) = Flink;
  v23 = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
  if ( v23 == -1 )
    v24 = -1;
  else
    v24 = v23 / 0x1F4;
  *(_DWORD *)(a1 + 3288) = v24;
  if ( v21 == -1 && !Flink && v24 == -1 )
  {
    sub_1C0061A08(a1);
  }
  else if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3312), 1, 0) )
  {
    sub_1C0035CA0(*(_QWORD *)(a1 + 24));
  }
  v25 = 10000000 * (*(_DWORD *)(a1 + 3296) + 1 + ((unsigned int)(*(_DWORD *)(a1 + 3304) + *(_DWORD *)(a1 + 3288)) >> 1));
  if ( (unsigned int)v25 > 0x11E1A300 )
    v25 = 300000000LL;
  *(_QWORD *)(a1 + 3320) = v25;
  if ( !*(_BYTE *)(a1 + 3280) )
  {
    sub_1C00403E4(*(int **)(a1 + 504), 1);
    *(_BYTE *)(a1 + 3280) = 1;
    *(_BYTE *)(a1 + 3308) = 1;
  }
LABEL_85:
  a2->IoStatus.Information = 0LL;
  return sub_1C0003440(a2, 0, v5);
}
