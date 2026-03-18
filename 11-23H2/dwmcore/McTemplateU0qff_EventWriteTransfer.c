/*
 * XREFs of McTemplateU0qff_EventWriteTransfer @ 0x180130FB8
 * Callers:
 *     ?CalculateEffectiveRefreshRate@CRateInfo@@QEAAXPEAVCFrameInfo@@0@Z @ 0x1800462EC (-CalculateEffectiveRefreshRate@CRateInfo@@QEAAXPEAVCFrameInfo@@0@Z.c)
 *     ?SetNominalRefreshPeriod@CRateInfo@@QEAAX_K@Z @ 0x180049BE4 (-SetNominalRefreshPeriod@CRateInfo@@QEAAX_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0qff_EventWriteTransfer(__int64 a1, __int64 a2)
{
  return McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, a2);
}
