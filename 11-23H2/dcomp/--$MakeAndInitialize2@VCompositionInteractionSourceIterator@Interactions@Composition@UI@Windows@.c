/*
 * XREFs of ??$MakeAndInitialize2@VCompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@V12345@AEAPEAVCompositionInteractionSourceCollection@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@AEAPEAVCompositionInteractionSourceCollection@4567@@Z @ 0x18018FBCC
 * Callers:
 *     ?First@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAUICompositionInteractionSource@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x18018FF80 (-First@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAJPEAP.c)
 * Callees:
 *     ??0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ @ 0x180040E8C (--0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?RuntimeClassInitialize@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionInteractionSourceCollection@2345@@Z @ 0x1801A21D0 (-RuntimeClassInitialize@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Interactions::CompositionInteractionSourceIterator,Windows::UI::Composition::Interactions::CompositionInteractionSourceIterator,Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection * &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection **a2)
{
  void *v4; // rax
  int v5; // edi
  Microsoft::WRL2::NestableRuntimeClass *v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  struct Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection *v8; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0x48uLL);
  v10 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v10);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
    return (unsigned int)v5;
  }
  v6 = (Microsoft::WRL2::NestableRuntimeClass *)memset_0(v4, 0, 0x48uLL);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL2::NestableRuntimeClass::NestableRuntimeClass(v6);
    *(_QWORD *)v7 = &Windows::UI::Composition::Interactions::CompositionInteractionSourceIterator::`vftable';
    *((_QWORD *)v7 + 8) = 0LL;
    *((_QWORD *)v7 + 5) = &Windows::UI::Composition::Interactions::CompositionInteractionSourceIterator::Api::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  v10 = 0LL;
  *((_QWORD *)v7 + 1) = &Windows::UI::Composition::Interactions::CompositionInteractionSourceIterator::s_InterfaceType;
  v8 = *a2;
  v11 = v7;
  v5 = Windows::UI::Composition::Interactions::CompositionInteractionSourceIterator::RuntimeClassInitialize(v7, v8);
  if ( v5 < 0 )
    goto LABEL_7;
  *a1 = v7;
  return 0LL;
}
