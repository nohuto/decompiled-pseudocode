/*
 * XREFs of ??_ECBridgeSourceProcessNode@@UEAAPEAXI@Z @ 0x14005D1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x140022EBC (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

CBridgeSourceProcessNode *__fastcall CBridgeSourceProcessNode::`vector deleting destructor'(
        CBridgeSourceProcessNode *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CStreamProcessNode::~CStreamProcessNode(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
