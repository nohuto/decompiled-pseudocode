/*
 * XREFs of ??1VirtualTouchpadContextMessage@@QEAA@XZ @ 0x1800FA168
 * Callers:
 *     _VirtualTouchpadContextProvider::Broadcast_::_1_::dtor$1 @ 0x18019DC9A (_VirtualTouchpadContextProvider--Broadcast_--_1_--dtor$1.c)
 *     _VirtualTouchpadContextProvider::GetCurrentContext_::_1_::dtor$2 @ 0x18019DDB0 (_VirtualTouchpadContextProvider--GetCurrentContext_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VirtualTouchpadContextMessage::~VirtualTouchpadContextMessage(VirtualTouchpadContextMessage *this)
{
  std::vector<VirtualTouchpadRect>::_Tidy(this);
}
