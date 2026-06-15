/*
 * XREFs of ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x180028330
 * Callers:
 *     ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x1800091F8 (-KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z.c)
 *     ?KsNotifications_ServiceStart@@YAJXZ @ 0x18005783C (-KsNotifications_ServiceStart@@YAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x18002849C (-KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V-$CCo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall KsNotifications_ProcessPnpInterface(
        struct IMMDevice *a1,
        unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  unsigned int i; // ebx
  _QWORD v5[4]; // [rsp+30h] [rbp-20h] BYREF
  char v6; // [rsp+70h] [rbp+20h] BYREF
  const unsigned __int16 *v7; // [rsp+80h] [rbp+30h] BYREF
  __int64 v8; // [rsp+88h] [rbp+38h] BYREF

  v7 = a3;
  v8 = 0LL;
  if ( ((int (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
         a1,
         &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
         23LL) >= 0
    && (*(int (__fastcall **)(__int64, const unsigned __int16 **))(*(_QWORD *)v8 + 24LL))(v8, &v7) >= 0 )
  {
    for ( i = 0; i < (unsigned int)v7; ++i )
    {
      v5[0] = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v8 + 32LL))(v8, i, v5) >= 0
        && (*(int (__fastcall **)(_QWORD, char *))(*(_QWORD *)v5[0] + 24LL))(v5[0], &v6) >= 0 )
      {
        v5[1] = v8;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        v5[2] = v5[0];
        if ( v5[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5[0] + 8LL))(v5[0]);
        KsNotifications_CreateMonitor(a2);
      }
      if ( v5[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5[0] + 16LL))(v5[0]);
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v8);
}
