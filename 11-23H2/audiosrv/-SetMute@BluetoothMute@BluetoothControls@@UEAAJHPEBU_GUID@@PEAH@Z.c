/*
 * XREFs of ?SetMute@BluetoothMute@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800F3D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180082628 (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800F4630 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall BluetoothControls::BluetoothMute::SetMute(
        RTL_SRWLOCK *this,
        unsigned int a2,
        const struct _GUID *a3,
        int *a4)
{
  RTL_SRWLOCK *v4; // rbx
  bool v9; // bp
  _QWORD *TargetedControl; // rax
  int v11; // esi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = this + 21;
  AcquireSRWLockShared(this + 21);
  v9 = !BYTE4(this[22].Ptr) || (a2 != 0) != (LODWORD(this[22].Ptr) != 0);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  if ( v9 )
  {
    TargetedControl = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                        (__int64)this,
                        &v14);
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *, int *))(*(_QWORD *)*TargetedControl + 72LL))(
            *TargetedControl,
            a2,
            a3,
            a4);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v14);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x230,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v11);
      return (unsigned int)v11;
    }
    AcquireSRWLockExclusive(v4);
    LODWORD(v14) = a2;
    BYTE4(v14) = 1;
    this[22].Ptr = v14;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  else if ( a4 )
  {
    *a4 = 1;
  }
  return 0LL;
}
