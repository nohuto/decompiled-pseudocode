/*
 * XREFs of ??_GCBspNode@@EEAAPEAXI@Z @ 0x180259250
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CBspNode@@EEAA@XZ @ 0x1802591A8 (--1CBspNode@@EEAA@XZ.c)
 */

CBspNode *__fastcall CBspNode::`scalar deleting destructor'(CBspNode *this, char a2)
{
  CBspNode::~CBspNode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
