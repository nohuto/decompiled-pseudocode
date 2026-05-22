/*
 * XREFs of ??1VirtualTouchpadContextMessage@@QEAA@XZ @ 0x180116158
 * Callers:
 *     _VirtualTouchpadContextProvider::Broadcast_::_1_::dtor$1 @ 0x1801BBF08 (_VirtualTouchpadContextProvider--Broadcast_--_1_--dtor$1.c)
 *     _VirtualTouchpadContextProvider::GetCurrentContext_::_1_::dtor$2 @ 0x1801BC02F (_VirtualTouchpadContextProvider--GetCurrentContext_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VirtualTouchpadContextMessage::~VirtualTouchpadContextMessage(VirtualTouchpadContextMessage *this)
{
  std::vector<VirtualTouchpadRect>::_Tidy(this);
}
