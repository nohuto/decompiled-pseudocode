/*
 * XREFs of ?QueueIdleTimerKick@MPCHeadMovementDetector@@AEAAXXZ @ 0x1800D1718
 * Callers:
 *     ?OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x1800D162C (-OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall MPCHeadMovementDetector::QueueIdleTimerKick(MPCHeadMovementDetector *this)
{
  int v1; // eax
  int v2; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64 (*)(), _QWORD, __int64))(**(_QWORD **)this + 152LL))(
         *(_QWORD *)this,
         lambda_7a2173e1a2d288d2e50916eaa0d31ebd_::_lambda_invoker_cdecl_,
         0LL,
         3LL);
  if ( v1 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      (const char *)(unsigned int)v1,
      v2);
}
