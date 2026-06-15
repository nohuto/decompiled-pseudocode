/*
 * XREFs of ??_ECProcessNode@@UEAAPEAXI@Z @ 0x140025180
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProcessNode@@UEAA@XZ @ 0x140013838 (--1CProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

CProcessNode *__fastcall CProcessNode::`vector deleting destructor'(CProcessNode *this, char a2)
{
  CProcessNode::~CProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
