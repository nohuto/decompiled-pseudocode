/*
 * XREFs of sub_1405CCECC @ 0x1405CCECC
 * Callers:
 *     sub_1405D6AC0 @ 0x1405D6AC0 (sub_1405D6AC0.c)
 *     sub_1409971BC @ 0x1409971BC (sub_1409971BC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1403559E4 @ 0x1403559E4 (sub_1403559E4.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405CCE88 @ 0x1405CCE88 (sub_1405CCE88.c)
 *     sub_1405CE21C @ 0x1405CE21C (sub_1405CE21C.c)
 */

char sub_1405CCECC()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v1; // r14
  ULONG_PTR i; // rdi
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf
  unsigned int j; // esi
  KSPIN_LOCK *v11; // rbx
  unsigned __int64 v12; // rbp
  _QWORD *v13; // rcx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  __int64 v16; // r9
  int v17; // eax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23B98, 0LL);
  v1 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_140C23B80; (ULONG_PTR *)i != &qword_140C23B80; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 48) )
    {
      if ( dword_140C23CB0 < 0 )
      {
        v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 600));
        sub_1403559E4(i + 600, v1, 0x47868C00uLL);
        sub_1405CCE88(v4);
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(i + 600));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v7 = *((_QWORD *)CurrentPrcb + 4375);
              v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
              v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
              *(_DWORD *)(v7 + 20) &= v8;
              if ( v9 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v3);
      }
      for ( j = 0; j < *(_DWORD *)(i + 828); ++j )
      {
        v11 = (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(i + 832) + 8LL * j) + 200LL);
        v12 = KeAcquireSpinLockRaiseToDpc(v11);
        sub_1403559E4((__int64)v11, v1, 0x47868C00uLL);
        sub_1405CCE88(v13);
        KeReleaseSpinLockFromDpcLevel(v11);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v14 = KeGetCurrentIrql();
            if ( v14 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v14 >= 2u )
            {
              v15 = KeGetCurrentPrcb();
              v16 = *((_QWORD *)v15 + 4375);
              v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
              v9 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
              *(_DWORD *)(v16 + 20) &= v17;
              if ( v9 )
                sub_140418E4C((__int64)v15);
            }
          }
        }
        __writecr8(v12);
      }
    }
  }
  sub_1405CE21C(0LL);
  byte_140C23CB4 = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23B98, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C23B98);
  sub_1402AFC00((ULONG_PTR)&qword_140C23B98);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
