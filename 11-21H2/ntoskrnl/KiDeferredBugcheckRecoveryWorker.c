/*
 * XREFs of KiDeferredBugcheckRecoveryWorker @ 0x140579150
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x140567F5C (KiInvokeBugCheckEntryCallbacks.c)
 *     KiCaptureDumpPostRecovery @ 0x140579004 (KiCaptureDumpPostRecovery.c)
 *     KiRecordRecoveryFailure @ 0x14057958C (KiRecordRecoveryFailure.c)
 *     KiSaveBugCheckRecoveryStatusPhase2 @ 0x1405796F8 (KiSaveBugCheckRecoveryStatusPhase2.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x140579750 (KiSaveBugcheckRecoveryProgress.c)
 *     ExRebootSystemForRecovery @ 0x1406396B8 (ExRebootSystemForRecovery.c)
 */

__int64 KiDeferredBugcheckRecoveryWorker()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (int)KiSaveBugcheckRecoveryProgress(199LL) >= 0 )
  {
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(KiProcessorIndexToNumberMappingTable[0] >> 6);
    Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    if ( !KeGetPcr()->Prcb.Number )
    {
      KiBugcheckRecoveryOwner = KeGetPcr()->Prcb.Number;
      KiRecoveryInProgress = 1;
      KiInvokeBugCheckEntryCallbacks(0x400u, (__int64)&KiBugcheckRecoveryInformation, 0x4Cu);
      LOBYTE(v0) = byte_140C2AA04;
      if ( (int)KiSaveBugCheckRecoveryStatusPhase2(v0) >= 0 )
      {
        if ( !byte_140C2AA04 )
        {
          KiRecordRecoveryFailure(3LL);
          goto LABEL_9;
        }
        KiCaptureDumpPostRecovery(v1);
        if ( !KiRecoveryCheckpointsFailure && (int)KiSaveBugcheckRecoveryProgress(4LL) >= 0 )
        {
          ExRebootSystemForRecovery();
LABEL_9:
          KiRecoveryInProgress = 0;
          goto LABEL_11;
        }
      }
    }
  }
  KiRecordRecoveryFailure(5LL);
LABEL_11:
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (byte_140C2AA17 & 2) != 0 )
  {
    KeSetEvent(&KiBugcheckBlockingEvent, 0, 0);
  }
  else if ( (byte_140C2AA17 & 4) != 0 )
  {
    KiSaveBugcheckRecoveryProgress(198LL);
    ((void (__fastcall *)(_QWORD))off_140C01EF8[0])(0LL);
    HalReturnToFirmware(3);
  }
  return KiSaveBugcheckRecoveryProgress(197LL);
}
