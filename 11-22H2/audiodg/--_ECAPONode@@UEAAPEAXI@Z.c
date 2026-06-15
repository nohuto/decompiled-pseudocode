/*
 * XREFs of ??_ECAPONode@@UEAAPEAXI@Z @ 0x140022050
 * Callers:
 *     _lambda_89f25345d625e50d879fcb99a1803143_::operator() @ 0x140011F68 (_lambda_89f25345d625e50d879fcb99a1803143_--operator().c)
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x14001FED0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     _CProcessingData::CopyAPOList_::_1_::catch$2 @ 0x14003578B (_CProcessingData--CopyAPOList_--_1_--catch$2.c)
 *     ??1?$CAutoPtr@VCAPONode@@@ATL@@QEAA@XZ @ 0x140070930 (--1-$CAutoPtr@VCAPONode@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ??1CAPONode@@UEAA@XZ @ 0x1400128A4 (--1CAPONode@@UEAA@XZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400129A0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x14002652C (-__global_delete@@YAXPEAX_K@Z.c)
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
      __global_delete(this, 0x158uLL);
    }
    else
    {
      v4 = (void *)AERTGetDLLRTHeap();
      AERTFree(this, v4, v5);
    }
  }
  return this;
}
