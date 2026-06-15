/*
 * XREFs of ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D681C
 * Callers:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D62EC (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18000CB5C (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x1800450A8 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSystemEffect@EffectPack@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18014CF68 (-GetSystemEffect@EffectPack@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioEffectsWatcher::ReloadApos(AudioEffectsWatcher *this)
{
  int v2; // eax
  int v3; // ebx
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rax
  bool v8; // r15
  unsigned int v9; // esi
  unsigned int *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  GUID *v13; // rax
  int SystemEffect; // eax
  int v15; // r14d
  __int128 v17; // [rsp+80h] [rbp-19h] BYREF
  std::_Ref_count_base *v18; // [rsp+90h] [rbp-9h]
  GUID v19; // [rsp+A0h] [rbp+7h] BYREF
  struct _GUID v20; // [rsp+B0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v17 = 0LL;
  v18 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, __int128 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                            + 40LL))(
         g_pEndpointCharacteristicsCache,
         *((_QWORD *)this + 7),
         0LL,
         0LL,
         &v17);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = (unsigned int)v2;
    v5 = 188LL;
    goto LABEL_7;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 56LL))(v17);
  v3 = DeriveAudioProcessingModeConfiguration(
         *((_DWORD *)this + 45),
         *((_DWORD *)this + 46),
         0,
         (CEndpointCharacteristics **)&v17,
         v6 != 0,
         0,
         eHostProcessConnector,
         0LL,
         1,
         0,
         0LL,
         0LL,
         &v20,
         0LL,
         0LL,
         0LL);
  if ( v3 < 0 )
  {
    if ( v3 == -2004287449 )
    {
      v3 = -2004287449;
LABEL_29:
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v17);
      return (unsigned int)v3;
    }
    v4 = (unsigned int)v3;
    v5 = 194LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)v4);
    goto LABEL_29;
  }
  v7 = *(_QWORD *)&v20.Data1 - *((_QWORD *)this + 8);
  if ( *(_QWORD *)&v20.Data1 == *((_QWORD *)this + 8) )
    v7 = *(_QWORD *)v20.Data4 - *((_QWORD *)this + 9);
  v8 = v7 == 0;
  v9 = 0;
  v10 = (unsigned int *)((char *)this + 104);
  do
  {
    v11 = *((_DWORD *)this + 47);
    if ( (v11 & 1) != 0 && *v10 == 1 || (v11 & 2) != 0 && *v10 == 2 || (v11 & 4) != 0 && *v10 == 3 )
    {
      if ( !v8 )
      {
        v12 = *((_QWORD *)v10 + 1);
        if ( v12 )
        {
          *((_QWORD *)v10 + 1) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      if ( !*((_QWORD *)v10 + 1) )
      {
        v13 = &v20;
        if ( *((_BYTE *)v10 + 4) )
          v13 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v19 = *v13;
        SystemEffect = EffectPack::GetSystemEffect(*((_QWORD *)&v17 + 1), *v10, &v19);
        v15 = SystemEffect;
        if ( SystemEffect < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xDC,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
            (const char *)(unsigned int)SystemEffect);
          v3 = v15;
          goto LABEL_29;
        }
      }
    }
    ++v9;
    v10 += 4;
  }
  while ( v9 < 3 );
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v17);
  return 0LL;
}
