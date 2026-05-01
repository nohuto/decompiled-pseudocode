/*
 * XREFs of ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180002388
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180005DE0 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x180044830 (--$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::NtStatusToHr(wil::details *this)
{
  int v1; // ebx
  __int64 result; // rax
  int v3; // eax
  int v4; // ecx

  v1 = (int)this;
  if ( (int)this >= 0 )
    return 0LL;
  if ( (_DWORD)this == -1073741801 )
    return 2147942414LL;
  if ( !wil::details::g_pfnRtlNtStatusToDosErrorNoTeb )
    return v1 | 0x10000000u;
  v3 = wil::details::g_pfnRtlNtStatusToDosErrorNoTeb();
  v4 = v3;
  if ( !v3 || v3 == 317 )
    return v1 | 0x10000000u;
  result = (unsigned __int16)v3 | 0x80070000;
  if ( v4 <= 0 )
    return (unsigned int)v4;
  return result;
}
