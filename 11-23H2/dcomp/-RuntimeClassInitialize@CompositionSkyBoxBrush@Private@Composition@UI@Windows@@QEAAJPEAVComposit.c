/*
 * XREFs of ?RuntimeClassInitialize@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x180181124
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionSkyBoxBrush@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSkyBoxBrush@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180120684 (--$MakeAndInitialize2@VCompositionSkyBoxBrush@Private@Composition@UI@Windows@@V12345@PEAVComposi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ??$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVCompositionSkyBoxBrush@Private@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform3D@Composition@UI@Windows@@$$QEAPEAVCompositionSkyBoxBrush@Private@456@@Z @ 0x180180CF8 (--$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVCompositionSkyBoxB.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::RuntimeClassInitialize(
        Windows::UI::Composition::Private::CompositionSkyBoxBrush *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v3; // edi
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::CompositionObject *v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 40, 0);
  if ( v3 < 0 )
  {
    v4 = 65LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionskyboxbrush.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  *((_WORD *)this + 88) = 16128;
  *((_DWORD *)this + 48) = 1120403456;
  v7 = this;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ComponentTransform3D,Windows::UI::Composition::ComponentTransform3D,Windows::UI::Composition::Private::CompositionSkyBoxBrush *>(
         (Windows::UI::Composition::ComponentTransform3D **)this + 25,
         &v7);
  if ( v3 < 0 )
  {
    v4 = 73LL;
    goto LABEL_3;
  }
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    5,
    *(_DWORD *)(*((_QWORD *)this + 25) + 128LL));
  return 0LL;
}
