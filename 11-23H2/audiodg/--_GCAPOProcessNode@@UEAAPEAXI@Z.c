/*
 * XREFs of ??_GCAPOProcessNode@@UEAAPEAXI@Z @ 0x140017930
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAPOProcessNode@@UEAA@XZ @ 0x140017888 (--1CAPOProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

CAPOProcessNode *__fastcall CAPOProcessNode::`scalar deleting destructor'(CAPOProcessNode *this, unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CAPOProcessNode::~CAPOProcessNode(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
