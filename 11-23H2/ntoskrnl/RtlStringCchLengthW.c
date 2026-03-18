/*
 * XREFs of RtlStringCchLengthW @ 0x14022C640
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1405AFC50 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1405AFF0C (RtlpNameprepAsciiRealWorker.c)
 *     PnpAllocatePWSTR @ 0x1406CCC3C (PnpAllocatePWSTR.c)
 *     AslStringDuplicate @ 0x1406D49F8 (AslStringDuplicate.c)
 *     PiUEventCopyEventData @ 0x14077F4A4 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x14077F69C (PiUEventHandleRegistration.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140782278 (PiUEventProcessBroadcastNotifications.c)
 *     PnpConcatPWSTR @ 0x1407FA9A8 (PnpConcatPWSTR.c)
 *     PnpValidateMultiSz @ 0x1407FBA70 (PnpValidateMultiSz.c)
 *     SepParseElamCertResources @ 0x14080FE0C (SepParseElamCertResources.c)
 *     IoCreateDriver @ 0x140810200 (IoCreateDriver.c)
 *     PnpGetMultiSzLength @ 0x140819758 (PnpGetMultiSzLength.c)
 *     PpmRegisterProfiles @ 0x140849B18 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x140849D10 (PpmEventTraceProfiles.c)
 *     WmipMangleInstanceName @ 0x14086AF54 (WmipMangleInstanceName.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140883560 (DbgkWerCaptureLiveKernelDump2.c)
 *     PnpGetDeviceDependencyList @ 0x140954968 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x140968430 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140969BBC (PiCMGenerateDeviceInstance.c)
 *     PopPlInitWString @ 0x1409A08B0 (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1409A2560 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x1409BBA64 (RtlpValidAttribute.c)
 *     SdbGetMergeRedirectPath @ 0x140A4E100 (SdbGetMergeRedirectPath.c)
 *     AslPathCombine @ 0x140A550EC (AslPathCombine.c)
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
