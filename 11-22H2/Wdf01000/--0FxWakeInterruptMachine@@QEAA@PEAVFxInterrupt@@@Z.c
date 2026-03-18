/*
 * XREFs of ??0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z @ 0x1C008218C
 * Callers:
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C007EAD8 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x1C008120C (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 */

void __fastcall FxWakeInterruptMachine::FxWakeInterruptMachine(FxWakeInterruptMachine *this, FxInterrupt *Interrupt)
{
  __int64 m_HistoryIndex; // r8
  unsigned __int8 m_CurrentState; // r9

  FxThreadedEventQueue::FxThreadedEventQueue(this, (unsigned __int8)Interrupt);
  this->m_IsrEvent.m_DbgFlagIsInitialized = 0;
  this->m_CurrentState = 2;
  *(_OWORD *)this->m_Queue = 0LL;
  *(_OWORD *)&this->m_Queue[4] = 0LL;
  this->m_States.S = 0LL;
  m_HistoryIndex = this->m_HistoryIndex;
  m_CurrentState = this->m_CurrentState;
  this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
  this->m_States.History[m_HistoryIndex] = m_CurrentState;
  this->m_Interrupt = Interrupt;
}
