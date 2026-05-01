/*
 * XREFs of ??1?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@QEAA@XZ @ 0x180541080
 * Callers:
 *     _CVirtualDesktopCollection::AddDesktopHelper_::_1_::dtor$3 @ 0x18021F799 (_CVirtualDesktopCollection--AddDesktopHelper_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::pair<HMONITOR__ * const,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>>::~pair<HMONITOR__ * const,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>>(
        __int64 a1)
{
  return CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::RemoveAll(a1 + 8);
}
