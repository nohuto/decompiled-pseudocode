/*
 * XREFs of ??_ECAPONode@@UEAAPEAXI@Z @ 0x1400689F0
 * Callers:
 *     _lambda_89f25345d625e50d879fcb99a1803143_::operator() @ 0x1400108C0 (_lambda_89f25345d625e50d879fcb99a1803143_--operator().c)
 *     _CProcessingData::CopyAPOList_::_1_::catch$39 @ 0x140037EF0 (_CProcessingData--CopyAPOList_--_1_--catch$39.c)
 *     ??1?$CAutoPtr@VCAPONode@@@ATL@@QEAA@XZ @ 0x140068888 (--1-$CAutoPtr@VCAPONode@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??1CAPONode@@UEAA@XZ @ 0x14000EE00 (--1CAPONode@@UEAA@XZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400117E0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x14002E29C (-__global_delete@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
CAPONode *__fastcall CAPONode::`vector deleting destructor'(CAPONode *this, char a2)
{
  void *v4; // rax
  int v5; // r8d

  CAPONode::~CAPONode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this);
    }
    else
    {
      v4 = (void *)AERTGetDLLRTHeap();
      AERTFree(this, v4, v5);
    }
  }
  return this;
}
