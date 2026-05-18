/*
 * XREFs of ??_GSpectreNode@@UEAAPEAXI@Z @ 0x180014BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1SpectreNode@@UEAA@XZ @ 0x180014B70 (--1SpectreNode@@UEAA@XZ.c)
 */

SpectreNode *__fastcall SpectreNode::`scalar deleting destructor'(SpectreNode *this, char a2)
{
  SpectreNode::~SpectreNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
