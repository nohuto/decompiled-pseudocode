/*
 * XREFs of ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x140022E80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x140022EBC (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

CStreamProcessNode *__fastcall CStreamProcessNode::`scalar deleting destructor'(CStreamProcessNode *this, char a2)
{
  CStreamProcessNode::~CStreamProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
