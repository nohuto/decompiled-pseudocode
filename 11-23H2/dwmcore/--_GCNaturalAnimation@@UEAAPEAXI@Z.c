/*
 * XREFs of ??_GCNaturalAnimation@@UEAAPEAXI@Z @ 0x1801C2E60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CNaturalAnimation@@UEAA@XZ @ 0x18023B954 (--1CNaturalAnimation@@UEAA@XZ.c)
 */

CNaturalAnimation *__fastcall CNaturalAnimation::`scalar deleting destructor'(CNaturalAnimation *this, char a2)
{
  CNaturalAnimation::~CNaturalAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
