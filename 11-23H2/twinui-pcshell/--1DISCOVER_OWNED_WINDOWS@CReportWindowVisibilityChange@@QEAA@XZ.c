/*
 * XREFs of ??1DISCOVER_OWNED_WINDOWS@CReportWindowVisibilityChange@@QEAA@XZ @ 0x1803A54E0
 * Callers:
 *     _CReportWindowVisibilityChange::_ReportOwnedWindowsVisibilityChange_::_1_::dtor$0 @ 0x1802BBE07 (_CReportWindowVisibilityChange--_ReportOwnedWindowsVisibilityChange_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CReportWindowVisibilityChange::DISCOVER_OWNED_WINDOWS::~DISCOVER_OWNED_WINDOWS(
        CReportWindowVisibilityChange::DISCOVER_OWNED_WINDOWS *this)
{
  CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::RemoveAll((__int64)this + 16);
}
