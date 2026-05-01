/*
 * XREFs of ?v_AddChildToArray@CSwitchItemGrid@@MEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1802E4710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@VElementCompare@ElementHelpers@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_K@Z @ 0x180573AF0 (--$_InsertAt@$$QEAV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPt.c)
 *     ??$BinarySearchEx@VCompareGridElements@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVCompareGridElements@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K@Z @ 0x180578304 (--$BinarySearchEx@VCompareGridElements@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElemen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchItemGrid::v_AddChildToArray(CSwitchItemGrid *this, struct IMultitaskingViewElement *a2)
{
  char *v2; // rbx
  __int64 v3; // rdx
  struct IMultitaskingViewElement *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (char *)this + 16;
  v5 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v5);
  CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::BinarySearchEx<CompareGridElements>(
    v2,
    v3,
    &v5,
    &v6);
  LODWORD(v2) = CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewElement>>,ElementHelpers::ElementCompare,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewElement>>>::_InsertAt<Microsoft::WRL::ComPtr<IMultitaskingViewElement> &&>(
                  v2,
                  &v5,
                  v6);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v5);
  return (unsigned int)v2;
}
