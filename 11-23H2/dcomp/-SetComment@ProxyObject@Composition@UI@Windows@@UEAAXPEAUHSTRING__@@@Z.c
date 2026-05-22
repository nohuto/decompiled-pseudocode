/*
 * XREFs of ?SetComment@ProxyObject@Composition@UI@Windows@@UEAAXPEAUHSTRING__@@@Z @ 0x180021F70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ?MarshalComment@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIPEBG@Z @ 0x1800220BC (-MarshalComment@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIPEBG@Z.c)
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::SetComment(
        Windows::UI::Composition::CompositorCommon **this,
        HSTRING a2)
{
  struct Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rax
  unsigned int v5; // ebx
  Windows::UI::Composition::AnimationLoggingManager *v6; // rdi
  const unsigned __int16 *StringRawBuffer; // rax

  CSparseStorage::SetReference(
    (CSparseStorage *)(this + 14),
    1u,
    a2,
    (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_HSTRING);
  if ( (*((unsigned __int8 (__fastcall **)(Windows::UI::Composition::CompositorCommon **))*this + 37))(this) )
  {
    AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(this[3], 1);
    v5 = *((_DWORD *)this + 32);
    v6 = AnimationLoggingManager;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    Windows::UI::Composition::AnimationLoggingManager::MarshalComment(v6, v5, StringRawBuffer);
  }
}
