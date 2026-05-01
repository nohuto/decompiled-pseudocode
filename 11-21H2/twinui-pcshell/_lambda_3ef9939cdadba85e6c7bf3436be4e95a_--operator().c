/*
 * XREFs of _lambda_3ef9939cdadba85e6c7bf3436be4e95a_::operator() @ 0x18059B81C
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18059B9C0 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DoSnapRegionsOverlap@AdvancedSmartFill@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@12@AEBUCRect@Geometry@@1H@Z @ 0x1805A35FC (-DoSnapRegionsOverlap@AdvancedSmartFill@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@12@AEBUCRect@.c)
 */

__int64 __fastcall lambda_3ef9939cdadba85e6c7bf3436be4e95a_::operator()(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF

  v3 = **(_DWORD **)(a1 + 8);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 56LL))(*a2, v6);
  return SnapLayoutHelpers::AdvancedSmartFill::DoSnapRegionsOverlap(1LL, v4, *(_QWORD *)a1, v3);
}
