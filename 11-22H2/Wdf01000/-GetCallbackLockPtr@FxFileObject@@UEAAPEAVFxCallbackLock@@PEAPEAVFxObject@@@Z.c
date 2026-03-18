/*
 * XREFs of ?GetCallbackLockPtr@FxFileObject@@UEAAPEAVFxCallbackLock@@PEAPEAVFxObject@@@Z @ 0x1C003F450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FxCallbackLock *__fastcall FxFileObject::GetCallbackLockPtr(FxFileObject *this, FxObject **LockObject)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this[-1].m_PkgContext + 82);
  if ( LockObject )
    *LockObject = *(FxObject **)(v2 + 184);
  return *(FxCallbackLock **)(v2 + 176);
}
