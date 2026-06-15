/*
 * XREFs of ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x180063CBC
 * Callers:
 *     ?Initialize@AudioSessionManagerProvider@@YAJXZ @ 0x180057C3C (-Initialize@AudioSessionManagerProvider@@YAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ @ 0x180026530 (--1-$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180028BA8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x18004371C (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x180059170 (-CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z.c)
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x180063D94 (--0PhoneCallAudio@@IEAA@XZ.c)
 *     ?CreateInstance@PhoneCallEndTimer@@SAJPEAVPhoneCallAudio@@PEAVCComAutoCriticalSection@ATL@@PEAPEAV1@@Z @ 0x180063E50 (-CreateInstance@PhoneCallEndTimer@@SAJPEAVPhoneCallAudio@@PEAVCComAutoCriticalSection@ATL@@PEAPE.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneCallAudio::CreateInstance(struct ITelephonyControl **a1)
{
  unsigned int v2; // ebx
  struct ITelephonyControl *v3; // rbp
  PhoneCallAudio *v4; // rax
  PhoneCallAudio *v5; // rdi
  int Instance; // eax
  struct IUnknown *v8; // [rsp+40h] [rbp+8h] BYREF
  PhoneCallAudio *v9; // [rsp+48h] [rbp+10h] BYREF
  PhoneCallAudio *v10; // [rsp+50h] [rbp+18h]

  v2 = 0;
  v9 = 0LL;
  v3 = 0LL;
  v8 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v4 = (PhoneCallAudio *)operator new(0xA0uLL);
    v10 = v4;
    if ( v4 )
      v5 = PhoneCallAudio::PhoneCallAudio(v4);
    else
      v5 = 0LL;
    v9 = v5;
    if ( v5 )
    {
      Instance = AudioDeviceMgr::CreateInstance(v5, (struct IAudioDeviceMgr **)v5 + 6);
      if ( Instance < 0
        || (Instance = PhoneCallEndTimer::CreateInstance(
                         v5,
                         (PhoneCallAudio *)((char *)v5 + 80),
                         (struct PhoneCallEndTimer **)v5 + 7),
            Instance < 0) )
      {
        v2 = Instance;
      }
      else
      {
        PhoneCallAudio::InitPhoneTopology((struct _RTL_CRITICAL_SECTION *)v5);
        if ( v5 != (PhoneCallAudio *)-8LL )
        {
          ATL::AtlComPtrAssign(&v8, (struct IUnknown *)v5 + 1);
          v3 = (struct ITelephonyControl *)v8;
        }
        v8 = 0LL;
        *a1 = v3;
      }
    }
    else
    {
      v2 = -2147024882;
    }
  }
  else
  {
    v2 = -2147467261;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v8);
  ATL::CComPtrBase<PhoneTopology>::~CComPtrBase<PhoneTopology>((__int64 *)&v9);
  return v2;
}
