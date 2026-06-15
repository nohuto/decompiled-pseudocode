/*
 * XREFs of ??_ECConnectionNode@@UEAAPEAXI@Z @ 0x140010170
 * Callers:
 *     <none>
 * Callees:
 *     ??1CConnectionNode@@UEAA@XZ @ 0x1400101BC (--1CConnectionNode@@UEAA@XZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400129A0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x14002652C (-__global_delete@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
CConnectionNode *__fastcall CConnectionNode::`vector deleting destructor'(CConnectionNode *this, char a2)
{
  void *v4; // rax

  CConnectionNode::~CConnectionNode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0xA8uLL);
    }
    else
    {
      v4 = AERTGetDLLRTHeap();
      AERTFree(this, v4);
    }
  }
  return this;
}
