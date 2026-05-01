/*
 * XREFs of ??1GridRow@@QEAA@XZ @ 0x1804BE0D0
 * Callers:
 *     _GridLayout::AddRow_::_1_::dtor$0 @ 0x1804D0C8D (_GridLayout--AddRow_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall GridRow::~GridRow(GridRow *this)
{
  CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)this + 24);
}
