/*
 * XREFs of ?GetRectForColumn@AdvancedSmartFill@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@12@AEBU34@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805A4D44
 * Callers:
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x1805A9578 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetMaxArrangingRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAA?AUCRect@Geometry@@AEBU45@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805A3B88 (-GetMaxArrangingRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAA-AUCRe.c)
 *     ?GetMidArrangingRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAA?AUCRect@Geometry@@AEBU45@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805A3DB0 (-GetMidArrangingRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAA-AUCRe.c)
 *     ?GetMinArrangingRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAA?AUCRect@Geometry@@AEBU45@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805A4060 (-GetMinArrangingRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAA-AUCRe.c)
 */

_DWORD *__fastcall SnapLayoutHelpers::AdvancedSmartFill::GetRectForColumn(
        _DWORD *a1,
        int a2,
        __int64 a3,
        const char *a4,
        signed int a5,
        int a6,
        __int64 a7)
{
  int v8; // edx
  __int64 v10; // [rsp+28h] [rbp-30h]
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11[0] = &SnapLayoutHelpers::AdvancedSmartFill::ColumnSmartFillSolver::`vftable';
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xB10,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
          a4);
      SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::GetMaxArrangingRect(
        (__int64)v11,
        a1,
        a3,
        (int)a4,
        a5,
        v10,
        a7);
    }
    else
    {
      SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::GetMidArrangingRect(
        (__int64)v11,
        a1,
        a3,
        (int)a4,
        a5,
        v10,
        a7);
    }
  }
  else
  {
    SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::GetMinArrangingRect(
      (__int64)v11,
      a1,
      a3,
      (int)a4,
      a5,
      v10,
      a7);
  }
  return a1;
}
