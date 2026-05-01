/*
 * XREFs of _lambda_a1608a121236b09cf8aed0d49703ab26_::operator() @ 0x18066A0D4
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18066A3A0 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DoSnapRegionsOverlap@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@1@AEBUCRect@Geometry@@1H@Z @ 0x1806714A0 (-DoSnapRegionsOverlap@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@1@AEBUCRect@Geometry@@1H@Z.c)
 */

__int64 __fastcall lambda_a1608a121236b09cf8aed0d49703ab26_::operator()(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF

  v3 = **(_DWORD **)(a1 + 8);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 56LL))(*a2, v6);
  return SnapLayoutHelpers::DoSnapRegionsOverlap(1LL, v4, *(_QWORD *)a1, v3);
}
