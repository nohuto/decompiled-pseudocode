/*
 * XREFs of sub_1405B2734 @ 0x1405B2734
 * Callers:
 *     sub_1403D9D30 @ 0x1403D9D30 (sub_1403D9D30.c)
 * Callees:
 *     sub_140267A5C @ 0x140267A5C (sub_140267A5C.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405B2734(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // r11
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // r9
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  __int64 v16; // r8
  int v17; // eax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 24512LL * (unsigned __int16)word_140D05000;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v4 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( v1 < v2 + v1 )
  {
    v5 = v1 + 22944;
    v6 = (v2 - 1) / 0x5FC0uLL + 1;
    do
    {
      if ( *(_BYTE *)(v5 + 21) )
      {
        v7 = *(_QWORD *)v5;
        if ( *(_QWORD *)v5 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 24), &LockHandle);
          sub_140267A5C(v7, 9);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v9 = KeGetCurrentIrql();
              if ( v9 <= 0xFu && LockHandle.OldIrql <= 0xFu && v9 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v11 = *((_QWORD *)CurrentPrcb + 4375);
                v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
                *(_DWORD *)(v11 + 20) &= v12;
                if ( v13 )
                  sub_140418E4C((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
        }
      }
      v5 += 24512LL;
      --v6;
    }
    while ( v6 );
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = *((_QWORD *)v15 + 4375);
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v13 )
          sub_140418E4C((__int64)v15);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
