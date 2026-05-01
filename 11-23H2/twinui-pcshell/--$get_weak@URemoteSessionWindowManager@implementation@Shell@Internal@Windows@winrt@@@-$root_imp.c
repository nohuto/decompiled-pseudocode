/*
 * XREFs of ??$get_weak@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@?$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@IEAA?AU?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800DACA4
 * Callers:
 *     ?get_weak@?$implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@QEAA?AU?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800DAC84 (-get_weak@-$implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?SubsribeToTimeOutInfoChangedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1807231A4 (-SubsribeToTimeOutInfoChangedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?make_weak_ref@?$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800DA618 (-make_weak_ref@-$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windo.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteSessionWindowManager>::get_weak<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>(
        volatile signed __int64 *a1,
        _QWORD *a2)
{
  void *weak_ref; // rax
  int v4; // eax
  _QWORD pExceptionObject[4]; // [rsp+28h] [rbp-20h] BYREF
  void *v7; // [rsp+60h] [rbp+18h] BYREF

  weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteSessionWindowManager>::make_weak_ref(a1);
  if ( !weak_ref )
  {
    pExceptionObject[2] = 0LL;
    pExceptionObject[1] = "bad allocation";
    pExceptionObject[0] = &std::bad_alloc::`vftable';
    throw (std::bad_alloc *)pExceptionObject;
  }
  v7 = weak_ref;
  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(void *, _QWORD *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, a2);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v7);
  return a2;
}
