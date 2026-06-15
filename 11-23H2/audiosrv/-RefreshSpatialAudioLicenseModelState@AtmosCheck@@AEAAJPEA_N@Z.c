/*
 * XREFs of ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180036E40
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs___Windows::ApplicationModel::IPackageInstallingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_365355403e96d7deb3da145a5ed01100___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___::Invoke @ 0x1800348D0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 *     _lambda_1df835b24497147b2d93aade403b0d0c_::operator() @ 0x18004A6F0 (_lambda_1df835b24497147b2d93aade403b0d0c_--operator().c)
 *     _lambda_306411e1888b4c6b6a6c7d2021597688_::operator() @ 0x18005D874 (_lambda_306411e1888b4c6b6a6c7d2021597688_--operator().c)
 *     _lambda_aa5001744ce94bbd4d4a1356ce3da641_::operator() @ 0x18015A45C (_lambda_aa5001744ce94bbd4d4a1356ce3da641_--operator().c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z @ 0x180037170 (-InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x1800377B0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x18005DC20 (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x18005E05C (-clear@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180066B60 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800670AC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180084444 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InitializeAppServiceMode@AtmosCheck@@AEAAJXZ @ 0x18015BC9C (-InitializeAppServiceMode@AtmosCheck@@AEAAJXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x18015DD7C (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 *     ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x18015E204 (-UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::RefreshSpatialAudioLicenseModelState(AtmosCheck *this, bool *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  char *v4; // r13
  int v5; // eax
  int v6; // ebx
  unsigned int v7; // r14d
  LPCWCH *v8; // rsi
  LPCWCH *v9; // rbx
  const WCHAR *v10; // rcx
  const WCHAR *v11; // r15
  const WCHAR *v12; // r8
  const WCHAR *v13; // rdi
  char v14; // cl
  __int64 v16; // rdx
  void **v17; // rdi
  WCHAR *v18; // rdx
  WCHAR *v19; // rdx
  int v20; // eax
  int updated; // eax
  char v22; // [rsp+30h] [rbp-D0h] BYREF
  char v23; // [rsp+31h] [rbp-CFh] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+38h] [rbp-C8h] BYREF
  PVOID pv; // [rsp+40h] [rbp-C0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  void *v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+7Ch] [rbp-84h]
  char *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  char *v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  _BYTE v35[16]; // [rsp+A0h] [rbp-60h] BYREF
  char v36; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  *(_QWORD *)&EventDescriptor.Id = a2;
  pv = this;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v24 = v3;
  v4 = (char *)this + 217;
  v23 = *((_BYTE *)this + 217);
  v22 = 0;
  `eh vector constructor iterator'(
    v35,
    0x20uLL,
    7uLL,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::SpatialAudioFormatSubtypeInfo,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
  v5 = InitializeSpatialAudioFormatSubtypeInfoArray((struct SpatialAudioFormatSubtypeInfo *)v35, 7, 1);
  v6 = v5;
  if ( v5 == 19 )
  {
    `eh vector destructor iterator'(
      v35,
      0x20uLL,
      7uLL,
      (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v24);
    return 19LL;
  }
  if ( v5 < 0 )
  {
    v16 = 2519LL;
    goto LABEL_29;
  }
  v6 = ScanForInstalledSpatialAudioSubtypeAppServices(
         (struct SpatialAudioFormatSubtypeInfo *)v35,
         7,
         (bool *)this + 217);
  if ( v6 < 0 )
  {
    v16 = 2521LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v6);
LABEL_30:
    `eh vector destructor iterator'(
      v35,
      0x20uLL,
      7uLL,
      (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v24);
    return (unsigned int)v6;
  }
  v7 = 0;
  v8 = (LPCWCH *)&v36;
  v9 = (LPCWCH *)((char *)this + 304);
  do
  {
    if ( CompareStringOrdinal(*(v8 - 1), -1, *(v9 - 1), -1, 1) != 2 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E9,
        (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)0x8000FFFFLL);
      `eh vector destructor iterator'(
        v35,
        0x20uLL,
        7uLL,
        (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
      Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v24);
      return 2147549183LL;
    }
    v10 = &String2;
    if ( *v9 )
      v10 = *v9;
    v11 = &String2;
    if ( v9[1] )
      v11 = v9[1];
    v12 = &String2;
    if ( *v8 )
      v12 = *v8;
    v13 = &String2;
    if ( v8[1] )
      v13 = v8[1];
    if ( *((_BYTE *)v9 - 32) != *((_BYTE *)v8 - 16)
      || CompareStringOrdinal(v10, -1, v12, -1, 1) != 2
      || CompareStringOrdinal(v11, -1, v13, -1, 1) != 2 )
    {
      v22 = 1;
      *((_BYTE *)v9 - 32) = *((_BYTE *)v8 - 16);
      v17 = (void **)((char *)pv + 48 * (int)v7);
      v18 = (WCHAR *)*v8;
      *v8 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        v17 + 38,
        v18);
      v19 = (WCHAR *)v8[1];
      v8[1] = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        v17 + 39,
        v19);
    }
    ++v7;
    v9 += 6;
    v8 += 4;
  }
  while ( v7 < 7 );
  if ( v23 != *v4 )
  {
    if ( *v4 )
    {
      std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::clear((char *)pv + 608);
      v20 = AtmosCheck::InitializeAppServiceMode((AtmosCheck *)pv);
      v6 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA1B,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v20);
        goto LABEL_30;
      }
      updated = AtmosCheck::UpdateLicenseMapForAllEndpoints((AtmosCheck *)pv);
      v6 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA1C,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)updated);
        goto LABEL_30;
      }
    }
    else
    {
      AtmosCheck::InitializeLicenseMapLegacy((AtmosCheck *)pv);
      AtmosCheck::UninitializeAppServiceMode(pv);
    }
  }
  v14 = v22;
  if ( *(_QWORD *)&EventDescriptor.Id )
    **(_BYTE **)&EventDescriptor.Id = v22;
  if ( (unsigned int)dword_1801CD2B8 > 5 )
  {
    v23 = *v4;
    v22 = v14;
    v33 = &v23;
    v34 = 1LL;
    v31 = &v22;
    v32 = 1LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_1801CD2C0;
    UserData.Size = *(unsigned __int16 *)off_1801CD2C0;
    UserData.Reserved = 2;
    v28 = &unk_180198DB3;
    v29 = 100;
    v30 = 1;
    LODWORD(pv) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  `eh vector destructor iterator'(
    v35,
    0x20uLL,
    7uLL,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
