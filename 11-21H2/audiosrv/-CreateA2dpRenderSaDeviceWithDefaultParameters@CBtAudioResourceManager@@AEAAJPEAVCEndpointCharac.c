/*
 * XREFs of ?CreateA2dpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUISaDeviceProxy@@@Z @ 0x180113BC4
 * Callers:
 *     ?RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ @ 0x180116D54 (-RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x18002B3B8 (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18002B3D8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultA2dpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x180115D90 (-GetDefaultA2dpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBtAudioResourceManager::CreateA2dpRenderSaDeviceWithDefaultParameters(
        CBtAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct ISaDeviceProxy **a4)
{
  int DefaultA2dpRenderSaDeviceParams; // ebx
  SaDeviceParams *v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // edx
  SaDeviceParams *v13; // [rsp+50h] [rbp+7h] BYREF
  unsigned int v14[2]; // [rsp+58h] [rbp+Fh]
  struct SaDeviceParams *v15; // [rsp+60h] [rbp+17h] BYREF
  char v16; // [rsp+68h] [rbp+1Fh]
  __int128 v17; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v13 = 0LL;
  *(_QWORD *)v14 = &v13;
  v15 = 0LL;
  v16 = 1;
  DefaultA2dpRenderSaDeviceParams = CBtAudioResourceManager::GetDefaultA2dpRenderSaDeviceParams(this, a2, a3, &v15);
  if ( v16 )
  {
    v7 = **(SaDeviceParams ***)v14;
    **(_QWORD **)v14 = v15;
    if ( v7 )
      SaDeviceParams::`scalar deleting destructor'(v7);
  }
  if ( DefaultA2dpRenderSaDeviceParams >= 0 )
  {
    v17 = 0LL;
    v10 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, SaDeviceParams *, _QWORD, _DWORD, __int128 *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            a2,
            v13,
            0LL,
            0,
            &v17,
            0LL,
            0LL,
            a4);
    DefaultA2dpRenderSaDeviceParams = v10;
    if ( v10 >= 0 )
    {
      DefaultA2dpRenderSaDeviceParams = 0;
      goto LABEL_10;
    }
    v8 = (unsigned int)v10;
    v9 = 567LL;
  }
  else
  {
    v8 = (unsigned int)DefaultA2dpRenderSaDeviceParams;
    v9 = 562LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
    (const char *)v8);
LABEL_10:
  std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v13, v11);
  return (unsigned int)DefaultA2dpRenderSaDeviceParams;
}
