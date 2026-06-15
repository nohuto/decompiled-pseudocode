/*
 * XREFs of wil::details::lambda_call__lambda_7689b35a0bf80f5507f5324595203735___::_lambda_call__lambda_7689b35a0bf80f5507f5324595203735___ @ 0x14008EB5C
 * Callers:
 *     _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$5 @ 0x140035417 (_CAudioProcessor--AddAPOOutputConnection_--_1_--dtor$5.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x140015B08 (-RemoveAt@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_7689b35a0bf80f5507f5324595203735___::_lambda_call__lambda_7689b35a0bf80f5507f5324595203735___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(
      (_QWORD *)(**(_QWORD **)a1 + 288LL),
      **(_QWORD **)(a1 + 8));
  }
}
