/*
 * XREFs of ExpBoostIoAfterAcquire @ 0x14031ACD0
 * Callers:
 *     ExpAcquireResourceExclusiveLite @ 0x14023B4B0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14023DDA0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402632C0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C82F0 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14022FF50 (PsBoostThreadIoEx.c)
 *     ExpFindCurrentThread @ 0x1402600E0 (ExpFindCurrentThread.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     PsGetBaseIoPriorityThread @ 0x1402A7AA0 (PsGetBaseIoPriorityThread.c)
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14031AEEC (KeAbProcessEffectiveIoPriorityChange.c)
 *     IoBoostThreadIoPriority @ 0x14031B140 (IoBoostThreadIoPriority.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpBoostIoAfterAcquire(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v4; // ax
  int v7; // r8d
  __int64 v8; // r9
  int v9; // ebx
  unsigned __int8 CurrentIrql; // dl
  signed __int64 *v11; // rdx
  _QWORD *CurrentThread; // rax
  _QWORD *v13; // rdi
  unsigned __int64 v14; // rdi
  _DWORD *SchedulerAssist; // r11
  unsigned __int8 v16; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned __int64 ExtensionTable; // rax
  __int128 v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+40h] [rbp-28h]

  v23 = 0LL;
  v4 = *(_WORD *)(a1 + 26);
  v22 = 0LL;
  if ( (v4 & 8) == 0 )
  {
    v7 = 0;
    LODWORD(v8) = 4;
    if ( (v4 & 4) != 0 && (int)PsGetBaseIoPriorityThread(a2) < 2 )
      v7 = v8;
    v9 = v7 | 2;
    if ( (*(_BYTE *)(a1 + 26) & 2) == 0 )
      v9 = v7;
    if ( v9 )
    {
      *((_QWORD *)&v22 + 1) = a1 + 96;
      *(_QWORD *)&v22 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql != 2 )
          v8 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v8;
      }
      LOBYTE(v23) = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v22, a1 + 96);
      }
      else
      {
        v11 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)(a1 + 96), (__int64)&v22);
        if ( v11 )
          KxWaitForLockOwnerShip((signed __int64)&v22, v11);
      }
      CurrentThread = ExpFindCurrentThread(a1, a2, (__int64)&v22, 0, 1, a3);
      v13 = CurrentThread;
      if ( (v9 & 4) != 0 )
      {
        if ( (CurrentThread[1] & 1) != 0 )
        {
          v9 &= ~4u;
        }
        else
        {
          PsBoostThreadIoEx(a2, 0, 0, 0LL);
          *((_DWORD *)v13 + 2) |= 1u;
        }
      }
      if ( (v9 & 2) != 0 )
      {
        if ( (v13[1] & 4) != 0 )
        {
          v9 &= ~2u;
        }
        else
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(a2 + 1444)) == 1 )
            KeAbProcessEffectiveIoPriorityChange(a2, 0LL);
          *((_DWORD *)v13 + 2) |= 4u;
        }
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v22);
      v14 = (unsigned __int8)v23;
      if ( (_DWORD)KiIrqlFlags )
      {
        v16 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v23 <= 0xFu && v16 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v14);
      if ( v9 )
      {
        if ( (v9 & 4) != 0 )
          IoBoostThreadIoPriority(a2, 2LL, 0LL);
        if ( (v9 & 2) != 0 && *(_DWORD *)(a2 + 1448) )
        {
          ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
          if ( ExtensionTable )
          {
            (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(a2);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
          }
        }
      }
    }
  }
}
