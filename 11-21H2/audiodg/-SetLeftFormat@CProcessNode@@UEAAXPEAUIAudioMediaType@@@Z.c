/*
 * XREFs of ?SetLeftFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140012140
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x140007828 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400105A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

void __fastcall CProcessNode::SetLeftFormat(CProcessNode *this, struct IUnknown *a2)
{
  struct IUnknown **v2; // rsi

  v2 = (struct IUnknown **)((char *)this + 8);
  ATL::CComPtrBase<IAudioProcessingObject>::Release((_QWORD *)this + 1);
  ATL::CComPtrBase<IAudioProcessingObject>::Release((_QWORD *)this + 2);
  if ( *v2 != a2 )
    ATL::AtlComPtrAssign(v2, a2);
  if ( *((struct IUnknown **)this + 2) != a2 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 2, a2);
}
