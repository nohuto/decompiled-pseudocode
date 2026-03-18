/*
 * XREFs of wil::details::lambda_call__lambda_cfa2151ea50fd6eac09f4642f8eb6082___::_lambda_call__lambda_cfa2151ea50fd6eac09f4642f8eb6082___ @ 0x1C0082510
 * Callers:
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C0083570 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     _lambda_cfa2151ea50fd6eac09f4642f8eb6082_::operator() @ 0x1C00825C8 (_lambda_cfa2151ea50fd6eac09f4642f8eb6082_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_cfa2151ea50fd6eac09f4642f8eb6082___::_lambda_call__lambda_cfa2151ea50fd6eac09f4642f8eb6082___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_cfa2151ea50fd6eac09f4642f8eb6082_::operator()();
  }
  return result;
}
