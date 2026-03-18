/*
 * XREFs of ?GetConstraints@FxIoQueue@@UEAAXPEAW4_WDF_EXECUTION_LEVEL@@PEAW4_WDF_SYNCHRONIZATION_SCOPE@@@Z @ 0x1C00641A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxIoQueue::GetConstraints(
        FxIoQueue *this,
        _WDF_EXECUTION_LEVEL *ExecutionLevel,
        _WDF_SYNCHRONIZATION_SCOPE *SynchronizationScope)
{
  if ( ExecutionLevel )
    *ExecutionLevel = (_WDF_EXECUTION_LEVEL)this->m_IoDeviceControl.Method;
  if ( SynchronizationScope )
    *SynchronizationScope = SHIDWORD(this->m_IoDeviceControl.Method);
}
