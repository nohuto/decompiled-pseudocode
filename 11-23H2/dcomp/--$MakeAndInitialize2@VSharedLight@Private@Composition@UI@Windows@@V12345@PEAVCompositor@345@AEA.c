/*
 * XREFs of ??$MakeAndInitialize2@VSharedLight@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVSharedLight@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAX@Z @ 0x180007888
 * Callers:
 *     ?OpenSharedLightFromHandle@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUISharedLight@Private@345@@Z @ 0x1800077F0 (-OpenSharedLightFromHandle@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z @ 0x18005C110 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z.c)
 *     ??0CompositionLight@Composition@UI@Windows@@QEAA@XZ @ 0x1800856B8 (--0CompositionLight@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::SharedLight,Windows::UI::Composition::Private::SharedLight,Windows::UI::Composition::Compositor *,void * &>(
        Windows::UI::Composition::CompositionLight **a1,
        struct Windows::UI::Composition::Compositor **a2,
        void **a3)
{
  void *v6; // rax
  Windows::UI::Composition::CompositionLight *v7; // rax
  Windows::UI::Composition::CompositionLight *v8; // rbx
  void *v9; // r9
  struct Windows::UI::Composition::Compositor *v10; // rdx
  int v11; // eax
  unsigned int v12; // esi
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v17; // [rsp+50h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositionLight *v18; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v18 = 0LL;
  v6 = DefaultHeap::Alloc(0x118uLL);
  v17 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::CompositionLight *)memset_0(v6, 0, 0x118uLL);
    v8 = v7;
    if ( v7 )
    {
      Windows::UI::Composition::CompositionLight::CompositionLight(v7);
      *(_QWORD *)v8 = &Windows::UI::Composition::Private::SharedLight::`vftable'{for `Windows::UI::Composition::ProxyObject'};
      *((_QWORD *)v8 + 17) = &Windows::UI::Composition::Private::SharedLight::`vftable'{for `Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor'};
      *((_QWORD *)v8 + 33) = &Windows::UI::Composition::Private::SharedLight::Partner::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    v17 = 0LL;
    *((_QWORD *)v8 + 1) = &Windows::UI::Composition::Private::SharedLight::s_InterfaceType;
    v9 = *a3;
    v10 = *a2;
    v18 = v8;
    v11 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(v8, v10, 0x24u, v9, 0);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionlight.cpp",
        (const char *)(unsigned int)v11,
        v14);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedlight.cpp",
        (const char *)v12,
        v15);
      Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v17);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v18);
      return v12;
    }
    else
    {
      *((_BYTE *)v8 + 257) = 1;
      result = 0LL;
      *a1 = v8;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v17);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v18);
    return 2147942414LL;
  }
  return result;
}
