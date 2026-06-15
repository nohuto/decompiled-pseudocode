/*
 * XREFs of wil::details::lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___::_lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___ @ 0x14008EC54
 * Callers:
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$5 @ 0x140034FEA (_CAudioProcessor--ActivateAPO_--_1_--dtor$5.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000EC34 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?Find@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3@@Z @ 0x1400201C4 (-Find@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3.c)
 */

void __fastcall wil::details::lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___::_lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___(
        __int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // r9

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = ATL::CAtlList<CAPONode *,CAPONodeTraits>::Find(**(_QWORD ***)a1, *(_QWORD *)(a1 + 8));
    ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt(v2, v1);
  }
}
