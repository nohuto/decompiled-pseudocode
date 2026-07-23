/*
 * XREFs of sub_1405CDBB4 @ 0x1405CDBB4
 * Callers:
 *     sub_1405D6AC0 @ 0x1405D6AC0 (sub_1405D6AC0.c)
 *     sub_1409971BC @ 0x1409971BC (sub_1409971BC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405CE21C @ 0x1405CE21C (sub_1405CE21C.c)
 */

char sub_1405CDBB4()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rcx
  __int64 v2; // r14
  ULONG_PTR i; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf
  unsigned int j; // esi
  __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  __int64 v15; // r9
  int v16; // eax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23B98, 0LL);
  v2 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_140C23B80; (ULONG_PTR *)i != &qword_140C23B80; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 48) )
    {
      if ( dword_140C23CB0 < 0 )
      {
        v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 600));
        memset((void *)(i + 728), 0, 0x60uLL);
        if ( *(_BYTE *)(i + 608) )
          *(_QWORD *)(i + 624) = v2;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(i + 600));
        v1 = (unsigned int)dword_140D06B08;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v1 = (unsigned int)(v4 + 1);
              v7 = *((_QWORD *)CurrentPrcb + 4375);
              v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
              v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
              *(_DWORD *)(v7 + 20) &= v8;
              if ( v9 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v4);
      }
      for ( j = 0; j < *(_DWORD *)(i + 828); ++j )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(i + 832) + 8LL * j);
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 200));
        memset((void *)(v11 + 328), 0, 0x60uLL);
        if ( *(_BYTE *)(v11 + 208) )
          *(_QWORD *)(v11 + 224) = v2;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v11 + 200));
        v1 = (unsigned int)dword_140D06B08;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v13 = KeGetCurrentIrql();
            if ( v13 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v13 >= 2u )
            {
              v14 = KeGetCurrentPrcb();
              v1 = (unsigned int)(v12 + 1);
              v15 = *((_QWORD *)v14 + 4375);
              v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
              v9 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
              *(_DWORD *)(v15 + 20) &= v16;
              if ( v9 )
                sub_140418E4C((__int64)v14);
            }
          }
        }
        __writecr8(v12);
      }
    }
  }
  LOBYTE(v1) = 1;
  sub_1405CE21C(v1);
  byte_140C23CB4 = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23B98, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C23B98);
  sub_1402AFC00((ULONG_PTR)&qword_140C23B98);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
