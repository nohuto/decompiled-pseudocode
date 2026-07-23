/*
 * XREFs of sub_1405D655C @ 0x1405D655C
 * Callers:
 *     sub_1405D5704 @ 0x1405D5704 (sub_1405D5704.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_1402D2864 @ 0x1402D2864 (sub_1402D2864.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char sub_1405D655C()
{
  signed __int32 v0; // eax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v2; // r12d
  __int64 i; // rdi
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  unsigned int j; // esi
  __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  __int64 v18; // r9
  int v19; // eax

  v0 = _InterlockedCompareExchange(&dword_140C23CB0, 0, 0);
  CurrentThread = KeGetCurrentThread();
  v2 = v0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C20A30, 0LL);
  for ( i = qword_140C20A40; (__int64 *)i != &qword_140C20A40; i = *(_QWORD *)i )
  {
    v4 = *(_QWORD *)(i + 32);
    v5 = *(_QWORD *)(v4 + 48);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 32);
      sub_1402D2864(v6, 0, 0);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 600));
      *(_DWORD *)(v4 + 616) = v2;
      memset((void *)(v4 + 632), 0, 0xC0uLL);
      if ( *(_DWORD *)(v4 + 612) == 5 )
      {
        *(_BYTE *)(v4 + 608) = 0;
        *(_QWORD *)(v4 + 624) = 0LL;
      }
      else
      {
        *(_BYTE *)(v4 + 608) = 1;
        *(_QWORD *)(v4 + 624) = MEMORY[0xFFFFF78000000008];
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 600));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v10 = *((_QWORD *)CurrentPrcb + 4375);
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
            *(_DWORD *)(v10 + 20) &= v11;
            if ( v12 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
      for ( j = 0; j < *(_DWORD *)(i + 180); ++j )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v4 + 832) + 8LL * j) + 200LL;
        v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14);
        *(_DWORD *)(v14 + 16) = v2;
        memset((void *)(v14 + 32), 0, 0xC0uLL);
        if ( *(_DWORD *)(v14 + 12) == -1 )
        {
          *(_BYTE *)(v14 + 8) = 0;
          *(_QWORD *)(v14 + 24) = 0LL;
        }
        else
        {
          *(_BYTE *)(v14 + 8) = 1;
          *(_QWORD *)(v14 + 24) = MEMORY[0xFFFFF78000000008];
        }
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v14);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v16 = KeGetCurrentIrql();
            if ( v16 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v16 >= 2u )
            {
              v17 = KeGetCurrentPrcb();
              v18 = *((_QWORD *)v17 + 4375);
              v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
              v12 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
              *(_DWORD *)(v18 + 20) &= v19;
              if ( v12 )
                sub_140418E4C((__int64)v17);
            }
          }
        }
        __writecr8(v15);
      }
      sub_1402D25CC(v6);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C20A30, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C20A30);
  sub_1402AFC00((ULONG_PTR)&qword_140C20A30);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
