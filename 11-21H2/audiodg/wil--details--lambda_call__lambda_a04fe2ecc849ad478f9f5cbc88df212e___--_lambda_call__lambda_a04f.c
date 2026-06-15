/*
 * XREFs of wil::details::lambda_call__lambda_a04fe2ecc849ad478f9f5cbc88df212e___::_lambda_call__lambda_a04fe2ecc849ad478f9f5cbc88df212e___ @ 0x1400818FC
 * Callers:
 *     _CAudioProcessor::AddAPOInputConnection_::_1_::dtor$5 @ 0x1400379C0 (_CAudioProcessor--AddAPOInputConnection_--_1_--dtor$5.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x140068F80 (-RemoveAt@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_a04fe2ecc849ad478f9f5cbc88df212e___::_lambda_call__lambda_a04fe2ecc849ad478f9f5cbc88df212e___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(
      (_QWORD *)(**(_QWORD **)a1 + 256LL),
      **(_QWORD **)(a1 + 8));
  }
}
