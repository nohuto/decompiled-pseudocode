/*
 * XREFs of sub_140B0ABEC @ 0x140B0ABEC
 * Callers:
 *     sub_1403C3FA0 @ 0x1403C3FA0 (sub_1403C3FA0.c)
 * Callees:
 *     sub_140212E00 @ 0x140212E00 (sub_140212E00.c)
 *     sub_140213318 @ 0x140213318 (sub_140213318.c)
 *     sub_1402501E8 @ 0x1402501E8 (sub_1402501E8.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14062DEE4 @ 0x14062DEE4 (sub_14062DEE4.c)
 *     sub_14063BDD0 @ 0x14063BDD0 (sub_14063BDD0.c)
 *     ntoskrnl_12 @ 0x1406AD260 (ntoskrnl_12.c)
 *     sub_140B0AEE8 @ 0x140B0AEE8 (sub_140B0AEE8.c)
 */

__int64 sub_140B0ABEC()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  int v5; // ecx
  void *v6; // rax
  void *v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdi
  int v15; // r15d
  __int64 v16; // rbx
  int v17; // eax
  int v18; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  signed __int64 v22; // r14
  bool v23; // zf
  unsigned __int64 v24; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v27; // r10
  __int64 v28; // r9
  int v29; // eax
  signed __int64 v30; // rsi
  unsigned __int64 v31; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = *((unsigned int *)CurrentPrcb + 8276) ^ *((unsigned int *)CurrentPrcb + 2894) ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v2 = (unsigned __int64)(unsigned int)sub_140363220(0) << 32;
  v3 = ((unsigned int)sub_140363220(0) | v2) ^ v1;
  v4 = 4096LL;
  if ( !v3 )
    v3 = 1LL;
  _BitScanReverse((unsigned int *)&v5, dword_140D050F0);
  qword_140D06E00 = v3;
  *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) = 1 << v5;
  if ( (unsigned int)(1 << v5) < 0x10 )
  {
    *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) = 16;
  }
  else if ( (unsigned int)(1 << v5) > 0x1000 )
  {
    *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) = 4096;
  }
  if ( qword_140C157C8 )
  {
    v4 = 64LL;
    if ( (unsigned __int64)qword_140C157C8 >= 0x40 )
    {
      _BitScanReverse64(&v24, qword_140C157C8);
      v4 = 1LL << v24;
    }
  }
  else
  {
    qword_140C157C8 = 4096LL;
    if ( (unsigned __int64)ntoskrnl_12(0) > 0x10000 )
      goto LABEL_8;
    v4 = 512LL;
  }
  for ( qword_140C157C8 = v4; ; qword_140C157C8 = v4 )
  {
LABEL_8:
    if ( v4 + 1 > 0x333333333333333LL )
      goto LABEL_36;
    v6 = (void *)sub_140213318();
    qword_140C157D0 = (__int64)v6;
    v7 = v6;
    if ( v6 )
      break;
    v4 = qword_140C157C8;
    if ( qword_140C157C8 == 1 )
      return 3221225626LL;
LABEL_36:
    v4 >>= 1;
  }
  qword_140C117A0 = v6;
  v8 = qword_140C157C8++ - 1;
  qword_140C157A0 = v8;
  memset(v7, 0, 80 * qword_140C157C8);
  sub_140B0AEE8();
  qword_140C11778 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = (80 * qword_140C157C8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( dword_140D05128 == 1819242320 )
    __debugbreak();
  v10 = DWORD1(xmmword_140D06900[0]);
  if ( (BYTE4(xmmword_140D06900[0]) & 0x41) != 0 )
    sub_14062DEE4(0xE20u, 512, 0x6C6F6F50u, qword_140C157D0, (80 * qword_140C157C8 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  LODWORD(v10) = HIDWORD(KeGetPcr()[1].LockArray);
  v11 = qword_140C157A0;
  v12 = qword_140C157C8;
  v13 = qword_140C157A0 & 0x40DEDA5;
  v14 = (__int64)*(&qword_140C117A0 + v10);
  v15 = qword_140C157A0 & 0x40DEDA5;
  while ( 1 )
  {
    v16 = 10 * v13;
    v17 = *(_DWORD *)(v14 + 80 * v13);
    if ( v17 == 1819242320 )
      break;
    if ( !v17 )
    {
      v18 = *(_DWORD *)(qword_140C157D0 + 80 * v13);
      if ( v18 )
      {
        *(_DWORD *)(v14 + 80 * v13) = v18;
        v20 = *(_QWORD *)(qword_140C157D0 + 80 * v13 + 72);
        if ( v20 )
          *(_QWORD *)(v14 + 80 * v13 + 72) = v20;
        continue;
      }
      if ( (unsigned int)v13 != v12 - 1 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_140C11778, &LockHandle);
        if ( !*(_DWORD *)(qword_140C157D0 + 80 * v13) )
        {
          v21 = sub_1402501E8(1819242320);
          *(_QWORD *)(qword_140C157D0 + 80 * v13 + 72) = v21;
          *(_QWORD *)(v14 + 80 * v13 + 72) = v21;
          *(_DWORD *)(qword_140C157D0 + 80 * v13) = 1819242320;
          *(_DWORD *)(v14 + 80 * v13) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              v27 = KeGetCurrentPrcb();
              v28 = *((_QWORD *)v27 + 4375);
              v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v23 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
              *(_DWORD *)(v28 + 20) &= v29;
              if ( v23 )
                sub_140418E4C((__int64)v27);
            }
          }
        }
        __writecr8(OldIrql);
        continue;
      }
    }
    v13 = v11 & (unsigned int)(v13 + 1);
    if ( (_DWORD)v13 == v15 )
    {
      sub_140212E00(0x6C6F6F50u, v9, 0x200u);
      return 0LL;
    }
  }
  _InterlockedAdd64((volatile signed __int64 *)(v14 + 80 * v13 + 16), 1uLL);
  v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 80 * v13 + 8), v9);
  v23 = *(_QWORD *)(v14 + 80 * v13 + 72) == 0LL;
LABEL_27:
  if ( !v23 )
  {
    v30 = *(_QWORD *)(v14 + 8 * v16 + 64);
    while ( (v30 & 1) == 0 )
    {
      if ( v30 >= v22 )
        break;
      v31 = sub_14063BDD0(*(_QWORD *)(v14 + 8 * v16 + 72), v9, 1);
      if ( !v31 )
        break;
      if ( v31 == 1 )
      {
        v23 = v30 == _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8 * v16 + 64), 1LL, v30);
        goto LABEL_27;
      }
      v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 8 * v16 + 64), v31);
      v22 = *(_QWORD *)(v14 + 8 * v16 + 8);
    }
  }
  return 0LL;
}
