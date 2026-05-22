/*
 * XREFs of ?RuntimeClassInitialize@RenderingDeviceReplacedEventArgs@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@@Z @ 0x1801964B8
 * Callers:
 *     ??$MakeAndInitialize2@VRenderingDeviceReplacedEventArgs@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@@Details@WRL2@Microsoft@@YAJPEAPEAVRenderingDeviceReplacedEventArgs@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@@Z @ 0x180156824 (--$MakeAndInitialize2@VRenderingDeviceReplacedEventArgs@Composition@UI@Windows@@V1234@PEAVCompos.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::RenderingDeviceReplacedEventArgs::RuntimeClassInitialize(
        Microsoft::WRL2::NestableRuntimeClass **this,
        struct Windows::UI::Composition::Compositor *a2,
        struct Windows::UI::Composition::CompositionGraphicsDevice *a3)
{
  int v5; // eax
  unsigned int v6; // esi
  Microsoft::WRL2::NestableRuntimeClass *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
         (Windows::UI::Composition::CompositionObject *)this,
         a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( this[18] != a3 )
    {
      if ( a3 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a3);
      v8 = this[18];
      this[18] = a3;
      if ( v8 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtrenderingdevicereplacedeventargs.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
