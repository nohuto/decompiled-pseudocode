/*
 * XREFs of ?ProcessDestroyed@?$consume_Windows_Internal_Shell_IProcessTracker@UIProcessTracker@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIProcessTracker@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIProcessTracker@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFA@AA@23@Uauto_revoke_t@3@AEBU?$EventHandler@I@Foundation@Windows@3@@Z @ 0x18027C248
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1800DA6BC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 * Callees:
 *     ??$?0AEBUIProcessTracker@Shell@Internal@Windows@winrt@@X@?$weak_ref@UIProcessTracker@Shell@Internal@Windows@winrt@@@winrt@@QEAA@AEBUIProcessTracker@Shell@Internal@Windows@1@@Z @ 0x18027A120 (--$-0AEBUIProcessTracker@Shell@Internal@Windows@winrt@@X@-$weak_ref@UIProcessTracker@Shell@Inter.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 *__fastcall winrt::impl::consume_Windows_Internal_Shell_IProcessTracker<winrt::Windows::Internal::Shell::IProcessTracker>::ProcessDestroyed(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // eax
  __int64 v7; // rbx
  __int64 *result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[9])(*a1, *a4, &v9);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  v7 = v9;
  winrt::weak_ref<winrt::Windows::Internal::Shell::IProcessTracker>::weak_ref<winrt::Windows::Internal::Shell::IProcessTracker>(
    a2,
    a1);
  result = a2;
  a2[1] = v7;
  return result;
}
