/*
 * XREFs of ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x180125020
 * Callers:
 *     ?DeviceArrivalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800C3560 (-DeviceArrivalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800462C0 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ??0?$CComQIPtr@UIPnpDeviceEnumerator@@$1?_GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x18004B618 (--0-$CComQIPtr@UIPnpDeviceEnumerator@@$1-_GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0@@3U__s_GUID@.c)
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x18004D900 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall KsNotifications_AudioInterfaceArrival(const unsigned __int16 *a1)
{
  struct IUnknown *v2; // rcx
  const unsigned __int16 *v3; // r8
  __int64 v4[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IUnknown *v5; // [rsp+48h] [rbp+18h] BYREF
  LPVOID pv; // [rsp+50h] [rbp+20h] BYREF
  struct IUnknown *v7; // [rsp+58h] [rbp+28h] BYREF

  ATL::CComQIPtr<IPnpDeviceEnumerator,&__s_GUID const _GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0>::CComQIPtr<IPnpDeviceEnumerator,&__s_GUID const _GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0>(v4);
  v7 = 0LL;
  v5 = 0LL;
  pv = 0LL;
  if ( v4[0] )
  {
    if ( (*(int (__fastcall **)(__int64, const unsigned __int16 *, struct IUnknown **))(*(_QWORD *)v4[0] + 40LL))(
           v4[0],
           a1,
           &v7) >= 0 )
    {
      v2 = v5;
      if ( v5 != v7 )
      {
        ATL::AtlComQIPtrAssign(&v5, v7, &GUID_d666063f_1587_4e43_81f1_b948e807363f);
        v2 = v5;
      }
      if ( v2 && ((int (__fastcall *)(struct IUnknown *, LPVOID *))v2->lpVtbl[1].Release)(v2, &pv) >= 0 )
        KsNotifications_ProcessPnpInterface((struct IMMDevice *)v5, a1, v3);
    }
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v5);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v7);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v4);
}
