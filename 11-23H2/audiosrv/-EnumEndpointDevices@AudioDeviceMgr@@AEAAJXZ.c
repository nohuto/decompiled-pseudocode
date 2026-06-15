/*
 * XREFs of ?EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ @ 0x18005B690
 * Callers:
 *     ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x18005AB64 (-Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180026AD0 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::EnumEndpointDevices(AudioDeviceMgr *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v7; // [rsp+50h] [rbp+20h] BYREF
  struct IMMDevice *v8; // [rsp+58h] [rbp+28h] BYREF
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF

  v2 = 0;
  v9 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 5) + 24LL))(
         *((_QWORD *)this + 5),
         2LL,
         9LL,
         &v9);
  if ( v3 < 0 || (v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 24LL))(v9, &v7), v3 < 0) )
  {
    v2 = v3;
  }
  else
  {
    v4 = 0;
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = 0LL;
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v9 + 32LL))(v9, v4, &v8);
        if ( v5 < 0 )
          break;
        AudioDeviceMgr::AddEndpointDevice(this, v8, 0LL);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v8);
        if ( ++v4 >= v7 )
          goto LABEL_6;
      }
      v2 = v5;
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v8);
    }
  }
LABEL_6:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v9);
  return v2;
}
