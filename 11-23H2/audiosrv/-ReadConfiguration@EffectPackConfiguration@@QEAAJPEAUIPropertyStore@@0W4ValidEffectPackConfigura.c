/*
 * XREFs of ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180022BF0
 * Callers:
 *     ?CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x18002598C (-CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV-$shar.c)
 *     ?CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x1801545D0 (-CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV-$shared_ptr@$$CBUE.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180010608 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?GetFxClsidsFromPropertyStore@@YAJPEAUIPropertyStore@@U_tagpropertykey@@1PEBGPEAIPEAPEAU_GUID@@@Z @ 0x1800235C4 (-GetFxClsidsFromPropertyStore@@YAJPEAUIPropertyStore@@U_tagpropertykey@@1PEBGPEAIPEAPEAU_GUID@@@.c)
 *     ?GetProcessingModes@@YAJPEAUIPropertyStore@@U_tagpropertykey@@PEAIPEAPEAU_GUID@@@Z @ 0x180023988 (-GetProcessingModes@@YAJPEAUIPropertyStore@@U_tagpropertykey@@PEAIPEAPEAU_GUID@@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180028C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace_back@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA?A_TAEBU_GUID@@@Z @ 0x1800EAF68 (--$emplace_back@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@QEAA-A_TAEBU_GUID@.c)
 *     ??$_Emplace_reallocate@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAPEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180154274 (--$_Emplace_reallocate@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoT.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPackConfiguration::ReadConfiguration(
        __int64 a1,
        __int64 a2,
        struct IPropertyStore *a3,
        __int16 a4)
{
  int v8; // eax
  unsigned int v9; // r15d
  void *v10; // rcx
  void *v11; // rcx
  const unsigned __int16 *v12; // r15
  void *v13; // rcx
  int ProcessingModes; // r12d
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  int v25; // r14d
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  int v30; // edi
  void *v31; // rcx
  __int64 v33; // rdx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  HRESULT v37; // eax
  int v38; // eax
  unsigned int v39; // r15d
  HRESULT v40; // eax
  HRESULT v41; // r12d
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  const char *v47; // r9
  unsigned int i; // r15d
  void *v49; // rcx
  _QWORD *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  int v53; // [rsp+20h] [rbp-59h]
  int v54; // [rsp+20h] [rbp-59h]
  int v55; // [rsp+20h] [rbp-59h]
  int v56; // [rsp+20h] [rbp-59h]
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v58; // [rsp+40h] [rbp-39h]
  void **v59; // [rsp+50h] [rbp-29h]
  struct _GUID *v60; // [rsp+58h] [rbp-21h] BYREF
  char v61; // [rsp+60h] [rbp-19h]
  struct _tagpropertykey pclsid; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  if ( (a4 & 1) != 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v58 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
           a2,
           &PKEY_ItemNameDisplay,
           pvar);
    v9 = v8;
    if ( v8 < 0 )
    {
      v33 = 403LL;
      goto LABEL_106;
    }
    if ( LOWORD(pvar[0]) == 31 )
    {
      v8 = StringCchCopyW((unsigned __int16 *)(a1 + 32), 0x80uLL, (const unsigned __int16 *)pvar[1]);
      v9 = v8;
      if ( v8 < 0 )
      {
        v33 = 406LL;
LABEL_106:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v33,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
          (const char *)(unsigned int)v8,
          v53);
        goto LABEL_85;
      }
    }
    PropVariantClear(pvar);
  }
  if ( (a4 & 2) != 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v58 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(a2, &PKEY_FX_Author, pvar);
    v9 = v8;
    if ( v8 < 0 )
    {
      v33 = 413LL;
      goto LABEL_106;
    }
    if ( LOWORD(pvar[0]) == 31 )
    {
      v8 = StringCchCopyW((unsigned __int16 *)(a1 + 1056), 0x80uLL, (const unsigned __int16 *)pvar[1]);
      v9 = v8;
      if ( v8 < 0 )
      {
        v33 = 416LL;
        goto LABEL_106;
      }
    }
    PropVariantClear(pvar);
  }
  if ( (a4 & 4) != 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v58 = 0LL;
    v34 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
            a2,
            &PKEY_FX_VersionMajor,
            pvar);
    v9 = v34;
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A8,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)v34,
        v53);
      goto LABEL_85;
    }
    if ( LOWORD(pvar[0]) == 19 )
      *(_DWORD *)(a1 + 1752) = pvar[1];
    PropVariantClear(pvar);
    *(_OWORD *)pvar = 0LL;
    v58 = 0LL;
    v35 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
            a2,
            &PKEY_FX_VersionMinor,
            pvar);
    v9 = v35;
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B1,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)v35,
        v53);
      goto LABEL_85;
    }
    if ( LOWORD(pvar[0]) == 19 )
      *(_DWORD *)(a1 + 1756) = pvar[1];
    PropVariantClear(pvar);
  }
  if ( (a4 & 8) != 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v58 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
           a2,
           &PKEY_FX_SupportAppLauncher,
           pvar);
    v9 = v8;
    if ( v8 < 0 )
    {
      v33 = 444LL;
      goto LABEL_106;
    }
    if ( LOWORD(pvar[0]) == 31 )
    {
      v8 = StringCchCopyW((unsigned __int16 *)(a1 + 288), 0x80uLL, (const unsigned __int16 *)pvar[1]);
      v9 = v8;
      if ( v8 < 0 )
      {
        v33 = 447LL;
        goto LABEL_106;
      }
    }
    PropVariantClear(pvar);
  }
  if ( (a4 & 0x10) != 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v58 = 0LL;
    v36 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
            a2,
            &PKEY_FX_Settings_UserInterfaceClsid,
            pvar);
    if ( v36 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C6,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)v36);
    if ( LOWORD(pvar[0]) == 31 )
    {
      v37 = CLSIDFromString((LPCOLESTR)pvar[1], (LPCLSID)(a1 + 16));
      v9 = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C9,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
          (const char *)(unsigned int)v37,
          v53);
        goto LABEL_85;
      }
    }
    PropVariantClear(pvar);
  }
  if ( (a4 & 0x20) != 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v58 = 0LL;
    v38 = ((__int64 (__fastcall *)(struct IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))a3->lpVtbl->GetValue)(
            a3,
            &PKEY_FX_Association,
            pvar);
    v9 = v38;
    if ( v38 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D2,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)v38,
        v53);
      goto LABEL_85;
    }
    if ( LOWORD(pvar[0]) == 4127 )
    {
      v39 = 0;
      if ( LODWORD(pvar[1]) )
      {
        while ( 1 )
        {
          v40 = CLSIDFromString(*(LPCOLESTR *)(v58 + 8LL * v39), &pclsid.fmtid);
          v41 = v40;
          if ( v40 < 0 )
            break;
          std::vector<_GUID>::emplace_back<_GUID const &>(a1 + 1728, &pclsid);
          if ( ++v39 >= LODWORD(pvar[1]) )
            goto LABEL_120;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1DA,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
          (const char *)(unsigned int)v40,
          v53);
        v9 = v41;
        goto LABEL_85;
      }
    }
LABEL_120:
    PropVariantClear(pvar);
  }
  if ( (a4 & 0x1000) != 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v58 = 0LL;
    v42 = ((__int64 (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))a3->lpVtbl->GetValue)(
            a3,
            &PKEY_FX_ApplyToBluetooth,
            pvar);
    v9 = v42;
    if ( v42 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E6,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)v42,
        v53);
      goto LABEL_85;
    }
    if ( LOWORD(pvar[0]) == 19 && LODWORD(pvar[1]) )
      *(_BYTE *)(a1 + 1792) = 1;
    PropVariantClear(pvar);
    *(_OWORD *)pvar = 0LL;
    v58 = 0LL;
    v43 = ((__int64 (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))a3->lpVtbl->GetValue)(
            a3,
            &PKEY_FX_ApplyToUsb,
            pvar);
    v9 = v43;
    if ( v43 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F0,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)v43,
        v53);
      goto LABEL_85;
    }
    if ( LOWORD(pvar[0]) == 19 && LODWORD(pvar[1]) )
      *(_BYTE *)(a1 + 1793) = 1;
    PropVariantClear(pvar);
  }
  if ( (a4 & 0x2000) != 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v58 = 0LL;
    v44 = ((__int64 (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))a3->lpVtbl->GetValue)(
            a3,
            &PKEY_FX_ApplyToCapture,
            pvar);
    v9 = v44;
    if ( v44 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FE,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)v44,
        v53);
      goto LABEL_85;
    }
    if ( LOWORD(pvar[0]) == 19 && LODWORD(pvar[1]) )
      *(_BYTE *)(a1 + 1796) = 1;
    PropVariantClear(pvar);
    *(_OWORD *)pvar = 0LL;
    v58 = 0LL;
    v45 = ((__int64 (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))a3->lpVtbl->GetValue)(
            a3,
            &PKEY_FX_ApplyToRender,
            pvar);
    v9 = v45;
    if ( v45 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x208,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)v45,
        v53);
      goto LABEL_85;
    }
    if ( LOWORD(pvar[0]) == 19 && LODWORD(pvar[1]) )
      *(_BYTE *)(a1 + 1795) = 1;
    PropVariantClear(pvar);
  }
  if ( (a4 & 0x800) != 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v58 = 0LL;
    v46 = ((__int64 (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))a3->lpVtbl->GetValue)(
            a3,
            &PKEY_FX_Enumerator,
            pvar);
    v9 = v46;
    if ( v46 >= 0 )
    {
      if ( LOWORD(pvar[0]) == 4127 )
      {
        for ( i = 0; i < LODWORD(pvar[1]); ++i )
        {
          wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
            &pclsid,
            *(char **)(v58 + 8LL * i),
            0xFFFFFFFFFFFFFFFFuLL,
            v47);
          v49 = *(void **)&pclsid.fmtid.Data1;
          if ( *(_QWORD *)&pclsid.fmtid.Data1 )
          {
            v50 = *(_QWORD **)(a1 + 1776);
            if ( v50 == *(_QWORD **)(a1 + 1784) )
            {
              std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::_Emplace_reallocate<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                a1 + 1768,
                v50,
                &pclsid);
              v49 = *(void **)&pclsid.fmtid.Data1;
            }
            else
            {
              *v50 = *(_QWORD *)&pclsid.fmtid.Data1;
              v49 = 0LL;
              *(_QWORD *)&pclsid.fmtid.Data1 = 0LL;
              *(_QWORD *)(a1 + 1776) += 8LL;
            }
          }
          if ( v49 )
            CoTaskMemFree(v49);
        }
      }
      PropVariantClear(pvar);
      goto LABEL_13;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x215,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
      (const char *)(unsigned int)v46,
      v53);
LABEL_85:
    PropVariantClear(pvar);
    return v9;
  }
LABEL_13:
  if ( (a4 & 0x40) != 0 )
  {
    v59 = (void **)(a1 + 1704);
    v60 = 0LL;
    v61 = 1;
    memset(&pclsid, 0, sizeof(pclsid));
    *(GUID *)pvar = PKEY_FX_PreMixEffectClsid.fmtid;
    LODWORD(v58) = PKEY_FX_PreMixEffectClsid.pid;
    GetFxClsidsFromPropertyStore(a3, (struct _tagpropertykey *)pvar, &pclsid, 0LL, (unsigned int *)(a1 + 1696), &v60);
    if ( v61 )
    {
      v10 = *v59;
      *v59 = v60;
      if ( v10 )
        CoTaskMemFree(v10);
    }
    v59 = (void **)(a1 + 1720);
    v60 = 0LL;
    v61 = 1;
    *(_OWORD *)pvar = xmmword_180187B70;
    LODWORD(v58) = 0;
    pclsid = PKEY_FX_PostMixEffectClsid;
    GetFxClsidsFromPropertyStore(a3, &pclsid, (struct _tagpropertykey *)pvar, 0LL, (unsigned int *)(a1 + 1712), &v60);
    if ( v61 )
    {
      v11 = *v59;
      *v59 = v60;
      if ( v11 )
        CoTaskMemFree(v11);
    }
  }
  v12 = (const unsigned __int16 *)((a1 + 544) & -(__int64)(*(_WORD *)(a1 + 544) != 0));
  if ( (a4 & 0x80u) != 0 )
  {
    v59 = (void **)(a1 + 1320);
    v60 = 0LL;
    v61 = 1;
    *(GUID *)pvar = PKEY_CompositeFX_StreamEffectClsid.fmtid;
    LODWORD(v58) = PKEY_CompositeFX_StreamEffectClsid.pid;
    pclsid = PKEY_FX_StreamEffectClsid;
    GetFxClsidsFromPropertyStore(a3, &pclsid, (struct _tagpropertykey *)pvar, v12, (unsigned int *)(a1 + 1312), &v60);
    if ( v61 )
    {
      v13 = *v59;
      *v59 = v60;
      if ( v13 )
        CoTaskMemFree(v13);
    }
    v59 = (void **)(a1 + 1336);
    v60 = 0LL;
    v61 = 1;
    *(GUID *)pvar = PKEY_SFX_ProcessingModes_Supported_For_Streaming.fmtid;
    LODWORD(v58) = PKEY_SFX_ProcessingModes_Supported_For_Streaming.pid;
    ProcessingModes = GetProcessingModes(a3, (struct _tagpropertykey *)pvar, (unsigned int *)(a1 + 1328), &v60);
    if ( v61 )
    {
      v15 = *v59;
      *v59 = v60;
      if ( v15 )
        CoTaskMemFree(v15);
    }
    if ( ProcessingModes < 0 )
    {
      v51 = 563LL;
LABEL_157:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v51,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)ProcessingModes,
        v54);
      return (unsigned int)ProcessingModes;
    }
    v59 = (void **)(a1 + 1352);
    v60 = 0LL;
    v61 = 1;
    *(GUID *)pvar = PKEY_CompositeFX_ModeEffectClsid.fmtid;
    LODWORD(v58) = PKEY_CompositeFX_ModeEffectClsid.pid;
    pclsid = PKEY_FX_ModeEffectClsid;
    GetFxClsidsFromPropertyStore(a3, &pclsid, (struct _tagpropertykey *)pvar, v12, (unsigned int *)(a1 + 1344), &v60);
    if ( v61 )
    {
      v16 = *v59;
      *v59 = v60;
      if ( v16 )
        CoTaskMemFree(v16);
    }
    v59 = (void **)(a1 + 1368);
    v60 = 0LL;
    v61 = 1;
    *(GUID *)pvar = PKEY_MFX_ProcessingModes_Supported_For_Streaming.fmtid;
    LODWORD(v58) = PKEY_MFX_ProcessingModes_Supported_For_Streaming.pid;
    ProcessingModes = GetProcessingModes(a3, (struct _tagpropertykey *)pvar, (unsigned int *)(a1 + 1360), &v60);
    if ( v61 )
    {
      v17 = *v59;
      *v59 = v60;
      if ( v17 )
        CoTaskMemFree(v17);
    }
    if ( ProcessingModes < 0 )
    {
      v51 = 570LL;
      goto LABEL_157;
    }
  }
  if ( (a4 & 0x100) != 0 )
  {
    v59 = (void **)(a1 + 1384);
    v60 = 0LL;
    v61 = 1;
    *(GUID *)pvar = PKEY_CompositeFX_EndpointEffectClsid.fmtid;
    LODWORD(v58) = PKEY_CompositeFX_EndpointEffectClsid.pid;
    pclsid = PKEY_FX_EndpointEffectClsid;
    GetFxClsidsFromPropertyStore(a3, &pclsid, (struct _tagpropertykey *)pvar, v12, (unsigned int *)(a1 + 1376), &v60);
    if ( v61 )
    {
      v18 = *v59;
      *v59 = v60;
      if ( v18 )
        CoTaskMemFree(v18);
    }
    v59 = (void **)(a1 + 1400);
    v60 = 0LL;
    v61 = 1;
    *(GUID *)pvar = PKEY_EFX_ProcessingModes_Supported_For_Streaming.fmtid;
    LODWORD(v58) = PKEY_EFX_ProcessingModes_Supported_For_Streaming.pid;
    ProcessingModes = GetProcessingModes(a3, (struct _tagpropertykey *)pvar, (unsigned int *)(a1 + 1392), &v60);
    if ( v61 )
    {
      v19 = *v59;
      *v59 = v60;
      if ( v19 )
        CoTaskMemFree(v19);
    }
    if ( ProcessingModes < 0 )
    {
      v51 = 581LL;
      goto LABEL_157;
    }
  }
  if ( (a4 & 0x200) == 0 )
    goto LABEL_58;
  v59 = (void **)(a1 + 1416);
  v60 = 0LL;
  v61 = 1;
  *(GUID *)pvar = PKEY_CompositeFX_Offload_StreamEffectClsid.fmtid;
  LODWORD(v58) = PKEY_CompositeFX_Offload_StreamEffectClsid.pid;
  pclsid = PKEY_FX_Offload_StreamEffectClsid;
  GetFxClsidsFromPropertyStore(a3, &pclsid, (struct _tagpropertykey *)pvar, v12, (unsigned int *)(a1 + 1408), &v60);
  if ( v61 )
  {
    v20 = *v59;
    *v59 = v60;
    if ( v20 )
      CoTaskMemFree(v20);
  }
  v59 = (void **)(a1 + 1432);
  v60 = 0LL;
  v61 = 1;
  *(GUID *)pvar = PKEY_SFX_Offload_ProcessingModes_Supported_For_Streaming.fmtid;
  LODWORD(v58) = PKEY_SFX_Offload_ProcessingModes_Supported_For_Streaming.pid;
  ProcessingModes = GetProcessingModes(a3, (struct _tagpropertykey *)pvar, (unsigned int *)(a1 + 1424), &v60);
  if ( v61 )
  {
    v21 = *v59;
    *v59 = v60;
    if ( v21 )
      CoTaskMemFree(v21);
  }
  if ( ProcessingModes < 0 )
  {
    v51 = 591LL;
    goto LABEL_157;
  }
  v59 = (void **)(a1 + 1448);
  v60 = 0LL;
  v61 = 1;
  *(GUID *)pvar = PKEY_CompositeFX_Offload_ModeEffectClsid.fmtid;
  LODWORD(v58) = PKEY_CompositeFX_Offload_ModeEffectClsid.pid;
  pclsid = PKEY_FX_Offload_ModeEffectClsid;
  GetFxClsidsFromPropertyStore(a3, &pclsid, (struct _tagpropertykey *)pvar, v12, (unsigned int *)(a1 + 1440), &v60);
  if ( v61 )
  {
    v22 = *v59;
    *v59 = v60;
    if ( v22 )
      CoTaskMemFree(v22);
  }
  v59 = (void **)(a1 + 1464);
  v60 = 0LL;
  v61 = 1;
  *(GUID *)pvar = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.fmtid;
  LODWORD(v58) = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.pid;
  ProcessingModes = GetProcessingModes(a3, (struct _tagpropertykey *)pvar, (unsigned int *)(a1 + 1456), &v60);
  if ( v61 )
  {
    v23 = *v59;
    *v59 = v60;
    if ( v23 )
      CoTaskMemFree(v23);
  }
  if ( ProcessingModes < 0 )
  {
    v51 = 598LL;
    goto LABEL_157;
  }
LABEL_58:
  if ( (a4 & 0x400) == 0 )
    return 0LL;
  v59 = (void **)(a1 + 1608);
  v60 = 0LL;
  v61 = 1;
  *(GUID *)pvar = PKEY_CompositeFX_KeywordDetector_StreamEffectClsid.fmtid;
  LODWORD(v58) = PKEY_CompositeFX_KeywordDetector_StreamEffectClsid.pid;
  pclsid = PKEY_FX_KeywordDetector_StreamEffectClsid;
  GetFxClsidsFromPropertyStore(a3, &pclsid, (struct _tagpropertykey *)pvar, v12, (unsigned int *)(a1 + 1600), &v60);
  if ( v61 )
  {
    v24 = *v59;
    *v59 = v60;
    if ( v24 )
      CoTaskMemFree(v24);
  }
  v59 = (void **)(a1 + 1624);
  v60 = 0LL;
  v61 = 1;
  *(GUID *)pvar = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
  LODWORD(v58) = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
  v25 = GetProcessingModes(a3, (struct _tagpropertykey *)pvar, (unsigned int *)(a1 + 1616), &v60);
  if ( v61 )
  {
    v26 = *v59;
    *v59 = v60;
    if ( v26 )
      CoTaskMemFree(v26);
  }
  if ( v25 < 0 )
  {
    v52 = 608LL;
LABEL_163:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v52,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
      (const char *)(unsigned int)v25,
      v55);
    return (unsigned int)v25;
  }
  v59 = (void **)(a1 + 1640);
  v60 = 0LL;
  v61 = 1;
  *(GUID *)pvar = PKEY_CompositeFX_KeywordDetector_ModeEffectClsid.fmtid;
  LODWORD(v58) = PKEY_CompositeFX_KeywordDetector_ModeEffectClsid.pid;
  pclsid = PKEY_FX_KeywordDetector_ModeEffectClsid;
  GetFxClsidsFromPropertyStore(a3, &pclsid, (struct _tagpropertykey *)pvar, v12, (unsigned int *)(a1 + 1632), &v60);
  if ( v61 )
  {
    v27 = *v59;
    *v59 = v60;
    if ( v27 )
      CoTaskMemFree(v27);
  }
  v59 = (void **)(a1 + 1656);
  v60 = 0LL;
  v61 = 1;
  *(GUID *)pvar = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
  LODWORD(v58) = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
  v25 = GetProcessingModes(a3, (struct _tagpropertykey *)pvar, (unsigned int *)(a1 + 1648), &v60);
  if ( v61 )
  {
    v28 = *v59;
    *v59 = v60;
    if ( v28 )
      CoTaskMemFree(v28);
  }
  if ( v25 < 0 )
  {
    v52 = 615LL;
    goto LABEL_163;
  }
  v59 = (void **)(a1 + 1672);
  v60 = 0LL;
  v61 = 1;
  *(GUID *)pvar = PKEY_CompositeFX_KeywordDetector_EndpointEffectClsid.fmtid;
  LODWORD(v58) = PKEY_CompositeFX_KeywordDetector_EndpointEffectClsid.pid;
  pclsid = PKEY_FX_KeywordDetector_EndpointEffectClsid;
  GetFxClsidsFromPropertyStore(a3, &pclsid, (struct _tagpropertykey *)pvar, v12, (unsigned int *)(a1 + 1664), &v60);
  if ( v61 )
  {
    v29 = *v59;
    *v59 = v60;
    if ( v29 )
      CoTaskMemFree(v29);
  }
  v59 = (void **)(a1 + 1688);
  v60 = 0LL;
  v61 = 1;
  *(GUID *)pvar = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
  LODWORD(v58) = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
  v30 = GetProcessingModes(a3, (struct _tagpropertykey *)pvar, (unsigned int *)(a1 + 1680), &v60);
  if ( v61 )
  {
    v31 = *v59;
    *v59 = v60;
    if ( v31 )
      CoTaskMemFree(v31);
  }
  if ( v30 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26E,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
    (const char *)(unsigned int)v30,
    v56);
  return (unsigned int)v30;
}
