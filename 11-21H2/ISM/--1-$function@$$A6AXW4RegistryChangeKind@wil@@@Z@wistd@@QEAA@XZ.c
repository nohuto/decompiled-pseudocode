/*
 * XREFs of ??1?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ @ 0x18007B37C
 * Callers:
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18007C374 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     _wil::details_abi::RawUsageIndex::Iterate_::_1_::dtor$0 @ 0x18007C4B8 (_wil--details_abi--RawUsageIndex--Iterate_--_1_--dtor$0.c)
 *     ??1event_watcher_state@details@wil@@QEAA@XZ @ 0x1800B90E4 (--1event_watcher_state@details@wil@@QEAA@XZ.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800B9320 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     _MPCHeadUpdateListener::Initialize_::_1_::dtor$0 @ 0x1800B9414 (_MPCHeadUpdateListener--Initialize_--_1_--dtor$0.c)
 *     ??0RotationWatcher@@AEAA@XZ @ 0x1800FAE88 (--0RotationWatcher@@AEAA@XZ.c)
 *     _RotationWatcher::RotationWatcher_::_1_::dtor$3 @ 0x1800FB003 (_RotationWatcher--RotationWatcher_--_1_--dtor$3.c)
 *     ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x1800FB024 (--1-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ.c)
 *     ??1registry_watcher_state@details@wil@@QEAA@XZ @ 0x1801BDEE8 (--1registry_watcher_state@details@wil@@QEAA@XZ.c)
 *     _lambda_2ab80ba63dcc212dafbb4e4695138308_::operator() @ 0x1801BF058 (_lambda_2ab80ba63dcc212dafbb4e4695138308_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<void (enum wil::RegistryChangeKind)>::~function<void (enum wil::RegistryChangeKind)>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
