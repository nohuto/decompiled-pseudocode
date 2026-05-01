/*
 * XREFs of ?GetRectForColumn@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x180672948
 * Callers:
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x180675E58 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetMaxArrangingRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA?AUCRect@Geometry@@AEBU34@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x180671784 (-GetMaxArrangingRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA-AUCRect@Geometry@@AEBU3.c)
 *     ?GetMidArrangingRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA?AUCRect@Geometry@@AEBU34@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1806719B0 (-GetMidArrangingRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA-AUCRect@Geometry@@AEBU3.c)
 *     ?GetMinArrangingRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA?AUCRect@Geometry@@AEBU34@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x180671C60 (-GetMinArrangingRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA-AUCRect@Geometry@@AEBU3.c)
 */

_DWORD *__fastcall SnapLayoutHelpers::GetRectForColumn(
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

  v11[0] = &SnapLayoutHelpers::ColumnSmartFillSolver::`vftable';
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x965,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
          a4);
      SnapLayoutHelpers::SpanningSmartFillSolverBase::GetMaxArrangingRect((__int64)v11, a1, a3, (int)a4, a5, v10, a7);
    }
    else
    {
      SnapLayoutHelpers::SpanningSmartFillSolverBase::GetMidArrangingRect((__int64)v11, a1, a3, (int)a4, a5, v10, a7);
    }
  }
  else
  {
    SnapLayoutHelpers::SpanningSmartFillSolverBase::GetMinArrangingRect((__int64)v11, a1, a3, (int)a4, a5, v10, a7);
  }
  return a1;
}
