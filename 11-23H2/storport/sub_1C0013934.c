/*
 * XREFs of sub_1C0013934 @ 0x1C0013934
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C0013D28 @ 0x1C0013D28 (sub_1C0013D28.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 */

__int64 __fastcall sub_1C0013934(__int64 a1, IRP *a2)
{
  __int64 v2; // r15
  void *v5; // rsi
  __int64 v6; // rbp
  unsigned int *v7; // rbx
  struct _IRP *MasterIrp; // rax
  PMDL MdlAddress; // r12
  struct _LIST_ENTRY *i; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rcx
  void (__fastcall *v23)(_QWORD); // rax
  __int64 v24; // r8
  unsigned int *v25; // r14
  unsigned int *v26; // r9
  unsigned int v27; // edi
  unsigned int *v28; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  int v31; // eax
  char v32; // [rsp+80h] [rbp+8h]
  unsigned int *v33; // [rsp+88h] [rbp+10h]
  struct _IRP *Dst; // [rsp+90h] [rbp+18h]
  __int64 v35; // [rsp+98h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 24);
  v5 = 0LL;
  v35 = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  v7 = 0LL;
  v32 = 0;
  if ( a2->RequestorMode )
  {
    v27 = -1073741790;
    return sub_1C0003440(a2, 0, v27);
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x68 )
  {
    v27 = -1073741811;
    return sub_1C0003440(a2, 0, v27);
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Dst = MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 4 )
  {
    v27 = -1073741735;
    return sub_1C0003440(a2, 0, v27);
  }
  MdlAddress = MasterIrp->MdlAddress;
  for ( i = MasterIrp->ThreadListEntry.Blink; i; i = i->Flink )
  {
    if ( !i->Flink )
    {
      Flink = i[5].Flink;
      if ( Flink )
      {
        ExFreePoolWithTag(Flink, 0);
        *(_OWORD *)&i[4].Blink = 0LL;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 1781) == 1 && v2 )
  {
    v11 = sub_1C0007CF4(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v5 = (void *)v11;
    if ( !v11 )
    {
      v27 = -1073741670;
      return sub_1C0003440(a2, 0, v27);
    }
    *(_DWORD *)v11 = 7340288;
    *(_DWORD *)(v11 + 56) = Dst->AssociatedIrp.IrpCount;
    *(_DWORD *)(v11 + 72) = HIDWORD(MdlAddress->Process);
    *(_DWORD *)(v11 + 76) = MdlAddress->MappedSystemVa;
    *(_DWORD *)(v11 + 80) = MdlAddress->ByteCount;
    *(_DWORD *)(v11 + 84) = MdlAddress->ByteOffset;
    *(_DWORD *)(v11 + 88) = MdlAddress[1].Process;
    *(_DWORD *)(v11 + 92) = HIDWORD(MdlAddress[1].Process);
    *(_QWORD *)(v11 + 96) = MdlAddress[1].MappedSystemVa;
    *(_BYTE *)(v11 + 104) = MdlAddress[1].ByteCount;
    *(_BYTE *)(v11 + 105) = BYTE2(MdlAddress[2].Next);
    *(_BYTE *)(v11 + 106) = HIBYTE(MdlAddress[2].Size);
    *(_BYTE *)(v11 + 107) = BYTE1(MdlAddress[2].Process);
    *(_QWORD *)(v11 + 64) = MdlAddress[1].StartVa;
    v7 = (unsigned int *)sub_1C0007BA4(*(_QWORD *)(a1 + 8), 0x27u, BYTE2(MdlAddress[2].Process), 0);
    if ( !v7 )
    {
      v27 = -1073741670;
      goto LABEL_35;
    }
    v13 = sub_1C0008424(((*(_DWORD *)(v2 + 484) + 7) & 0xFFFFFFF8) + 1104, v12, v2);
    v35 = v13;
    v15 = v13;
    if ( !v13 )
    {
      v27 = -1073741670;
      goto LABEL_47;
    }
    v6 = v13 + 48;
    sub_1C0004C64(v13 + 48, v14, 0, 0LL);
    *(_QWORD *)(v6 + 176) = a2;
    *(_QWORD *)(v6 + 184) = v5;
    *(_QWORD *)(v6 + 168) = v7;
    if ( BYTE2(MdlAddress[2].Process) == 1 )
    {
      v7[6] = 256;
      v16 = v7[6];
      v7[5] = 39;
      *((_QWORD *)v7 + 8) = v5;
      v7[15] = 112;
      v17 = *(_BYTE *)(v2 + 4306) == 0;
      v7[10] = 10;
      if ( v17 )
        v16 = 128;
      *((_QWORD *)v7 + 10) = a2;
      v18 = v7[13];
      v7[6] = v16;
      *((_QWORD *)v7 + 13) = v15 + 1104;
      *((_QWORD *)v7 + 12) = v6;
      *((_BYTE *)v7 + v18 + 8) = *(_BYTE *)(a1 + 96);
      *((_BYTE *)v7 + v18 + 9) = *(_BYTE *)(a1 + 97);
      *((_BYTE *)v7 + v18 + 10) = *(_BYTE *)(a1 + 98);
      v32 = 1;
      v33 = v7;
    }
    else
    {
      v7[3] = 256;
      *(_WORD *)v7 = 88;
      v31 = v7[3];
      *((_BYTE *)v7 + 2) = 39;
      *((_QWORD *)v7 + 3) = v5;
      v7[4] = 112;
      v17 = *(_BYTE *)(v2 + 4306) == 0;
      v7[5] = 10;
      if ( v17 )
        v31 = 128;
      v7[3] = v31;
      *((_BYTE *)v7 + 5) = *(_BYTE *)(a1 + 96);
      *((_BYTE *)v7 + 6) = *(_BYTE *)(a1 + 97);
      *((_BYTE *)v7 + 7) = *(_BYTE *)(a1 + 98);
      *((_QWORD *)v7 + 7) = v15 + 1104;
      *((_QWORD *)v7 + 6) = v6;
    }
    KeInitializeEvent((PRKEVENT)(v6 + 664), NotificationEvent, 0);
    *(_QWORD *)(v6 + 656) = sub_1C00100B0;
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
      && BYTE1(off_1C0093070->Timer) )
    {
      sub_1C003F074(off_1C0093070->AttachedDevice, 34LL, &unk_1C0083530, v6, v7);
    }
    if ( *(_BYTE *)(v2 + 4306) )
      v20 = sub_1C0008DB8(v2, v6);
    else
      v20 = sub_1C0008E14(v2, (_QWORD *)v6, v19);
    v21 = (unsigned int)v20;
    if ( v20 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v6 + 664), Executive, 0, 0, 0LL);
      v21 = (unsigned int)sub_1C0008570(*((_BYTE *)v7 + 3));
    }
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
      && BYTE1(off_1C0093070->Timer) )
    {
      sub_1C003EE60(off_1C0093070->AttachedDevice, 35LL, &unk_1C0083530, v21, *((unsigned __int8 *)v7 + 3));
    }
  }
  v22 = *(_QWORD *)(a1 + 24);
  if ( *(_WORD *)(v22 + 4962) )
  {
    v23 = *(void (__fastcall **)(_QWORD))(v22 + 4984);
    if ( v23 )
      v23(*(_QWORD *)(v22 + 4968));
  }
  sub_1C0013D28(*(_QWORD *)(a1 + 24) + 760LL, &MdlAddress->Process);
  ExFreePoolWithTag(Dst->MdlAddress, 0x44436152u);
  memset_0(Dst, 0, 0x68uLL);
  a2->IoStatus.Information = 0LL;
  v25 = v7;
  v26 = v33;
  v27 = 0;
  v28 = v33;
  if ( v35 )
  {
    sub_1C0008C44(v6, 0, v24);
    sub_1C00084E4(v2, v35);
    v26 = v33;
    v28 = v33;
  }
  if ( v7 )
  {
    if ( v32 == 1 )
    {
      if ( v28 )
        v25 = v26;
      *((_QWORD *)v25 + 10) = 0LL;
      *((_QWORD *)v25 + 13) = 0LL;
      goto LABEL_33;
    }
LABEL_47:
    *((_QWORD *)v7 + 6) = 0LL;
    *((_QWORD *)v7 + 7) = 0LL;
LABEL_33:
    ExFreePoolWithTag(v7, 0x72536152u);
  }
  if ( v5 )
LABEL_35:
    ExFreePoolWithTag(v5, 0x44436152u);
  return sub_1C0003440(a2, 0, v27);
}
