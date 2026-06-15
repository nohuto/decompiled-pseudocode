/*
 * XREFs of ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000FF00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14000D878 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

void __fastcall CProcessNode::SetRightFormat(CProcessNode *this, struct IUnknown *a2)
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
