/*
 * XREFs of sub_1C0038AB8 @ 0x1C0038AB8
 * Callers:
 *     sub_1C0038368 @ 0x1C0038368 (sub_1C0038368.c)
 * Callees:
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
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
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 *     sub_1C003F194 @ 0x1C003F194 (sub_1C003F194.c)
 */

__int64 __fastcall sub_1C0038AB8(__int64 a1, IRP *a2, char a3, void *a4, int a5)
{
  ULONG v7; // r13d
  unsigned int v8; // ebx
  unsigned int *v9; // r15
  char *v10; // r14
  void *v11; // r12
  unsigned int *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rbx
  int v17; // ebp
  int v18; // ebp
  int v19; // ebp
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 LockArray_high; // rdx
  unsigned int v23; // eax
  char *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // eax
  __int64 v29; // [rsp+80h] [rbp+8h]

  v7 = a5 << 9;
  v8 = (*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = (unsigned int *)sub_1C0007BA4(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(a1 + 442), 0);
  v14 = sub_1C0008424(v8 + 1104, v13, a1);
  v29 = v14;
  if ( v12 && v14 )
  {
    v16 = v14 + 48;
    sub_1C0004C64(v14 + 48, 1LL, 0, 0LL);
    v17 = sub_1C0008510(v16, a4, v7);
    if ( v17 >= 0 )
    {
      if ( a3 == -94 )
      {
        v18 = 64;
      }
      else
      {
        v18 = 0;
        if ( a3 == -75 )
          v18 = 128;
      }
      v19 = v18 | 0x102;
      v11 = (void *)sub_1C0007CF4(64LL, 255LL, 1314087250LL, *(_QWORD *)(a1 + 8));
      if ( v11 )
      {
        if ( *(_BYTE *)(a1 + 442) == 1 )
        {
          v20 = v12[13];
          v9 = v12;
          v12[5] = 0;
          v12[6] = v19;
          if ( (unsigned int)sub_1C00230AC() && sub_1C0023100(a1) )
          {
            LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
            _InterlockedAdd(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 6080) + 8 * LockArray_high), 1u);
            v21 = **(_QWORD **)(*(_QWORD *)(a1 + 6080) + 8 * LockArray_high);
            v12[11] = HIDWORD(v21);
          }
          else
          {
            LODWORD(v21) = -1;
          }
          v12[8] = v21;
          *((_QWORD *)v12 + 8) = a4;
          v12[15] = v7;
          *((_WORD *)v12 + 18) = IoGetIoPriorityHint(a2);
          v23 = *(_DWORD *)(a1 + 4060);
          *((_QWORD *)v12 + 10) = a2;
          v12[10] = v23;
          *((_QWORD *)v12 + 12) = v16;
          if ( *(_WORD *)(a1 + 5504) == 1 )
          {
            *((_BYTE *)v12 + v20 + 8) = *(_BYTE *)(a1 + 5512);
            *((_BYTE *)v12 + v20 + 9) = *(_BYTE *)(a1 + 5513);
            *((_BYTE *)v12 + v20 + 10) = *(_BYTE *)(a1 + 5514);
          }
          *(_QWORD *)(v16 + 168) = v12;
          *(_QWORD *)(v16 + 184) = *((_QWORD *)v12 + 8);
          *(_QWORD *)(v16 + 176) = *((_QWORD *)v12 + 12);
          v10 = (char *)v12 + v12[30];
          *(_DWORD *)v10 = 64;
          v24 = v10 + 24;
          *((_DWORD *)v10 + 1) = 32;
          *(_WORD *)(v10 + 9) = 3327;
          *((_QWORD *)v10 + 2) = v11;
        }
        else
        {
          *((_BYTE *)v12 + 2) = 0;
          *(_WORD *)v12 = 88;
          *((_QWORD *)v12 + 3) = a4;
          v12[3] = v19;
          *((_BYTE *)v12 + 8) = -1;
          v12[4] = v7;
          v12[5] = *(_DWORD *)(a1 + 4060);
          *((_BYTE *)v12 + 11) = -1;
          *((_QWORD *)v12 + 4) = v11;
          *((_QWORD *)v12 + 6) = v16;
          if ( *(_WORD *)(a1 + 5504) == 1 )
          {
            *((_BYTE *)v12 + 5) = *(_BYTE *)(a1 + 5512);
            *((_BYTE *)v12 + 6) = *(_BYTE *)(a1 + 5513);
            *((_BYTE *)v12 + 7) = *(_BYTE *)(a1 + 5514);
          }
          v24 = (char *)(v12 + 18);
          *(_QWORD *)(v16 + 168) = v12;
          v25 = *((_QWORD *)v12 + 3);
          *(_QWORD *)(v16 + 176) = a2;
          *(_QWORD *)(v16 + 184) = v25;
          *((_BYTE *)v12 + 10) = 12;
        }
        if ( *((_BYTE *)v12 + 2) == 40 )
          *((_WORD *)v12 + 19) = 32;
        else
          *((_BYTE *)v12 + 9) = 32;
        *v24 = a3;
        v24[1] = *(_BYTE *)(a1 + 5496);
        *((_WORD *)v24 + 1) = __ROR2__(*(_WORD *)(a1 + 5498), 8);
        *(_DWORD *)(v24 + 6) = _byteswap_ulong(v7);
        sub_1C0008870(a1, (__int64)v12, v29 + 1104);
        KeInitializeEvent((PRKEVENT)(v16 + 664), NotificationEvent, 0);
        *(_QWORD *)(v16 + 656) = sub_1C00100B0;
        if ( *(_QWORD *)(a1 + 4896) )
          sub_1C0008BF0(a1, 0LL, 1LL);
        if ( *(_BYTE *)(a1 + 442) == 1 )
        {
          if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
            && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
            && BYTE1(off_1C0093070->Timer) >= 4u )
          {
            sub_1C003F194(off_1C0093070->AttachedDevice, 68LL, &unk_1C0083210, v16, v9, *((_QWORD *)v9 + 13));
          }
        }
        else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
               && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
               && BYTE1(off_1C0093070->Timer) >= 4u )
        {
          sub_1C003F194(off_1C0093070->AttachedDevice, 69LL, &unk_1C0083210, v16, v12, *((_QWORD *)v12 + 7));
        }
        if ( *(_BYTE *)(a1 + 4306) )
          v27 = sub_1C0008DB8(a1, v16);
        else
          v27 = sub_1C0008E14(a1, (_QWORD *)v16, v26);
        v17 = v27;
        if ( v27 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v16 + 664), Executive, 0, 0, 0LL);
          v17 = sub_1C0008570(*((_BYTE *)v12 + 3));
        }
        v15 = 1LL;
        if ( (*(_BYTE *)(v16 + 17) & 1) != 0 )
        {
          sub_1C0037008(a1, *(unsigned int *)(v16 + 748));
          *(_BYTE *)(v16 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 4896) )
          sub_1C0008BB4(a1, 0LL, 0LL);
      }
      else
      {
        v17 = -1073741801;
      }
    }
  }
  else
  {
    v17 = -1073741801;
    v16 = 0LL;
    if ( !v14 )
      goto LABEL_47;
  }
  sub_1C0008C44(v16, 0, v15);
  sub_1C00084E4(a1, v29);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x4E536152u);
LABEL_47:
  if ( v12 )
  {
    if ( *(_BYTE *)(a1 + 442) == 1 )
    {
      if ( !v9 )
        v9 = v12;
      *((_QWORD *)v9 + 10) = 0LL;
      *((_QWORD *)v9 + 13) = 0LL;
      if ( v10 )
        *((_QWORD *)v10 + 2) = 0LL;
    }
    else
    {
      *((_QWORD *)v12 + 6) = 0LL;
      *((_QWORD *)v12 + 7) = 0LL;
      *((_QWORD *)v12 + 4) = 0LL;
    }
    ExFreePoolWithTag(v12, 0x72536152u);
  }
  return (unsigned int)v17;
}
