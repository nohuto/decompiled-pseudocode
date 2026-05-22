/*
 * XREFs of ??1CAtlasNode@DirectComposition@@QEAA@XZ @ 0x180027EE8
 * Callers:
 *     ?CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ @ 0x180027480 (-CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ.c)
 *     ??_GCAtlasNode@DirectComposition@@QEAAPEAXI@Z @ 0x180085A18 (--_GCAtlasNode@DirectComposition@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ??_GCAtlasNode@DirectComposition@@QEAAPEAXI@Z @ 0x180085A18 (--_GCAtlasNode@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CAtlasNode::~CAtlasNode(DirectComposition::CAtlasNode *this)
{
  __int64 v2; // rcx
  DirectComposition::CAtlasNode *v3; // rcx
  DirectComposition::CAtlasNode *v4; // rcx
  DirectComposition::CAtlasNode *v5; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v2);
  v3 = (DirectComposition::CAtlasNode *)*((_QWORD *)this + 3);
  if ( v3 )
    DirectComposition::CAtlasNode::`scalar deleting destructor'(v3, 1u);
  v4 = (DirectComposition::CAtlasNode *)*((_QWORD *)this + 4);
  if ( v4 )
    DirectComposition::CAtlasNode::`scalar deleting destructor'(v4, 1u);
  v5 = (DirectComposition::CAtlasNode *)*((_QWORD *)this + 5);
  if ( v5 )
    DirectComposition::CAtlasNode::`scalar deleting destructor'(v5, 1u);
}
