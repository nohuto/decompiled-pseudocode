/*
 * XREFs of ??_ECAPOEndpointProcessNode@@UEAAPEAXI@Z @ 0x14005A530
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x14005A4B0 (--1CAPOEndpointProcessNode@@UEAA@XZ.c)
 */

CAPOEndpointProcessNode *__fastcall CAPOEndpointProcessNode::`vector deleting destructor'(
        CAPOEndpointProcessNode *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CAPOEndpointProcessNode::~CAPOEndpointProcessNode(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
