/*
 * XREFs of wil::details::lambda_call__lambda_9559e19d811c20b95eeab3b486fc6e42___::_lambda_call__lambda_9559e19d811c20b95eeab3b486fc6e42___ @ 0x14008EB94
 * Callers:
 *     _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$4 @ 0x140035405 (_CAudioProcessor--AddAPOOutputConnection_--_1_--dtor$4.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x140015B08 (-RemoveAt@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_9559e19d811c20b95eeab3b486fc6e42___::_lambda_call__lambda_9559e19d811c20b95eeab3b486fc6e42___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(
      (_QWORD *)(**(_QWORD **)a1 + 160LL),
      **(_QWORD **)(a1 + 8));
  }
}
