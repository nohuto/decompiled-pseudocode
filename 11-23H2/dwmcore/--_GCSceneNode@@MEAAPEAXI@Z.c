/*
 * XREFs of ??_GCSceneNode@@MEAAPEAXI@Z @ 0x180250820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CSceneNode@@MEAA@XZ @ 0x18025074C (--1CSceneNode@@MEAA@XZ.c)
 */

CSceneNode *__fastcall CSceneNode::`scalar deleting destructor'(CSceneNode *this, char a2)
{
  CSceneNode::~CSceneNode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
