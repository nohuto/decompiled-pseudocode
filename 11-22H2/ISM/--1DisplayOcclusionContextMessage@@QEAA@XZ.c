/*
 * XREFs of ??1DisplayOcclusionContextMessage@@QEAA@XZ @ 0x180124140
 * Callers:
 *     _DisplayOcclusionContextProvider::Broadcast_::_1_::dtor$1 @ 0x1801CA445 (_DisplayOcclusionContextProvider--Broadcast_--_1_--dtor$1.c)
 *     _DisplayOcclusionContextProvider::GetCurrentContext_::_1_::dtor$1 @ 0x1801CA5C0 (_DisplayOcclusionContextProvider--GetCurrentContext_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DisplayOcclusionContextMessage::~DisplayOcclusionContextMessage(DisplayOcclusionContextMessage *this)
{
  std::vector<DisplayOcclusionRect>::_Tidy(this);
}
