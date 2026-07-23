/*
 * XREFs of sub_140458184 @ 0x140458184
 * Callers:
 *     sub_140390C08 @ 0x140390C08 (sub_140390C08.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140458E94 @ 0x140458E94 (sub_140458E94.c)
 *     sub_140458FD4 @ 0x140458FD4 (sub_140458FD4.c)
 *     sub_140513F84 @ 0x140513F84 (sub_140513F84.c)
 */

__int64 __fastcall sub_140458184(__int64 a1, __int64 a2, __int64 a3, __int16 a4, unsigned int *a5, char a6)
{
  __int64 result; // rax
  bool v11; // r15
  char v12; // si
  __int64 v13; // rcx
  unsigned int v14; // r14d
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+40h]

  result = 0LL;
  v21 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *a5 )
  {
    v11 = !a1 || *(_BYTE *)(a1 + 433);
    v23 = *(_QWORD *)(a3 + 56);
    if ( a1 && *(_BYTE *)(a1 + 434) )
    {
      v12 = a6;
      sub_140458FD4(a1, a2, a3, a4, (__int64)a5, a6, (__int64)&v21);
    }
    else
    {
      v12 = a6;
      sub_140458E94(a1, a2, a3, a4, (__int64)a5, a6, (__int64)&v21);
    }
    v14 = *a5;
    if ( !v11 )
    {
      if ( !v12 && *(_BYTE *)(a1 + 436) )
        sub_140513F84(v13, v23, a4 & 0xFFF, v14);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 152) + 120LL), &LockHandle);
      sub_14042A5E0(*(_QWORD *)(a1 + 424), a2);
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
            v18 = *((_QWORD *)CurrentPrcb + 4375);
            v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= v19;
            if ( v20 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    return v21;
  }
  return result;
}
