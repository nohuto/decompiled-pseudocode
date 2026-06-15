/*
 * XREFs of ?CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z @ 0x18014B70C
 * Callers:
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180025BA0 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D8670 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?OpenAudioSystemEffectsPropertyStore@EffectPack@@SAJPEAUHKEY__@@IKPEAU_GUID@@PEAPEAUIAudioSystemEffectsPropertyStore@@@Z @ 0x180154DE4 (-OpenAudioSystemEffectsPropertyStore@EffectPack@@SAJPEAUHKEY__@@IKPEAU_GUID@@PEAPEAUIAudioSystem.c)
 *     ?OpenAudioSystemEffectsPropertyStoreRegKey@EffectPack@@QEAAJIKPEAPEAUHKEY__@@@Z @ 0x180154FBC (-OpenAudioSystemEffectsPropertyStoreRegKey@EffectPack@@QEAAJIKPEAPEAUHKEY__@@@Z.c)
 *     ?CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z @ 0x180168A54 (-CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::CreateEffectPackContexts(
        CEndpointCharacteristics *this,
        struct EffectPack *a2,
        unsigned int a3)
{
  unsigned int v5; // esi
  int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  HKEY v9; // rbx
  DWORD i; // r14d
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 **); // rcx
  __int64 (__fastcall **v15)(_QWORD, GUID *, __int64 **); // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  struct IAudioSystemEffectsPropertyStore *v26; // [rsp+38h] [rbp-28h] BYREF
  HKEY hKey[2]; // [rsp+40h] [rbp-20h] BYREF
  struct _GUID v28; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IAudioSystemEffectsPropertyStore *v30; // [rsp+A0h] [rbp+40h] BYREF
  __int64 *v31; // [rsp+A8h] [rbp+48h] BYREF

  v5 = 0;
LABEL_2:
  hKey[0] = 0LL;
  v6 = EffectPack::OpenAudioSystemEffectsPropertyStoreRegKey(a2, v5, a3, hKey);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( v6 == -2147024894 || v6 == -536870396 )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(hKey);
      return v8;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64A,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v6);
    v12 = v8;
  }
  else
  {
    v9 = hKey[0];
    if ( !hKey[0] )
      return 0LL;
    for ( i = 0; ; ++i )
    {
      v28 = GUID_00000000_0000_0000_0000_000000000000;
      v30 = 0LL;
      v11 = EffectPack::OpenAudioSystemEffectsPropertyStore(v9, i, v7, &v28, &v30);
      v12 = v11;
      if ( v11 < 0 )
        break;
      if ( !v30 )
      {
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
        RegCloseKey(v9);
        ++v5;
        goto LABEL_2;
      }
      v25 = 0LL;
      v13 = (**(__int64 (__fastcall ***)(struct IAudioSystemEffectsPropertyStore *, GUID *, __int64 *))v30)(
              v30,
              &GUID_13dfcc0a_15ea_4b9e_a5a6_cc1e5c0bb317,
              &v25);
      v12 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x65F,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v13);
        goto LABEL_24;
      }
      v31 = 0LL;
      v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*((_QWORD *)this + 5);
      v15 = *v14;
      v31 = 0LL;
      v16 = (*v15)(v14, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21, &v31);
      v12 = v16;
      if ( v16 < 0 )
      {
        v22 = (unsigned int)v16;
        v23 = 1634LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v22);
        goto LABEL_22;
      }
      if ( !v31 )
      {
        v12 = -2147418113;
        v22 = 2147549183LL;
        v23 = 1635LL;
        goto LABEL_21;
      }
      v26 = 0LL;
      v17 = *v31;
      v26 = 0LL;
      v18 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct _GUID *, struct IAudioSystemEffectsPropertyStore **))(v17 + 144))(
              v31,
              2LL,
              &v28,
              &v26);
      v12 = v18;
      if ( v18 < 0 )
      {
        v20 = (unsigned int)v18;
        v21 = 1638LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v20);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
LABEL_22:
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v31);
LABEL_24:
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v25);
        goto LABEL_26;
      }
      if ( !v26 )
      {
        v12 = -2147024894;
        v20 = 2147942402LL;
        v21 = 1639LL;
        goto LABEL_18;
      }
      v19 = CopyAudioSystemEffectsProperties(v26, v30);
      v12 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x669,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v19);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v31);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v25);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
        RegCloseKey(v9);
        return v12;
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v31);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v25);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x657,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v11);
LABEL_26:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(hKey);
  return v12;
}
