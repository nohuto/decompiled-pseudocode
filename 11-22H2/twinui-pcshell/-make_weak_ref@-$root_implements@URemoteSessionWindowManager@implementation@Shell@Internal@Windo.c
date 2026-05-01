/*
 * XREFs of ?make_weak_ref@?$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800DA618
 * Callers:
 *     ?query_interface@?$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D72A0 (-query_interface@-$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Win.c)
 *     ??$get_weak@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@?$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@IEAA?AU?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800DACA4 (--$get_weak@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@-$root_imp.c)
 *     ?SubscribeToRemoteSessionExitRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180722FA0 (-SubscribeToRemoteSessionExitRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Inte.c)
 *     ?SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180723308 (-SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal.c)
 *     ?SubsribeToWaitOnLocalPCRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1807235FC (-SubsribeToWaitOnLocalPCRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x180392600 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

void *__fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteSessionWindowManager>::make_weak_ref(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx
  void *result; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 1);
  if ( v1 < 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v1 + 24), 1u);
    return (void *)(2 * v1 + 8);
  }
  else
  {
    result = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v4 = (unsigned __int64)result;
    if ( result )
    {
      v5 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
      v11 = v4;
      *(_QWORD *)(v4 + 8) = &winrt::impl::weak_source<0,1>::`vftable';
      *(_QWORD *)v4 = &winrt::impl::weak_ref<1,1>::`vftable';
      *(_QWORD *)(v4 + 16) = v5;
      *(_DWORD *)(v4 + 24) = v1;
      *(_DWORD *)(v4 + 28) = 1;
      v6 = (v4 >> 1) | 0x8000000000000000uLL;
      while ( 1 )
      {
        v8 = _InterlockedCompareExchange64(a1 + 1, v6, v1);
        v7 = v1 == v8;
        v1 = v8;
        if ( v7 )
          break;
        if ( v8 < 0 )
        {
          v9 = 2 * v8 + 8;
          winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref(
            &v11,
            (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(2 * v8 + 24), 1u));
          return (void *)v9;
        }
        _InterlockedExchange((volatile __int32 *)(v11 + 24), v8);
      }
      v10 = v11;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 24), 1u);
      return (void *)(v10 + 8);
    }
  }
  return result;
}
