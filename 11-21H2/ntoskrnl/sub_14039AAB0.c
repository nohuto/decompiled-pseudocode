/*
 * XREFs of sub_14039AAB0 @ 0x14039AAB0
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char sub_14039AAB0()
{
  char result; // al
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // r15
  ULONG_PTR i; // rbx
  unsigned int j; // esi
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  __int64 v16; // r9
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  int v20; // eax
  __int64 v21; // r8

  result = dword_140C23CB0;
  if ( dword_140C23CB0 )
  {
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
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 600));
          memset((void *)(i + 632), 0, 0xC0uLL);
          if ( *(_BYTE *)(i + 608) )
            *(_QWORD *)(i + 624) = v2;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(i + 600));
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v11 = *((_QWORD *)CurrentPrcb + 4375);
                v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
                v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
                *(_DWORD *)(v11 + 20) &= v12;
                if ( v13 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(v8);
        }
        for ( j = 0; j < *(_DWORD *)(i + 828); ++j )
        {
          v5 = *(_QWORD *)(*(_QWORD *)(i + 832) + 8LL * j);
          v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 200));
          memset((void *)(v5 + 232), 0, 0xC0uLL);
          if ( *(_BYTE *)(v5 + 208) )
            *(_QWORD *)(v5 + 224) = v2;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v5 + 200));
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v14 = KeGetCurrentIrql();
              if ( v14 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v14 >= 2u )
              {
                v15 = KeGetCurrentPrcb();
                v16 = *((_QWORD *)v15 + 4375);
                v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
                v13 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
                *(_DWORD *)(v16 + 20) &= v17;
                if ( v13 )
                  sub_140418E4C(v15);
              }
            }
          }
          __writecr8(v6);
        }
      }
    }
    v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C23D00);
    qword_140C23D30 = 0LL;
    qword_140C23D38 = 0LL;
    memset(&xmmword_140C23D40, 0, 0x50uLL);
    KeReleaseSpinLockFromDpcLevel(&qword_140C23D00);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v21 = *((_QWORD *)v19 + 4375);
          v13 = (v20 & *(_DWORD *)(v21 + 20)) == 0;
          *(_DWORD *)(v21 + 20) &= v20;
          if ( v13 )
            sub_140418E4C(v19);
        }
      }
    }
    __writecr8(v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23B98, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C23B98);
    sub_1402AFC00((ULONG_PTR)&qword_140C23B98);
    return sub_1402F9540((__int64)KeGetCurrentThread());
  }
  return result;
}
