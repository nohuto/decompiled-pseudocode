/*
 * XREFs of ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18015B3BC
 * Callers:
 *     ?GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180153D3C (-GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncode.c)
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180010608 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180027F80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180028C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z @ 0x1800706C4 (-make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EEC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180084B6E (--$find@X@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2D00 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?GetDefaultAudioEndpointId@AtmosCheck@@AEBAJPEAPEAG@Z @ 0x18015B288 (-GetDefaultAudioEndpointId@AtmosCheck@@AEBAJPEAPEAG@Z.c)
 *     ?IsEndpointDeviceId@AtmosCheck@@AEBA_NPEBG@Z @ 0x18015BDFC (-IsEndpointDeviceId@AtmosCheck@@AEBA_NPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::GetEndpointExtendedSpatialLicenseInfo(
        AtmosCheck *this,
        unsigned __int16 *a2,
        unsigned int a3,
        struct ExtendedSpatialAudioEncoderInfo *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int DefaultAudioEndpointId; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  const char *v12; // r9
  unsigned __int16 *v13; // rdx
  int MMDeviceIdFromInterfaceId; // eax
  void **cotaskmem_string_nothrow; // rbx
  void *v16; // rcx
  int v17; // r15d
  unsigned __int8 *v18; // rdi
  unsigned __int8 *v19; // rsi
  char *v20; // rbx
  int v21; // r14d
  __int64 v22; // rax
  char *v23; // rcx
  GUID *v24; // rdx
  BOOL v25; // eax
  int v26; // eax
  char *v27; // r8
  __int64 v28; // r11
  __int64 v29; // rdx
  char *v30; // r8
  unsigned __int16 *v32; // [rsp+20h] [rbp-50h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+30h] [rbp-40h] BYREF
  GUID pclsid; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v36[3]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v37; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  if ( a3 < 7 )
  {
    v7 = 797LL;
LABEL_3:
    v8 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v8);
    return v8;
  }
  if ( !*((_BYTE *)this + 96) )
  {
    v8 = -2147418113;
    v7 = 798LL;
    goto LABEL_4;
  }
  if ( !a4 )
  {
    v7 = 799LL;
    goto LABEL_3;
  }
  v32 = 0LL;
  if ( !*((_BYTE *)this + 217) )
  {
    cotaskmem_string_nothrow = (void **)wil::make_cotaskmem_string_nothrow(
                                          (wil *)&pv,
                                          (char *)L"LegacyDefaultEndpointKey",
                                          0xFFFFFFFFFFFFFFFFuLL,
                                          (const char *)a4);
    if ( &v32 != (unsigned __int16 **)cotaskmem_string_nothrow )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&v32,
        *cotaskmem_string_nothrow);
      *cotaskmem_string_nothrow = 0LL;
    }
    if ( pv )
      CoTaskMemFree(pv);
    v13 = v32;
    if ( v32 )
      goto LABEL_24;
    v11 = 833LL;
LABEL_56:
    v8 = -2147024882;
    goto LABEL_57;
  }
  if ( !a2 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v32,
      0LL);
    DefaultAudioEndpointId = AtmosCheck::GetDefaultAudioEndpointId(this, &v32);
    v8 = DefaultAudioEndpointId;
    if ( DefaultAudioEndpointId < 0 )
    {
      v10 = (unsigned int)DefaultAudioEndpointId;
      v11 = 810LL;
      goto LABEL_58;
    }
LABEL_18:
    v13 = v32;
    goto LABEL_24;
  }
  if ( !AtmosCheck::IsEndpointDeviceId(this, a2) )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v32,
      0LL);
    MMDeviceIdFromInterfaceId = mmdDevGetMMDeviceIdFromInterfaceId(a2, &v32);
    v8 = MMDeviceIdFromInterfaceId;
    if ( MMDeviceIdFromInterfaceId < 0 )
    {
      v10 = (unsigned int)MMDeviceIdFromInterfaceId;
      v11 = 825LL;
      goto LABEL_58;
    }
    goto LABEL_18;
  }
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pv,
    (char *)a2,
    0xFFFFFFFFFFFFFFFFuLL,
    v12);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v32,
    pv);
  v13 = v32;
  if ( !v32 )
  {
    v11 = 819LL;
    goto LABEL_56;
  }
LABEL_24:
  std::wstring::wstring(v36, v13);
  std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::find<void>(
    (_QWORD *)this + 76,
    &pclsid,
    v36);
  if ( v37 >= 8 )
  {
    v34 = 2 * v37 + 2;
    v16 = (void *)v36[0];
    pv = (LPVOID)v36[0];
    if ( v34 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&pv, &v34);
      v16 = pv;
    }
    operator delete(v16);
  }
  if ( *(_QWORD *)&pclsid.Data1 == *((_QWORD *)this + 77) )
  {
    v8 = -2147023728;
    v11 = 837LL;
LABEL_57:
    v10 = v8;
LABEL_58:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v10);
LABEL_59:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v32);
    return v8;
  }
  v17 = 0;
  v18 = (unsigned __int8 *)this + 272;
  v19 = (unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)&pclsid.Data1 + 48LL) + 1LL);
  v20 = (char *)a4 + 16;
  do
  {
    v21 = CLSIDFromString(*((LPCOLESTR *)v18 + 3), &pclsid);
    if ( v21 < 0 )
    {
      v29 = 844LL;
      goto LABEL_54;
    }
    if ( v18[1] )
    {
      *((_DWORD *)v20 + 2) = 1;
      v22 = 0x24C85A5ED1C03FFFLL;
      v23 = v20 - 16;
      v24 = (GUID *)(v20 - 16);
    }
    else
    {
      if ( *v19 )
        v25 = *(_DWORD *)(v19 + 3) >= 0;
      else
        v25 = *v18 != 0;
      v23 = v20 - 16;
      *((_DWORD *)v20 + 2) = v25;
      v22 = *(_QWORD *)(v19 + 15);
      v24 = (GUID *)(v20 - 16);
    }
    *((_QWORD *)v23 + 4) = v22;
    *(_DWORD *)v20 = *(v19 - 1) != 0;
    *((_DWORD *)v20 + 3) = *v19;
    v26 = *(_DWORD *)(v19 + 7);
    if ( v26 == -1879048208 || v26 == -2143326191 )
      v26 = 0;
    *((_DWORD *)v20 + 6) = v26;
    *v24 = pclsid;
    *((_DWORD *)v20 + 1) = *v18;
    v27 = (char *)*((_QWORD *)v18 + 4);
    v28 = v17;
    if ( v27 )
    {
      v21 = StringCchCopyW((char *)a4 + 304 * v17 + 44, 65LL, v27);
      if ( v21 < 0 )
      {
        v29 = 901LL;
LABEL_54:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v21);
        v8 = v21;
        goto LABEL_59;
      }
    }
    else
    {
      *((_WORD *)v20 + 14) = 0;
    }
    v30 = (char *)*((_QWORD *)v18 + 5);
    if ( v30 )
    {
      v21 = StringCchCopyW((char *)a4 + 304 * v28 + 174, 65LL, v30);
      if ( v21 < 0 )
      {
        v29 = 914LL;
        goto LABEL_54;
      }
    }
    else
    {
      *((_WORD *)v20 + 79) = 0;
    }
    ++v17;
    v19 += 24;
    v18 += 48;
    v20 += 304;
  }
  while ( v17 < 7 );
  if ( v32 )
    CoTaskMemFree(v32);
  return 0LL;
}
