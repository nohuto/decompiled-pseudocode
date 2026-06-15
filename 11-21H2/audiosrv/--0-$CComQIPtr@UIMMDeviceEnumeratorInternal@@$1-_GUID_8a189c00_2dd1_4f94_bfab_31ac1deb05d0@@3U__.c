/*
 * XREFs of ??0?$CComQIPtr@UIMMDeviceEnumeratorInternal@@$1?_GUID_8a189c00_2dd1_4f94_bfab_31ac1deb05d0@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x18011FA9C
 * Callers:
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180123644 (-Start@CMonitor@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IMMDeviceEnumeratorInternal,&__s_GUID const _GUID_8a189c00_2dd1_4f94_bfab_31ac1deb05d0>::CComQIPtr<IMMDeviceEnumeratorInternal,&__s_GUID const _GUID_8a189c00_2dd1_4f94_bfab_31ac1deb05d0>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_8a189c00_2dd1_4f94_bfab_31ac1deb05d0, a1);
  return a1;
}
