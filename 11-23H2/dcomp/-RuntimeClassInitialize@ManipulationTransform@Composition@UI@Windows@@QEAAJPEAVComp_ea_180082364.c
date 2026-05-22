/*
 * XREFs of ?RuntimeClassInitialize@ManipulationTransform@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z @ 0x180082364
 * Callers:
 *     ??$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVManipulationTransform@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x180081FA4 (--$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVCompositor@234@AE.c)
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
        void *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, void *, GUID *, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v6 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtmanipulationtransform.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
    v8 = *((_QWORD *)a2 + 57);
    v16 = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)(v8 + 16) + 232LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v16);
    v10 = v9(v8 + 16, a3, &GUID_a06cd146_3f2c_4975_bd5c_7db1ec71f2dd, &v16);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtmanipulationtransform.cpp",
        (const char *)(unsigned int)v10);
    }
    else
    {
      v11 = v16;
      v14[0] = v16;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v14);
      v12 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v11;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v16);
  }
  return v7;
}
