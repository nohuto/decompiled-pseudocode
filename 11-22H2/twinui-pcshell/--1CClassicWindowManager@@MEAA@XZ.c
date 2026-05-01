/*
 * XREFs of ??1CClassicWindowManager@@MEAA@XZ @ 0x180028E38
 * Callers:
 *     ??_GCClassicWindowManager@@MEAAPEAXI@Z @ 0x180073450 (--_GCClassicWindowManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800FFD58 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 */

void __fastcall CClassicWindowManager::~CClassicWindowManager(CClassicWindowManager *this)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 i; // rsi
  unsigned __int64 *v4; // rdi
  unsigned __int64 j; // rsi

  *(_QWORD *)this = &CClassicWindowManager::`vftable';
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>>'};
  *((_QWORD *)this + 9) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>>'};
  *((_QWORD *)this + 10) = &CClassicWindowManager::`vftable'{for `IApplicationActivationHistory'};
  *((_QWORD *)this + 11) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>'};
  *((_QWORD *)this + 12) = &CClassicWindowManager::`vftable'{for `IClassicWindowPresentation'};
  *((_QWORD *)this + 13) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>'};
  *((_QWORD *)this + 14) = &CClassicWindowManager::`vftable'{for `ITaskListChangeListener'};
  *((_QWORD *)this + 15) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowOwnershipQuery>'};
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((char *)this + 280);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((char *)this + 272);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((char *)this + 264);
  *((_QWORD *)this + 28) = &CClassicWindowActivationBasedCollection::`vftable';
  v2 = (unsigned __int64 *)((char *)this + 240);
  if ( *((_QWORD *)this + 29) )
  {
    for ( i = 0LL; i < *v2; ++i )
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(*((_QWORD *)this + 29) + 8 * i);
    CoTaskMemFree(*((LPVOID *)this + 29));
    *((_QWORD *)this + 29) = 0LL;
  }
  *v2 = 0LL;
  v4 = (unsigned __int64 *)((char *)this + 200);
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 23) = &CClassicWindowActivationBasedCollection::`vftable';
  if ( *((_QWORD *)this + 24) )
  {
    for ( j = 0LL; j < *v4; ++j )
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(*((_QWORD *)this + 24) + 8 * j);
    CoTaskMemFree(*((LPVOID *)this + 24));
    *((_QWORD *)this + 24) = 0LL;
  }
  *v4 = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  *((_DWORD *)this + 33) = -1073741823;
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CClassicWindowManager *)((char *)this + 32));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((char *)this + 24);
}
