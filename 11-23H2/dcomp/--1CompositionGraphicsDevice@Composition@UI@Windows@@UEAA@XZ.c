/*
 * XREFs of ??1CompositionGraphicsDevice@Composition@UI@Windows@@UEAA@XZ @ 0x18008B924
 * Callers:
 *     ??_GCompositionGraphicsDevice@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18008B8E0 (--_GCompositionGraphicsDevice@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAA@XZ @ 0x18000C7E8 (--1-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windo.c)
 *     ?InternalRelease@?$ComPtr@VCSurfaceFactory@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x18003AB54 (-InternalRelease@-$ComPtr@VCSurfaceFactory@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionGraphicsDevice::~CompositionGraphicsDevice(
        Windows::UI::Composition::CompositionGraphicsDevice *this)
{
  void *v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = (void *)*((_QWORD *)this + 33);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 35) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
  }
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 32);
  if ( v3 )
  {
    *((_QWORD *)this + 32) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::~ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>((_QWORD *)this + 29);
  v4 = *((_QWORD *)this + 28);
  if ( v4 )
  {
    *((_QWORD *)this + 28) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<DirectComposition::CSurfaceFactory>::InternalRelease((DirectComposition::CSurfaceFactory **)this + 26);
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v5);
}
