/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1402A3DC0
 * Callers:
 *     FsRtlUninitializeOplock @ 0x14023A260 (FsRtlUninitializeOplock.c)
 *     sub_14024CCD0 @ 0x14024CCD0 (sub_14024CCD0.c)
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     sub_1402A6980 @ 0x1402A6980 (sub_1402A6980.c)
 *     sub_1403857EC @ 0x1403857EC (sub_1403857EC.c)
 *     sub_14039F3B0 @ 0x14039F3B0 (sub_14039F3B0.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x140459FA0 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlOplockBreakToNoneEx @ 0x140542200 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x1405423C0 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     sub_140542458 @ 0x140542458 (sub_140542458.c)
 *     sub_140606870 @ 0x140606870 (sub_140606870.c)
 *     sub_140611D10 @ 0x140611D10 (sub_140611D10.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x140658160 (FsRtlCheckOplockForFsFilterCallback.c)
 *     sub_14065D410 @ 0x14065D410 (sub_14065D410.c)
 *     sub_14065D4F8 @ 0x14065D4F8 (sub_14065D4F8.c)
 *     sub_14067F34C @ 0x14067F34C (sub_14067F34C.c)
 *     sub_14067F520 @ 0x14067F520 (sub_14067F520.c)
 *     sub_14069FD64 @ 0x14069FD64 (sub_14069FD64.c)
 *     sub_1406A0094 @ 0x1406A0094 (sub_1406A0094.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406AA510 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406AAE50 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x1406AB5E0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406AB670 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406ABE00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlOplockBreakH2 @ 0x1406D8C10 (FsRtlOplockBreakH2.c)
 *     sub_1406E26C4 @ 0x1406E26C4 (sub_1406E26C4.c)
 *     sub_1406E2798 @ 0x1406E2798 (sub_1406E2798.c)
 *     sub_1406E7AC4 @ 0x1406E7AC4 (sub_1406E7AC4.c)
 *     sub_1406EA9C0 @ 0x1406EA9C0 (sub_1406EA9C0.c)
 *     sub_14071C25C @ 0x14071C25C (sub_14071C25C.c)
 *     sub_14071C288 @ 0x14071C288 (sub_14071C288.c)
 *     sub_14071C610 @ 0x14071C610 (sub_14071C610.c)
 *     sub_14071EDD4 @ 0x14071EDD4 (sub_14071EDD4.c)
 *     sub_140741B7C @ 0x140741B7C (sub_140741B7C.c)
 *     CallbackRoutine @ 0x140741CF0 (CallbackRoutine.c)
 *     sub_140742190 @ 0x140742190 (sub_140742190.c)
 *     sub_140742300 @ 0x140742300 (sub_140742300.c)
 *     sub_1407424F0 @ 0x1407424F0 (sub_1407424F0.c)
 *     sub_140742A44 @ 0x140742A44 (sub_140742A44.c)
 *     sub_140742E3C @ 0x140742E3C (sub_140742E3C.c)
 *     sub_14079FD44 @ 0x14079FD44 (sub_14079FD44.c)
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140860E80 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     sub_1409193DC @ 0x1409193DC (sub_1409193DC.c)
 *     sub_1409194E0 @ 0x1409194E0 (sub_1409194E0.c)
 *     FsRtlCheckUpperOplock @ 0x14092E2F0 (FsRtlCheckUpperOplock.c)
 *     sub_14092E8CC @ 0x14092E8CC (sub_14092E8CC.c)
 *     sub_14092EA08 @ 0x14092EA08 (sub_14092EA08.c)
 *     FsRtlNotifyCleanupAll @ 0x14092FFC0 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x140961810 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1409CD0D0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1409CD170 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1409CD240 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     sub_1409FCB38 @ 0x1409FCB38 (sub_1409FCB38.c)
 *     sub_1409FD4A0 @ 0x1409FD4A0 (sub_1409FD4A0.c)
 *     sub_1409FDC88 @ 0x1409FDC88 (sub_1409FDC88.c)
 *     sub_1409FE284 @ 0x1409FE284 (sub_1409FE284.c)
 *     sub_1409FF390 @ 0x1409FF390 (sub_1409FF390.c)
 *     sub_1409FF520 @ 0x1409FF520 (sub_1409FF520.c)
 *     sub_1409FF6B0 @ 0x1409FF6B0 (sub_1409FF6B0.c)
 *     sub_1409FFD10 @ 0x1409FFD10 (sub_1409FFD10.c)
 *     sub_140A001D0 @ 0x140A001D0 (sub_140A001D0.c)
 *     NtGetEnvironmentVariableEx @ 0x140A003D0 (NtGetEnvironmentVariableEx.c)
 *     sub_140A004F0 @ 0x140A004F0 (sub_140A004F0.c)
 *     sub_140A00770 @ 0x140A00770 (sub_140A00770.c)
 *     sub_140A00A80 @ 0x140A00A80 (sub_140A00A80.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x140A00D00 (NtQueryEnvironmentVariableInfoEx.c)
 *     sub_140A00DB0 @ 0x140A00DB0 (sub_140A00DB0.c)
 *     sub_140A010D0 @ 0x140A010D0 (sub_140A010D0.c)
 *     sub_140A012E0 @ 0x140A012E0 (sub_140A012E0.c)
 *     sub_140A014F0 @ 0x140A014F0 (sub_140A014F0.c)
 *     sub_140A01700 @ 0x140A01700 (sub_140A01700.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v2; // rbx
  unsigned int v4; // eax
  __int64 v5; // rcx
  int v6; // eax

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  _disable();
  v4 = *((unsigned __int8 *)CurrentThread + 792);
  if ( *((_BYTE *)CurrentThread + 792) || (v4 = sub_14029F6A8((__int64)FastMutex, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v5, v4);
    *((_BYTE *)CurrentThread + 792) = v4 & ~(1 << v5);
    _enable();
    v2 = (__int64)CurrentThread + 96 * v5 + 1696;
    if ( (unsigned __int64)FastMutex - qword_140C50630 < 0x8000000000LL )
      v6 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v6 = -1;
    *(_DWORD *)(v2 + 8) = v6;
    *(_QWORD *)v2 = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    sub_14029EF4C((__int64)FastMutex, v2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  FastMutex->Owner = CurrentThread;
}
