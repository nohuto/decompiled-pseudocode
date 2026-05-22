/*
 * XREFs of ?PostDestroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x18001C73C
 * Callers:
 *     ?PostDestroy@Compositor@Composition@UI@Windows@@MEAAXXZ @ 0x18001C650 (-PostDestroy@Compositor@Composition@UI@Windows@@MEAAXXZ.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ @ 0x18001C678 (--1AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Shutdown@BatchController@Composition@UI@Windows@@QEAAXXZ @ 0x18001C940 (-Shutdown@BatchController@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?Destroy@CMessageConversationHost@DirectComposition@@QEAAXXZ @ 0x18001CC68 (-Destroy@CMessageConversationHost@DirectComposition@@QEAAXXZ.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositorCommon::PostDestroy(
        Windows::UI::Composition::CompositorCommon *this)
{
  __int64 *v1; // rdi
  DirectComposition::CMessageConversationHost *v3; // rcx
  void *v4; // rdi
  Microsoft::WRL2::NestableRuntimeClass *v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 424);
  v3 = (DirectComposition::CMessageConversationHost *)*((_QWORD *)this + 53);
  if ( v3 )
  {
    DirectComposition::CMessageConversationHost::Destroy(v3);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v1);
  }
  v4 = (void *)*((_QWORD *)this + 104);
  if ( v4 )
  {
    Windows::UI::Composition::AnimationBindingManager::~AnimationBindingManager(*((PRTL_GENERIC_TABLE *)this + 104));
    operator delete(v4);
    *((_QWORD *)this + 104) = 0LL;
  }
  v5 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 105);
  if ( v5 )
  {
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
    *((_QWORD *)this + 105) = 0LL;
  }
  if ( *((_QWORD *)this + 134) )
  {
    v11 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 134);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
    *((_QWORD *)this + 134) = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 472);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 480);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 488);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 504);
  WindowsDeleteString(*((HSTRING *)this + 125));
  Windows::UI::Composition::BatchController::Shutdown((Windows::UI::Composition::CompositorCommon *)((char *)this + 608));
  Windows::UI::Composition::BatchController::Shutdown((Windows::UI::Composition::CompositorCommon *)((char *)this + 680));
  Windows::UI::Composition::BatchController::Shutdown((Windows::UI::Composition::CompositorCommon *)((char *)this + 752));
  v6 = *((_QWORD *)this + 57);
  if ( v6 )
  {
    DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(v6 + 96));
    if ( *(_DWORD *)(v6 + 144) )
    {
      do
        EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 104));
      while ( (*(_DWORD *)(v6 + 144))-- != 1 );
    }
    *(_QWORD *)(v6 + 96) = 0LL;
    *(_QWORD *)(v6 + 80) = 0LL;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 57) + 24LL))(*((_QWORD *)this + 57));
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 57);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 54);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 55);
  AcquireSRWLockExclusive(&Windows::UI::Composition::CompositorCommon::s_lockCompositors);
  dword_180220AF0 = GetCurrentThreadId();
  v7 = *((_QWORD *)this + 52);
  if ( Windows::UI::Composition::CompositorCommon::s_pFirstCompositorWeak == this )
    Windows::UI::Composition::CompositorCommon::s_pFirstCompositorWeak = (struct Windows::UI::Composition::Compositor *)*((_QWORD *)this + 52);
  v8 = *((_QWORD *)this + 51);
  if ( v8 )
    *(_QWORD *)(v8 + 416) = v7;
  v9 = *((_QWORD *)this + 52);
  if ( v9 )
    *(_QWORD *)(v9 + 408) = *((_QWORD *)this + 51);
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  dword_180220AF0 = 0;
  ReleaseSRWLockExclusive(&Windows::UI::Composition::CompositorCommon::s_lockCompositors);
  Microsoft::WRL2::ContextRuntimeClass::PostDestroy((Microsoft::WRL2::ContextRuntimeClass **)this);
}
