/*
 * XREFs of ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140011150
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14000D878 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

void __fastcall CAPOProcessNode::SetRightFormat(CAPOProcessNode *this, struct IUnknown *a2)
{
  struct IUnknown **v2; // rbx

  v2 = (struct IUnknown **)((char *)this + 16);
  ATL::CComPtrBase<IAudioProcessingObject>::Release((_QWORD *)this + 2);
  if ( *v2 != a2 )
    ATL::AtlComPtrAssign(v2, a2);
}
