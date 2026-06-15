/*
 * XREFs of wil::details::lambda_call__lambda_db866b10258e69c75444ed411b8b24bb___::_lambda_call__lambda_db866b10258e69c75444ed411b8b24bb___ @ 0x140059190
 * Callers:
 *     _CPipeInstance::ActivateAPOs_::_1_::dtor$0 @ 0x140038B60 (_CPipeInstance--ActivateAPOs_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_db866b10258e69c75444ed411b8b24bb_::operator() @ 0x1400591B0 (_lambda_db866b10258e69c75444ed411b8b24bb_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_db866b10258e69c75444ed411b8b24bb___::_lambda_call__lambda_db866b10258e69c75444ed411b8b24bb___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_db866b10258e69c75444ed411b8b24bb_::operator()();
  }
  return result;
}
