/*
 * XREFs of ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180154358
 * Callers:
 *     ?GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18013E28C (-GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncode.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18003D570 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800412FC (--$find@X@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004135C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004CB1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x180064F3C (-make_cotaskmem_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultAudioEndpointId@AtmosCheck@@AEBAJPEAPEAG@Z @ 0x180154224 (-GetDefaultAudioEndpointId@AtmosCheck@@AEBAJPEAPEAG@Z.c)
 *     ?IsEndpointDeviceId@AtmosCheck@@AEBA_NPEBG@Z @ 0x180154D6C (-IsEndpointDeviceId@AtmosCheck@@AEBA_NPEBG@Z.c)
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
  unsigned int v10; // edi
  int DefaultAudioEndpointId; // eax
  unsigned int v12; // ebx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  const char *v15; // r9
  unsigned __int16 *v16; // rdx
  int MMDeviceIdFromInterfaceId; // eax
  void **cotaskmem_string_nothrow; // rbx
  int v19; // r12d
  unsigned __int8 *v20; // r14
  unsigned __int8 *v21; // r15
  GUID *v22; // rsi
  HRESULT v23; // eax
  __int64 v24; // rax
  BOOL v25; // eax
  int v26; // eax
  char *v27; // r8
  __int64 v28; // r11
  int v29; // eax
  char *v30; // r8
  int v31; // eax
  unsigned __int16 *v32; // [rsp+20h] [rbp-40h] BYREF
  GUID pclsid; // [rsp+28h] [rbp-38h] BYREF
  void *v34[3]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  if ( a3 < 7 )
  {
    v7 = 799LL;
LABEL_3:
    v8 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v8);
    return v8;
  }
  v10 = 0;
  if ( !*((_BYTE *)this + 96) )
  {
    v8 = -2147418113;
    v7 = 800LL;
    goto LABEL_4;
  }
  if ( !a4 )
  {
    v7 = 801LL;
    goto LABEL_3;
  }
  v32 = 0LL;
  if ( *((_BYTE *)this + 217) )
  {
    if ( !a2 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&v32,
        0LL);
      DefaultAudioEndpointId = AtmosCheck::GetDefaultAudioEndpointId(this, &v32);
      v12 = DefaultAudioEndpointId;
      if ( DefaultAudioEndpointId < 0 )
      {
        v13 = (unsigned int)DefaultAudioEndpointId;
        v14 = 812LL;
        goto LABEL_51;
      }
LABEL_18:
      v16 = v32;
      goto LABEL_22;
    }
    if ( !AtmosCheck::IsEndpointDeviceId(this, a2) )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&v32,
        0LL);
      MMDeviceIdFromInterfaceId = mmdDevGetMMDeviceIdFromInterfaceId(a2, &v32);
      v12 = MMDeviceIdFromInterfaceId;
      if ( MMDeviceIdFromInterfaceId < 0 )
      {
        v13 = (unsigned int)MMDeviceIdFromInterfaceId;
        v14 = 827LL;
        goto LABEL_51;
      }
      goto LABEL_18;
    }
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pclsid,
      (char *)a2,
      0xFFFFFFFFFFFFFFFFuLL,
      v15);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v32,
      *(void **)&pclsid.Data1);
    *(_QWORD *)&pclsid.Data1 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&pclsid);
    v16 = v32;
    if ( v32 )
    {
LABEL_22:
      std::wstring::wstring(v34, v16);
      std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::find<void>(
        (__int64)this + 608,
        &pclsid,
        (__int64)v34);
      if ( v35 >= 8 )
        std::_Deallocate<16,0>(v34[0], 2 * v35 + 2);
      if ( *(_QWORD *)&pclsid.Data1 != *((_QWORD *)this + 77) )
      {
        v19 = 0;
        v20 = (unsigned __int8 *)this + 272;
        v21 = (unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)&pclsid.Data1 + 48LL) + 1LL);
        v22 = (GUID *)((char *)a4 + 16);
        while ( 1 )
        {
          v23 = CLSIDFromString(*((LPCOLESTR *)v20 + 3), &pclsid);
          v12 = v23;
          if ( v23 < 0 )
            break;
          if ( v20[1] )
          {
            *(_DWORD *)v22->Data4 = 1;
            v24 = 0x24C85A5ED1C03FFFLL;
          }
          else
          {
            if ( *v21 )
              v25 = *(_DWORD *)(v21 + 3) >= 0;
            else
              v25 = *v20 != 0;
            *(_DWORD *)v22->Data4 = v25;
            v24 = *(_QWORD *)(v21 + 15);
          }
          *(_QWORD *)&v22[1].Data1 = v24;
          v22->Data1 = *(v21 - 1) != 0;
          *(_DWORD *)&v22->Data4[4] = *v21;
          v26 = *(_DWORD *)(v21 + 7);
          if ( v26 == -1879048208 || v26 == -2143326191 )
            v26 = 0;
          *(_DWORD *)v22[1].Data4 = v26;
          v22[-1] = pclsid;
          *(_DWORD *)&v22->Data2 = *v20;
          v27 = (char *)*((_QWORD *)v20 + 4);
          v28 = (unsigned int)v19;
          if ( v27 )
          {
            v29 = StringCchCopyW((char *)a4 + 304 * (unsigned int)v19 + 44, 65LL, v27);
            v12 = v29;
            if ( v29 < 0 )
            {
              v13 = (unsigned int)v29;
              v14 = 903LL;
              goto LABEL_51;
            }
          }
          else
          {
            *(_WORD *)&v22[1].Data4[4] = 0;
          }
          v30 = (char *)*((_QWORD *)v20 + 5);
          if ( v30 )
          {
            v31 = StringCchCopyW((char *)a4 + 304 * v28 + 174, 65LL, v30);
            v12 = v31;
            if ( v31 < 0 )
            {
              v13 = (unsigned int)v31;
              v14 = 916LL;
              goto LABEL_51;
            }
          }
          else
          {
            *(_WORD *)&v22[9].Data4[6] = 0;
          }
          ++v19;
          v21 += 24;
          v20 += 48;
          v22 += 19;
          if ( v19 >= 7 )
            goto LABEL_52;
        }
        v13 = (unsigned int)v23;
        v14 = 846LL;
        goto LABEL_51;
      }
      v12 = -2147023728;
      v14 = 839LL;
      goto LABEL_50;
    }
    v14 = 821LL;
  }
  else
  {
    cotaskmem_string_nothrow = (void **)wil::make_cotaskmem_string_nothrow(
                                          &pclsid,
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
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&pclsid);
    v16 = v32;
    if ( v32 )
      goto LABEL_22;
    v14 = 835LL;
  }
  v12 = -2147024882;
LABEL_50:
  v13 = v12;
LABEL_51:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
    (const char *)v13);
  v10 = v12;
LABEL_52:
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v32);
  return v10;
}
