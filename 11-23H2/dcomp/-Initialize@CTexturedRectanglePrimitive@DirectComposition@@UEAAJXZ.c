/*
 * XREFs of ?Initialize@CTexturedRectanglePrimitive@DirectComposition@@UEAAJXZ @ 0x18000CD60
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CPrimitive@DirectComposition@@MEAAJXZ @ 0x18003B4F0 (-Initialize@CPrimitive@DirectComposition@@MEAAJXZ.c)
 *     ?AddListener@CDirtyNotifier@DirectComposition@@QEAAJPEAVCDirtyListener@2@@Z @ 0x18003B508 (-AddListener@CDirtyNotifier@DirectComposition@@QEAAJPEAVCDirtyListener@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CTexturedRectanglePrimitive::Initialize(
        DirectComposition::CTexturedRectanglePrimitive *this)
{
  __int64 result; // rax

  result = DirectComposition::CPrimitive::Initialize(this);
  if ( (int)result >= 0 )
    return DirectComposition::CDirtyNotifier::AddListener(
             (DirectComposition::CDirtyNotifier *)(*((_QWORD *)this + 29) + 56LL),
             (struct DirectComposition::CDirtyListener *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL)));
  return result;
}
