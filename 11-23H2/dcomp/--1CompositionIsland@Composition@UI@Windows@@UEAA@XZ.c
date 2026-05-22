/*
 * XREFs of ??1CompositionIsland@Composition@UI@Windows@@UEAA@XZ @ 0x18000C708
 * Callers:
 *     ??1VisualTreeIsland@Composition@UI@Windows@@UEAA@XZ @ 0x18000C6B4 (--1VisualTreeIsland@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??_ECompositionIsland@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18010E410 (--_ECompositionIsland@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAA@XZ @ 0x18000C7E8 (--1-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windo.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionIsland::~CompositionIsland(
        Windows::UI::Composition::CompositionIsland *this)
{
  __int64 v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v5; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v6; // rcx

  v2 = *((_QWORD *)this + 58);
  if ( v2 )
  {
    *((_QWORD *)this + 58) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 448);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 440);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 416);
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::~ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>((char *)this + 392);
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 47);
  if ( v3 )
  {
    *((_QWORD *)this + 47) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  v4 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 46);
  if ( v4 )
  {
    *((_QWORD *)this + 46) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::~ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>((char *)this + 264);
  v5 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 32);
  if ( v5 )
  {
    *((_QWORD *)this + 32) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
  }
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::~ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>((char *)this + 232);
  v6 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 27);
  if ( v6 )
  {
    *((_QWORD *)this + 27) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
  }
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::~ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>((char *)this + 192);
  CSparseStorage::~CSparseStorage((Windows::UI::Composition::CompositionIsland *)((char *)this + 112));
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this);
}
