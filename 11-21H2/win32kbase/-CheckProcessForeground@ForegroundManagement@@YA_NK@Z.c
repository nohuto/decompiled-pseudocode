/*
 * XREFs of ?CheckProcessForeground@ForegroundManagement@@YA_NK@Z @ 0x1C0142740
 * Callers:
 *     NtUserConfigureActivationObject @ 0x1C00BA470 (NtUserConfigureActivationObject.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0096270 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

bool __fastcall ForegroundManagement::CheckProcessForeground(ForegroundManagement *this)
{
  CActivationObjectManager *v1; // rdi
  int v2; // esi
  CPushLock *v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // edi

  v1 = qword_1C0296548;
  v2 = (int)this;
  v3 = (CActivationObjectManager *)((char *)qword_1C0296548 + 16);
  CPushLock::AcquireLockShared((CActivationObjectManager *)((char *)qword_1C0296548 + 16));
  v4 = *((_QWORD *)v1 + 4);
  if ( v4 )
    v5 = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v4 + 24)) & 0xFFFFFFFC;
  else
    v5 = 0;
  CPushLock::ReleaseLock(v3);
  return v2 == v5;
}
