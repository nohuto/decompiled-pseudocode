/*
 * XREFs of wil::details::lambda_call__lambda_64d0eb5368601f43b2aeea154398bca8___::_lambda_call__lambda_64d0eb5368601f43b2aeea154398bca8___ @ 0x14008EB84
 * Callers:
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$4 @ 0x140034FD8 (_CAudioProcessor--ActivateAPO_--_1_--dtor$4.c)
 * Callees:
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140022E00 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_64d0eb5368601f43b2aeea154398bca8___::_lambda_call__lambda_64d0eb5368601f43b2aeea154398bca8___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CAPONode::UnlockForProcess(**(CAPONode ***)a1);
  }
  return result;
}
