/*
 * XREFs of ?CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x1801545D0
 * Callers:
 *     ?AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010DC20 (-AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017908 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180022BF0 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180028C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AposRegisteredAsSfxMfxEfx@EffectPackConfiguration@@QEBA_NXZ @ 0x18004864C (-AposRegisteredAsSfxMfxEfx@EffectPackConfiguration@@QEBA_NXZ.c)
 *     ??$_Find_last@U_GUID@@@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@@1@AEBU_GUID@@_K@Z @ 0x180053B98 (--$_Find_last@U_GUID@@@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEffectPackDevNodeId@@YAJU_GUID@@PEAPEAG@Z @ 0x180148250 (-GetEffectPackDevNodeId@@YAJU_GUID@@PEAPEAG@Z.c)
 *     ?GetEffectPackDevNodeRegistryRoot@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x180148410 (-GetEffectPackDevNodeRegistryRoot@@YAJPEBGPEAPEAUHKEY__@@@Z.c)
 *     ?GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x1801484BC (-GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z.c)
 *     ?GetEffectPackPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x180148674 (-GetEffectPackPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z.c)
 *     ??$make_shared@UEffectPackConfiguration@@AEAU_GUID@@@std@@YA?AV?$shared_ptr@UEffectPackConfiguration@@@0@AEAU_GUID@@@Z @ 0x18015443C (--$make_shared@UEffectPackConfiguration@@AEAU_GUID@@@std@@YA-AV-$shared_ptr@UEffectPackConfigura.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall EffectPackConfiguration::CreateGlobalEffectPackConfiguration(struct _GUID *a1, _QWORD *a2)
{
  int EffectPackDevNodeId; // eax
  unsigned int v5; // ebx
  void *v7; // rbx
  int EffectPackDevNodeRegistryRoot; // eax
  unsigned int v9; // edi
  int EffectPackPropertyStore; // eax
  unsigned int v11; // edi
  int EffectPackFxPropertyStore; // eax
  unsigned int v13; // edi
  int v14; // eax
  unsigned int v15; // edi
  HRESULT v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rsi
  std::_Ref_count_base *v22; // rdi
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // r14d
  int Configuration; // eax
  unsigned int v27; // r14d
  __int64 v28; // rax
  HKEY hKey; // [rsp+20h] [rbp-88h] BYREF
  struct IPropertyStore *v30; // [rsp+28h] [rbp-80h] BYREF
  struct IPropertyStore *v31[2]; // [rsp+30h] [rbp-78h] BYREF
  struct _GUID v32; // [rsp+40h] [rbp-68h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-58h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v35; // [rsp+68h] [rbp-40h]
  GUID pclsid; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v32 = *a1;
  EffectPackDevNodeId = GetEffectPackDevNodeId(&v32, (unsigned __int16 **)&pv);
  v5 = EffectPackDevNodeId;
  if ( EffectPackDevNodeId >= 0 )
  {
    hKey = 0LL;
    v7 = pv;
    EffectPackDevNodeRegistryRoot = GetEffectPackDevNodeRegistryRoot((DEVINSTID_W)pv, &hKey);
    v9 = EffectPackDevNodeRegistryRoot;
    if ( EffectPackDevNodeRegistryRoot >= 0 )
    {
      v30 = 0LL;
      v32 = *a1;
      EffectPackPropertyStore = GetEffectPackPropertyStore(hKey, &v32, &v30);
      v11 = EffectPackPropertyStore;
      if ( EffectPackPropertyStore >= 0 )
      {
        v31[0] = 0LL;
        v32 = *a1;
        EffectPackFxPropertyStore = GetEffectPackFxPropertyStore(hKey, &v32, v31);
        v13 = EffectPackFxPropertyStore;
        if ( EffectPackFxPropertyStore >= 0 )
        {
          *(_OWORD *)pvar = 0LL;
          v35 = 0LL;
          v14 = ((__int64 (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))v30->lpVtbl->GetValue)(
                  v30,
                  &PKEY_FX_EffectPackSchema_Version,
                  pvar);
          v15 = v14;
          if ( v14 >= 0 )
          {
            if ( LOWORD(pvar[0]) == 31 && (v16 = CLSIDFromString((LPCOLESTR)pvar[1], &pclsid), v17 = v16, v16 < 0) )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2F0,
                (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
                (const char *)(unsigned int)v16);
              PropVariantClear(pvar);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v31);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
              if ( hKey )
                RegCloseKey(hKey);
              if ( v7 )
                CoTaskMemFree(v7);
              return v17;
            }
            else
            {
              PropVariantClear(pvar);
              v18 = PKEY_FX_EffectPack_Schema_V1 - *(_QWORD *)&pclsid.Data1;
              if ( (_QWORD)PKEY_FX_EffectPack_Schema_V1 == *(_QWORD *)&pclsid.Data1 )
                v18 = *((_QWORD *)&PKEY_FX_EffectPack_Schema_V1 + 1) - *(_QWORD *)pclsid.Data4;
              if ( !v18 )
                goto LABEL_47;
              v19 = PKEY_FX_EffectPack_Schema_Internal_V1 - *(_QWORD *)&pclsid.Data1;
              if ( (_QWORD)PKEY_FX_EffectPack_Schema_Internal_V1 == *(_QWORD *)&pclsid.Data1 )
                v19 = *((_QWORD *)&PKEY_FX_EffectPack_Schema_Internal_V1 + 1) - *(_QWORD *)pclsid.Data4;
              if ( v19 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x2F8,
                  (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
                  (const char *)0x80070057LL);
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v31);
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
                if ( hKey )
                  RegCloseKey(hKey);
                if ( v7 )
                  CoTaskMemFree(v7);
                return 2147942487LL;
              }
              else
              {
LABEL_47:
                v32 = 0LL;
                v20 = std::make_shared<EffectPackConfiguration,_GUID &>(pvar, a1);
                v21 = *v20;
                v22 = (std::_Ref_count_base *)v20[1];
                *v20 = 0LL;
                v20[1] = 0LL;
                *(_QWORD *)&v32.Data1 = v21;
                *(_QWORD *)v32.Data4 = v22;
                if ( pvar[1] )
                  std::_Ref_count_base::_Decref((std::_Ref_count_base *)pvar[1]);
                if ( v21 )
                {
                  v23 = StringCchCopyW((char *)(v21 + 544), 256LL, (char *)v7);
                  v25 = v23;
                  if ( v23 >= 0 )
                  {
                    std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Find_last<_GUID>(
                      v24,
                      pvar,
                      &pclsid,
                      *(unsigned int *)&pclsid.Data4[4] ^ *(unsigned int *)pclsid.Data4 ^ *(unsigned int *)&pclsid.Data2 ^ (unsigned __int64)pclsid.Data1);
                    if ( pvar[1] )
                    {
                      Configuration = EffectPackConfiguration::ReadConfiguration(
                                        v21,
                                        (__int64)v30,
                                        v31[0],
                                        *((_DWORD *)pvar[1] + 8));
                      v27 = Configuration;
                      if ( Configuration >= 0 )
                      {
                        if ( EffectPackConfiguration::AposRegisteredAsSfxMfxEfx((EffectPackConfiguration *)v21) )
                        {
                          v28 = *(_QWORD *)&pclsid.Data1 - PKEY_FX_EffectPack_Schema_Internal_V1;
                          if ( *(_QWORD *)&pclsid.Data1 == (_QWORD)PKEY_FX_EffectPack_Schema_Internal_V1 )
                            v28 = *(_QWORD *)pclsid.Data4 - *((_QWORD *)&PKEY_FX_EffectPack_Schema_Internal_V1 + 1);
                          if ( !v28 )
                            *(_WORD *)(v21 + 1795) = 257;
                          std::shared_ptr<std::function<void (void)>>::operator=(a2, (__int64 *)&v32);
                          if ( *(_QWORD *)v32.Data4 )
                            std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)v32.Data4);
                          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v31);
                          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
                          if ( hKey )
                            RegCloseKey(hKey);
                          if ( v7 )
                            CoTaskMemFree(v7);
                          return 0LL;
                        }
                        else
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x309,
                            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
                            (const char *)0x80004005LL);
                          if ( v22 )
                            std::_Ref_count_base::_Decref(v22);
                          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v31);
                          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
                          if ( hKey )
                            RegCloseKey(hKey);
                          if ( v7 )
                            CoTaskMemFree(v7);
                          return 2147500037LL;
                        }
                      }
                      else
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x306,
                          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
                          (const char *)(unsigned int)Configuration);
                        if ( v22 )
                          std::_Ref_count_base::_Decref(v22);
                        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v31);
                        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
                        if ( hKey )
                          RegCloseKey(hKey);
                        if ( v7 )
                          CoTaskMemFree(v7);
                        return v27;
                      }
                    }
                    else
                    {
                      std::_Xout_of_range("invalid unordered_map<K, T> key");
                      return (unsigned int)hKey;
                    }
                  }
                  else
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x300,
                      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
                      (const char *)(unsigned int)v23);
                    if ( v22 )
                      std::_Ref_count_base::_Decref(v22);
                    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v31);
                    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
                    if ( hKey )
                      RegCloseKey(hKey);
                    if ( v7 )
                      CoTaskMemFree(v7);
                    return v25;
                  }
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x2FE,
                    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
                    (const char *)0x8007000ELL);
                  if ( v22 )
                    std::_Ref_count_base::_Decref(v22);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v31);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
                  if ( hKey )
                    RegCloseKey(hKey);
                  if ( v7 )
                    CoTaskMemFree(v7);
                  return 2147942414LL;
                }
              }
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2EC,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
              (const char *)(unsigned int)v14);
            PropVariantClear(pvar);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v31);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
            if ( hKey )
              RegCloseKey(hKey);
            if ( v7 )
              CoTaskMemFree(v7);
            return v15;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2E5,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
            (const char *)(unsigned int)EffectPackFxPropertyStore);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v31);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
          if ( hKey )
            RegCloseKey(hKey);
          if ( v7 )
            CoTaskMemFree(v7);
          return v13;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E2,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
          (const char *)(unsigned int)EffectPackPropertyStore);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
        if ( hKey )
          RegCloseKey(hKey);
        if ( v7 )
          CoTaskMemFree(v7);
        return v11;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2DF,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)EffectPackDevNodeRegistryRoot);
      if ( hKey )
        RegCloseKey(hKey);
      if ( v7 )
        CoTaskMemFree(v7);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DC,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
      (const char *)(unsigned int)EffectPackDevNodeId);
    if ( pv )
      CoTaskMemFree(pv);
    return v5;
  }
}
