/*
 * XREFs of ?RuntimeClassInitialize@ManipulationTransform@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIDCompositionTransform@@@Z @ 0x18008226C
 * Callers:
 *     ??$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@AEAPEAUIDCompositionTransform@@@Details@WRL2@Microsoft@@YAJPEAPEAVManipulationTransform@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@AEAPEAUIDCompositionTransform@@@Z @ 0x180082180 (--$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVInteropCompositor.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::ManipulationTransform::RuntimeClassInitialize(
        Windows::UI::Composition::ManipulationTransform *this,
        struct Windows::UI::Composition::Compositor *a2,
        struct IDCompositionTransform *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rcx
  struct IDCompositionTransform *v10; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v5 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtmanipulationtransform.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v12 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(struct IDCompositionTransform *, GUID *, __int64 *))a3)(
           a3,
           &GUID_a06cd146_3f2c_4975_bd5c_7db1ec71f2dd,
           &v12);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtmanipulationtransform.cpp",
        (const char *)(unsigned int)v7);
    }
    else
    {
      if ( *((struct IDCompositionTransform **)this + 18) != a3 )
      {
        v10 = a3;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v10);
        v8 = *((_QWORD *)this + 18);
        *((_QWORD *)this + 18) = a3;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      v6 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v12);
  }
  return v6;
}
