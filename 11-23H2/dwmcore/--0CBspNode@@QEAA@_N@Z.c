/*
 * XREFs of ??0CBspNode@@QEAA@_N@Z @ 0x180259164
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x1801D7AB0 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18025939C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x180074924 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

CBspNode *__fastcall CBspNode::CBspNode(CBspNode *this, char a2)
{
  CMILRefCountImpl *v3; // rcx

  v3 = (CBspNode *)((char *)this + 8);
  *(_QWORD *)this = &CBspNode::`vftable';
  *(_DWORD *)v3 = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 56) = a2;
  CMILRefCountImpl::AddReference(v3);
  return this;
}
