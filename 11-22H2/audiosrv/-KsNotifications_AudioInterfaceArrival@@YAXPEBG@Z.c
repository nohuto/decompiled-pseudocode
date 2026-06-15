/*
 * XREFs of ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x1800091F8
 * Callers:
 *     ?DeviceArrivalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180009150 (-DeviceArrivalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001D4A8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x180028330 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall KsNotifications_AudioInterfaceArrival(const unsigned __int16 *a1)
{
  __int64 v2; // rcx
  struct IUnknown *v3; // rcx
  const unsigned __int16 *v4; // r8
  __int64 v5[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IUnknown *v6; // [rsp+48h] [rbp+18h] BYREF
  LPVOID pv; // [rsp+50h] [rbp+20h] BYREF
  struct IUnknown *v8; // [rsp+58h] [rbp+28h] BYREF

  v2 = 0LL;
  v5[0] = 0LL;
  if ( g_DeviceEnumerator )
  {
    ((void (__fastcall *)(struct IMMDeviceEnumerator *, GUID *, __int64 *))g_DeviceEnumerator->lpVtbl->QueryInterface)(
      g_DeviceEnumerator,
      &GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0,
      v5);
    v2 = v5[0];
  }
  v8 = 0LL;
  v6 = 0LL;
  pv = 0LL;
  if ( v2 )
  {
    if ( (*(int (__fastcall **)(__int64, const unsigned __int16 *, struct IUnknown **))(*(_QWORD *)v2 + 40LL))(
           v2,
           a1,
           &v8) >= 0 )
    {
      v3 = v6;
      if ( v6 != v8 )
      {
        ATL::AtlComQIPtrAssign(&v6, v8, &GUID_d666063f_1587_4e43_81f1_b948e807363f);
        v3 = v6;
      }
      if ( v3 && ((int (__fastcall *)(struct IUnknown *, LPVOID *))v3->lpVtbl[1].Release)(v3, &pv) >= 0 )
        KsNotifications_ProcessPnpInterface((struct IMMDevice *)v6, a1, v4);
    }
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v6);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v8);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v5);
}
