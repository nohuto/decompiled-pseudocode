/*
 * XREFs of ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x1800B4B80
 * Callers:
 *     ?Get3DFocusedWindowId@MPCHolographicInputManager@@QEAA_KXZ @ 0x1800B4B40 (-Get3DFocusedWindowId@MPCHolographicInputManager@@QEAA_KXZ.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x1800B575C (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800B8060 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x1801E6824 (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801E6D40 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct IMPCFocusTarget *__fastcall MPCHolographicInputManager::GetFocusedTarget(
        MPCHolographicInputManager *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x511,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
  return (struct IMPCFocusTarget *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 411) + 32LL))(*((_QWORD *)this + 411));
}
