/*
 * XREFs of sub_140267B58 @ 0x140267B58
 * Callers:
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 * Callees:
 *     sub_140266CA8 @ 0x140266CA8 (sub_140266CA8.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

LARGE_INTEGER __fastcall sub_140267B58(__int64 a1)
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v3; // rsi
  unsigned int i; // ebx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  result = KeQueryPerformanceCounter(0LL);
  v3 = result;
  for ( i = 0; i < (unsigned __int16)word_140D05000; ++i )
  {
    v5 = *(_QWORD *)(a1 + 16) + 24512LL * i;
    if ( *(_BYTE *)(v5 + 22965) )
    {
      if ( *(_BYTE *)(v5 + 22964) )
      {
        v6 = *(_QWORD *)(v5 + 22944);
        v7 = *(_QWORD *)(v6 + 48);
        if ( v3.QuadPart <= v7 )
        {
          ++dword_140C29710;
        }
        else if ( 1000000 * (v3.QuadPart - v7) / PerformanceFrequency.QuadPart < 0x10000 )
        {
          ++dword_140C29714;
        }
        else
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 24), &LockHandle);
          if ( *(_DWORD *)(v6 + 136) )
          {
            if ( v7 == *(_QWORD *)(v6 + 48) )
            {
              if ( (unsigned int)sub_140266CA8(v6, i, 1) == 7 )
                ++dword_140C2971C;
              else
                ++dword_140C29720;
              *(LARGE_INTEGER *)(v6 + 48) = KeQueryPerformanceCounter(0LL);
            }
            else
            {
              ++dword_140C29718;
            }
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
                CurrentPrcb = KeGetCurrentPrcb();
                v11 = *((_QWORD *)CurrentPrcb + 4375);
                v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
                *(_DWORD *)(v11 + 20) &= v12;
                if ( v13 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
        }
      }
      else
      {
        ++dword_140C2970C;
      }
    }
    result.QuadPart = (unsigned __int16)word_140D05000;
  }
  return result;
}
