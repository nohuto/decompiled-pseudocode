/*
 * XREFs of ??0?$CComQIPtr@UIPnpDeviceEnumerator@@$1?_GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180057A0C
 * Callers:
 *     ?KsNotifications_ServiceStart@@YAJXZ @ 0x18005784C (-KsNotifications_ServiceStart@@YAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IPnpDeviceEnumerator,&__s_GUID const _GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0>::CComQIPtr<IPnpDeviceEnumerator,&__s_GUID const _GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0>(
        _QWORD *a1)
{
  struct IMMDeviceEnumerator *v2; // rcx

  v2 = g_DeviceEnumerator;
  *a1 = 0LL;
  if ( v2 )
    ((void (__fastcall *)(struct IMMDeviceEnumerator *, GUID *, _QWORD *))v2->lpVtbl->QueryInterface)(
      v2,
      &GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0,
      a1);
  return a1;
}
