/*
 * XREFs of ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003FAF0
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18000BF30 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x18003F988 (_lambda_530575f8b419a08780554bb070101504_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_6028ebead6359eb01fe792f246b3a516__void_::_Do_call @ 0x18004BC30 (std--_Func_impl_no_alloc__lambda_6028ebead6359eb01fe792f246b3a516__void_--_Do_call.c)
 *     _lambda_249a22bcff1aef3e1794295476d640d0_::operator()_Microsoft::WRL::WeakRef_const__ @ 0x180103114 (_lambda_249a22bcff1aef3e1794295476d640d0_--operator()_Microsoft--WRL--WeakRef_const__.c)
 *     std::_Func_impl_no_alloc__lambda_ccb2fb6761faeffd512ba6eec10e8d6f__void_::_Do_call @ 0x18010AD80 (std--_Func_impl_no_alloc__lambda_ccb2fb6761faeffd512ba6eec10e8d6f__void_--_Do_call.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64),
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(a2);
  return v4(v3, &GUID_3a5c2657_1b5f_474a_96ef_4cfdc4deeb2a, a2);
}
