/*
 * XREFs of ?KsNotifications_ServiceStart@@YAJXZ @ 0x18005783C
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180058220 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x180028330 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 *     ??0?$CComQIPtr@UIPnpDeviceEnumerator@@$1?_GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800579FC (--0-$CComQIPtr@UIPnpDeviceEnumerator@@$1-_GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0@@3U__s_GUID@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 KsNotifications_ServiceStart(void)
{
  unsigned int i; // ebx
  __int64 v1; // rcx
  const unsigned __int16 *v2; // r8
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  LPVOID v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF
  struct IMMDevice *v8; // [rsp+68h] [rbp+20h] BYREF
  __int64 v9; // [rsp+70h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+78h] [rbp+30h] BYREF

  ATL::CComQIPtr<IPnpDeviceEnumerator,&__s_GUID const _GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0>::CComQIPtr<IPnpDeviceEnumerator,&__s_GUID const _GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0>(v6);
  v9 = 0LL;
  InitializeCriticalSection(&g_csKsNotificationMonitors);
  g_bKsNotificationLockInitialized = 1;
  if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6[0] + 32LL))(
         v6[0],
         &GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196,
         &v9) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 24LL))(v9, &v7) >= 0 )
  {
    for ( i = 0; i < v7; ++i )
    {
      v8 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v9 + 32LL))(v9, i, &v8) >= 0 )
      {
        v5 = 0LL;
        if ( ((int (__fastcall *)(struct IMMDevice *, LPVOID *))v8->lpVtbl->GetId)(v8, &v5) >= 0 )
        {
          v1 = 0LL;
          v4 = 0LL;
          if ( v8 )
          {
            ((void (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v8->lpVtbl->QueryInterface)(
              v8,
              &GUID_3ade56af_4375_4413_9c91_4c652595ab07,
              &v4);
            v1 = v4;
          }
          pv = 0LL;
          if ( v1 && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v1 + 32LL))(v1, &pv) >= 0 )
          {
            KsNotifications_ProcessPnpInterface(v8, (unsigned __int16 *)pv, v2);
            CoTaskMemFree(pv);
          }
          CoTaskMemFree(v5);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v4);
        }
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v8);
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v9);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v6);
  return 0LL;
}
