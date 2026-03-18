/*
 * XREFs of ?GetForceEngineCurrentValue@CMotion@@QEBAMXZ @ 0x18026E670
 * Callers:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1802322A8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

float __fastcall CMotion::GetForceEngineCurrentValue(CMotion *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-28h] BYREF

  return *(float *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 12) + 32LL))(
                      *((_QWORD *)this + 12),
                      v2)
                  + 4);
}
