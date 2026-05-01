/*
 * XREFs of ?CheckAndRaiseEvent@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXI@Z @ 0x18027E24C
 * Callers:
 *     ?ProcessEndedCallback@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAXE@Z @ 0x18027E5C0 (-ProcessEndedCallback@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAXE@Z.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$?RUProcessTracker@implementation@Shell@Internal@Windows@winrt@@I@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUProcessTracker@implementation@Shell@Internal@Windows@1@AEBI@Z @ 0x18027D31C (--$-RUProcessTracker@implementation@Shell@Internal@Windows@winrt@@I@-$event@U-$EventHandler@I@Fo.c)
 *     ??$ProviderProcessTrackingStopped@AEAIIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAI$$QEAPEBG@Z @ 0x18027D474 (--$ProviderProcessTrackingStopped@AEAIIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAI$$QEAPEBG@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x18027D830 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIV-$unique_ptr@UProces.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@1@AEBI@Z @ 0x18027D904 (--$find@X@-$_Hash@V-$_Umap_traits@IV-$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shel.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x180711904 (-GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstrin.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::ProcessTracker::CheckAndRaiseEvent(
        RTL_SRWLOCK *this,
        int a2)
{
  char v3; // di
  winrt::hstring *CorrelationId; // rax
  RTL_SRWLOCK *v5[3]; // [rsp+20h] [rbp-18h] BYREF
  PVOID v6; // [rsp+60h] [rbp+28h] BYREF
  int v7; // [rsp+68h] [rbp+30h] BYREF
  const unsigned __int16 *v8; // [rsp+70h] [rbp+38h] BYREF
  void *v9; // [rsp+78h] [rbp+40h] BYREF

  v7 = a2;
  v3 = 0;
  wil::srwlock::lock_exclusive(this + 3, v5);
  std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>>,0>>::find<void>(
    &this[4].Ptr,
    &v6,
    (const unsigned __int8 *)&v7);
  if ( v6 != this[5].Ptr )
  {
    std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>>>>,0>(
      &this[4].Ptr,
      &v6,
      (__int64)v6);
    CorrelationId = (winrt::hstring *)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                                        &v9,
                                        &c_bootSystemId);
    v8 = winrt::hstring::c_str(CorrelationId);
    LODWORD(v6) = this[6].Ptr;
    CloudPCTelemetry::ProviderProcessTrackingStopped<unsigned int &,unsigned int,unsigned short const *>(
      &v7,
      &v6,
      (__int64 *)&v8);
    winrt::hstring::~hstring(&v9);
    v3 = 1;
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v5);
  if ( v3 )
    winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::operator()<winrt::Windows::Internal::Shell::implementation::ProcessTracker,unsigned int>(
      (__int64)&this[12],
      (__int64)this,
      (__int64)&v7);
}
