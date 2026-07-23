/*
 * XREFs of RtlStringCchLengthW @ 0x14022C750
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1405B01C0 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1405B047C (RtlpNameprepAsciiRealWorker.c)
 *     PnpAllocatePWSTR @ 0x1406CCC6C (PnpAllocatePWSTR.c)
 *     AslStringDuplicate @ 0x1406D4A28 (AslStringDuplicate.c)
 *     PiUEventCopyEventData @ 0x14077F694 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x14077F88C (PiUEventHandleRegistration.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140782468 (PiUEventProcessBroadcastNotifications.c)
 *     PnpConcatPWSTR @ 0x1407FAC78 (PnpConcatPWSTR.c)
 *     PnpValidateMultiSz @ 0x1407FBD40 (PnpValidateMultiSz.c)
 *     SepParseElamCertResources @ 0x1408100DC (SepParseElamCertResources.c)
 *     IoCreateDriver @ 0x1408104D0 (IoCreateDriver.c)
 *     PnpGetMultiSzLength @ 0x140819A28 (PnpGetMultiSzLength.c)
 *     PpmRegisterProfiles @ 0x140849E18 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x14084A010 (PpmEventTraceProfiles.c)
 *     WmipMangleInstanceName @ 0x14086B194 (WmipMangleInstanceName.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x1408837A0 (DbgkWerCaptureLiveKernelDump2.c)
 *     PnpGetDeviceDependencyList @ 0x140954B68 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x140968630 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140969DBC (PiCMGenerateDeviceInstance.c)
 *     PopPlInitWString @ 0x1409A0AB0 (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1409A2760 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x1409BBC64 (RtlpValidAttribute.c)
 *     SdbGetMergeRedirectPath @ 0x140A4E3B0 (SdbGetMergeRedirectPath.c)
 *     AslPathCombine @ 0x140A5539C (AslPathCombine.c)
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
