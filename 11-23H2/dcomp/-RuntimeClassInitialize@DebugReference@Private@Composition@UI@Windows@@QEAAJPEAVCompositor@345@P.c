/*
 * XREFs of ?RuntimeClassInitialize@DebugReference@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVCompositionObject@345@@Z @ 0x18019FAFC
 * Callers:
 *     ??$MakeAndInitialize2@VDebugReference@Private@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@AEAPEAVProxyObject@345@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugReference@Private@Composition@UI@Windows@@AEAPEAVCompositor@567@AEAPEAVProxyObject@567@@Z @ 0x180169B10 (--$MakeAndInitialize2@VDebugReference@Private@Composition@UI@Windows@@V12345@AEAPEAVCompositor@3.c)
 *     ??$MakeAndInitialize2@VDebugReference@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAVProxyObject@345@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugReference@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAVProxyObject@567@@Z @ 0x180169BD0 (--$MakeAndInitialize2@VDebugReference@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z @ 0x180058910 (-RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z.c)
 *     ?GetWeakReferenceBase@CompositorCommon@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PEAPEAVCWeakReferenceBase@@@Z @ 0x18007E660 (-GetWeakReferenceBase@CompositorCommon@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PE.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::DebugReference::RuntimeClassInitialize(
        struct CWeakReferenceBase **this,
        struct Windows::UI::Composition::Compositor *a2,
        struct Windows::UI::Composition::CompositionObject *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = Microsoft::WRL2::ContextRuntimeClass::RuntimeClassInitialize((Microsoft::WRL2::ContextRuntimeClass *)this, a2);
  v7 = v6;
  if ( v6 >= 0 )
    return Windows::UI::Composition::CompositorCommon::GetWeakReferenceBase(a2, a3, this + 7);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3A,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdebugreference.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
