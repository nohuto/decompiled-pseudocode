/*
 * XREFs of ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x1C0017EE4
 * Callers:
 *     ?Release@CCompositionFrame@@UEAAJXZ @ 0x1C0017DB0 (-Release@CCompositionFrame@@UEAAJXZ.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0013814 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C0084E08 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 */

void __fastcall FlipManagerDwmProcessFlipManagerSignal(struct _LIST_ENTRY *a1, unsigned __int64 a2)
{
  struct CFlipManagerSignal *v4; // rsi
  __int64 v5; // rdi

  while ( a1->Flink != a1 )
  {
    v4 = (struct CFlipManagerSignal *)((__int64)&a1->Flink[-1].Blink & -(__int64)(a1->Flink != 0LL));
    v5 = *((_QWORD *)v4 + 5);
    *((_QWORD *)v4 + 5) = 0LL;
    if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v5 + 40)) >= 0 )
    {
      CFlipManager::ProcessSignal((CFlipManager *)(v5 + 32), v4, a2);
      CPushLock::ReleaseLock((CPushLock *)(v5 + 40));
    }
    ObfDereferenceObject((PVOID)v5);
  }
}
