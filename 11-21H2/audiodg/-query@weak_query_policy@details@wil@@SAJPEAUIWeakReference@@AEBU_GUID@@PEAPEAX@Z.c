/*
 * XREFs of ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x14006A2F4
 * Callers:
 *     ?OnNotify@CAPOEndpointNotificationsDelegator@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1400699E0 (-OnNotify@CAPOEndpointNotificationsDelegator@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@U_tagpropertykey@@@Z @ 0x14006A9B0 (-OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@UEAAJW4__MIDL___MIDL.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
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
