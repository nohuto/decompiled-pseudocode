/*
 * XREFs of ??1VirtualTouchpadContextMessage@@QEAA@XZ @ 0x1801241C8
 * Callers:
 *     _VirtualTouchpadContextProvider::Broadcast_::_1_::dtor$1 @ 0x1801C97A8 (_VirtualTouchpadContextProvider--Broadcast_--_1_--dtor$1.c)
 *     _VirtualTouchpadContextProvider::GetCurrentContext_::_1_::dtor$2 @ 0x1801C98CB (_VirtualTouchpadContextProvider--GetCurrentContext_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VirtualTouchpadContextMessage::~VirtualTouchpadContextMessage(VirtualTouchpadContextMessage *this)
{
  std::vector<VirtualTouchpadRect>::_Tidy(this);
}
