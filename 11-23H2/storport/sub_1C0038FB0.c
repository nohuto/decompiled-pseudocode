/*
 * XREFs of sub_1C0038FB0 @ 0x1C0038FB0
 * Callers:
 *     sub_1C003408C @ 0x1C003408C (sub_1C003408C.c)
 * Callees:
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 *     sub_1C0008510 @ 0x1C0008510 (sub_1C0008510.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C0008870 @ 0x1C0008870 (sub_1C0008870.c)
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C0019CFC @ 0x1C0019CFC (sub_1C0019CFC.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 *     sub_1C003DB10 @ 0x1C003DB10 (sub_1C003DB10.c)
 *     sub_1C003F194 @ 0x1C003F194 (sub_1C003F194.c)
 *     sub_1C0066EE4 @ 0x1C0066EE4 (sub_1C0066EE4.c)
 *     sub_1C006970C @ 0x1C006970C (sub_1C006970C.c)
 */

__int64 __fastcall sub_1C0038FB0(__int64 a1, IRP *a2, char a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP *MasterIrp; // r15
  DWORD Options; // ebp
  DWORD Length; // eax
  unsigned int *v9; // r13
  char v10; // r8
  int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // r14
  unsigned int *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rbx
  int v21; // ebp
  bool v22; // zf
  int v23; // edx
  char v24; // bp
  int v25; // ecx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 LockArray_high; // rdx
  unsigned int Blink; // eax
  IRP *v30; // rax
  unsigned int v31; // eax
  int v32; // eax
  KIRQL v33; // bl
  ULONG_PTR v34; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF
  __int64 v38; // [rsp+98h] [rbp+10h]
  char v39; // [rsp+A0h] [rbp+18h]

  v39 = a3;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  memset(&Event, 0, sizeof(Event));
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = 0LL;
  v10 = *(_BYTE *)(a1 + 442);
  v11 = *(_DWORD *)(a1 + 484) + 7;
  v12 = *(_QWORD *)(a1 + 8);
  v13 = v11 & 0xFFFFFFF8;
  v14 = 0LL;
  if ( Options <= Length )
    Options = Length;
  Timeout.LowPart = Options;
  v15 = (unsigned int *)sub_1C0007BA4(v12, 9u, v10, 0);
  v17 = sub_1C0008424(v13 + 1104, v16, a1);
  v38 = v17;
  v20 = v17;
  if ( v15 && v17 )
  {
    v14 = v17 + 48;
    sub_1C0004C64(v17 + 48, v18, 0, 0LL);
    v21 = sub_1C0008510(v14, MasterIrp, Options);
    if ( v21 < 0 )
      goto LABEL_36;
    v22 = byte_1C0093AE4 == 0;
    v19 = 1LL;
    MasterIrp->Flags = 255;
    v23 = 129;
    if ( !v22
      && LODWORD(MasterIrp->MdlAddress) == 3
      && (unsigned int)(unsigned __int8)LODWORD(MasterIrp->UserEvent) - 129 <= 1
      && MasterIrp->Tail.Apc.SpareByte1 == 0xEE )
    {
      v21 = -1073741637;
      goto LABEL_36;
    }
    v24 = v39;
    if ( !LODWORD(MasterIrp->ThreadListEntry.Flink) )
      v23 = 1;
    v25 = v23 | 0x40;
    if ( !HIDWORD(MasterIrp->ThreadListEntry.Flink) )
      v25 = v23;
    if ( !v39 )
    {
      v25 |= 0x102u;
      if ( *((_BYTE *)v15 + 2) == 40 )
        *((_WORD *)v15 + 19) = 32;
      else
        *((_BYTE *)v15 + 9) = 32;
    }
    if ( *(_BYTE *)(a1 + 442) == 1 )
    {
      v26 = v15[13];
      v9 = v15;
      v15[5] = 9;
      v15[6] = v25;
      if ( (unsigned int)sub_1C00230AC() && sub_1C0023100(a1) )
      {
        LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
        _InterlockedAdd(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 6080) + 8 * LockArray_high), 1u);
        v27 = **(_QWORD **)(*(_QWORD *)(a1 + 6080) + 8 * LockArray_high);
        v15[11] = HIDWORD(v27);
      }
      else
      {
        LODWORD(v27) = -1;
      }
      v15[8] = v27;
      v15[15] = Timeout.LowPart;
      *((_QWORD *)v15 + 8) = MasterIrp;
      *((_WORD *)v15 + 18) = IoGetIoPriorityHint(a2);
      Blink = (unsigned int)MasterIrp->ThreadListEntry.Blink;
      if ( !Blink )
        Blink = *(_DWORD *)(a1 + 4060);
      v15[10] = Blink;
      *((_QWORD *)v15 + 12) = v14;
      *((_QWORD *)v15 + 10) = a2;
      *(_WORD *)((char *)v15 + v26 + 8) = 0;
      *((_BYTE *)v15 + v26 + 10) = 0;
      v20 = v38;
      *(_QWORD *)(v14 + 168) = v15;
      *(_QWORD *)(v14 + 184) = *((_QWORD *)v15 + 8);
      v30 = (IRP *)*((_QWORD *)v15 + 12);
    }
    else
    {
      *((_BYTE *)v15 + 2) = 9;
      *(_WORD *)v15 = 88;
      v15[4] = Timeout.LowPart;
      v15[3] = v25;
      *((_BYTE *)v15 + 8) = -1;
      *((_QWORD *)v15 + 3) = MasterIrp;
      v31 = (unsigned int)MasterIrp->ThreadListEntry.Blink;
      if ( !v31 )
        v31 = *(_DWORD *)(a1 + 4060);
      v15[5] = v31;
      *((_QWORD *)v15 + 6) = v14;
      *(_WORD *)((char *)v15 + 5) = 0;
      *((_BYTE *)v15 + 7) = 0;
      *(_QWORD *)(v14 + 168) = v15;
      *(_QWORD *)(v14 + 184) = *((_QWORD *)v15 + 3);
      v30 = a2;
    }
    *(_QWORD *)(v14 + 176) = v30;
    sub_1C0008870(a1, (__int64)v15, v20 + 1104);
    if ( v24 )
      *(_BYTE *)(v14 + 17) |= 8u;
    KeInitializeEvent((PRKEVENT)(v14 + 664), NotificationEvent, 0);
    *(_QWORD *)(v14 + 656) = sub_1C00100B0;
    if ( v24 )
    {
      sub_1C0019CFC(a1);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      sub_1C0066EE4(*(_QWORD *)(a1 + 896), &Event);
      Timeout.QuadPart = -1200000000LL;
      if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) )
      {
        a2->IoStatus.Information = 0LL;
        v21 = -1073741823;
LABEL_35:
        v20 = v38;
        goto LABEL_36;
      }
    }
    if ( *(_QWORD *)(a1 + 4896) )
      sub_1C0008BF0(a1, 0LL, 1LL);
    if ( *(_BYTE *)(a1 + 442) == 1 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
        && BYTE1(off_1C0093070->Timer) >= 4u )
      {
        sub_1C003F194(off_1C0093070->AttachedDevice, 65LL, &unk_1C0083210, v14, v9, *((_QWORD *)v9 + 13));
      }
    }
    else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
           && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
           && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003F194(off_1C0093070->AttachedDevice, 66LL, &unk_1C0083210, v14, v15, *((_QWORD *)v15 + 7));
    }
    if ( *(_BYTE *)(a1 + 4306) )
      v32 = sub_1C0008DB8(a1, v14);
    else
      v32 = sub_1C0008E14(a1, (_QWORD *)v14, v19);
    v21 = v32;
    if ( v32 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v14 + 664), Executive, 0, 0, 0LL);
      v21 = sub_1C0008570(*((_BYTE *)v15 + 3));
    }
    if ( v39 )
    {
      v33 = KfRaiseIrql(2u);
      sub_1C003DB10(a1);
      KeLowerIrql(v33);
    }
    if ( (*(_BYTE *)(v14 + 17) & 1) != 0 )
    {
      sub_1C0037008(a1, *(unsigned int *)(v14 + 748));
      *(_BYTE *)(v14 + 17) &= ~1u;
    }
    if ( *(_QWORD *)(a1 + 4896) )
      sub_1C0008BB4(a1, 0LL, 0LL);
    if ( v21 < 0 )
      goto LABEL_35;
    if ( MasterIrp->Flags == 255 )
    {
      v21 = -1073741637;
      goto LABEL_35;
    }
    v20 = v38;
    if ( *(_BYTE *)(a1 + 442) == 1 )
      v34 = v9[15];
    else
      v34 = v15[4];
    a2->IoStatus.Information = v34;
  }
  else
  {
    v21 = -1073741801;
  }
LABEL_36:
  if ( byte_1C0093BE8 )
  {
    LOBYTE(v19) = v39;
    sub_1C006970C(*(_QWORD *)(a1 + 8), a2, v19);
  }
  if ( v20 )
  {
    sub_1C0008C44(v14, 0, v19);
    sub_1C00084E4(a1, v20);
  }
  if ( v15 )
  {
    if ( *(_BYTE *)(a1 + 442) == 1 )
    {
      if ( !v9 )
        v9 = v15;
      *((_QWORD *)v9 + 10) = 0LL;
      *((_QWORD *)v9 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)v15 + 6) = 0LL;
      *((_QWORD *)v15 + 7) = 0LL;
    }
    ExFreePoolWithTag(v15, 0x72536152u);
  }
  return (unsigned int)v21;
}
