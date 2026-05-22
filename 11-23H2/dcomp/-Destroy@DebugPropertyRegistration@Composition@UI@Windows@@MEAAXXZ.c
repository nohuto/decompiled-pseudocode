/*
 * XREFs of ?Destroy@DebugPropertyRegistration@Composition@UI@Windows@@MEAAXXZ @ 0x18019FB70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnDebugProperties2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAVDebugPropertyRegistration@234@@Z @ 0x18016EF30 (-UnDebugProperties2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEA.c)
 */

void __fastcall Windows::UI::Composition::DebugPropertyRegistration::Destroy(
        Windows::UI::Composition::DebugPropertyRegistration *this)
{
  Windows::UI::Composition::CompositorCommon **v2; // rdi
  Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rax
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(Windows::UI::Composition::CompositorCommon ***)(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL) + 8LL);
  if ( v2 )
  {
    AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(v2[3], 0);
    v4 = Windows::UI::Composition::AnimationLoggingManager::UnDebugProperties2(
           AnimationLoggingManager,
           (struct Windows::UI::Composition::ProxyObject *)v2,
           this);
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        70LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdebugpropertyregistration.cpp",
        (const char *)(unsigned int)v4,
        v5);
  }
  Microsoft::WRL2::ContextRuntimeClass::Destroy(this);
}
