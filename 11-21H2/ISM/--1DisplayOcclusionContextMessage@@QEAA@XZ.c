/*
 * XREFs of ??1DisplayOcclusionContextMessage@@QEAA@XZ @ 0x1800FA0E0
 * Callers:
 *     _DisplayOcclusionContextProvider::Broadcast_::_1_::dtor$1 @ 0x18019E8BF (_DisplayOcclusionContextProvider--Broadcast_--_1_--dtor$1.c)
 *     _DisplayOcclusionContextProvider::GetCurrentContext_::_1_::dtor$1 @ 0x18019EA30 (_DisplayOcclusionContextProvider--GetCurrentContext_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DisplayOcclusionContextMessage::~DisplayOcclusionContextMessage(DisplayOcclusionContextMessage *this)
{
  std::vector<DisplayOcclusionRect>::_Tidy(this);
}
