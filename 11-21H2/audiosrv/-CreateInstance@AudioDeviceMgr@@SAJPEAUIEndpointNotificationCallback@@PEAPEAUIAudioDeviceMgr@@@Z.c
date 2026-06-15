/*
 * XREFs of ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x18005C4C0
 * Callers:
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x18005A628 (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x18004B8A4 (-Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z.c)
 *     ??0AudioDeviceMgr@@IEAA@XZ @ 0x18004C0A4 (--0AudioDeviceMgr@@IEAA@XZ.c)
 *     ??1?$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ @ 0x18004C2F0 (--1-$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AudioDeviceMgr::CreateInstance(struct IUnknown *a1, struct IAudioDeviceMgr **a2)
{
  AudioDeviceMgr *v4; // rax
  AudioDeviceMgr *v5; // rdi
  int v6; // ebx
  int v7; // eax
  AudioDeviceMgr *v9; // [rsp+38h] [rbp+10h] BYREF
  AudioDeviceMgr *v10; // [rsp+40h] [rbp+18h]

  v9 = 0LL;
  if ( a2 )
  {
    *a2 = 0LL;
    v4 = (AudioDeviceMgr *)operator new(0xE8uLL);
    v10 = v4;
    if ( v4 )
      v5 = AudioDeviceMgr::AudioDeviceMgr(v4);
    else
      v5 = 0LL;
    v9 = v5;
    if ( v5 )
    {
      v6 = AudioDeviceMgr::Initialize(v5, a1);
      if ( v6 >= 0 )
      {
        v7 = (**(__int64 (__fastcall ***)(AudioDeviceMgr *, GUID *, struct IAudioDeviceMgr **))v5)(
               v5,
               &GUID_495a7fca_552f_402a_8e78_78bf3ea87971,
               a2);
        v6 = 0;
        if ( v7 < 0 )
          v6 = v7;
      }
    }
    else
    {
      v6 = -2147024882;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  ATL::CComPtrBase<PhoneTopology>::~CComPtrBase<PhoneTopology>((__int64 *)&v9);
  return (unsigned int)v6;
}
