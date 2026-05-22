/*
 * XREFs of ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180093924
 * Callers:
 *     ?CheckCapability@ShellGesturesClientProxy@@AEAAJXZ @ 0x18004BF1C (-CheckCapability@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?CheckCapability@DragManagerClientProxy@@AEAAJXZ @ 0x18004C148 (-CheckCapability@DragManagerClientProxy@@AEAAJXZ.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18009468C (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?FromStatus@ResultStatus@details@wil@@SA?AU123@J@Z @ 0x1800A1C2C (-FromStatus@ResultStatus@details@wil@@SA-AU123@J@Z.c)
 *     ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1800CC770 (--$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1800D4A34 (--$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z.c)
 *     _lambda_c4b5ac531e4df77abc1357e1027acfb6_::operator() @ 0x1800E58EC (_lambda_c4b5ac531e4df77abc1357e1027acfb6_--operator().c)
 *     ?Complete@AlpcMessage@@QEAAJPEAX@Z @ 0x1801193C4 (-Complete@AlpcMessage@@QEAAJPEAX@Z.c)
 *     ?ShareSection@AlpcPort@@UEAAJPEAX@Z @ 0x18011B420 (-ShareSection@AlpcPort@@UEAAJPEAX@Z.c)
 *     ?FindTransducerConnectedInputReport@PenInterface@@AEAAJPEAU_HIDP_PREPARSED_DATA@@PEAE@Z @ 0x1801A6B00 (-FindTransducerConnectedInputReport@PenInterface@@AEAAJPEAU_HIDP_PREPARSED_DATA@@PEAE@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::NtStatusToHr(wil::details *this)
{
  int v1; // ebx
  __int64 result; // rax

  v1 = (int)this;
  if ( (int)this >= 0 )
    return 0LL;
  if ( (_DWORD)this == -1073741801 )
    return 2147942414LL;
  if ( !wil::details::g_pfnRtlNtStatusToDosErrorNoTeb )
    return v1 | 0x10000000u;
  result = wil::details::g_pfnRtlNtStatusToDosErrorNoTeb();
  if ( !(_DWORD)result || (_DWORD)result == 317 )
    return v1 | 0x10000000u;
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
