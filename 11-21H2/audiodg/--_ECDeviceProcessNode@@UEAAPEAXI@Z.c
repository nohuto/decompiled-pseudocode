/*
 * XREFs of ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x140004860
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x14000491C (--1CDeviceProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

CDeviceProcessNode *__fastcall CDeviceProcessNode::`vector deleting destructor'(CDeviceProcessNode *this, char a2)
{
  CDeviceProcessNode::~CDeviceProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
