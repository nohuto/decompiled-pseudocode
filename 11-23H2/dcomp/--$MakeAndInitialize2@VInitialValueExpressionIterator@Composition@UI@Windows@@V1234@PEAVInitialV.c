/*
 * XREFs of ??$MakeAndInitialize2@VInitialValueExpressionIterator@Composition@UI@Windows@@V1234@PEAVInitialValueExpressionCollection@234@PEAV?$map@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@@std@@@Details@WRL2@Microsoft@@YAJPEAPEAVInitialValueExpressionIterator@Composition@UI@Windows@@$$QEAPEAVInitialValueExpressionCollection@456@$$QEAPEAV?$map@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@@std@@@Z @ 0x1801945B4
 * Callers:
 *     ?First@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Collections@Foundation@4@@Z @ 0x180194AF0 (-First@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAPEAU-$IIterator@PEAU-$IK.c)
 * Callees:
 *     ??0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ @ 0x180040E8C (--0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?RuntimeClassInitialize@InitialValueExpressionIterator@Composition@UI@Windows@@QEAAJPEAVInitialValueExpressionCollection@234@PEAV?$map@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@@std@@@Z @ 0x1801A2D5C (-RuntimeClassInitialize@InitialValueExpressionIterator@Composition@UI@Windows@@QEAAJPEAVInitialV.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InitialValueExpressionIterator,Windows::UI::Composition::InitialValueExpressionIterator,Windows::UI::Composition::InitialValueExpressionCollection *,std::map<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>> *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        __int64 *a2,
        __int64 *a3)
{
  void *v6; // rax
  int v7; // edi
  Microsoft::WRL2::NestableRuntimeClass *v8; // rax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0x58uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    return (unsigned int)v7;
  }
  v8 = (Microsoft::WRL2::NestableRuntimeClass *)memset_0(v6, 0, 0x58uLL);
  v9 = v8;
  if ( v8 )
  {
    Microsoft::WRL2::NestableRuntimeClass::NestableRuntimeClass(v8);
    *(_QWORD *)v9 = &Windows::UI::Composition::InitialValueExpressionIterator::`vftable';
    *((_QWORD *)v9 + 7) = 0LL;
    *((_QWORD *)v9 + 9) = 0LL;
    *((_QWORD *)v9 + 5) = &Windows::UI::Composition::InitialValueExpressionIterator::Api::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  v13 = 0LL;
  *((_QWORD *)v9 + 1) = &Windows::UI::Composition::InitialValueExpressionIterator::s_InterfaceType;
  v10 = *a3;
  v11 = *a2;
  v14 = v9;
  v7 = Windows::UI::Composition::InitialValueExpressionIterator::RuntimeClassInitialize(v9, v11, v10);
  if ( v7 < 0 )
    goto LABEL_7;
  *a1 = v9;
  return 0LL;
}
