/*
 * XREFs of ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D403C
 * Callers:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D3B14 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x180033030 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180149EC8 (-GetSystemEffect@CEndpointCharacteristics@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioen.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioEffectsWatcher::ReloadApos(AudioEffectsWatcher *this)
{
  int SystemEffect; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rax
  bool v9; // r15
  unsigned int v10; // r14d
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  GUID *v13; // rax
  __int64 v15[2]; // [rsp+80h] [rbp-9h] BYREF
  GUID v16; // [rsp+90h] [rbp+7h] BYREF
  struct _GUID v17; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v15[0] = 0LL;
  SystemEffect = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                     + 24LL))(
                   g_pEndpointCharacteristicsCache,
                   *((_QWORD *)this + 7),
                   0LL,
                   0LL,
                   v15);
  v3 = SystemEffect;
  if ( SystemEffect < 0 )
  {
    v4 = 188LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)SystemEffect);
    goto LABEL_20;
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15[0] + 56LL))(v15[0]);
  v6 = DeriveAudioProcessingModeConfiguration(
         *((_DWORD *)this + 45),
         *((_DWORD *)this + 46),
         0,
         v15[0],
         v5 != 0,
         0,
         eHostProcessConnector,
         0LL,
         1,
         0,
         0LL,
         0LL,
         &v17,
         0LL,
         0LL,
         0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = *(_QWORD *)&v17.Data1 - *((_QWORD *)this + 8);
    if ( *(_QWORD *)&v17.Data1 == *((_QWORD *)this + 8) )
      v8 = *(_QWORD *)v17.Data4 - *((_QWORD *)this + 9);
    v9 = v8 == 0;
    v10 = 0;
    v11 = (_QWORD *)((char *)this + 112);
    while ( 1 )
    {
      if ( *((_DWORD *)this + 47) != 1 || *((_DWORD *)v11 - 2) != 1 )
      {
        if ( !v9 )
        {
          v12 = *v11;
          if ( *v11 )
          {
            *v11 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
        }
        if ( !*v11 )
        {
          v13 = &v17;
          if ( *((_BYTE *)v11 - 4) )
            v13 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v16 = *v13;
          SystemEffect = CEndpointCharacteristics::GetSystemEffect(v15[0], *((unsigned int *)v11 - 2), &v16);
          v3 = SystemEffect;
          if ( SystemEffect < 0 )
            break;
        }
      }
      ++v10;
      v11 += 2;
      if ( v10 >= 3 )
      {
        v3 = 0;
        goto LABEL_20;
      }
    }
    v4 = 218LL;
    goto LABEL_22;
  }
  v3 = -2004287449;
  if ( v6 != -2004287449 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)v6);
    v3 = v7;
  }
LABEL_20:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v15);
  return v3;
}
