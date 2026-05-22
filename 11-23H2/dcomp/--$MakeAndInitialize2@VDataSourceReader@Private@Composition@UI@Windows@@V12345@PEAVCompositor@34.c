/*
 * XREFs of ??$MakeAndInitialize2@VDataSourceReader@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEA_KAEA_K@Details@WRL2@Microsoft@@YAJPEAPEAVDataSourceReader@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEA_K2@Z @ 0x180120C38
 * Callers:
 *     ?CreateDataSourceReader@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJ_K0PEAPEAUIDataSourceReader@Private@345@@Z @ 0x180125980 (-CreateDataSourceReader@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJ_K0PEAPEAUIData.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?RuntimeClassInitialize@DataSourceReader@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@_K1@Z @ 0x180184A20 (-RuntimeClassInitialize@DataSourceReader@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::DataSourceReader,Windows::UI::Composition::Private::DataSourceReader,Windows::UI::Composition::Compositor *,unsigned __int64 &,unsigned __int64 &>(
        Windows::UI::Composition::CompositionObject **a1,
        struct Windows::UI::Composition::Compositor **a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  void *v8; // rax
  int v9; // edi
  Windows::UI::Composition::CompositionObject *v10; // rax
  Windows::UI::Composition::CompositionObject *v11; // rbx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  struct Windows::UI::Composition::Compositor *v14; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+20h] [rbp-28h] BYREF
  void *v17; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v16 = 0LL;
  v8 = DefaultHeap::Alloc(0xB0uLL);
  v17 = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v17);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v16);
    return (unsigned int)v9;
  }
  v10 = (Windows::UI::Composition::CompositionObject *)memset_0(v8, 0, 0xB0uLL);
  v11 = v10;
  if ( v10 )
  {
    Windows::UI::Composition::CompositionObject::CompositionObject(v10);
    *(_QWORD *)v11 = &Windows::UI::Composition::Private::DataSourceReader::`vftable';
    *((_QWORD *)v11 + 19) = 0LL;
    *((_QWORD *)v11 + 20) = 0LL;
    *((_QWORD *)v11 + 21) = 0LL;
    *((_QWORD *)v11 + 17) = &Windows::UI::Composition::Private::DataSourceReader::Partner::`vftable';
  }
  else
  {
    v11 = 0LL;
  }
  v17 = 0LL;
  *((_QWORD *)v11 + 1) = &Windows::UI::Composition::Private::DataSourceReader::s_InterfaceType;
  v12 = *a4;
  v13 = *a3;
  v14 = *a2;
  v16 = v11;
  v9 = Windows::UI::Composition::Private::DataSourceReader::RuntimeClassInitialize(v11, v14, v13, v12);
  if ( v9 < 0 )
    goto LABEL_7;
  *a1 = v11;
  return 0LL;
}
