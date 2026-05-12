/*
 * XREFs of sub_1C001F308 @ 0x1C001F308
 * Callers:
 *     sub_1C001E954 @ 0x1C001E954 (sub_1C001E954.c)
 *     sub_1C003411C @ 0x1C003411C (sub_1C003411C.c)
 *     sub_1C00343D8 @ 0x1C00343D8 (sub_1C00343D8.c)
 *     sub_1C0036230 @ 0x1C0036230 (sub_1C0036230.c)
 *     sub_1C0036360 @ 0x1C0036360 (sub_1C0036360.c)
 *     sub_1C00364AC @ 0x1C00364AC (sub_1C00364AC.c)
 *     sub_1C0037340 @ 0x1C0037340 (sub_1C0037340.c)
 *     sub_1C0039528 @ 0x1C0039528 (sub_1C0039528.c)
 *     sub_1C003B7E8 @ 0x1C003B7E8 (sub_1C003B7E8.c)
 *     sub_1C003BBA4 @ 0x1C003BBA4 (sub_1C003BBA4.c)
 *     sub_1C003DB80 @ 0x1C003DB80 (sub_1C003DB80.c)
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
 *     sub_1C001FE60 @ 0x1C001FE60 (sub_1C001FE60.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 *     sub_1C003DB10 @ 0x1C003DB10 (sub_1C003DB10.c)
 *     sub_1C003F194 @ 0x1C003F194 (sub_1C003F194.c)
 *     sub_1C0066EE4 @ 0x1C0066EE4 (sub_1C0066EE4.c)
 */

__int64 __fastcall sub_1C001F308(
        __int64 a1,
        IRP *a2,
        unsigned int *a3,
        ULONG a4,
        __int64 (__fastcall *a5)(_QWORD),
        char a6,
        int a7)
{
  int v7; // ebx
  char v10; // r8
  __int64 v13; // rcx
  unsigned int *v14; // r15
  unsigned int *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rsi
  int v21; // r14d
  char v22; // r12
  int v23; // eax
  int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 LockArray_high; // rdx
  IRP *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  KIRQL v31; // bl
  __int64 v33; // [rsp+30h] [rbp-58h]
  struct _KEVENT Event; // [rsp+38h] [rbp-50h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v36; // [rsp+A0h] [rbp+18h]
  ULONG v37; // [rsp+A8h] [rbp+20h]

  v37 = a4;
  v36 = a3;
  v7 = *(_DWORD *)(a1 + 484);
  v10 = *(_BYTE *)(a1 + 442);
  v13 = *(_QWORD *)(a1 + 8);
  memset(&Event, 0, sizeof(Event));
  v14 = 0LL;
  v15 = (unsigned int *)sub_1C0007BA4(v13, 2u, v10, 0);
  v17 = sub_1C0008424(((v7 + 7) & 0xFFFFFFF8) + 1104, v16, a1);
  v33 = v17;
  if ( v15 && v17 )
  {
    v20 = v17 + 48;
    sub_1C0004C64(v17 + 48, v18, 0, 0LL);
    v21 = sub_1C0008510(v20, a3, a4);
    if ( v21 >= 0 )
    {
      v22 = a6;
      v23 = a7;
      if ( !a6 )
      {
        v23 = a7 | 0x102;
        if ( *((_BYTE *)v15 + 2) == 40 )
          *((_WORD *)v15 + 19) = 32;
        else
          *((_BYTE *)v15 + 9) = 32;
      }
      v24 = v23 | 1;
      if ( *(_BYTE *)(a1 + 442) == 1 )
      {
        v25 = v15[13];
        v14 = v15;
        v15[5] = 2;
        v15[6] = v24;
        if ( (unsigned int)sub_1C00230AC() && (unsigned __int8)sub_1C0023100(a1) )
        {
          LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
          _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 6080) + 8 * LockArray_high));
          v26 = **(_QWORD **)(*(_QWORD *)(a1 + 6080) + 8 * LockArray_high);
          v15[11] = HIDWORD(v26);
        }
        else
        {
          LODWORD(v26) = -1;
        }
        v15[8] = v26;
        *((_QWORD *)v15 + 8) = v36;
        v15[15] = v37;
        *((_WORD *)v15 + 18) = IoGetIoPriorityHint(a2);
        v15[10] = *(_DWORD *)(a1 + 4060);
        *((_QWORD *)v15 + 12) = v20;
        *((_QWORD *)v15 + 10) = a2;
        *(_WORD *)((char *)v15 + v25 + 8) = 0;
        *((_BYTE *)v15 + v25 + 10) = 0;
        *(_QWORD *)(v20 + 168) = v15;
        *(_QWORD *)(v20 + 184) = *((_QWORD *)v15 + 8);
        v28 = (IRP *)*((_QWORD *)v15 + 12);
      }
      else
      {
        v15[3] = v24;
        *((_QWORD *)v15 + 3) = v36;
        v15[4] = v37;
        *(_WORD *)v15 = 88;
        *((_BYTE *)v15 + 2) = 2;
        *((_BYTE *)v15 + 8) = -1;
        v15[5] = *(_DWORD *)(a1 + 4060);
        *((_QWORD *)v15 + 6) = v20;
        *(_WORD *)((char *)v15 + 5) = 0;
        *((_BYTE *)v15 + 7) = 0;
        *(_QWORD *)(v20 + 168) = v15;
        *(_QWORD *)(v20 + 184) = *((_QWORD *)v15 + 3);
        v28 = a2;
      }
      *(_QWORD *)(v20 + 176) = v28;
      sub_1C0008870(a1, (__int64)v15, v33 + 1104);
      if ( v22 )
        *(_BYTE *)(v20 + 17) |= 8u;
      KeInitializeEvent((PRKEVENT)(v20 + 664), NotificationEvent, 0);
      *(_QWORD *)(v20 + 656) = sub_1C00100B0;
      if ( v22
        && (sub_1C0019CFC(a1),
            KeInitializeEvent(&Event, NotificationEvent, 0),
            sub_1C0066EE4(*(_QWORD *)(a1 + 896), &Event),
            Timeout.QuadPart = -1200000000LL,
            KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
      {
        a2->IoStatus.Information = 0LL;
        v21 = -1073741823;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 4896) )
          sub_1C0008BF0(a1, 0LL, 1LL);
        if ( *(_BYTE *)(a1 + 442) == 1 )
        {
          if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
            && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
            && BYTE1(off_1C0093070->Timer) >= 4u )
          {
            sub_1C003F194(off_1C0093070->AttachedDevice, 63LL, &unk_1C0083210, v20, v14, *((_QWORD *)v14 + 13));
          }
        }
        else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
               && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
               && BYTE1(off_1C0093070->Timer) >= 4u )
        {
          sub_1C003F194(off_1C0093070->AttachedDevice, 64LL, &unk_1C0083210, v20, v15, *((_QWORD *)v15 + 7));
        }
        if ( *(_BYTE *)(a1 + 4306) )
          v29 = sub_1C0008DB8(a1, v20);
        else
          v29 = sub_1C0008E14(a1, (_QWORD *)v20, v19);
        v21 = v29;
        if ( v29 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v20 + 664), Executive, 0, 0, 0LL);
          v21 = sub_1C0008570(*((_BYTE *)v15 + 3));
        }
        if ( v22 )
        {
          v31 = KfRaiseIrql(2u);
          sub_1C003DB10(a1);
          KeLowerIrql(v31);
        }
        if ( (*(_BYTE *)(v20 + 17) & 1) != 0 )
        {
          sub_1C0037008(a1, *(unsigned int *)(v20 + 748));
          *(_BYTE *)(v20 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 4896) )
          sub_1C0008BB4(a1, 0LL, 0LL);
        if ( v21 >= 0 )
        {
          if ( !a5 || (v21 = a5(v36[5]), v21 >= 0) )
          {
            LOBYTE(v30) = *((_BYTE *)v15 + 3);
            v21 = sub_1C001FE60(v30);
          }
        }
      }
    }
  }
  else
  {
    v20 = 0LL;
    v21 = -1073741801;
    if ( !v17 )
      goto LABEL_48;
  }
  sub_1C0008C44(v20, 0, v19);
  sub_1C00084E4(a1, v33);
LABEL_48:
  if ( v15 )
  {
    if ( *(_BYTE *)(a1 + 442) == 1 )
    {
      if ( !v14 )
        v14 = v15;
      *((_QWORD *)v14 + 10) = 0LL;
      *((_QWORD *)v14 + 13) = 0LL;
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
