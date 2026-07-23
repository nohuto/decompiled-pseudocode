/*
 * XREFs of KiDeferredBugcheckRecoveryWorker @ 0x14057B2D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140306090 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140306EE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HalReturnToFirmware @ 0x140506EB0 (HalReturnToFirmware.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405517A4 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x14056AF8C (KiInvokeBugCheckEntryCallbacks.c)
 *     KiCaptureDumpPostRecovery @ 0x14057B180 (KiCaptureDumpPostRecovery.c)
 *     KiRecordRecoveryFailure @ 0x14057B7C0 (KiRecordRecoveryFailure.c)
 *     KiSaveBugCheckRecoveryStatusPhase2 @ 0x14057B92C (KiSaveBugCheckRecoveryStatusPhase2.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x14057BD68 (KiUpdateBugcheckRecoveryProgress.c)
 *     ExRebootSystemForRecovery @ 0x140606BC4 (ExRebootSystemForRecovery.c)
 */

__int64 KiDeferredBugcheckRecoveryWorker()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v3; // [rsp+20h] [rbp-19h] BYREF
  int v4; // [rsp+28h] [rbp-11h]
  __int64 v5; // [rsp+2Ch] [rbp-Dh]
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-1h] BYREF
  __int64 v7; // [rsp+48h] [rbp+Fh] BYREF
  int v8; // [rsp+50h] [rbp+17h]
  __int64 v9; // [rsp+54h] [rbp+1Bh]
  __int64 v10; // [rsp+60h] [rbp+27h] BYREF
  int v11; // [rsp+68h] [rbp+2Fh]
  __int64 v12; // [rsp+6Ch] [rbp+33h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+78h] [rbp+3Fh] BYREF

  v5 = 0LL;
  v3 = 1LL;
  Affinity = 0LL;
  v4 = 199;
  PreviousAffinity = 0LL;
  if ( (int)KiUpdateBugcheckRecoveryProgress(&v3) >= 0 )
  {
    if ( (KiBugcheckRecoveryDumpPolicy & 0x10) == 0 )
      IoWriteCapturedPristineTriageDumpToDedicatedDumpFile();
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    if ( !KeGetPcr()->Prcb.Number )
    {
      KiBugcheckRecoveryOwner = KeGetPcr()->Prcb.Number;
      KiRecoveryInProgress = 1;
      KiInvokeBugCheckEntryCallbacks(0x400u, (__int64)&KiBugcheckRecoveryInformation, 0x4Cu);
      LOBYTE(v0) = byte_140C41364;
      if ( (int)KiSaveBugCheckRecoveryStatusPhase2(v0) >= 0 )
      {
        if ( !byte_140C41364 )
        {
          KiRecordRecoveryFailure(3LL);
          goto LABEL_11;
        }
        KiCaptureDumpPostRecovery(v1);
        if ( !KiRecoveryCheckpointsFailure )
        {
          v5 = 0LL;
          v3 = 1LL;
          v4 = 4;
          if ( (int)KiUpdateBugcheckRecoveryProgress(&v3) >= 0 )
          {
            ExRebootSystemForRecovery();
LABEL_11:
            KiRecoveryInProgress = 0;
            goto LABEL_13;
          }
        }
      }
    }
  }
  KiRecordRecoveryFailure(5LL);
LABEL_13:
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (byte_140C41377 & 2) != 0 )
  {
    KeSetEvent(&KiBugcheckBlockingEvent, 0, 0);
  }
  else if ( (byte_140C41377 & 4) != 0 )
  {
    v9 = 0LL;
    v7 = 1LL;
    v8 = 198;
    KiUpdateBugcheckRecoveryProgress(&v7);
    ((void (__fastcall *)(_QWORD))off_140C01CB8[0])(0LL);
    HalReturnToFirmware(3);
  }
  v12 = 0LL;
  v10 = 1LL;
  v11 = 197;
  return KiUpdateBugcheckRecoveryProgress(&v10);
}
