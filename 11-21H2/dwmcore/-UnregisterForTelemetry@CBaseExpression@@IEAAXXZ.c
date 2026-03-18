/*
 * XREFs of ?UnregisterForTelemetry@CBaseExpression@@IEAAXXZ @ 0x180042FA4
 * Callers:
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800420D8 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x180042190 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x1800426E4 (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x180049824 (--1CBaseExpression@@UEAA@XZ.c)
 * Callees:
 *     ?UnregisterResourceForAnimationTelemetry@CComposition@@QEAAXPEBVCResource@@PEBU_GUID@@I@Z @ 0x180043000 (-UnregisterResourceForAnimationTelemetry@CComposition@@QEAAXPEBVCResource@@PEBU_GUID@@I@Z.c)
 *     ?GetAnimationScenarioGUID@CBaseExpression@@IEBA?AU_GUID@@XZ @ 0x1800447A4 (-GetAnimationScenarioGUID@CBaseExpression@@IEBA-AU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CBaseExpression::UnregisterForTelemetry(CBaseExpression *this)
{
  struct _GUID v2; // [rsp+20h] [rbp-28h] BYREF

  CBaseExpression::GetAnimationScenarioGUID(this, &v2);
  CComposition::UnregisterResourceForAnimationTelemetry(*((CComposition **)this + 2), this, &v2, *((_DWORD *)this + 44));
  *((_BYTE *)this + 232) &= ~0x20u;
}
