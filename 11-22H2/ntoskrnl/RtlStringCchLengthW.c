/*
 * XREFs of RtlStringCchLengthW @ 0x14022C660
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1405AFCE0 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1405AFF9C (RtlpNameprepAsciiRealWorker.c)
 *     PnpAllocatePWSTR @ 0x1406CCCEC (PnpAllocatePWSTR.c)
 *     AslStringDuplicate @ 0x1406D4AA8 (AslStringDuplicate.c)
 *     PiUEventCopyEventData @ 0x14077F9B4 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x14077FBAC (PiUEventHandleRegistration.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140782788 (PiUEventProcessBroadcastNotifications.c)
 *     PnpConcatPWSTR @ 0x1407FB058 (PnpConcatPWSTR.c)
 *     PnpValidateMultiSz @ 0x1407FC120 (PnpValidateMultiSz.c)
 *     SepParseElamCertResources @ 0x14081238C (SepParseElamCertResources.c)
 *     IoCreateDriver @ 0x140812780 (IoCreateDriver.c)
 *     PnpGetMultiSzLength @ 0x14081BCD8 (PnpGetMultiSzLength.c)
 *     PpmRegisterProfiles @ 0x14084AD78 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x14084AF70 (PpmEventTraceProfiles.c)
 *     WmipMangleInstanceName @ 0x14086B424 (WmipMangleInstanceName.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140883A30 (DbgkWerCaptureLiveKernelDump2.c)
 *     PnpGetDeviceDependencyList @ 0x140954A18 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x1409684E0 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140969C6C (PiCMGenerateDeviceInstance.c)
 *     PopPlInitWString @ 0x1409A0960 (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1409A2610 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x1409BBB14 (RtlpValidAttribute.c)
 *     SdbGetMergeRedirectPath @ 0x140A4E170 (SdbGetMergeRedirectPath.c)
 *     AslPathCombine @ 0x140A5515C (AslPathCombine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // r9
  NTSTATUS result; // eax

  if ( !psz || cchMax > 0x7FFFFFFF )
  {
    result = -1073741811;
LABEL_11:
    if ( pcchLength )
      *pcchLength = 0LL;
    return result;
  }
  for ( i = cchMax; i; --i )
  {
    if ( !*psz )
      break;
    ++psz;
  }
  result = i == 0 ? 0xC000000D : 0;
  if ( pcchLength )
  {
    if ( i )
      *pcchLength = cchMax - i;
    else
      *pcchLength = 0LL;
  }
  if ( !i )
    goto LABEL_11;
  return result;
}
