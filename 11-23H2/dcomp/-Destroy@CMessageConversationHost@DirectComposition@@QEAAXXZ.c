/*
 * XREFs of ?Destroy@CMessageConversationHost@DirectComposition@@QEAAXXZ @ 0x18001CC68
 * Callers:
 *     ?PostDestroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x18001C73C (-PostDestroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ.c)
 *     ??1CMessageConversationHost@DirectComposition@@EEAA@XZ @ 0x18001CCA0 (--1CMessageConversationHost@DirectComposition@@EEAA@XZ.c)
 *     ?Create@CMessageConversationHost@DirectComposition@@SAJPEAVCDevice@2@_NP6AJPEBX22I@ZPEAXPEAPEAV12@@Z @ 0x18001D760 (-Create@CMessageConversationHost@DirectComposition@@SAJPEAVCDevice@2@_NP6AJPEBX22I@ZPEAXPEAPEAV1.c)
 *     ??1CDevice@DirectComposition@@QEAA@XZ @ 0x18005E2D8 (--1CDevice@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall DirectComposition::CMessageConversationHost::Destroy(DirectComposition::CMessageConversationHost *this)
{
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 40);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 32);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 24);
  *((_QWORD *)this + 2) = 0LL;
}
