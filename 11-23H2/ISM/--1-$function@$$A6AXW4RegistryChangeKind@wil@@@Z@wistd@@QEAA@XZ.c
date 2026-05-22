/*
 * XREFs of ??1?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ @ 0x1800921C8
 * Callers:
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x1800933A4 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     _wil::details_abi::RawUsageIndex::Iterate_::_1_::dtor$0 @ 0x1800934E8 (_wil--details_abi--RawUsageIndex--Iterate_--_1_--dtor$0.c)
 *     ??1event_watcher_state@details@wil@@QEAA@XZ @ 0x1800D1F98 (--1event_watcher_state@details@wil@@QEAA@XZ.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800D21E0 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     _MPCHeadUpdateListener::Initialize_::_1_::dtor$0 @ 0x1800D22D8 (_MPCHeadUpdateListener--Initialize_--_1_--dtor$0.c)
 *     ??0RotationWatcher@@AEAA@XZ @ 0x180116E88 (--0RotationWatcher@@AEAA@XZ.c)
 *     _RotationWatcher::RotationWatcher_::_1_::dtor$3 @ 0x180117007 (_RotationWatcher--RotationWatcher_--_1_--dtor$3.c)
 *     ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x18011701C (--1-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ.c)
 *     std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___ @ 0x1801DC1EC (std--call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___.c)
 *     ??1registry_watcher_state@details@wil@@QEAA@XZ @ 0x1801DC704 (--1registry_watcher_state@details@wil@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
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
