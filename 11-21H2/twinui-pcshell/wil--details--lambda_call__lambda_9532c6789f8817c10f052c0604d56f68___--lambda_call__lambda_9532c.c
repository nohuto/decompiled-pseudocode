/*
 * XREFs of wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___ @ 0x1802F3764
 * Callers:
 *     _lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_ @ 0x1802F3044 (_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_--_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_.c)
 *     _lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb__0 @ 0x1802F30E8 (_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_--_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb__0.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1801459F8 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1801459F8.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (_QWORD *)a1,
    a2);
  *(_QWORD *)a1 = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  *(_BYTE *)(a1 + 320) = *(_BYTE *)(a2 + 320);
  result = a1;
  *(_BYTE *)(a2 + 320) = 0;
  return result;
}
