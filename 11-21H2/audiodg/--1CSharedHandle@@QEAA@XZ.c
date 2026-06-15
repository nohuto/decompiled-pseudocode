/*
 * XREFs of ??1CSharedHandle@@QEAA@XZ @ 0x14006893C
 * Callers:
 *     _CConnectionNode::CConnectionNode_::_1_::dtor$1 @ 0x140036F41 (_CConnectionNode--CConnectionNode_--_1_--dtor$1.c)
 *     _CProcessingData::CopyEndpointList_::_1_::dtor$2 @ 0x140037346 (_CProcessingData--CopyEndpointList_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CSharedHandle::~CSharedHandle(CSharedHandle *this)
{
  CSharedHandle::Release(this);
}
