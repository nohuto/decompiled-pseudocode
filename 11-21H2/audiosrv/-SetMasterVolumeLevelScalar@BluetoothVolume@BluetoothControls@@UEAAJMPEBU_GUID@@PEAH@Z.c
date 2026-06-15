/*
 * XREFs of ?SetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C7980
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006376C (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsApproximatelyAtScalarVolume@BluetoothVolume@BluetoothControls@@AEAA_NM@Z @ 0x1800C72DC (-IsApproximatelyAtScalarVolume@BluetoothVolume@BluetoothControls@@AEAA_NM@Z.c)
 *     ?WriteCachedControlValue@BluetoothVolume@BluetoothControls@@AEAAXM@Z @ 0x1800C7D08 (-WriteCachedControlValue@BluetoothVolume@BluetoothControls@@AEAAXM@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolume::SetMasterVolumeLevelScalar(
        BluetoothControls::BluetoothVolume *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  _QWORD *TargetedControl; // rax
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v11[2]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( BluetoothControls::BluetoothVolume::IsApproximatelyAtScalarVolume((RTL_SRWLOCK *)this, a2) )
  {
    if ( a4 )
      *a4 = 1;
  }
  else
  {
    TargetedControl = (_QWORD *)BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                                  (__int64)this,
                                  (__int64)v11);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, int *))(*(_QWORD *)*TargetedControl + 96LL))(
           *TargetedControl,
           v8,
           a3,
           a4);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v11);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B3,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
    BluetoothControls::BluetoothVolume::WriteCachedControlValue(this, a2);
  }
  return 0LL;
}
