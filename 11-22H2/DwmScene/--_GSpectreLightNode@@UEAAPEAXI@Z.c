/*
 * XREFs of ??_GSpectreLightNode@@UEAAPEAXI@Z @ 0x180018110
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1SpectreLightNode@@UEAA@XZ @ 0x180017AAC (--1SpectreLightNode@@UEAA@XZ.c)
 */

SpectreLightNode *__fastcall SpectreLightNode::`scalar deleting destructor'(SpectreLightNode *this, char a2)
{
  SpectreLightNode::~SpectreLightNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
