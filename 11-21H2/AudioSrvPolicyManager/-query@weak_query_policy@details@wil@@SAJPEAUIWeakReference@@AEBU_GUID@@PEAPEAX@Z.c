/*
 * XREFs of ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18001DE58
 * Callers:
 *     ?DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ @ 0x1800168E0 (-DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ.c)
 *     ?FindReusableGroupingParam@CProcess@@UEAA?AU_GUID@@PEBU2@@Z @ 0x180016DE0 (-FindReusableGroupingParam@CProcess@@UEAA-AU_GUID@@PEBU2@@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180019830 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?SetApplicationHandlesGroupingParams@CProcess@@UEAAXXZ @ 0x18001BE20 (-SetApplicationHandlesGroupingParams@CProcess@@UEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_::_Do_call @ 0x18001D390 (std--_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_--_Do_call.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::weak_query_policy::query(struct IWeakReference *a1, const struct _GUID *a2, void **a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IWeakReference *, GUID *, __int64 *))a1->lpVtbl->Resolve)(
         a1,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v7);
  if ( v5 >= 0 )
  {
    if ( !v7 )
      return 2147943568LL;
    v5 = (**(__int64 (__fastcall ***)(__int64, const struct _GUID *, void **))v7)(v7, a2, a3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v5;
}
