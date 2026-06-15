/*
 * XREFs of std::_Func_impl_no_alloc__lambda_ece2dd53c76a57ee061c41d22e7a1225__void_::_Delete_this @ 0x1400686E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14002DA28 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_ece2dd53c76a57ee061c41d22e7a1225__void_::_Delete_this(
        __int64 *Block,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)Block[3];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(Block + 1);
  if ( a2 )
    operator delete(Block);
}
