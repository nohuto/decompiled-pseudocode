/*
 * XREFs of ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x1800543BC
 * Callers:
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x1800542B0 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ?CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x180054DD4 (-CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ?CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x180054E48 (-CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     _Windows::Mirage::HolographicDriverDetectedWatcher::CreateDetachWatcher_::_1_::dtor$0 @ 0x180065FCC (_Windows--Mirage--HolographicDriverDetectedWatcher--CreateDetachWatcher_--_1_--dtor$0.c)
 *     ??1event_watcher_state@details@wil@@QEAA@XZ @ 0x18009C57C (--1event_watcher_state@details@wil@@QEAA@XZ.c)
 *     ??1?$wnf_subscription_state@H@details@wil@@UEAA@XZ @ 0x180101664 (--1-$wnf_subscription_state@H@details@wil@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::function<void (int const &)>::~function<void (int const &)>(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
