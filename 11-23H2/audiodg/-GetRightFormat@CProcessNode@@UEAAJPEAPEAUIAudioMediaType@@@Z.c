/*
 * XREFs of ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14001A350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessNode::GetRightFormat(CProcessNode *this, struct IAudioMediaType **a2)
{
  return ATL::CComPtrBase<IAudioMediaType>::CopyTo((char *)this + 16, a2);
}
