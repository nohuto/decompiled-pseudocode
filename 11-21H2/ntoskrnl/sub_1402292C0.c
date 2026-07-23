/*
 * XREFs of sub_1402292C0 @ 0x1402292C0
 * Callers:
 *     sub_140229100 @ 0x140229100 (sub_140229100.c)
 *     sub_1402C1F50 @ 0x1402C1F50 (sub_1402C1F50.c)
 *     sub_140332A80 @ 0x140332A80 (sub_140332A80.c)
 *     sub_1403C2C58 @ 0x1403C2C58 (sub_1403C2C58.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14022948C @ 0x14022948C (sub_14022948C.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402746C0 @ 0x1402746C0 (sub_1402746C0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1402292C0(__int64 a1, volatile __int64 *a2, __int64 a3, int a4)
{
  volatile __int64 *v4; // rdi
  int v8; // esi
  __int64 v9; // rcx
  unsigned __int64 OldIrql; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // eax
  bool v19; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
  {
    v8 = 1;
    if ( !a4 )
      KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  }
  else
  {
    v8 = 0;
  }
  v9 = 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0
    && (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v4 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL) + 592LL);
  }
  if ( v4 == (volatile __int64 *)0xFFFFF6FB7DBEDF68LL )
  {
    sub_1402746C0(0xFFFFF6FB7DBEDF68uLL, a3);
    goto LABEL_13;
  }
  if ( v9 )
  {
    if ( (a3 & 1) != 0 )
      goto LABEL_13;
    if ( (unsigned int)sub_140317A80(v4) && (unsigned int)sub_140229550(v14, v13) )
    {
LABEL_34:
      *v4 = a3;
      sub_1402294F0(v4, a3);
      goto LABEL_13;
    }
LABEL_25:
    *v4 = a3;
    goto LABEL_13;
  }
  if ( !(unsigned int)sub_14022948C(a1) )
  {
    if ( (a3 & 1) != 0 )
    {
      sub_14033DBC0(v4, a3);
      goto LABEL_13;
    }
    if ( (unsigned int)sub_140317A80(v4) && (unsigned int)sub_140229550(v12, v11) )
      goto LABEL_34;
    goto LABEL_25;
  }
  if ( (dword_140D06880 & 0x4000000) != 0 )
    _mm_lfence();
  _InterlockedExchange64(v4, a3);
  if ( (unsigned int)sub_140317A80(v4) )
    sub_1402294F0(v4, a3);
  v4 = 0LL;
LABEL_13:
  if ( v8 && !a4 )
  {
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
          v17 = *((_QWORD *)CurrentPrcb + 4375);
          v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v18;
          if ( v19 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( v4 )
    sub_14020D8D0(a1, (unsigned __int64)v4);
}
