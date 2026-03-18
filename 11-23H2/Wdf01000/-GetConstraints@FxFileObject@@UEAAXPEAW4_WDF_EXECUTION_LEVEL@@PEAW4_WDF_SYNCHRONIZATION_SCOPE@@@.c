/*
 * XREFs of ?GetConstraints@FxFileObject@@UEAAXPEAW4_WDF_EXECUTION_LEVEL@@PEAW4_WDF_SYNCHRONIZATION_SCOPE@@@Z @ 0x1C003F480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxFileObject::GetConstraints(
        FxFileObject *this,
        _WDF_EXECUTION_LEVEL *ExecutionLevel,
        _WDF_SYNCHRONIZATION_SCOPE *SynchronizationScope)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this[-1].m_PkgContext + 82);
  if ( ExecutionLevel )
    *ExecutionLevel = *(_WDF_EXECUTION_LEVEL *)(v3 + 164);
  if ( SynchronizationScope )
    *SynchronizationScope = *(_WDF_SYNCHRONIZATION_SCOPE *)(v3 + 168);
}
