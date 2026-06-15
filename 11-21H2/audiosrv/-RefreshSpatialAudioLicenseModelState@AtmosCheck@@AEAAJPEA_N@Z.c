/*
 * XREFs of ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180058604
 * Callers:
 *     _lambda_306411e1888b4c6b6a6c7d2021597688_::operator() @ 0x180058044 (_lambda_306411e1888b4c6b6a6c7d2021597688_--operator().c)
 *     _lambda_02cf54438168803f227ee4e991ef3551_::operator() @ 0x180152EF0 (_lambda_02cf54438168803f227ee4e991ef3551_--operator().c)
 *     _lambda_584c7311ea728c54c4a47fc057f19078_::operator() @ 0x18015306C (_lambda_584c7311ea728c54c4a47fc057f19078_--operator().c)
 *     _lambda_f9bd085ee8be78cd632838852672651f_::operator() @ 0x1801533B8 (_lambda_f9bd085ee8be78cd632838852672651f_--operator().c)
 * Callees:
 *     ?InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z @ 0x18004A494 (-InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180058860 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x1800588F0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x180058A8C (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800599E4 (-clear@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18005EAE0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18005F038 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeAppServiceMode@AtmosCheck@@AEAAJXZ @ 0x180154BEC (-InitializeAppServiceMode@AtmosCheck@@AEAAJXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x180156B70 (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 *     ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x180156F44 (-UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::RefreshSpatialAudioLicenseModelState(AtmosCheck *this, bool *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  char *v4; // r15
  char v5; // r13
  int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // r14d
  LPCWCH *v11; // rsi
  LPCWCH *v12; // rbp
  const WCHAR *v13; // rax
  const WCHAR *v14; // rcx
  const WCHAR *v15; // rbx
  const WCHAR *v16; // r8
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rbx
  WCHAR *v24; // rdx
  WCHAR *v25; // rdx
  int v26; // eax
  int updated; // eax
  int bIgnoreCase; // [rsp+20h] [rbp-158h]
  char v29; // [rsp+30h] [rbp-148h] BYREF
  char v30[7]; // [rsp+31h] [rbp-147h] BYREF
  LPCWCH lpString2; // [rsp+38h] [rbp-140h]
  bool *v32; // [rsp+40h] [rbp-138h]
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+48h] [rbp-130h]
  _BYTE v34[16]; // [rsp+50h] [rbp-128h] BYREF
  char v35; // [rsp+60h] [rbp-118h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v32 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v33 = v3;
  v4 = (char *)this + 217;
  v29 = *((_BYTE *)this + 217);
  v5 = 0;
  `eh vector constructor iterator'(
    v34,
    0x20uLL,
    7uLL,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::SpatialAudioFormatSubtypeInfo,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
  v6 = InitializeSpatialAudioFormatSubtypeInfoArray((struct SpatialAudioFormatSubtypeInfo *)v34);
  v7 = v6;
  v8 = 19;
  if ( v6 != 19 )
  {
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9D9,
        (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v6,
        bIgnoreCase);
      v8 = v7;
    }
    else
    {
      v9 = ScanForInstalledSpatialAudioSubtypeAppServices(
             (struct SpatialAudioFormatSubtypeInfo *)v34,
             7,
             (bool *)this + 217);
      v8 = v9;
      if ( v9 < 0 )
      {
        v21 = (unsigned int)v9;
        v22 = 2523LL;
LABEL_37:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)v21,
          bIgnoreCase);
      }
      else
      {
        v10 = 0;
        v11 = (LPCWCH *)&v35;
        v12 = (LPCWCH *)((char *)this + 304);
        do
        {
          if ( CompareStringOrdinal(*(v11 - 1), -1, *(v12 - 1), -1, 1) != 2 )
          {
            v8 = -2147418113;
            v21 = 2147549183LL;
            v22 = 2539LL;
            goto LABEL_37;
          }
          v13 = (const WCHAR *)&unk_18017F160;
          v14 = (const WCHAR *)&unk_18017F160;
          if ( *v12 )
            v14 = *v12;
          v15 = (const WCHAR *)&unk_18017F160;
          if ( v12[1] )
            v15 = v12[1];
          v16 = (const WCHAR *)&unk_18017F160;
          if ( *v11 )
            v16 = *v11;
          if ( v11[1] )
            v13 = v11[1];
          lpString2 = v13;
          if ( *((_BYTE *)v12 - 32) != *((_BYTE *)v11 - 16)
            || CompareStringOrdinal(v14, -1, v16, -1, 1) != 2
            || CompareStringOrdinal(v15, -1, lpString2, -1, 1) != 2 )
          {
            v5 = 1;
            *((_BYTE *)v12 - 32) = *((_BYTE *)v11 - 16);
            v23 = 48LL * (int)v10;
            v24 = (WCHAR *)*v11;
            *v11 = 0LL;
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              (void **)((char *)this + v23 + 304),
              v24);
            v25 = (WCHAR *)v11[1];
            v11[1] = 0LL;
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              (void **)((char *)this + v23 + 312),
              v25);
          }
          ++v10;
          v12 += 6;
          v11 += 4;
        }
        while ( v10 < 7 );
        if ( v29 != *v4 )
        {
          if ( *v4 )
          {
            std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::clear((char *)this + 608);
            v26 = AtmosCheck::InitializeAppServiceMode(this);
            v8 = v26;
            if ( v26 < 0 )
            {
              v21 = (unsigned int)v26;
              v22 = 2589LL;
              goto LABEL_37;
            }
            updated = AtmosCheck::UpdateLicenseMapForAllEndpoints(this);
            v8 = updated;
            if ( updated < 0 )
            {
              v21 = (unsigned int)updated;
              v22 = 2590LL;
              goto LABEL_37;
            }
          }
          else
          {
            AtmosCheck::InitializeLicenseMapLegacy(this);
            AtmosCheck::UninitializeAppServiceMode(this);
          }
        }
        if ( v32 )
          *v32 = v5;
        if ( (unsigned int)dword_1801C02B0 > 5 )
        {
          v29 = *v4;
          v30[0] = v5;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
            v17,
            (unsigned int)&unk_18018F6B5,
            v18,
            v19,
            (__int64)v30,
            (__int64)&v29);
        }
        v8 = 0;
      }
    }
  }
  `eh vector destructor iterator'(
    v34,
    0x20uLL,
    7uLL,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
  if ( v3 )
    LeaveCriticalSection(v3);
  return v8;
}
