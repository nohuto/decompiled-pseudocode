/*
 * XREFs of ??$MakeAndInitialize2@VDebugPropertyRegistration@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVDebugReference@Private@234@V?$span@I$0?0@gsl@@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugPropertyRegistration@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVDebugReference@Private@456@$$QEAV?$span@I$0?0@gsl@@@Z @ 0x1801699E0
 * Callers:
 *     ?DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDebugAnimationCallback@Private@234@PEAUHSTRING__@@PEAPEAUIClosable@Foundation@4@@Z @ 0x18016B67C (-DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDe.c)
 * Callees:
 *     ??0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ @ 0x180040E8C (--0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180086BFC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ?RuntimeClassInitialize@DebugPropertyRegistration@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVDebugReference@Private@234@V?$span@$$CBI$0?0@gsl@@@Z @ 0x18019FBE0 (-RuntimeClassInitialize@DebugPropertyRegistration@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::DebugPropertyRegistration,Windows::UI::Composition::DebugPropertyRegistration,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::Private::DebugReference *,gsl::span<unsigned int,-1>>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  void *v8; // rax
  int v9; // edi
  Microsoft::WRL2::NestableRuntimeClass *v10; // rax
  Microsoft::WRL2::NestableRuntimeClass *v11; // rbx
  __int64 v12; // rdx
  gsl::details *v13; // rax
  gsl::details *v14; // rcx
  __int64 v15; // rax
  Microsoft::WRL2::NestableRuntimeClass *v17; // [rsp+20h] [rbp-38h] BYREF
  char v18[8]; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF
  void *v20; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v17 = 0LL;
  v8 = DefaultHeap::Alloc(0x48uLL);
  v20 = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_10:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v20);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v17);
    return (unsigned int)v9;
  }
  v10 = (Microsoft::WRL2::NestableRuntimeClass *)memset_0(v8, 0, 0x48uLL);
  v11 = v10;
  if ( v10 )
  {
    Microsoft::WRL2::NestableRuntimeClass::NestableRuntimeClass(v10);
    *(_QWORD *)v11 = &Windows::UI::Composition::DebugPropertyRegistration::`vftable';
    *((_QWORD *)v11 + 5) = 0LL;
    *((_QWORD *)v11 + 6) = 0LL;
    *((_QWORD *)v11 + 7) = 0LL;
    *((_QWORD *)v11 + 8) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v20 = 0LL;
  *((_QWORD *)v11 + 1) = &Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType;
  v12 = *a4;
  v17 = v11;
  v13 = gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v18, v12);
  v14 = (gsl::details *)a4[1];
  v19[1] = v14;
  v15 = *(_QWORD *)v13;
  v19[0] = v15;
  if ( v15 == -1 || !v14 && v15 )
  {
    gsl::details::terminate(v14);
    JUMPOUT(0x180169B07LL);
  }
  v9 = Windows::UI::Composition::DebugPropertyRegistration::RuntimeClassInitialize(v11, *a2, *a3, v19, v17);
  if ( v9 < 0 )
    goto LABEL_10;
  *a1 = v11;
  return 0LL;
}
