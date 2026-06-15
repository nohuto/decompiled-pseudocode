/*
 * XREFs of ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x1400046E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x14000471C (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

CStreamProcessNode *__fastcall CStreamProcessNode::`scalar deleting destructor'(CStreamProcessNode *this, char a2)
{
  CStreamProcessNode::~CStreamProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
