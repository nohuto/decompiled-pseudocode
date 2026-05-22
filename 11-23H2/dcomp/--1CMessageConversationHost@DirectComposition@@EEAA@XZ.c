/*
 * XREFs of ??1CMessageConversationHost@DirectComposition@@EEAA@XZ @ 0x18001CCA0
 * Callers:
 *     ??_GCMessageConversationHost@DirectComposition@@EEAAPEAXI@Z @ 0x18001CA00 (--_GCMessageConversationHost@DirectComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Destroy@CMessageConversationHost@DirectComposition@@QEAAXXZ @ 0x18001CC68 (-Destroy@CMessageConversationHost@DirectComposition@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall DirectComposition::CMessageConversationHost::~CMessageConversationHost(
        DirectComposition::CMessageConversationHost *this)
{
  *(_QWORD *)this = &DirectComposition::CMessageConversationHost::`vftable';
  DirectComposition::CMessageConversationHost::Destroy(this);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 40);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 32);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 24);
}
