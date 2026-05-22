/*
 * XREFs of ??$MakeAndInitialize2@VVisualUnorderedCollectionIterator@Composition@UI@Windows@@V1234@AEAPEAVAccessor@VisualUnorderedCollectionImpl@234@AEAPEAV6234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualUnorderedCollectionIterator@Composition@UI@Windows@@AEAPEAVAccessor@VisualUnorderedCollectionImpl@456@AEAPEAV8456@@Z @ 0x1801A1B98
 * Callers:
 *     ?First@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVVisual@Composition@UI@Windows@@@Collections@Foundation@5@@Z @ 0x1801A1D40 (-First@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJPEAPEAU-$IIterator@PEAVVisual@.c)
 * Callees:
 *     ??0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ @ 0x180040E8C (--0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?RuntimeClassInitialize@VisualUnorderedCollectionIterator@Composition@UI@Windows@@QEAAJPEAVAccessor@VisualUnorderedCollectionImpl@234@PEAV6234@@Z @ 0x1801A3B04 (-RuntimeClassInitialize@VisualUnorderedCollectionIterator@Composition@UI@Windows@@QEAAJPEAVAcces.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::VisualUnorderedCollectionIterator,Windows::UI::Composition::VisualUnorderedCollectionIterator,Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor * &,Windows::UI::Composition::VisualUnorderedCollectionImpl * &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor **a2,
        struct Windows::UI::Composition::VisualUnorderedCollectionImpl **a3)
{
  void *v6; // rax
  int v7; // edi
  Microsoft::WRL2::NestableRuntimeClass *v8; // rax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  struct Windows::UI::Composition::VisualUnorderedCollectionImpl *v10; // r8
  struct Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor *v11; // rdx
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0x50uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    return (unsigned int)v7;
  }
  v8 = (Microsoft::WRL2::NestableRuntimeClass *)memset_0(v6, 0, 0x50uLL);
  v9 = v8;
  if ( v8 )
  {
    Microsoft::WRL2::NestableRuntimeClass::NestableRuntimeClass(v8);
    *(_QWORD *)v9 = &Windows::UI::Composition::VisualUnorderedCollectionIterator::`vftable';
    *((_QWORD *)v9 + 5) = &Windows::UI::Composition::VisualUnorderedCollectionIterator::Api::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  v13 = 0LL;
  *((_QWORD *)v9 + 1) = &Windows::UI::Composition::VisualUnorderedCollectionIterator::s_InterfaceType;
  v10 = *a3;
  v11 = *a2;
  v14 = v9;
  v7 = Windows::UI::Composition::VisualUnorderedCollectionIterator::RuntimeClassInitialize(v9, v11, v10);
  if ( v7 < 0 )
    goto LABEL_7;
  *a1 = v9;
  return 0LL;
}
