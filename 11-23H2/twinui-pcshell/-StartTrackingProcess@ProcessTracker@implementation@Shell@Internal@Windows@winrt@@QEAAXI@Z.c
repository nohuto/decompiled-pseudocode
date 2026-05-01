/*
 * XREFs of ?StartTrackingProcess@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x18027E708
 * Callers:
 *     ?StartTrackingProcess@?$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@3456@@impl@winrt@@UEAAHI@Z @ 0x18027E6B0 (-StartTrackingProcess@-$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIP.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$ProviderProcessTrackingStarted@AEAIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAPEBG@Z @ 0x18027D3E8 (--$ProviderProcessTrackingStarted@AEAIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAPEBG@Z.c)
 *     ??$emplace@AEAIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@1@@Z @ 0x18027D67C (--$emplace@AEAIV-$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@w.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@1@AEBI@Z @ 0x18027D904 (--$find@X@-$_Hash@V-$_Umap_traits@IV-$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shel.c)
 *     ??1?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18027DFC0 (--1-$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U-$defa.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?UnregisterWait@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAPEAPEAXXZ @ 0x18027EF40 (-put@-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-UnregisterWait.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x180711904 (-GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstrin.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::ProcessTracker::StartTrackingProcess(
        RTL_SRWLOCK *this,
        DWORD a2)
{
  float *v3; // rsi
  char *v4; // rdi
  HANDLE v5; // rax
  void *v6; // rbx
  void **v7; // rax
  const char *v8; // r9
  winrt::hstring *CorrelationId; // rax
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo *v13; // [rsp+90h] [rbp+38h] BYREF
  DWORD v14; // [rsp+98h] [rbp+40h] BYREF
  const unsigned __int16 *v15; // [rsp+A0h] [rbp+48h] BYREF
  void *v16; // [rsp+A8h] [rbp+50h] BYREF

  v14 = a2;
  v3 = (float *)&this[4];
  wil::srwlock::lock_exclusive(this + 3, &v10);
  std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>>,0>>::find<void>(
    v3,
    &v13,
    (const unsigned __int8 *)&v14);
  if ( v13 == *((winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo **)v3 + 1) )
  {
    v4 = (char *)operator new(0x18uLL);
    *((_DWORD *)v4 + 1) = 0;
    *(_DWORD *)v4 = 0;
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    v13 = (winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo *)v4;
    v5 = OpenProcess(0x100000u, 0, a2);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)v4 + 1,
      v5);
    *(_DWORD *)v4 = a2;
    v6 = (void *)*((_QWORD *)v4 + 1);
    if ( v6 )
    {
      v7 = (void **)wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int UnregisterWait(void *)>>>::put(v4 + 16);
      if ( RegisterWaitForSingleObject(
             v7,
             v6,
             (WAITORTIMERCALLBACK)winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessEndedCallback,
             v4,
             0xFFFFFFFF,
             8u) )
      {
        std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>>,0>>::emplace<unsigned int &,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>(
          v3,
          (__int64)v11,
          (unsigned __int8 *)&v14,
          (__int64 *)&v13);
        CorrelationId = (winrt::hstring *)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                                            &v16,
                                            &c_bootSystemId);
        v15 = winrt::hstring::c_str(CorrelationId);
        CloudPCTelemetry::ProviderProcessTrackingStarted<unsigned int &,unsigned short const *>(&v14, (__int64 *)&v15);
        winrt::hstring::~hstring(&v16);
      }
      else
      {
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x2D,
          (unsigned int)"pcshell\\twinui\\cloudpc\\lib\\processtracker.cpp",
          v8);
      }
    }
    std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>::~unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>(&v13);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
}
