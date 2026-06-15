/*
 * XREFs of ?ShouldUseBluetoothControls@BluetoothControls@@YAJPEAUIMMDevice@@PEA_N@Z @ 0x18001F0D4
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18001ECEC (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall BluetoothControls::ShouldUseBluetoothControls(
        BluetoothControls *this,
        struct IMMDevice *a2,
        bool *a3)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  char v8; // al
  __int64 v10; // rax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)this;
  v14 = 0LL;
  v5 = (*(__int64 (__fastcall **)(BluetoothControls *, _QWORD, __int64 *))(v4 + 32))(this, 0LL, &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v5,
      (int)pvar[0]);
  }
  else
  {
    *(_OWORD *)pvar = 0LL;
    v12 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
           v14,
           &PKEY_Endpoint_CustomResourceManager,
           pvar);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v7,
        (int)pvar[0]);
      PropVariantClear(pvar);
    }
    else
    {
      if ( LOWORD(pvar[0]) != 72 )
        goto LABEL_4;
      v10 = *(_QWORD *)pvar[1] - BLUETOOTH_AUDIO_RESOURCE_MANAGER;
      if ( *(_QWORD *)pvar[1] == BLUETOOTH_AUDIO_RESOURCE_MANAGER )
        v10 = *((_QWORD *)pvar[1] + 1) + 0x12C28937D3A30176LL;
      if ( v10 )
LABEL_4:
        v8 = 0;
      else
        v8 = 1;
      LOBYTE(a2->lpVtbl) = v8;
      PropVariantClear(pvar);
      v6 = 0;
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
  return v6;
}
