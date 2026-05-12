/*
 * XREFs of WPP_SF_d @ 0x1C003E84C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000FC84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0012048 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C001605C (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C00165A8 (RaidBusEnumeratorVisitUnit.c)
 *     RaidAdapterHack @ 0x1C0035B8C (RaidAdapterHack.c)
 *     RaidLunQueueWaitForQuiescence @ 0x1C00405F4 (RaidLunQueueWaitForQuiescence.c)
 *     RaidStallDeviceQueue @ 0x1C0040748 (RaidStallDeviceQueue.c)
 *     StorPortAdapterPoFxWaitWakeCompletion @ 0x1C004E1E0 (StorPortAdapterPoFxWaitWakeCompletion.c)
 *     TcglibAssignNamespaceLocking @ 0x1C00792A4 (TcglibAssignNamespaceLocking.c)
 *     TcglibConfigureLockingSpEx @ 0x1C0079504 (TcglibConfigureLockingSpEx.c)
 *     TcglibDeassignNamespaceLocking @ 0x1C00796A4 (TcglibDeassignNamespaceLocking.c)
 *     TcglibEraseBand @ 0x1C0079868 (TcglibEraseBand.c)
 *     TcglibGetBandMetadata @ 0x1C0079954 (TcglibGetBandMetadata.c)
 *     TcglibRevertLockingSpEx @ 0x1C0079D28 (TcglibRevertLockingSpEx.c)
 *     TcglibSetAdmin1Pin @ 0x1C0079E88 (TcglibSetAdmin1Pin.c)
 *     TcglibSetBand @ 0x1C0079FC0 (TcglibSetBand.c)
 *     TcglibSetBandLocationEx @ 0x1C007A198 (TcglibSetBandLocationEx.c)
 *     TcglibSetBandMetadata @ 0x1C007A358 (TcglibSetBandMetadata.c)
 *     TcglibSetBandPin @ 0x1C007A4AC (TcglibSetBandPin.c)
 *     ParseAssignNamespace @ 0x1C007AD40 (ParseAssignNamespace.c)
 *     ParseBandMetadata @ 0x1C007AE90 (ParseBandMetadata.c)
 *     TcglibpGetCapabilities @ 0x1C007D1E8 (TcglibpGetCapabilities.c)
 *     ParseSyncSessionData @ 0x1C007E590 (ParseSyncSessionData.c)
 *     ParseTPerProperties @ 0x1C007E6C0 (ParseTPerProperties.c)
 *     ParseNamedData @ 0x1C007F8A4 (ParseNamedData.c)
 *     ParseTcgEndSession @ 0x1C007F9AC (ParseTcgEndSession.c)
 *     ParseTcgPayloadStatus @ 0x1C007FBC0 (ParseTcgPayloadStatus.c)
 *     ParseTcgTransactionStatus @ 0x1C007FDEC (ParseTcgTransactionStatus.c)
 *     ParseToken @ 0x1C007FEE0 (ParseToken.c)
 *     ParseTokenData @ 0x1C0080148 (ParseTokenData.c)
 *     RaWmiDispatchIrp @ 0x1C00A28B4 (RaWmiDispatchIrp.c)
 *     StorpRegisterShim @ 0x1C00AB12C (StorpRegisterShim.c)
 *     StorpUnregisterShim @ 0x1C00AB234 (StorpUnregisterShim.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_d(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
