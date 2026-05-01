/*
 * XREFs of ??0GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x1800358A8
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VGameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180033D30 (-CreateInstance@-$SimpleClassFactory@VGameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
RTL_SRWLOCK *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::GameListEntryProxy(
        RTL_SRWLOCK *this)
{
  this[5].Ptr = &CFTMCrossProcBase::`vftable';
  this[6].Ptr = &CFTMCrossProcServer::`vftable'{for `IAgileObject'};
  this[7].Ptr = &CFTMCrossProcServer::`vftable'{for `IAgileObject'};
  LODWORD(this[9].Ptr) = 0;
  this[11].Ptr = 0LL;
  InitializeSRWLock(this + 10);
  this[14].Ptr = 0LL;
  this[15].Ptr = 0LL;
  this[17].Ptr = (PVOID)1;
  this->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::`vftable'{for `IInspectable'};
  this[1].Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>'};
  this[2].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::`vftable'{for `Windows::Gaming::Preview::GamesEnumeration::IGameListEntry'};
  this[3].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>'};
  this[5].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::`vftable'{for `Microsoft::WRL::Details::Selector<CFTMCrossProcBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CFTMCrossProcBase>,IRpcOptions>>'};
  this[6].Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `IAgileObject'};
  this[7].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFastRundown>'};
  this[12].Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRpcOptions>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CFTMCrossProcBase>,IRpcOptions>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  this->Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `IInspectable'};
  this[1].Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>'};
  this[2].Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `Windows::Gaming::Preview::GamesEnumeration::IGameListEntry'};
  this[3].Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>'};
  this[5].Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `Microsoft::WRL::Details::Selector<CFTMCrossProcBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CFTMCrossProcBase>,IRpcOptions>>'};
  this[6].Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `IAgileObject'};
  this[7].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFastRundown>'};
  this[12].Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRpcOptions>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CFTMCrossProcBase>,IRpcOptions>>'};
  return this;
}
