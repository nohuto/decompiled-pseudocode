/*
 * XREFs of ??1CDesktopManager@@EEAA@XZ @ 0x1800AF75C
 * Callers:
 *     ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x1800AFA60 (--_ECDesktopManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18005B7E0 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C73C (-InternalRelease@-$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_ptr@VCMicaEffectCache@@U?$default_delete@VCMicaEffectCache@@@std@@@std@@QEAA@XZ @ 0x180062998 (--1-$unique_ptr@VCMicaEffectCache@@U-$default_delete@VCMicaEffectCache@@@std@@@std@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z @ 0x180097908 (-Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z.c)
 *     ??1CAnimationClockCoordinator@@QEAA@XZ @ 0x1800A4880 (--1CAnimationClockCoordinator@@QEAA@XZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800A6B4C (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800A99C0 (-Shutdown@CCompositor@@IEAAXXZ.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x1800AA36C (--1CContactManager@@QEAA@XZ.c)
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800AFAD0 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800AFB40 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCTextCache@@UEAAPEAXI@Z @ 0x1800AFBB0 (--_GCTextCache@@UEAAPEAXI@Z.c)
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x1800AFC20 (--_ECWindowList@@UEAAPEAXI@Z.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800B119C (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 *     ??1CTransitionVisualController@@QEAA@XZ @ 0x1800E9B9C (--1CTransitionVisualController@@QEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x180107DA0 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDesktopManager::~CDesktopManager(CDesktopManager *this, __int64 a2)
{
  __int64 v3; // rsi
  CBaseObject **v4; // rdi
  struct WPF::HeapBase *v5; // rdi
  WPF *v6; // rcx
  void *v7; // r8
  struct WPF::HeapBase *v8; // rdi
  WPF *v9; // rcx
  void *v10; // r8
  struct WPF::HeapBase *v11; // rdi
  WPF *v12; // rcx
  void *v13; // r8
  struct WPF::HeapBase *v14; // rdi
  WPF *v15; // rcx
  void *v16; // r8
  CWindowList *v17; // rcx
  CBaseObject *v18; // rcx
  CTextCache *v19; // rcx
  CIconicBitmapRegistry *v20; // rcx
  CImmersiveIconicBitmapRegistry *v21; // rcx
  struct WPF::HeapBase *v22; // rdi
  WPF *v23; // rcx
  void *v24; // r8
  CCompositor *v25; // rcx
  CBaseObject *v26; // rcx
  __int64 v27; // rcx
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  CBaseObject *v30; // rcx
  CBaseObject **v31; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CDesktopManager::`vftable';
  v3 = *((unsigned int *)this + 132);
  if ( (_DWORD)v3 )
  {
    v31 = 0LL;
    DynArrayImpl<0>::DetachData((char *)this + 504, a2, &v31);
    if ( v31 )
    {
      v4 = v31;
      do
      {
        CBaseObject::Release(*v4++);
        --v3;
      }
      while ( v3 );
      (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v31);
    }
  }
  v5 = (struct WPF::HeapBase *)*((_QWORD *)this + 20);
  if ( v5 )
  {
    CAnimationClockCoordinator::~CAnimationClockCoordinator(*((CAnimationClockCoordinator **)this + 20));
    WPF::Free(v6, v5, v7);
    *((_QWORD *)this + 20) = 0LL;
  }
  v8 = (struct WPF::HeapBase *)*((_QWORD *)this + 22);
  if ( v8 )
  {
    CAnimationScheduler::~CAnimationScheduler(*((CAnimationScheduler **)this + 22));
    WPF::Free(v9, v8, v10);
    *((_QWORD *)this + 22) = 0LL;
  }
  v11 = (struct WPF::HeapBase *)*((_QWORD *)this + 23);
  if ( v11 )
  {
    CTransitionVisualController::~CTransitionVisualController(*((CTransitionVisualController **)this + 23));
    WPF::Free(v12, v11, v13);
    *((_QWORD *)this + 23) = 0LL;
  }
  v14 = (struct WPF::HeapBase *)*((_QWORD *)this + 19);
  if ( v14 )
  {
    CContactManager::~CContactManager(*((CContactManager **)this + 19));
    WPF::Free(v15, v14, v16);
    *((_QWORD *)this + 19) = 0LL;
  }
  v17 = (CWindowList *)*((_QWORD *)this + 52);
  if ( v17 )
  {
    CWindowList::`vector deleting destructor'(v17, 1u);
    *((_QWORD *)this + 52) = 0LL;
  }
  if ( *((_QWORD *)this + 56) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 56) = 0LL;
  }
  CDesktopManager::ReleaseDCompResources(this);
  v18 = (CBaseObject *)*((_QWORD *)this + 55);
  if ( v18 )
    CBaseObject::Release(v18);
  v19 = (CTextCache *)*((_QWORD *)this + 25);
  if ( v19 )
  {
    CTextCache::`scalar deleting destructor'(v19, 1u);
    *((_QWORD *)this + 25) = 0LL;
  }
  v20 = (CIconicBitmapRegistry *)*((_QWORD *)this + 28);
  if ( v20 )
  {
    CIconicBitmapRegistry::`vector deleting destructor'(v20, 1u);
    *((_QWORD *)this + 28) = 0LL;
  }
  v21 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)this + 29);
  if ( v21 )
  {
    CImmersiveIconicBitmapRegistry::`scalar deleting destructor'(v21, 1u);
    *((_QWORD *)this + 29) = 0LL;
  }
  v22 = (struct WPF::HeapBase *)*((_QWORD *)this + 27);
  if ( v22 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionLight>::InternalRelease(*((__int64 **)this + 27));
    WPF::Free(v23, v22, v24);
    *((_QWORD *)this + 27) = 0LL;
  }
  CDesktopManager::UnloadTheme(this);
  v25 = (CCompositor *)*((_QWORD *)this + 5);
  if ( v25 )
  {
    CCompositor::Shutdown(v25);
    v26 = (CBaseObject *)*((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = 0LL;
    if ( v26 )
      CBaseObject::Release(v26);
  }
  v27 = *((_QWORD *)this + 30);
  if ( v27 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    *((_QWORD *)this + 30) = 0LL;
  }
  CDesktopManager::s_pDesktopManagerInstance = 0LL;
  v28 = (CBaseObject *)*((_QWORD *)this + 95);
  if ( v28 )
    CBaseObject::Release(v28);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 89);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 63);
  std::unique_ptr<CMicaEffectCache>::~unique_ptr<CMicaEffectCache>((_QWORD *)this + 26);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 12);
  v29 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v29 )
    CBaseObject::Release(v29);
  v30 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v30 )
    CBaseObject::Release(v30);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
