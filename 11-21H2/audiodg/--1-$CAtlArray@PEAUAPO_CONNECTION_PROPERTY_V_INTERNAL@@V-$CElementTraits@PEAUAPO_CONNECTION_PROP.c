/*
 * XREFs of ??1?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAA@XZ @ 0x140068864
 * Callers:
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$2 @ 0x1400374D0 (_CAudioProcessor--ActivateAPO_--_1_--dtor$2.c)
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$3 @ 0x1400374F0 (_CAudioProcessor--ActivateAPO_--_1_--dtor$3.c)
 *     _CAPONode::CAPONode_::_1_::dtor$5 @ 0x140037820 (_CAPONode--CAPONode_--_1_--dtor$5.c)
 *     _CAPONode::CAPONode_::_1_::dtor$6 @ 0x140037840 (_CAPONode--CAPONode_--_1_--dtor$6.c)
 *     _CAPONode::CAPONode_::_1_::dtor$7 @ 0x140037860 (_CAPONode--CAPONode_--_1_--dtor$7.c)
 *     _CAPONode::CAPONode_::_1_::dtor$8 @ 0x140037880 (_CAPONode--CAPONode_--_1_--dtor$8.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$22 @ 0x140037DF0 (_CProcessingData--CopyAPOList_--_1_--dtor$22.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$23 @ 0x140037E10 (_CProcessingData--CopyAPOList_--_1_--dtor$23.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$24 @ 0x140037E30 (_CProcessingData--CopyAPOList_--_1_--dtor$24.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$25 @ 0x140037E50 (_CProcessingData--CopyAPOList_--_1_--dtor$25.c)
 *     ??1CPropertyPointerArray@@QEAA@XZ @ 0x140068930 (--1CPropertyPointerArray@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::~CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    free(v1);
}
