/*
 * XREFs of ?GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z @ 0x1C0046B2C
 * Callers:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0046CA0 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0046FB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 */

_LIST_ENTRY **__fastcall FxVerifierLock::GetThreadTableEntry(
        _KTHREAD *curThread,
        FxVerifierLock *pLock,
        unsigned __int8 LookupOnly)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _LIST_ENTRY *ThreadTable; // r9
  _LIST_ENTRY *v7; // rax
  _LIST_ENTRY *i; // rcx
  FxVerifierThreadTableEntry *p_m_ThreadTableEntry; // r8
  _LIST_ENTRY *p_HashChain; // rcx
  _LIST_ENTRY *Blink; // rdx

  m_Globals = pLock->m_Globals;
  ThreadTable = pLock->m_Globals->ThreadTable;
  if ( !ThreadTable )
    return 0LL;
  v7 = &ThreadTable[((unsigned __int8)((unsigned __int64)curThread >> 4) ^ (unsigned __int8)((unsigned int)((unsigned __int64)curThread >> 4) >> 16)) & 0x3F];
  for ( i = v7->Flink; i != v7; i = i->Flink )
  {
    if ( (_KTHREAD *)i[-2].Blink == curThread )
      return &i[-2].Blink;
  }
  if ( LookupOnly )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x14u, WPP_FxVerifierLock_cpp_Traceguids, curThread);
    FxVerifierDbgBreakPoint(m_Globals);
    return 0LL;
  }
  pLock->m_ThreadTableEntry.PerThreadPassiveLockList = 0LL;
  p_m_ThreadTableEntry = &pLock->m_ThreadTableEntry;
  pLock->m_ThreadTableEntry.PerThreadDispatchLockList = 0LL;
  p_HashChain = &pLock->m_ThreadTableEntry.HashChain;
  pLock->m_ThreadTableEntry.Thread = curThread;
  Blink = v7->Blink;
  if ( Blink->Flink != v7 )
    __fastfail(3u);
  p_HashChain->Flink = v7;
  p_HashChain->Blink = Blink;
  Blink->Flink = p_HashChain;
  v7->Blink = p_HashChain;
  return (_LIST_ENTRY **)p_m_ThreadTableEntry;
}
