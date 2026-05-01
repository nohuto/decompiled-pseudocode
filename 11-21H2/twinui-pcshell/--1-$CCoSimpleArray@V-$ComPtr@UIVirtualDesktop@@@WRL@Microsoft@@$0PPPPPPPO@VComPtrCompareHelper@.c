/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@QEAA@XZ @ 0x180540FE8
 * Callers:
 *     _CVirtualDesktopCollection::AddDesktopHelper_::_1_::dtor$2 @ 0x18021F787 (_CVirtualDesktopCollection--AddDesktopHelper_--_1_--dtor$2.c)
 *     _CVirtualDesktopCollection::CVirtualDesktopCollection_::_1_::dtor$4 @ 0x180221E39 (_CVirtualDesktopCollection--CVirtualDesktopCollection_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>(
        __int64 a1)
{
  return CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::RemoveAll(a1);
}
