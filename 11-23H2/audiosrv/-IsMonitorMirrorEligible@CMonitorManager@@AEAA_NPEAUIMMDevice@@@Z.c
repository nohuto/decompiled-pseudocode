/*
 * XREFs of ?IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x180004DA4
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180007204 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ @ 0x18012DD50 (-OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall CMonitorManager::IsMonitorMirrorEligible(CMonitorManager *this, struct IMMDevice *a2)
{
  bool v2; // bl
  struct IMMDeviceVtbl *lpVtbl; // rax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-10h]
  __int64 v7; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  v7 = 0LL;
  if ( a2 )
  {
    *(_OWORD *)pvar = 0LL;
    v6 = 0LL;
    lpVtbl = a2->lpVtbl;
    v7 = 0LL;
    if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))lpVtbl->OpenPropertyStore)(a2, 0LL, &v7) >= 0
      && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
           v7,
           &PKEY_MonitorMirrorEligible,
           pvar) >= 0
      && LOWORD(pvar[0]) == 11 )
    {
      v2 = LOWORD(pvar[1]) == 0xFFFF;
    }
    PropVariantClear(pvar);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
  return v2;
}
