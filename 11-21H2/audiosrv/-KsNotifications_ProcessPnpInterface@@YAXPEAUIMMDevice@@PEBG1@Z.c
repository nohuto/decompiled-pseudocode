/*
 * XREFs of ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x18004D900
 * Callers:
 *     ?KsNotifications_ServiceStart@@YAJXZ @ 0x18004D740 (-KsNotifications_ServiceStart@@YAJXZ.c)
 *     ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x180125020 (-KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x18004DAB0 (-KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V-$CCo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall KsNotifications_ProcessPnpInterface(
        struct IMMDevice *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  unsigned int i; // ebx
  __int64 v5; // rdx
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+38h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h] BYREF
  char v9; // [rsp+70h] [rbp+20h] BYREF
  const unsigned __int16 *v10; // [rsp+80h] [rbp+30h] BYREF
  __int64 v11; // [rsp+88h] [rbp+38h] BYREF

  v10 = a3;
  v11 = 0LL;
  if ( ((int (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
         a1,
         &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
         23LL) >= 0
    && (*(int (__fastcall **)(__int64, const unsigned __int16 **))(*(_QWORD *)v11 + 24LL))(v11, &v10) >= 0 )
  {
    for ( i = 0; i < (unsigned int)v10; ++i )
    {
      v6 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, i, &v6) >= 0
        && (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 24LL))(v6, &v9) >= 0 )
      {
        v7 = v11;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        v8 = v6;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        KsNotifications_CreateMonitor(a2, v5, &v8, &v7);
      }
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
}
