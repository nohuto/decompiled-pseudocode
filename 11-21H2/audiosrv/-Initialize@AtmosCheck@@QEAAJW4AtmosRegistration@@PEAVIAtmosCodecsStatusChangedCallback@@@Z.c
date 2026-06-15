/*
 * XREFs of ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180057E7C
 * Callers:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x180057C1C (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180040818 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ??0?$com_ptr_t@VAtmosCheck@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVAtmosCheck@@@Z @ 0x1800409CC (--0-$com_ptr_t@VAtmosCheck@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVAtmosCheck@@@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180040D48 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180040D88 (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x18004199C (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ @ 0x180057D00 (-InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_306411e1888b4c6b6a6c7d2021597688___ @ 0x180057DC8 (Windows--Internal--ComTaskPool--QueueTask__lambda_306411e1888b4c6b6a6c7d2021597688___.c)
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x180058A8C (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x180156B70 (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 */

__int64 __fastcall AtmosCheck::Initialize(__int64 a1)
{
  int Instance; // edi
  int UniqueContext; // eax
  HANDLE v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  AtmosCheck *v8; // rcx
  signed int LastError; // eax
  AtmosCheck *v11; // rcx
  const char *v12; // rdx
  void *v13; // rcx
  void *v14; // rcx
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+70h] [rbp+20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp+30h] BYREF

  *(_QWORD *)(a1 + 184) = 1LL;
  SecurityDescriptor = 0LL;
  Instance = 0;
  *(_BYTE *)(a1 + 696) = 0;
  if ( !*(_BYTE *)(a1 + 96) )
    AtmosCheck::InitializeLicenseMapLegacy((AtmosCheck *)a1);
  if ( AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform((AtmosCheck *)a1) && !*(_BYTE *)(a1 + 96) )
  {
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 (LPVOID *)(a1 + 224));
    if ( Instance < 0 )
      goto LABEL_27;
    Instance = AtmosCheck::InitializeCommonSpatialTechInfo((AtmosCheck *)a1);
    if ( Instance < 0 )
      goto LABEL_27;
  }
  if ( !AtmosCheck::IsLicenseEvaluationRequired((AtmosCheck *)a1) )
  {
    *(_BYTE *)(a1 + 96) = 1;
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 96) )
    goto LABEL_14;
  UniqueContext = SHTaskPoolGetUniqueContext();
  *(_BYTE *)(a1 + 100) = 1;
  *(_DWORD *)(a1 + 220) = UniqueContext;
  *(_QWORD *)(a1 + 40) = &g_AtmosCheckCallback;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(L"D:(A;;GA;;;WD)(A;;GA;;;AC)", 1u, &SecurityDescriptor, 0LL) )
  {
    EventAttributes.nLength = 24;
    EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
    EventAttributes.bInheritHandle = 0;
    v4 = CreateEventW(&EventAttributes, 1, 0, L"Global\\Client_Atmos_Check_Event");
    *(_QWORD *)(a1 + 104) = v4;
    if ( v4 )
    {
      *(_BYTE *)(a1 + 99) = 0;
      goto LABEL_12;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v12 = "Error ConvertStringSecurityDescriptorToSecurityDescriptor";
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v12 = "Error creating Global\\Client_Atmos_Check_Event";
  }
  AtmosCheck::Trace(v11, v12, LastError);
LABEL_12:
  if ( !*(_BYTE *)(a1 + 100) )
  {
    Instance = AtmosCheck::PerformLicenseCheck((AtmosCheck *)a1, 0);
    if ( Instance < 0 )
      goto LABEL_27;
  }
  wil::com_ptr_t<AtmosCheck,wil::err_returncode_policy>::com_ptr_t<AtmosCheck,wil::err_returncode_policy>(&v16, a1);
  wil::com_ptr_t<AtmosCheck,wil::err_returncode_policy>::com_ptr_t<AtmosCheck,wil::err_returncode_policy>(
    &EventAttributes,
    v16);
  v5 = *(_DWORD *)(a1 + 220);
  LODWORD(EventAttributes.lpSecurityDescriptor) = 1;
  Instance = Windows::Internal::ComTaskPool::QueueTask__lambda_306411e1888b4c6b6a6c7d2021597688___(
               v7,
               v6,
               v5,
               (__int64 *)&EventAttributes);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&EventAttributes);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
LABEL_14:
  if ( Instance < 0 )
  {
LABEL_27:
    *(_BYTE *)(a1 + 96) = 0;
    AtmosCheck::UninitializeAppServiceMode((PVOID)a1);
    v13 = *(void **)(a1 + 112);
    if ( v13 )
    {
      UnregisterWaitEx(v13, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *(_QWORD *)(a1 + 112) = 0LL;
    }
    v14 = *(void **)(a1 + 104);
    if ( v14 )
    {
      CloseHandle(v14);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
  v8 = (AtmosCheck *)SecurityDescriptor;
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  AtmosCheck::Trace(v8, "Init result", Instance);
  return (unsigned int)Instance;
}
