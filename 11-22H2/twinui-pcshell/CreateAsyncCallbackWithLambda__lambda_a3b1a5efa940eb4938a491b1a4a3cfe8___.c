/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___ @ 0x180788230
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x1807883A0 (CreationThreadDispatcher--RunSync__lambda_6bd17a0f38fc15379b652e4a7dca1691___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800C8E70 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::_lambda_6bd17a0f38fc15379b652e4a7dca1691_ @ 0x180788564 (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--_lambda_6bd17a0f38fc15379b652e4a7dca1691_.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8_(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *result; // rax

  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v4);
    lambda_6bd17a0f38fc15379b652e4a7dca1691_::_lambda_6bd17a0f38fc15379b652e4a7dca1691_(v5 + 6, a2);
    *v5 = off_18098A320;
    v5[1] = off_18098A2D8;
  }
  else
  {
    v5 = 0LL;
  }
  result = a1;
  *a1 = v5;
  return result;
}
