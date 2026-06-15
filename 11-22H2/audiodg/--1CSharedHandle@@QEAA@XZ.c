/*
 * XREFs of ??1CSharedHandle@@QEAA@XZ @ 0x140070B94
 * Callers:
 *     _CConnectionNode::CConnectionNode_::_1_::dtor$1 @ 0x140034EE7 (_CConnectionNode--CConnectionNode_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CSharedHandle::~CSharedHandle(CSharedHandle *this)
{
  CSharedHandle::Release(this);
}
