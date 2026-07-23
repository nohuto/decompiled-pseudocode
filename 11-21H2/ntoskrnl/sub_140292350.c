/*
 * XREFs of sub_140292350 @ 0x140292350
 * Callers:
 *     sub_1403C1454 @ 0x1403C1454 (sub_1403C1454.c)
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     sub_140244508 @ 0x140244508 (sub_140244508.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140291010 @ 0x140291010 (sub_140291010.c)
 *     sub_140292818 @ 0x140292818 (sub_140292818.c)
 *     sub_140292A04 @ 0x140292A04 (sub_140292A04.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_1402930CC @ 0x1402930CC (sub_1402930CC.c)
 *     sub_140293218 @ 0x140293218 (sub_140293218.c)
 *     sub_1402A0324 @ 0x1402A0324 (sub_1402A0324.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F8020 @ 0x1402F8020 (sub_1402F8020.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056AAA4 @ 0x14056AAA4 (sub_14056AAA4.c)
 *     sub_14057B33C @ 0x14057B33C (sub_14057B33C.c)
 *     sub_14062DAE4 @ 0x14062DAE4 (sub_14062DAE4.c)
 */

__int64 __fastcall sub_140292350(__int64 a1, _WORD *a2, unsigned int *a3)
{
  unsigned __int64 CurrentThread; // rsi
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // r15
  char v9; // al
  __int64 v10; // rcx
  unsigned int v11; // r14d
  _QWORD *v12; // rsi
  __int64 v13; // r13
  int v14; // eax
  int v15; // edx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 result; // rax
  __int64 v20; // r9
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  char v23; // dl
  char v24; // cl
  __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // r10d
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v30; // r8
  int v31; // eax
  bool v32; // zf
  __int64 v33; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+28h] [rbp-D8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v36[68]; // [rsp+50h] [rbp-B0h] BYREF

  v36[0] = 2097153;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v36[1], 0, 0x104uLL);
  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v7 = *(_QWORD *)(a1 + 184);
  v34 = 0LL;
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (4 * *(_DWORD *)(v7 + 632))) & 8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v20 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v20 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
  sub_1402930CC(v7);
  v9 = *(_BYTE *)(v7 + 640);
  *(_BYTE *)(a1 + 563) = v9;
  *(_BYTE *)(a1 + 195) = v9;
  if ( !a2 || (unsigned int)KeIsEmptyAffinityEx(a2) )
  {
    sub_140300030(v36, HIWORD(v36[0]), v7 + 80);
    a2 = v36;
    if ( v7 == *(_QWORD *)(CurrentThread + 544) )
      LOWORD(CurrentThread) = *(_WORD *)(CurrentThread + 584);
    else
      LOWORD(CurrentThread) = *(_WORD *)(v7 + 1040);
LABEL_5:
    LOWORD(v34) = CurrentThread;
    goto LABEL_6;
  }
  if ( !(unsigned int)KeIsSubsetAffinityEx((__int64)a2, v7 + 80) )
    sub_14057B33C(v7, a2);
  CurrentThread = *(unsigned __int16 *)(v7 + 1040);
  if ( (unsigned __int16)CurrentThread < *a2 && *(_QWORD *)&a2[4 * CurrentThread + 4] )
    goto LABEL_5;
  sub_140363220(1LL, v25);
  v26 = sub_1402A0324(a2);
  LOWORD(CurrentThread) = sub_14056AAA4(v26, v27);
  LOWORD(v34) = CurrentThread;
LABEL_6:
  if ( (unsigned __int16)CurrentThread >= *a2 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)&a2[4 * (unsigned __int16)CurrentThread + 4];
  v33 = v10;
  sub_140300030(*(_QWORD *)(a1 + 576), *(unsigned __int16 *)(*(_QWORD *)(a1 + 576) + 2LL), a2);
  sub_140300030(*(_QWORD *)(a1 + 552), *(unsigned __int16 *)(*(_QWORD *)(a1 + 552) + 2LL), a2);
  *(_WORD *)(a1 + 584) = CurrentThread;
  *(_WORD *)(a1 + 560) = CurrentThread;
  sub_140292A04(a1);
  if ( a3 )
  {
    v11 = *a3;
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0);
  }
  else
  {
    v11 = (unsigned __int16)sub_140293218(v7, &v33);
  }
  *(_DWORD *)(a1 + 196) = v11;
  v12 = (_QWORD *)(v7 + 48);
  *(_DWORD *)(a1 + 588) = v11;
  v13 = qword_140D088C0[v11];
  if ( (_QWORD *)*v12 == v12 && (_UNKNOWN *)v7 != &unk_140D32B00 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)&unk_140D31400;
    sub_1403119F0(&LockHandle);
    v21 = (_QWORD *)qword_140C2BC08;
    v22 = (_QWORD *)(v7 + 848);
    if ( *(__int64 **)qword_140C2BC08 != &qword_140C2BC00 )
      goto LABEL_56;
    *(_QWORD *)(v7 + 856) = qword_140C2BC08;
    *v22 = &qword_140C2BC00;
    *v21 = v22;
    qword_140C2BC08 = v7 + 848;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (*(_DWORD *)(v7 + 632) << 6)) & 0x100;
  v14 = *(unsigned __int8 *)(v7 + 641);
  v15 = *(_DWORD *)(a1 + 120);
  *(_BYTE *)(a1 + 651) = v14;
  v16 = (unsigned int)(dword_140D050CC * v14);
  if ( (v15 & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
  *(_QWORD *)(a1 + 32) = v16;
  sub_1402F3290(v7);
  v17 = *(_QWORD **)(v7 + 56);
  v18 = (_QWORD *)(a1 + 760);
  if ( (_QWORD *)*v17 != v12 )
LABEL_56:
    __fastfail(3u);
  *v18 = v12;
  *(_QWORD *)(a1 + 768) = v17;
  *v17 = v18;
  *(_QWORD *)(v7 + 56) = v18;
  _InterlockedAnd((volatile signed __int32 *)v7, 0xFFFFFF7F);
  if ( *(_DWORD *)(v7 + 888) )
    sub_140244508((__int64)KeGetCurrentPrcb(), a1, 0);
  if ( (*(_DWORD *)(v7 + 632) & 8) != 0 )
    sub_140244508((__int64)KeGetCurrentPrcb(), a1, 1);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(v7 + 880);
  if ( *(_QWORD *)(v7 + 880) )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  sub_140292818(v13, a1);
  if ( *(_QWORD *)(v7 + 1024) )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x17u);
  if ( (unsigned __int8)sub_1402F8020(a1) )
  {
    if ( !*(_BYTE *)(a1 + 564) && (*(_DWORD *)(a1 + 120) & 8) == 0 )
    {
      v23 = *(_BYTE *)(a1 + 195);
      if ( v23 > 0 )
      {
        v24 = dword_140D06AB0 + *(_BYTE *)(a1 + 563);
        if ( v24 >= 16 )
          v24 = 15;
        if ( v24 > v23 )
        {
          *(_BYTE *)(a1 + 564) = (v24 - v23) & 0xF;
          sub_140291010(0LL, a1, (PVOID *)(unsigned int)v24, 0);
          sub_140292818(0LL, a1);
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
    *(_DWORD *)(a1 + 952) = *(_DWORD *)(v7 + 68);
  if ( dword_140D05384 < (unsigned int)dword_140D05350 )
    *(_BYTE *)(a1 + 516) = dword_140D05384;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v30 = *((_QWORD *)CurrentPrcb + 4375);
        v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v32 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
        *(_DWORD *)(v30 + 20) &= v31;
        if ( v32 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( _bittest((const signed __int32 *)&xmmword_140D06910, 0x1Bu) )
    result = sub_14062DAE4(a1, 1350LL, 0xFFFFFFFFLL, v11);
  if ( _bittest((const signed __int32 *)&xmmword_140D06910, 0x1Bu) )
    result = sub_14062DAE4(a1, 1351LL, 0xFFFFFFFFLL, v11);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 840), 8u);
  return result;
}
