/*
 * XREFs of wil::details::lambda_call__lambda_4077c0e74b282fea5d37049cc4734ddb___::_lambda_call__lambda_4077c0e74b282fea5d37049cc4734ddb___ @ 0x1400816A8
 * Callers:
 *     _CConnectionNode::CreateConnection_::_1_::dtor$0 @ 0x140038060 (_CConnectionNode--CreateConnection_--_1_--dtor$0.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400117E0 (-AERTFree@@YAXPEAX0@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_4077c0e74b282fea5d37049cc4734ddb___::_lambda_call__lambda_4077c0e74b282fea5d37049cc4734ddb___(
        _BYTE *a1)
{
  void *v2; // rax
  int v3; // r8d

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = (void *)AERTGetDLLRTHeap();
    AERTFree(*(void **)(*(_QWORD *)a1 + 104LL), v2, v3);
    *(_QWORD *)(*(_QWORD *)a1 + 104LL) = 0LL;
  }
}
