/*
 * XREFs of ??$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVCompositionSkyBoxBrush@Private@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform3D@Composition@UI@Windows@@$$QEAPEAVCompositionSkyBoxBrush@Private@456@@Z @ 0x180180CF8
 * Callers:
 *     ?RuntimeClassInitialize@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x180181124 (-RuntimeClassInitialize@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@QEAAJPEAVComposit.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ComponentTransform3D@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@@Z @ 0x18005A7E0 (-RuntimeClassInitialize@ComponentTransform3D@Composition@UI@Windows@@QEAAJPEAVCompositionObject@.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?Attach@?$ComPtr@VComponentTransform3D@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVComponentTransform3D@Composition@UI@Windows@@@Z @ 0x18010ADC0 (-Attach@-$ComPtr@VComponentTransform3D@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVComponen.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ComponentTransform3D,Windows::UI::Composition::ComponentTransform3D,Windows::UI::Composition::Private::CompositionSkyBoxBrush *>(
        Windows::UI::Composition::ComponentTransform3D **a1,
        struct Windows::UI::Composition::CompositionObject **a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::Composition::CompositionObject *v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  Windows::UI::Composition::ComponentTransform3D *v8; // rbx
  Windows::UI::Composition::ComponentTransform3D *v9; // rcx
  Windows::UI::Composition::ComponentTransform3D *v11; // [rsp+30h] [rbp+8h] BYREF
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0x120uLL);
  v12 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
    return (unsigned int)v5;
  }
  v6 = (Windows::UI::Composition::CompositionObject *)memset_0(v4, 0, 0x120uLL);
  v7 = v6;
  if ( v6 )
  {
    Windows::UI::Composition::CompositionObject::CompositionObject(v6);
    *(_QWORD *)v7 = &Windows::UI::Composition::ComponentTransform3D::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ComponentTransform3D>::Attach(&v11, v7);
  v8 = v11;
  v12 = 0LL;
  v9 = v11;
  *((_QWORD *)v11 + 1) = &Windows::UI::Composition::CompositionObject::s_InterfaceType;
  v5 = Windows::UI::Composition::ComponentTransform3D::RuntimeClassInitialize(v9, *a2);
  if ( v5 < 0 )
    goto LABEL_7;
  *a1 = v8;
  return 0LL;
}
