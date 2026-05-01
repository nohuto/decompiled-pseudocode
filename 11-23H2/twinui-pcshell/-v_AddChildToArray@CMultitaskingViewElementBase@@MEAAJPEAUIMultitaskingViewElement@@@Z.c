/*
 * XREFs of ?v_AddChildToArray@CMultitaskingViewElementBase@@MEAAJPEAUIMultitaskingViewElement@@@Z @ 0x180576800
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@VElementCompare@ElementHelpers@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_K@Z @ 0x180573AF0 (--$_InsertAt@$$QEAV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPt.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewElementBase::v_AddChildToArray(
        CMultitaskingViewElementBase *this,
        struct IMultitaskingViewElement *a2)
{
  _QWORD *v2; // rbx
  struct IMultitaskingViewElement *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 16);
  v4 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v4);
  LODWORD(v2) = CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewElement>>,ElementHelpers::ElementCompare,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewElement>>>::_InsertAt<Microsoft::WRL::ComPtr<IMultitaskingViewElement> &&>(
                  v2,
                  &v4,
                  0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v4);
  return (unsigned int)v2;
}
