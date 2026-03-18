/*
 * XREFs of ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x1C01E4F14
 * Callers:
 *     NtUserAddVisualIdentifier @ 0x1C0142EE0 (NtUserAddVisualIdentifier.c)
 *     NtUserRemoveVisualIdentifier @ 0x1C014A2C0 (NtUserRemoveVisualIdentifier.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00A73C0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?GetInstance@CDesktopInputSink@@CAAEAV1@XZ @ 0x1C00B72C0 (-GetInstance@CDesktopInputSink@@CAAEAV1@XZ.c)
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
