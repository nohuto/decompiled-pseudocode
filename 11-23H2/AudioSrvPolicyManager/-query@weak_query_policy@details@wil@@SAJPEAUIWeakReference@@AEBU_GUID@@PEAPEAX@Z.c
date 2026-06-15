/*
 * XREFs of ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180014C60
 * Callers:
 *     ?AsyncProcessTerminatedNotifications@CProcess@@IEAAXXZ @ 0x180025A84 (-AsyncProcessTerminatedNotifications@CProcess@@IEAAXXZ.c)
 *     ?FindReusableGroupingParam@CProcess@@UEAA?AU_GUID@@PEBU2@@Z @ 0x1800268D0 (-FindReusableGroupingParam@CProcess@@UEAA-AU_GUID@@PEBU2@@Z.c)
 *     ?ResetReusedSessionGroupingParams@CProcess@@IEAAXXZ @ 0x1800290DC (-ResetReusedSessionGroupingParams@CProcess@@IEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
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
