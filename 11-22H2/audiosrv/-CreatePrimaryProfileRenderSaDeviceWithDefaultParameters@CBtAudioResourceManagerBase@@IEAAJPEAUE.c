/*
 * XREFs of ?CreatePrimaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F5FE0
 * Callers:
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800F9E74 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x180045580 (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800455A0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x1800F801C (-GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointChar.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBtAudioResourceManagerBase::CreatePrimaryProfileRenderSaDeviceWithDefaultParameters(
        CBtAudioResourceManagerBase *this,
        struct EndpointCharacteristicsDescriptor *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct ISaDeviceProxy **a4)
{
  int DefaultPrimaryProfileRenderSaDeviceParams; // ebx
  SaDeviceParams *v8; // rax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // edx
  SaDeviceParams *v14; // [rsp+50h] [rbp-9h] BYREF
  unsigned int v15[2]; // [rsp+58h] [rbp-1h]
  struct SaDeviceParams *v16; // [rsp+60h] [rbp+7h] BYREF
  char v17; // [rsp+68h] [rbp+Fh]
  __int128 v18; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v14 = 0LL;
  *(_QWORD *)v15 = &v14;
  v16 = 0LL;
  v17 = 1;
  DefaultPrimaryProfileRenderSaDeviceParams = CBtAudioResourceManagerBase::GetDefaultPrimaryProfileRenderSaDeviceParams(
                                                this,
                                                a2,
                                                a3,
                                                &v16);
  if ( v17 )
  {
    v8 = **(SaDeviceParams ***)v15;
    **(_QWORD **)v15 = v16;
    if ( v8 )
      SaDeviceParams::`scalar deleting destructor'(v8);
  }
  if ( DefaultPrimaryProfileRenderSaDeviceParams < 0 )
  {
    v9 = (unsigned int)DefaultPrimaryProfileRenderSaDeviceParams;
    v10 = 504LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)v9);
    std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v14, v12);
    return (unsigned int)DefaultPrimaryProfileRenderSaDeviceParams;
  }
  v18 = 0LL;
  v11 = (*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, struct EndpointCharacteristicsDescriptor *, SaDeviceParams *, _QWORD, _DWORD, __int128 *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)this + 152LL))(
          this,
          a2,
          v14,
          0LL,
          0,
          &v18,
          0LL,
          0LL,
          a4);
  DefaultPrimaryProfileRenderSaDeviceParams = v11;
  if ( v11 < 0 )
  {
    v9 = (unsigned int)v11;
    v10 = 509LL;
    goto LABEL_8;
  }
  if ( v14 )
    SaDeviceParams::`scalar deleting destructor'(v14);
  return 0LL;
}
