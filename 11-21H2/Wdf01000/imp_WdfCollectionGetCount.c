/*
 * XREFs of imp_WdfCollectionGetCount @ 0x1C00020B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006D914 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006DC28 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall imp_WdfCollectionGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Collection)
{
  __int64 Offset; // r8
  FxCollection *v3; // rcx
  unsigned __int8 v4; // al
  unsigned __int8 v5; // r8
  unsigned int m_Count; // ebx
  FxVerifierLock *v8; // rcx
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF
  FxCollection *pCollection; // [rsp+50h] [rbp+18h] BYREF

  LOWORD(Offset) = 0;
  pCollection = 0LL;
  irql = 0;
  if ( !Collection )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x100EuLL);
  v3 = (FxCollection *)(~Collection & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Collection & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxCollection *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4110 )
  {
    pCollection = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pCollection, (void *)Collection, 0x100Eu, Offset);
    v3 = pCollection;
  }
  if ( SLOBYTE(v3->m_ObjectFlags) < 0 && *(_QWORD *)&v3[-1].m_NPLock.m_DbgFlagIsInitialized )
  {
    FxVerifierLock::Lock(*(FxVerifierLock **)&v3[-1].m_NPLock.m_DbgFlagIsInitialized, &irql, Offset);
    v4 = irql;
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&v3->m_NPLock.m_Lock);
  }
  m_Count = pCollection->m_Count;
  if ( SLOBYTE(pCollection->m_ObjectFlags) < 0
    && (v8 = *(FxVerifierLock **)&pCollection[-1].m_NPLock.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v8, v4, v5);
  }
  else
  {
    KeReleaseSpinLock(&pCollection->m_NPLock.m_Lock, v4);
  }
  return m_Count;
}
