/*
 * XREFs of CempUtilValidateSid @ 0x180035A10
 * Callers:
 *     ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x1800355C0 (-HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x180035DCC (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180070914 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 *     ?HampAppInfoValidate@@YAJPEBGPEAEKK@Z @ 0x18007F3CC (-HampAppInfoValidate@@YAJPEBGPEAEKK@Z.c)
 *     CempUtilValidateAndCaptureSid @ 0x18009761C (CempUtilValidateAndCaptureSid.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempUtilValidateSid(PSID Sid, unsigned int a2)
{
  unsigned int v4; // ebx

  if ( a2 < 0xC )
  {
    return (unsigned int)-1073741584;
  }
  else
  {
    v4 = 0;
    if ( !RtlValidSid(Sid) || RtlLengthSid(Sid) != a2 )
      return (unsigned int)-1073741585;
  }
  return v4;
}
