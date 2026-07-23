/*
 * XREFs of sub_140223644 @ 0x140223644
 * Callers:
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     sub_14069BFDC @ 0x14069BFDC (sub_14069BFDC.c)
 * Callees:
 *     sub_1402237B8 @ 0x1402237B8 (sub_1402237B8.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_140223644(__int64 a1, __int64 a2, _BYTE *a3)
{
  char v6; // r14
  char v7; // r12
  _BYTE *v8; // r8
  unsigned __int8 CurrentIrql; // bp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v16; // rcx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v20; // r8
  int v21; // eax
  bool v22; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  v7 = 0;
  if ( (unsigned int)sub_1402237B8(*(_QWORD *)(a2 + 56)) == 1 )
  {
    if ( v8 )
      *v8 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql == 2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v13 = *(_QWORD *)(a1 + 200);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
      v13 = *(_QWORD *)(a1 + 192);
    }
    if ( v13 )
    {
      if ( a3 )
        *a3 = 1;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(a1 + 208) )
    {
      v6 = sub_14042A5E0(a2, v11, v12);
      if ( !v6 )
      {
LABEL_15:
        if ( CurrentIrql == 2 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v18 = KeGetCurrentIrql();
              if ( v18 <= 0xFu && LockHandle.OldIrql <= 0xFu && v18 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v20 = *((_QWORD *)CurrentPrcb + 4375);
                v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
                *(_DWORD *)(v20 + 20) &= v21;
                if ( v22 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
        }
        else
        {
          ExReleaseResourceLite((PERESOURCE)(a1 + 32));
          KeLeaveCriticalRegion();
        }
        if ( v7 )
        {
          *(_QWORD *)(a1 + 144) = 0LL;
          *(_QWORD *)(a1 + 160) = sub_140203950;
          *(_QWORD *)(a1 + 168) = a1;
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 144), DelayedWorkQueue);
        }
        return v6;
      }
    }
    else
    {
      v6 = 1;
    }
    *(_DWORD *)(a2 + 52) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 180));
    if ( CurrentIrql == 2 )
    {
      v16 = *(_QWORD **)(a1 + 24);
      if ( *v16 == a1 + 16 )
      {
        *(_QWORD *)a2 = a1 + 16;
        *(_QWORD *)(a2 + 8) = v16;
        *v16 = a2;
        *(_QWORD *)(a1 + 24) = a2;
LABEL_13:
        if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 176)) == 1 )
          v7 = 1;
        goto LABEL_15;
      }
    }
    else
    {
      v14 = *(_QWORD **)(a1 + 8);
      if ( *v14 == a1 )
      {
        *(_QWORD *)a2 = a1;
        *(_QWORD *)(a2 + 8) = v14;
        *v14 = a2;
        *(_QWORD *)(a1 + 8) = a2;
        goto LABEL_13;
      }
    }
    __fastfail(3u);
  }
  if ( a3 )
    *v8 = 1;
  return 0;
}
