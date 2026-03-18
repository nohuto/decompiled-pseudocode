/*
 * XREFs of McTemplateU0xxxqf_EventWriteTransfer @ 0x180131F1E
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800C83E0 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 McTemplateU0xxxqf_EventWriteTransfer()
{
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_DCOMPEVENT_ANIMATION_UPDATE_VALUE);
}
