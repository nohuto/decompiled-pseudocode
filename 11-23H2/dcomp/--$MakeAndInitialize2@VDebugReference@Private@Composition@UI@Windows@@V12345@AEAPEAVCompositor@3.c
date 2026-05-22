/*
 * XREFs of ??$MakeAndInitialize2@VDebugReference@Private@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@AEAPEAVProxyObject@345@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugReference@Private@Composition@UI@Windows@@AEAPEAVCompositor@567@AEAPEAVProxyObject@567@@Z @ 0x180169B10
 * Callers:
 *     ?DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDebugAnimationCallback@Private@234@PEAUHSTRING__@@PEAPEAUIClosable@Foundation@4@@Z @ 0x18016B67C (-DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDe.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0DebugReference@Private@Composition@UI@Windows@@QEAA@XZ @ 0x18016A5E4 (--0DebugReference@Private@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VDebugReference@Private@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVDebugReference@Private@Composition@UI@Windows@@@Z @ 0x18016B520 (-Attach@-$ComPtr@VDebugReference@Private@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVDebugR.c)
 *     ?RuntimeClassInitialize@DebugReference@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVCompositionObject@345@@Z @ 0x18019FAFC (-RuntimeClassInitialize@DebugReference@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@P.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::DebugReference,Windows::UI::Composition::Private::DebugReference,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::ProxyObject * &>(
        Windows::UI::Composition::Private::DebugReference **a1,
        struct Windows::UI::Composition::Compositor **a2,
        struct Windows::UI::Composition::CompositionObject **a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::Private::DebugReference *v8; // rax
  Windows::UI::Composition::Private::DebugReference *v9; // rbx
  Windows::UI::Composition::Private::DebugReference *v10; // rcx
  Windows::UI::Composition::Private::DebugReference *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0x40uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::Private::DebugReference *)memset_0(v6, 0, 0x40uLL);
  if ( v8 )
    v8 = (Windows::UI::Composition::Private::DebugReference *)Windows::UI::Composition::Private::DebugReference::DebugReference(v8);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Private::DebugReference>::Attach(&v12, v8);
  v9 = v12;
  v13 = 0LL;
  v10 = v12;
  *((_QWORD *)v12 + 1) = &Windows::UI::Composition::Private::DebugReference::s_InterfaceType;
  v7 = Windows::UI::Composition::Private::DebugReference::RuntimeClassInitialize(v10, *a2, *a3);
  if ( v7 < 0 )
    goto LABEL_6;
  *a1 = v9;
  return 0LL;
}
