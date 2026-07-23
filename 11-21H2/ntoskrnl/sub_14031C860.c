/*
 * XREFs of sub_14031C860 @ 0x14031C860
 * Callers:
 *     sub_14023C9F8 @ 0x14023C9F8 (sub_14023C9F8.c)
 *     sub_140245DF4 @ 0x140245DF4 (sub_140245DF4.c)
 *     sub_14024C5E0 @ 0x14024C5E0 (sub_14024C5E0.c)
 *     sub_14025EB44 @ 0x14025EB44 (sub_14025EB44.c)
 *     sub_140273390 @ 0x140273390 (sub_140273390.c)
 *     sub_140273AAC @ 0x140273AAC (sub_140273AAC.c)
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 *     sub_14029A2A0 @ 0x14029A2A0 (sub_14029A2A0.c)
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 *     sub_1402DAC64 @ 0x1402DAC64 (sub_1402DAC64.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_14031B510 @ 0x14031B510 (sub_14031B510.c)
 *     sub_14031C290 @ 0x14031C290 (sub_14031C290.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140337B00 @ 0x140337B00 (sub_140337B00.c)
 *     sub_14033E5D0 @ 0x14033E5D0 (sub_14033E5D0.c)
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 *     sub_140367190 @ 0x140367190 (sub_140367190.c)
 *     sub_140430000 @ 0x140430000 (sub_140430000.c)
 *     sub_140581D58 @ 0x140581D58 (sub_140581D58.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 *     sub_140641840 @ 0x140641840 (sub_140641840.c)
 *     sub_1406F4768 @ 0x1406F4768 (sub_1406F4768.c)
 *     sub_140881C00 @ 0x140881C00 (sub_140881C00.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14022FC80 @ 0x14022FC80 (sub_14022FC80.c)
 *     sub_1402307A0 @ 0x1402307A0 (sub_1402307A0.c)
 *     sub_140230BA0 @ 0x140230BA0 (sub_140230BA0.c)
 *     sub_140250924 @ 0x140250924 (sub_140250924.c)
 *     sub_140251340 @ 0x140251340 (sub_140251340.c)
 *     sub_1402598CC @ 0x1402598CC (sub_1402598CC.c)
 *     sub_14026C744 @ 0x14026C744 (sub_14026C744.c)
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_14027A168 @ 0x14027A168 (sub_14027A168.c)
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_140285380 @ 0x140285380 (sub_140285380.c)
 *     sub_14028D2D8 @ 0x14028D2D8 (sub_14028D2D8.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 *     sub_14031E200 @ 0x14031E200 (sub_14031E200.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045F8C2 @ 0x14045F8C2 (sub_14045F8C2.c)
 *     sub_1405A7158 @ 0x1405A7158 (sub_1405A7158.c)
 *     sub_1405A7A00 @ 0x1405A7A00 (sub_1405A7A00.c)
 *     sub_1405B1974 @ 0x1405B1974 (sub_1405B1974.c)
 *     sub_1405B7728 @ 0x1405B7728 (sub_1405B7728.c)
 *     sub_1405B7EB4 @ 0x1405B7EB4 (sub_1405B7EB4.c)
 *     sub_1405B809C @ 0x1405B809C (sub_1405B809C.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 *     sub_1405BCAF8 @ 0x1405BCAF8 (sub_1405BCAF8.c)
 *     sub_140978EDC @ 0x140978EDC (sub_140978EDC.c)
 */

__int64 __fastcall sub_14031C860(
        ULONG_PTR BugCheckParameter2,
        signed __int64 BugCheckParameter1,
        char a3,
        ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v5; // r14
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // rbx
  int v8; // ecx
  unsigned int v9; // r15d
  NTSTATUS v10; // ebx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  char v14; // al
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  char v21; // r8
  PVOID v22; // rax
  _BYTE *v23; // rax
  _SLIST_ENTRY *v24; // rbx
  __int64 v25; // rcx
  struct _KTHREAD *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  int v31; // edx
  ULONG_PTR v32; // r9
  __int64 v33; // r8
  unsigned int v34; // ecx
  int v35; // eax
  __int64 v36; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v37[16]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v38[2]; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR v39; // [rsp+D0h] [rbp-30h]
  ULONG_PTR v40; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v41; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v42; // [rsp+E8h] [rbp-18h]
  __int64 v43; // [rsp+F0h] [rbp-10h]
  __int128 v44; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v45; // [rsp+108h] [rbp+8h]
  PVOID P[2]; // [rsp+118h] [rbp+18h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+128h] [rbp+28h] BYREF
  __int128 v48; // [rsp+138h] [rbp+38h]

  v36 = 0LL;
  v5 = BugCheckParameter4;
  v6 = BugCheckParameter1;
  v7 = BugCheckParameter2;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, BugCheckParameter1, BugCheckParameter2, BugCheckParameter4);
  if ( BugCheckParameter1 >> 47 != -1 && BugCheckParameter1 >> 47 != 0 )
  {
    if ( a3 == 1 )
      return 3221225477LL;
    if ( (BugCheckParameter4 & 1) != 0 )
    {
      v34 = *(unsigned __int8 *)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (unsigned __int8)v34 <= 6u )
      {
        v35 = 74;
        if ( _bittest(&v35, v34) )
          return 3221225477LL;
      }
    }
    else if ( sub_140230BA0(BugCheckParameter4, 0) )
    {
      return 3221225477LL;
    }
    KeBugCheckEx(0x50u, v6, v7, v5, 4uLL);
  }
  if ( (BugCheckParameter2 & 0x8000) != 0 )
  {
    if ( a3 == 1 )
      return sub_140978EDC(BugCheckParameter1);
    else
      return 3221226658LL;
  }
  v44 = 0LL;
  v45 = 0LL;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v48 = 0LL;
  v40 = (((unsigned __int64)BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v42 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = ((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0;
  if ( (v7 & 0x40) != 0 )
  {
    v8 = 32;
    v7 &= ~2uLL;
  }
  v38[1] = v7;
  v38[0] = BugCheckParameter1;
  v39 = BugCheckParameter4;
  DWORD2(v45) = ((unsigned __int8)v8 ^ (unsigned __int8)(a3 << 6)) & 0x40 ^ v8;
  if ( KeGetCurrentIrql() > 1u )
    return sub_1402307A0(v38);
  while ( 1 )
  {
    v9 = 4096;
    if ( v6 < 0xFFFF800000000000uLL || (v17 = sub_140279590(v38), v10 = v17, v17 == 192) )
    {
      v10 = sub_14031CD90(v38);
      if ( v10 != -1073741802 )
        goto LABEL_19;
    }
    else if ( v17 != -1073741802 )
    {
      goto LABEL_26;
    }
    v10 = sub_14031E200(v38, &v36);
    if ( v10 == -1073741802 )
    {
      if ( v38[0] < 0xFFFF800000000000uLL
        && P[1] != (PVOID)qword_140C50668
        && (!qword_140C50670 || P[1] != (PVOID)qword_140C50670) )
      {
        if ( P[0] )
        {
          sub_1402ED128(1);
        }
        else
        {
          sub_1402ED128(1);
          P[0] = sub_1403126F0(v38[0]);
        }
        sub_1402806E0(1, 0x11u);
        v21 = 4;
        if ( (WORD4(v45) & 0x100) != 0 )
          v21 = 2;
        v22 = (PVOID)sub_140319600((__int64)P[0], v38[0] >> 12, v21, (__int64 *)ListEntry);
        if ( !v22 )
        {
          sub_1405A7A00(v38);
          P[1] = 0LL;
          v10 = -1073741819;
          goto LABEL_55;
        }
        if ( P[1] != v22 )
          P[1] = v22;
        sub_140251340((__int64 *)ListEntry[0]);
      }
      DWORD2(v45) &= ~0x100u;
      v10 = 0;
    }
    else
    {
      v11 = v36;
      if ( v36 )
      {
        v20 = *(_QWORD *)(v36 + 256);
        v9 = *(_DWORD *)(v36 + 312);
        if ( v20 )
          v9 = *(_DWORD *)(v20 + 40);
        if ( a3 == 1 )
          *(_DWORD *)(v36 + 192) |= 0x40000u;
        if ( (*(_DWORD *)(v11 + 192) & 1) != 0 && *(int *)(v11 + 80) >= 0 )
        {
          v10 = sub_1405A7158(v38);
          P[1] = 0LL;
          goto LABEL_19;
        }
        v10 = sub_14027A1F0((__int64)v38, v11);
      }
      P[1] = 0LL;
    }
    if ( (BYTE8(v45) & 0x10) != 0 )
    {
      memset(v37, 0, sizeof(v37));
      *(_OWORD *)&v37[3] = v44;
      v37[5] = v45;
      sub_14027A168((__int64)v37);
      DWORD2(v45) &= ~0x10u;
    }
    else
    {
      v12 = v45;
      v13 = v44;
      if ( (_QWORD)v45 )
      {
        if ( WORD5(v44) )
        {
          sub_14022FC80((__int64 *)&v44);
          v12 = v45;
        }
        sub_14020D8D0(v13, v12);
        v14 = BYTE13(v44) | 2;
        *(_QWORD *)&v45 = 0LL;
        BYTE13(v44) |= 2u;
      }
      else
      {
        v14 = BYTE13(v44);
      }
      if ( (v14 & 1) != 0 )
        sub_14030FA80(v13, BYTE12(v44));
      else
        sub_1402B0CE0(v13, BYTE12(v44));
    }
LABEL_19:
    if ( (BYTE8(v45) & 1) != 0 )
      sub_1402598CC((unsigned int *)P[0], v38[0]);
    if ( ListEntry[1] )
    {
      if ( ListEntry[1] == (PSLIST_ENTRY)-1LL )
      {
        sub_1405B809C();
      }
      else
      {
        sub_1405B7EB4();
        sub_1405B7728(ListEntry[1]);
      }
      ListEntry[1] = 0LL;
    }
    if ( (_QWORD)v48 )
    {
      sub_1405B1974(
        v48,
        *(_QWORD *)(qword_140C51F48 + 8LL * (*((_WORD *)&ListEntry[0]->Next[3].Next + 6) & 0x3FF)),
        *((_QWORD *)&v48 + 1),
        (unsigned __int8)((BYTE8(v45) & 0x40) == 0) << 17);
      *(_QWORD *)&v48 = 0LL;
    }
    else if ( (v39 & 1) != 0 && *(_BYTE *)(v39 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
    {
      v25 = *(_QWORD *)((v39 & 0xFFFFFFFFFFFFFFFEuLL) + 48);
      if ( v25 )
        sub_1405B1974(v25, *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v44 + 174)), 1LL, 0LL);
    }
    if ( (*(_BYTE *)(v44 + 184) & 7) != 0 )
    {
      if ( (*(_DWORD *)(v44 + 4) & 0xFFF) != 0 )
        goto LABEL_26;
      v18 = v44;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( *((char *)CurrentThread + 195) < 16 )
        goto LABEL_26;
      if ( (*((_DWORD *)CurrentThread + 345) & 0xC) != 0 || (*((_DWORD *)CurrentThread + 345) & 2) != 0 )
        goto LABEL_26;
      v18 = v44;
      if ( (__int64)(*(_QWORD *)(v44 + 128) - *(_QWORD *)(v44 + 112)) <= 100 )
        goto LABEL_26;
    }
    v19 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v18 + 174));
    if ( v19 && !(unsigned int)sub_140285380(v19, 0x420uLL) )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_1400156D0);
LABEL_26:
    if ( !v10 )
      goto LABEL_31;
    if ( v10 == -1073740748 )
    {
      v10 = 0;
      goto LABEL_31;
    }
    if ( v10 >= 0 )
    {
LABEL_29:
      if ( !P[1] && (xmmword_140D06900 & 0x1000) != 0 )
      {
        v32 = 0LL;
        if ( (v39 & 1) == 0 )
          v32 = v39;
        v33 = DWORD2(v45) >> 6;
        LOBYTE(v33) = (BYTE8(v45) & 0x40) != 0;
        sub_14045F8C2((unsigned int)v10, v38[0], v33, v32);
      }
      goto LABEL_31;
    }
LABEL_55:
    if ( !sub_14028D2D8(v10, v9) )
      goto LABEL_29;
    v26 = KeGetCurrentThread();
    if ( (*((_BYTE *)v26 + 1384) & 4) != 0 || (*((_DWORD *)v26 + 345) & 0xC) != 0 )
    {
      v10 = -1073741801;
    }
    else if ( (v39 & 1) != 0
           && *(_BYTE *)(v39 & 0xFFFFFFFFFFFFFFFEuLL) == 5
           && (*(_DWORD *)((v39 & 0xFFFFFFFFFFFFFFFEuLL) + 56) & 0xC) != 0 )
    {
      v10 = -1073741608;
    }
    else
    {
      v27 = *(unsigned __int16 *)(v44 + 174);
      v28 = *(_QWORD *)(qword_140C51F48 + 8 * v27);
      if ( SBYTE8(v45) < 0
        || !(unsigned int)sub_140285380(*(_QWORD *)(qword_140C51F48 + 8 * v27), 0x420uLL)
        || *(_QWORD *)(v28 + 16960) < 0x400uLL )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_1400156D0);
      }
      v29 = *(_QWORD *)(v28 + 16896);
      v30 = v29 - 1;
      if ( !v29 )
        v30 = 0LL;
      if ( v30 < 0x9F )
      {
        v31 = *((_DWORD *)KeGetCurrentThread() + 345);
        if ( (v31 & 0xC) != 8
          && (v30 < 0x20 && (ULONG_PTR *)v28 == &StartContext
           || ((v31 & 2) == 0 || v30 < 0x21) && (*(_DWORD *)(v28 + 4) & 0x20) == 0) )
        {
          sub_1405B8348(v28);
        }
      }
      v10 = 0;
    }
LABEL_31:
    if ( (BYTE8(v45) & 2) != 0 )
      sub_1405BCAF8(v44, 3221225495LL);
    if ( (BYTE8(v45) & 4) != 0 )
      sub_1405BCAF8(v44, 3221226548LL);
    if ( !P[1] )
      break;
    v23 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v5 & 1) == 0 )
      goto LABEL_76;
    if ( *v23 == 1 || *v23 == 2 )
    {
      v23[1] = 1;
LABEL_76:
      v5 = 0LL;
      goto LABEL_77;
    }
    if ( *v23 != 6 )
      goto LABEL_76;
LABEL_77:
    v24 = ListEntry[0];
    sub_14026C744(2LL, (__int64)P[1], 0, v5, (__int64)v38);
    DWORD2(v45) |= 8u;
    v6 = v38[0];
    ListEntry[0] = v24;
  }
  if ( ListEntry[0] )
    sub_140250924((__int64 *)ListEntry[0]);
  return (unsigned int)v10;
}
