/*
 * XREFs of RtlRaiseStatus @ 0x1402D37A0
 * Callers:
 *     FsRtlInitializeLargeMcb @ 0x140202160 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1402021D0 (FsRtlInitializeBaseMcbEx.c)
 *     FsRtlAreNamesEqual @ 0x140212760 (FsRtlAreNamesEqual.c)
 *     sub_1402175B8 @ 0x1402175B8 (sub_1402175B8.c)
 *     FsRtlIsNameInExpression @ 0x140219D90 (FsRtlIsNameInExpression.c)
 *     FsRtlIsNameInUnUpcasedExpression @ 0x140219E10 (FsRtlIsNameInUnUpcasedExpression.c)
 *     sub_140219EC0 @ 0x140219EC0 (sub_140219EC0.c)
 *     FsRtlPrivateLock @ 0x14021E2B0 (FsRtlPrivateLock.c)
 *     sub_14021F468 @ 0x14021F468 (sub_14021F468.c)
 *     sub_14022C788 @ 0x14022C788 (sub_14022C788.c)
 *     PsChargePoolQuota @ 0x1402331B0 (PsChargePoolQuota.c)
 *     CcZeroDataOnDisk @ 0x1402458E0 (CcZeroDataOnDisk.c)
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     sub_14024CCD0 @ 0x14024CCD0 (sub_14024CCD0.c)
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     sub_1402581E0 @ 0x1402581E0 (sub_1402581E0.c)
 *     sub_14025DAA8 @ 0x14025DAA8 (sub_14025DAA8.c)
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 *     sub_1402858A0 @ 0x1402858A0 (sub_1402858A0.c)
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 *     sub_140295210 @ 0x140295210 (sub_140295210.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     sub_140296FC0 @ 0x140296FC0 (sub_140296FC0.c)
 *     sub_140297430 @ 0x140297430 (sub_140297430.c)
 *     sub_14029A86C @ 0x14029A86C (sub_14029A86C.c)
 *     CcZeroData @ 0x14029BD20 (CcZeroData.c)
 *     sub_14029C34C @ 0x14029C34C (sub_14029C34C.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1402EE3D8 @ 0x1402EE3D8 (sub_1402EE3D8.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     sub_1403198A0 @ 0x1403198A0 (sub_1403198A0.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     sub_140328510 @ 0x140328510 (sub_140328510.c)
 *     CcCopyReadEx @ 0x14032A8C0 (CcCopyReadEx.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 *     sub_140349670 @ 0x140349670 (sub_140349670.c)
 *     sub_140349710 @ 0x140349710 (sub_140349710.c)
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_1403A6AE0 @ 0x1403A6AE0 (sub_1403A6AE0.c)
 *     sub_1404183E0 @ 0x1404183E0 (sub_1404183E0.c)
 *     sub_14053B22C @ 0x14053B22C (sub_14053B22C.c)
 *     FsRtlAllocatePool @ 0x140542070 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1405420A0 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1405420D0 (FsRtlAllocatePoolWithQuotaTag.c)
 *     FsRtlAllocatePoolWithTag @ 0x140542100 (FsRtlAllocatePoolWithTag.c)
 *     sub_140542FC4 @ 0x140542FC4 (sub_140542FC4.c)
 *     sub_140609000 @ 0x140609000 (sub_140609000.c)
 *     _purecall @ 0x14063F630 (_purecall.c)
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 *     sub_140713980 @ 0x140713980 (sub_140713980.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14074CD70 (IoCreateStreamFileObjectEx2.c)
 *     sub_1407563A0 @ 0x1407563A0 (sub_1407563A0.c)
 *     RtlRunOnceExecuteOnce @ 0x14075BD80 (RtlRunOnceExecuteOnce.c)
 *     sub_1407ADB90 @ 0x1407ADB90 (sub_1407ADB90.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     sub_1407BDF60 @ 0x1407BDF60 (sub_1407BDF60.c)
 *     sub_140855FA0 @ 0x140855FA0 (sub_140855FA0.c)
 *     sub_1408639BC @ 0x1408639BC (sub_1408639BC.c)
 *     sub_140864500 @ 0x140864500 (sub_140864500.c)
 *     sub_140865288 @ 0x140865288 (sub_140865288.c)
 *     sub_140935320 @ 0x140935320 (sub_140935320.c)
 *     sub_140935790 @ 0x140935790 (sub_140935790.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 *     sub_140985FBC @ 0x140985FBC (sub_140985FBC.c)
 *     ExRaiseAccessViolation @ 0x140A021F0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140A4E4B0 @ 0x140A4E4B0 (sub_140A4E4B0.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140A6E9A4 @ 0x140A6E9A4 (sub_140A6E9A4.c)
 *     sub_140A7EF40 @ 0x140A7EF40 (sub_140A7EF40.c)
 *     sub_140A8FF70 @ 0x140A8FF70 (sub_140A8FF70.c)
 *     sub_140A90090 @ 0x140A90090 (sub_140A90090.c)
 *     sub_140A901D0 @ 0x140A901D0 (sub_140A901D0.c)
 *     sub_140A90380 @ 0x140A90380 (sub_140A90380.c)
 *     sub_140A90450 @ 0x140A90450 (sub_140A90450.c)
 *     sub_140A90530 @ 0x140A90530 (sub_140A90530.c)
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 *     sub_140AA00D0 @ 0x140AA00D0 (sub_140AA00D0.c)
 *     sub_140AA02D0 @ 0x140AA02D0 (sub_140AA02D0.c)
 *     sub_140AA03C0 @ 0x140AA03C0 (sub_140AA03C0.c)
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 *     sub_140B1D550 @ 0x140B1D550 (sub_140B1D550.c)
 *     sub_140B24410 @ 0x140B24410 (sub_140B24410.c)
 *     sub_140B2B698 @ 0x140B2B698 (sub_140B2B698.c)
 *     sub_140B2DEA8 @ 0x140B2DEA8 (sub_140B2DEA8.c)
 *     sub_140B4BE3C @ 0x140B4BE3C (sub_140B4BE3C.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_14042A160 @ 0x14042A160 (sub_14042A160.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __cdecl __noreturn RtlRaiseStatus(NTSTATUS Status)
{
  __int64 v2; // r8
  char v3; // bl
  NTSTATUS v4; // eax
  _DWORD v5[2]; // [rsp+20h] [rbp-578h] BYREF
  __int64 v6; // [rsp+28h] [rbp-570h]
  __int64 v7; // [rsp+30h] [rbp-568h]
  int v8; // [rsp+38h] [rbp-560h]
  _BYTE v9[124]; // [rsp+3Ch] [rbp-55Ch] BYREF
  _BYTE v10[1240]; // [rsp+C0h] [rbp-4D8h] BYREF

  memset(v9, 0, sizeof(v9));
  v6 = 0LL;
  v8 = 0;
  v7 = -1LL;
  v5[0] = Status;
  v3 = 1;
  v5[1] = 129;
  do
  {
    LOBYTE(v2) = v3;
    v4 = sub_14042A160(v5, v10, v2);
    --v3;
  }
  while ( !v3 );
  RtlRaiseStatus(v4);
}
