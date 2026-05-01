/*
 * XREFs of ??0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1800FF9E0
 * Callers:
 *     ?s_CreateInstance@CRealmActivationHistory@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1801AD49C (-s_CreateInstance@CRealmActivationHistory@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUI.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800C9020 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z @ 0x1800FF6E8 (--0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CRealmActivationHistory *__fastcall CRealmActivationHistory::CRealmActivationHistory(
        CRealmActivationHistory *this,
        struct IImmersiveApplicationManagerInternal *a2)
{
  unsigned __int64 v4; // rdx
  _DWORD *v5; // r8
  __int64 v6; // rcx

  Microsoft::WRL::FtmBase::FtmBase(this);
  *((_QWORD *)this + 4) = &CWRLObjectWithGITSite::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 27) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>>'};
  *((_QWORD *)this + 9) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `IRealmActivationHistory'};
  *((_QWORD *)this + 10) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRealmActivationHistoryInternal>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  CObjectWithThreadUseDetection::CObjectWithThreadUseDetection((__int64)this + 112, 0);
  *(_QWORD *)this = &CRealmActivationHistory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>>'};
  *((_QWORD *)this + 9) = &CRealmActivationHistory::`vftable'{for `IRealmActivationHistory'};
  *((_QWORD *)this + 10) = &CRealmActivationHistory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRealmActivationHistoryInternal>'};
  *((_QWORD *)this + 50) = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 50);
  *((_QWORD *)this + 51) = 0LL;
  v4 = 0LL;
  v5 = (_DWORD *)((char *)this + 160);
  do
  {
    switch ( (_DWORD)v4 )
    {
      case 6:
        *v5 = 4;
        break;
      case 1:
      case 8:
        if ( (_DWORD)v4 == 1 )
          *v5 = 2;
        else
          *v5 = 1;
        break;
      case 0xD:
        *v5 = 8;
        break;
      case 0x13:
        *v5 = 16;
        break;
      default:
        *((_DWORD *)this + 3 * (int)v4 + 40) = 0;
        break;
    }
    v6 = 3LL * (int)v4;
    *((_DWORD *)this + v6 + 41) = 0;
    *((_DWORD *)this + v6 + 42) = 0;
    ++v4;
    v5 += 3;
  }
  while ( v4 < 0x14 );
  return this;
}
