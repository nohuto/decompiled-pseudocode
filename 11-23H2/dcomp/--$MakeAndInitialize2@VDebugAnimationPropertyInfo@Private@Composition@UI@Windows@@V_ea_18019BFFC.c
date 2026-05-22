/*
 * XREFs of ??$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVDebugReference@2345@HPEAUHSTRING__@@HPEAUIPropertyValue@Foundation@5@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVDebugReference@4567@$$QEAH$$QEAPEAUHSTRING__@@3$$QEAPEAUIPropertyValue@Foundation@7@@Z @ 0x18019BFFC
 * Callers:
 *     ?NotifyDirectSet@CompObjectDiagnosticsPrincipal@@QEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D92C (-NotifyDirectSet@CompObjectDiagnosticsPrincipal@@QEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$span@$.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0DebugAnimationPropertyInfo@Private@Composition@UI@Windows@@QEAA@XZ @ 0x18019C6F8 (--0DebugAnimationPropertyInfo@Private@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@@Z @ 0x18019D3C4 (-Attach@-$ComPtr@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@@WRL@Microsoft@@QEA.c)
 *     ?RuntimeClassInitializeWorker@DebugAnimationPropertyInfo@Private@Composition@UI@Windows@@IEAAJPEAVCompositor@345@PEAVDebugReference@2345@_KPEAUHSTRING__@@IPEAUIPropertyValue@Foundation@5@W4AnimationDebugPropertyInfoType@2345@@Z @ 0x1801A33A8 (-RuntimeClassInitializeWorker@DebugAnimationPropertyInfo@Private@Composition@UI@Windows@@IEAAJPE.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::DebugAnimationPropertyInfo,Windows::UI::Composition::Private::DebugAnimationPropertyInfo,Windows::UI::Composition::Compositor *,Windows::UI::Composition::Private::DebugReference *,int,HSTRING__ *,int,Windows::Foundation::IPropertyValue *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        _QWORD *a2,
        _QWORD *a3,
        int *a4,
        _QWORD *a5,
        _DWORD *a6,
        _QWORD *a7)
{
  void *v11; // rax
  int v12; // edi
  Windows::UI::Composition::Private::DebugAnimationPropertyInfo *v13; // rax
  Microsoft::WRL2::NestableRuntimeClass *v14; // rbx
  void *v16; // [rsp+40h] [rbp-28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v17; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v17 = 0LL;
  v11 = DefaultHeap::Alloc(0xC0uLL);
  v16 = v11;
  if ( !v11 )
  {
    v12 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v16);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v17);
    return (unsigned int)v12;
  }
  v13 = (Windows::UI::Composition::Private::DebugAnimationPropertyInfo *)memset_0(v11, 0, 0xC0uLL);
  if ( v13 )
    v13 = (Windows::UI::Composition::Private::DebugAnimationPropertyInfo *)Windows::UI::Composition::Private::DebugAnimationPropertyInfo::DebugAnimationPropertyInfo(v13);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Private::DebugAnimationPropertyInfo>::Attach(&v17, v13);
  v14 = v17;
  v16 = 0LL;
  *((_QWORD *)v17 + 1) = &Windows::UI::Composition::Private::DebugAnimationPropertyInfo::s_InterfaceType;
  v12 = Windows::UI::Composition::Private::DebugAnimationPropertyInfo::RuntimeClassInitializeWorker(
          v14,
          *a2,
          *a3,
          *a4,
          *a5,
          *a6,
          *a7);
  if ( v12 < 0 )
    goto LABEL_6;
  *a1 = v14;
  return 0LL;
}
