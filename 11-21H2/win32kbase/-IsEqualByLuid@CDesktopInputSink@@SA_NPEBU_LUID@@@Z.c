/*
 * XREFs of ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x1C01E4934
 * Callers:
 *     NtUserAddVisualIdentifier @ 0x1C0156E70 (NtUserAddVisualIdentifier.c)
 *     NtUserRemoveVisualIdentifier @ 0x1C0160490 (NtUserRemoveVisualIdentifier.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0096270 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?GetInstance@CDesktopInputSink@@CAAEAV1@XZ @ 0x1C009ED24 (-GetInstance@CDesktopInputSink@@CAAEAV1@XZ.c)
 */

bool __fastcall CDesktopInputSink::IsEqualByLuid(const struct _LUID *a1)
{
  CPushLock *Instance; // rdi
  __int64 v3; // rbx

  Instance = CDesktopInputSink::GetInstance();
  CPushLock::AcquireLockShared(Instance);
  v3 = *((_QWORD *)CDesktopInputSink::GetInstance() + 3);
  CPushLock::ReleaseLock(Instance);
  return v3 == *a1;
}
