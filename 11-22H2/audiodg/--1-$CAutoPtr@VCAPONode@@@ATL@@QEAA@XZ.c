/*
 * XREFs of ??1?$CAutoPtr@VCAPONode@@@ATL@@QEAA@XZ @ 0x140070930
 * Callers:
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x14001FED0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     __lambda_89f25345d625e50d879fcb99a1803143_::operator()_::_1_::dtor$5 @ 0x1400356FA (__lambda_89f25345d625e50d879fcb99a1803143_--operator()_--_1_--dtor$5.c)
 * Callees:
 *     ??_ECAPONode@@UEAAPEAXI@Z @ 0x140022050 (--_ECAPONode@@UEAAPEAXI@Z.c)
 */

CAPONode *__fastcall ATL::CAutoPtr<CAPONode>::~CAutoPtr<CAPONode>(CAPONode **a1)
{
  CAPONode *v2; // rcx
  CAPONode *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CAPONode::`vector deleting destructor'(v2, 1);
  *a1 = 0LL;
  return result;
}
