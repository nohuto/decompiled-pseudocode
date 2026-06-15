/*
 * XREFs of WPP_SF_ @ 0x18000E8E8
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x180009730 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180015DD8 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180016B1C (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x18001CFE0 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x18001D110 (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 *     std::_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_::_Do_call @ 0x180028060 (std--_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_62cd855da9b9fa3df701769829143d73__void_::_Do_call @ 0x180030F70 (std--_Func_impl_no_alloc__lambda_62cd855da9b9fa3df701769829143d73__void_--_Do_call.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x180032B44 (--0CDriverListener@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_(TRACEHANDLE a1, USHORT a2, const GUID *a3)
{
  return TraceMessage(a1, 0x2Bu, a3, a2, 0LL);
}
