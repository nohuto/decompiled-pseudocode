/*
 * XREFs of ??1CPropertyPointerArray@@QEAA@XZ @ 0x140070B88
 * Callers:
 *     _CAPONode::CAPONode_::_1_::dtor$9 @ 0x1400352BD (_CAPONode--CAPONode_--_1_--dtor$9.c)
 *     _CAPONode::CAPONode_::_1_::dtor$10 @ 0x1400352D6 (_CAPONode--CAPONode_--_1_--dtor$10.c)
 *     _CAPONode::CAPONode_::_1_::dtor$11 @ 0x1400352EF (_CAPONode--CAPONode_--_1_--dtor$11.c)
 *     _CAPONode::CAPONode_::_1_::dtor$12 @ 0x140035308 (_CAPONode--CAPONode_--_1_--dtor$12.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CPropertyPointerArray::~CPropertyPointerArray(void **this)
{
  ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::~CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>(this);
}
