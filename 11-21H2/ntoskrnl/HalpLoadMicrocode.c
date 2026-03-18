/*
 * XREFs of HalpLoadMicrocode @ 0x14090A1A0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     HalpMcUpdateUnlock @ 0x14038D400 (HalpMcUpdateUnlock.c)
 *     HalpMcUpdateLock @ 0x1403989A4 (HalpMcUpdateLock.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403B37B0 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpMcGetLoadConfiguration @ 0x14051EF00 (HalpMcGetLoadConfiguration.c)
 *     HalpMcParallelLoadSupported @ 0x14051F05C (HalpMcParallelLoadSupported.c)
 *     HalpMcPatchConfiguration @ 0x14051F094 (HalpMcPatchConfiguration.c)
 *     HalpMcResolveMicrocodeOperation @ 0x14051F13C (HalpMcResolveMicrocodeOperation.c)
 *     HalpSetMicrocodeSelfhostFlag @ 0x14051F18C (HalpSetMicrocodeSelfhostFlag.c)
 *     HalpMcUpdateInitialize @ 0x14082481C (HalpMcUpdateInitialize.c)
 *     HalpMcExportAllData @ 0x1408249CC (HalpMcExportAllData.c)
 *     HalpLoadMicrocodeSerialized @ 0x14090A314 (HalpLoadMicrocodeSerialized.c)
 *     HalpUnloadMicrocode @ 0x14090A3F0 (HalpUnloadMicrocode.c)
 *     PoDisableSleepStates @ 0x14098C600 (PoDisableSleepStates.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpLoadMicrocode(_QWORD *a1)
{
  bool IsMicrosoftCompatibleHvLoaded; // al
  char v3; // bp
  bool v4; // si
  int updated; // ebx
  bool Supported; // di
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rsi
  __int64 v10; // r8
  bool v12; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0;
  v14 = 0LL;
  v12 = 0;
  IsMicrosoftCompatibleHvLoaded = HalpIsMicrosoftCompatibleHvLoaded();
  v3 = HalpMcUpdateSelfHosting;
  v4 = IsMicrosoftCompatibleHvLoaded;
  updated = HalpMcUpdateInitialize(0LL, a1);
  if ( updated < 0 )
    goto LABEL_11;
  HalpMcResolveMicrocodeOperation((__int64)a1);
  updated = HalpMcPatchConfiguration();
  if ( updated < 0 )
    goto LABEL_11;
  HalpMcGetLoadConfiguration(&v12);
  Supported = v12;
  if ( v12 )
  {
    Supported = HalpMcParallelLoadSupported();
    v12 = Supported;
  }
  HalpSetMicrocodeSelfhostFlag(v3);
  if ( v4 && qword_140C4C638 )
  {
    v9 = HalpMcExportAllData(&v13, 64LL);
    if ( v9 )
    {
      LOBYTE(v10) = Supported;
      updated = ((__int64 (__fastcall *)(void *, _QWORD, __int64))qword_140C4C638)(v9, v13, v10);
      ExFreePoolWithTag(v9, 0x636C6148u);
    }
    else
    {
      updated = -1073741801;
    }
    HalpUnloadMicrocode();
    if ( updated < 0 )
      goto LABEL_11;
    goto LABEL_18;
  }
  updated = HalpMcUpdateLock(v8, v7);
  if ( updated < 0 )
  {
LABEL_11:
    HalpMcUpdateInitialize(0LL, 0LL);
    return (unsigned int)updated;
  }
  if ( Supported )
  {
    HalpMcLoadSyncBarrier = KeQueryActiveProcessorCountEx(0xFFFFu);
    HalpMcSyncBarrier = HalpMcLoadSyncBarrier;
    KeIpiGenericCall((PKIPI_BROADCAST_WORKER)HalpMcLoadMicrocodeWorker, 0LL);
  }
  else
  {
    HalpLoadMicrocodeSerialized();
  }
  HalpMcUpdateUnlock();
  if ( v4 )
  {
LABEL_18:
    if ( !HalMcSleepDisabled )
    {
      updated = PoDisableSleepStates(1LL, 14LL, &v14);
      if ( updated >= 0 )
        HalMcSleepDisabled = 1;
    }
  }
  return (unsigned int)updated;
}
