/*
 * XREFs of PsCreateSystemThread @ 0x1407B8100
 * Callers:
 *     PopCreatePowerThread @ 0x140342ADC (PopCreatePowerThread.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403437B0 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     SmKmStoreHelperStart @ 0x1403438AC (SmKmStoreHelperStart.c)
 *     EtwpStartLoggerThread @ 0x140343944 (EtwpStartLoggerThread.c)
 *     CcInitializePartition @ 0x1403A0390 (CcInitializePartition.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403A69B8 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     DisplayBootBitmap @ 0x1403AA048 (DisplayBootBitmap.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1403BF060 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403C0AA8 (CcInitializePrivateVolumeCacheMap.c)
 *     DifPsCreateSystemThreadWrapper @ 0x1405EA5F0 (DifPsCreateSystemThreadWrapper.c)
 *     ExRegisterBootDevice @ 0x1406094B0 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x140AA64E8 (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x140AD1890 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140ADA148 (VfPoolInitPhase1.c)
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 *     PspInitPhase0 @ 0x140B4A894 (PspInitPhase0.c)
 *     SeRmInitPhase1 @ 0x140B60C6C (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x140B685CC (FsRtlInitializeWorkerThread.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140B6C83C (PopDirectedDripsInitializePhase3.c)
 *     ExpWorkerFactoryInitialization @ 0x140B72530 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x140772600 (PsCreateSystemThreadEx.c)
 */

NTSTATUS __stdcall PsCreateSystemThread(
        PHANDLE ThreadHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PKSTART_ROUTINE StartRoutine,
        PVOID StartContext)
{
  return PsCreateSystemThreadEx(
           (__int64)ThreadHandle,
           DesiredAccess,
           (__int128 *)ObjectAttributes,
           (ULONG_PTR)ProcessHandle,
           (__int64)ClientId,
           (__int64)StartRoutine,
           (__int64)StartContext,
           0LL,
           0LL);
}
