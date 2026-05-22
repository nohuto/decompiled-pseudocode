/*
 * XREFs of ??1CompositionProjectedShadow@Composition@UI@Windows@@UEAA@XZ @ 0x1800116C4
 * Callers:
 *     ??_GCompositionProjectedShadow@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180011680 (--_GCompositionProjectedShadow@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180006F18 (--$_Destroy_range@V-$allocator@V-$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Wind.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionProjectedShadow::~CompositionProjectedShadow(
        Windows::UI::Composition::CompositionProjectedShadow *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx
  __int64 v3; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v4; // rdi
  Microsoft::WRL2::NestableRuntimeClass **v5; // rsi

  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 30);
  if ( v2 )
  {
    *((_QWORD *)this + 30) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  v3 = *((_QWORD *)this + 27);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowReceiver>>>(
      v3,
      *((_QWORD *)this + 28));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 27),
      (*((_QWORD *)this + 29) - *((_QWORD *)this + 27)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
  }
  v4 = (Microsoft::WRL2::NestableRuntimeClass **)*((_QWORD *)this + 24);
  if ( v4 )
  {
    v5 = (Microsoft::WRL2::NestableRuntimeClass **)*((_QWORD *)this + 25);
    while ( v4 != v5 )
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v4++);
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 24),
      (*((_QWORD *)this + 26) - *((_QWORD *)this + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((Windows::UI::Composition::CompositionProjectedShadow *)((char *)this + 112));
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this);
}
