/*
 * XREFs of wil::details::lambda_call__lambda_60d73b52757ccff8abd34fb69055d725___::_lambda_call__lambda_60d73b52757ccff8abd34fb69055d725___ @ 0x14008EB00
 * Callers:
 *     _CAudioProcessor::AddAPOInputConnection_::_1_::dtor$4 @ 0x14003534F (_CAudioProcessor--AddAPOInputConnection_--_1_--dtor$4.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x140015B08 (-RemoveAt@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_60d73b52757ccff8abd34fb69055d725___::_lambda_call__lambda_60d73b52757ccff8abd34fb69055d725___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(
      (_QWORD *)(**(_QWORD **)a1 + 128LL),
      **(_QWORD **)(a1 + 8));
  }
}
