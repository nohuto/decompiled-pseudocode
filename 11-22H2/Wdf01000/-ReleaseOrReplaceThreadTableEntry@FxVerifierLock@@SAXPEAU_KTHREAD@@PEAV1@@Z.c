/*
 * XREFs of ?ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z @ 0x1C0046E80
 * Callers:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0046FB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 */

void __fastcall FxVerifierLock::ReleaseOrReplaceThreadTableEntry(unsigned __int64 curThread, FxVerifierLock *pLock)
{
  _KTHREAD *Thread; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _LIST_ENTRY *Flink; // r8
  __int64 v7; // rcx
  _LIST_ENTRY *Blink; // rax
  FxVerifierLock *PerThreadPassiveLockList; // rdx
  _QWORD *p_Flink; // rdx
  _QWORD *v11; // rax

  Thread = pLock->m_ThreadTableEntry.Thread;
  m_Globals = pLock->m_Globals;
  if ( Thread )
  {
    if ( Thread != (_KTHREAD *)curThread )
    {
      WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0x18u, WPP_FxVerifierLock_cpp_Traceguids, pLock, (const void *)curThread);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    Flink = pLock->m_ThreadTableEntry.HashChain.Flink;
    v7 = (__int64)&m_Globals->ThreadTable[((unsigned __int8)(curThread >> 4) ^ (unsigned __int8)(curThread >> 20)) & 0x3F];
    if ( Flink->Blink == &pLock->m_ThreadTableEntry.HashChain )
    {
      Blink = pLock->m_ThreadTableEntry.HashChain.Blink;
      if ( Blink->Flink == &pLock->m_ThreadTableEntry.HashChain )
      {
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        PerThreadPassiveLockList = pLock->m_ThreadTableEntry.PerThreadPassiveLockList;
        if ( !PerThreadPassiveLockList )
        {
          PerThreadPassiveLockList = pLock->m_ThreadTableEntry.PerThreadDispatchLockList;
          if ( !PerThreadPassiveLockList )
          {
            pLock->m_ThreadTableEntry.Thread = 0LL;
            pLock->m_ThreadTableEntry.PerThreadPassiveLockList = 0LL;
            pLock->m_ThreadTableEntry.PerThreadDispatchLockList = 0LL;
            return;
          }
        }
        PerThreadPassiveLockList->m_ThreadTableEntry.Thread = pLock->m_ThreadTableEntry.Thread;
        PerThreadPassiveLockList->m_ThreadTableEntry.PerThreadPassiveLockList = pLock->m_ThreadTableEntry.PerThreadPassiveLockList;
        PerThreadPassiveLockList->m_ThreadTableEntry.PerThreadDispatchLockList = pLock->m_ThreadTableEntry.PerThreadDispatchLockList;
        p_Flink = &PerThreadPassiveLockList->m_ThreadTableEntry.HashChain.Flink;
        v11 = *(_QWORD **)(v7 + 8);
        if ( *v11 == v7 )
        {
          *p_Flink = v7;
          p_Flink[1] = v11;
          *v11 = p_Flink;
          *(_QWORD *)(v7 + 8) = p_Flink;
          return;
        }
      }
    }
    __fastfail(3u);
  }
}
