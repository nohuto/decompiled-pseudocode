/*
 * XREFs of sub_1402D9A54 @ 0x1402D9A54
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140761A2C @ 0x140761A2C (sub_140761A2C.c)
 * Callees:
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_140285FE0 @ 0x140285FE0 (sub_140285FE0.c)
 *     sub_140286DE0 @ 0x140286DE0 (sub_140286DE0.c)
 *     sub_140287380 @ 0x140287380 (sub_140287380.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402D8E9C @ 0x1402D8E9C (sub_1402D8E9C.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14058C0E4 @ 0x14058C0E4 (sub_14058C0E4.c)
 *     sub_1406F57B8 @ 0x1406F57B8 (sub_1406F57B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1402D9A54(unsigned __int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // r14
  PVOID v6; // rbp
  unsigned __int64 v7; // rsi
  int v8; // eax
  int v9; // r13d
  volatile LONG *v10; // rbx
  __int64 *v11; // rbx
  char v12; // r15
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int8 v15; // bl
  __int64 v16; // rdx
  unsigned __int8 v17; // bl
  __int64 *v19; // rax
  int v20; // ebx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  __int64 v23; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // [rsp+20h] [rbp-F8h]
  __int64 v31; // [rsp+28h] [rbp-F0h]
  __int64 v32; // [rsp+30h] [rbp-E8h]
  __int64 v33[27]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+130h] [rbp+18h] BYREF
  KIRQL v36; // [rsp+138h] [rbp+20h]

  v35 = a3;
  v4 = 0;
  LOBYTE(v35) = 0;
  memset(v33, 0, 0x98uLL);
  v32 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
  v5 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v32 + 366));
  v30 = sub_14027B520();
  v6 = sub_1402828F0(64, 0x60uLL, 0x69486D4Du);
  if ( !v6 )
    return 3221225495LL;
  v7 = *(unsigned int *)(*a2 + 8);
  if ( *(_DWORD *)(*a2 + 8) && !(unsigned int)sub_14032A4B0(v5, (unsigned int)v7, 0LL) )
  {
    v20 = -1073741670;
LABEL_29:
    ExFreePoolWithTag(v6, 0);
    return (unsigned int)v20;
  }
  v31 = sub_1406F57B8(v7 << 12);
  v8 = sub_140287380((__int64)a2);
  v9 = v8;
  if ( !v8 )
  {
    sub_14028CE10(v5, v7);
    v20 = -1073740277;
    goto LABEL_29;
  }
  if ( v8 == 2 )
  {
    v20 = sub_140286DE0(a2 + 16, 264, 0x11u);
    if ( v20 < 0 )
    {
      sub_14028CE10(v5, v7);
      goto LABEL_29;
    }
  }
  v10 = (volatile LONG *)sub_140282AD0(v30);
  v36 = ExAcquireSpinLockExclusive(v10);
  *((_DWORD *)v10 + 1) = 0;
  sub_1402D8E9C((unsigned __int8 *)&v35);
  v11 = *(__int64 **)(v32 + 80);
  v12 = 0;
  if ( !v11 )
  {
LABEL_7:
    memset(v6, 0, 0x60uLL);
    *((_QWORD *)v6 + 5) = a1 | 3;
    *((_QWORD *)v6 + 9) = v7;
    *((_QWORD *)v6 + 6) = a1 + v31 - 1;
    *((_DWORD *)v6 + 15) = 1;
    *((_DWORD *)v6 + 14) = *(_DWORD *)(v32 + 8);
    *((_QWORD *)v6 + 10) = a2;
    *((_QWORD *)v6 + 11) = -2LL;
    if ( v9 == 2 )
      *((_BYTE *)v6 + 65) = 1;
    LOBYTE(v13) = v12;
    RtlAvlInsertNodeEx(v32 + 80, v11, v13, v6);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D311C0);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v15 = v35;
      if ( (unsigned __int8)v35 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v28 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = v35;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
        v25 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
        v14 = (unsigned int)v29 & *(_DWORD *)(v28 + 20);
        *(_DWORD *)(v28 + 20) = v14;
        if ( v25 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    else
    {
      v15 = v35;
    }
    __writecr8(v15);
    LOBYTE(v14) = v36;
    sub_14030FA80(v30, v14);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 40), v7);
    v33[0] = (__int64)a2;
    sub_140285FE0(v33, (_QWORD *)v6 + 3, 3);
    return v4;
  }
  while ( a1 > v11[6] )
  {
    v19 = (__int64 *)v11[1];
    if ( !v19 )
    {
      v12 = 1;
      goto LABEL_7;
    }
LABEL_19:
    v11 = v19;
  }
  if ( a1 < (v11[5] & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v19 = (__int64 *)*v11;
    if ( !*v11 )
      goto LABEL_7;
    goto LABEL_19;
  }
  ++*((_DWORD *)v11 + 15);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D311C0);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v21 = KeGetCurrentIrql(), v21 <= 0xFu) )
  {
    v17 = v35;
    if ( (unsigned __int8)v35 <= 0xFu && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = *((_QWORD *)v22 + 4375);
      v17 = v35;
      v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
      v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
      v16 = (unsigned int)v24 & *(_DWORD *)(v23 + 20);
      *(_DWORD *)(v23 + 20) = v16;
      if ( v25 )
        sub_140418E4C(v22);
    }
  }
  else
  {
    v17 = v35;
  }
  __writecr8(v17);
  LOBYTE(v16) = v36;
  sub_14030FA80(v30, v16);
  v4 = 272;
  ExFreePoolWithTag(v6, 0);
  sub_14028CE10(v5, v7);
  if ( v9 == 2 )
    sub_14058C0E4(a2);
  return v4;
}
