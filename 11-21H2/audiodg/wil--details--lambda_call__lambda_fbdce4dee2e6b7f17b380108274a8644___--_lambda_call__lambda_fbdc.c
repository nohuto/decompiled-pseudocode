/*
 * XREFs of wil::details::lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___::_lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___ @ 0x140081934
 * Callers:
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$5 @ 0x140037530 (_CAudioProcessor--ActivateAPO_--_1_--dtor$5.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000CF38 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?Find@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3@@Z @ 0x14008202C (-Find@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3.c)
 */

void __fastcall wil::details::lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___::_lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___(
        __int64 a1)
{
  __int64 *v1; // rax
  __int64 **v2; // r9

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = (__int64 *)ATL::CAtlList<CAPONode *,CAPONodeTraits>::Find(**(_QWORD **)a1, *(_QWORD *)(a1 + 8));
    ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt(v2, v1);
  }
}
