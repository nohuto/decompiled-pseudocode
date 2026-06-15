/*
 * XREFs of ??1CPropertyPointerArray@@QEAA@XZ @ 0x140068930
 * Callers:
 *     _CAPONode::CAPONode_::_1_::dtor$9 @ 0x1400378A0 (_CAPONode--CAPONode_--_1_--dtor$9.c)
 *     _CAPONode::CAPONode_::_1_::dtor$10 @ 0x1400378C0 (_CAPONode--CAPONode_--_1_--dtor$10.c)
 *     _CAPONode::CAPONode_::_1_::dtor$11 @ 0x1400378E0 (_CAPONode--CAPONode_--_1_--dtor$11.c)
 *     _CAPONode::CAPONode_::_1_::dtor$12 @ 0x140037900 (_CAPONode--CAPONode_--_1_--dtor$12.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$26 @ 0x140037E70 (_CProcessingData--CopyAPOList_--_1_--dtor$26.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$27 @ 0x140037E90 (_CProcessingData--CopyAPOList_--_1_--dtor$27.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$28 @ 0x140037EB0 (_CProcessingData--CopyAPOList_--_1_--dtor$28.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$29 @ 0x140037ED0 (_CProcessingData--CopyAPOList_--_1_--dtor$29.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CPropertyPointerArray::~CPropertyPointerArray(void **this)
{
  ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::~CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>(this);
}
