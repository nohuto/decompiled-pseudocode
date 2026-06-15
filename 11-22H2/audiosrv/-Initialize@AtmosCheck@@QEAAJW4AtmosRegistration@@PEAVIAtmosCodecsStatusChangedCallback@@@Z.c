/*
 * XREFs of ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18005D69C
 * Callers:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x18005D0C4 (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180034A10 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180034C90 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ??0?$com_ptr_t@VAtmosCheck@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVAtmosCheck@@@Z @ 0x18005D990 (--0-$com_ptr_t@VAtmosCheck@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVAtmosCheck@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_306411e1888b4c6b6a6c7d2021597688___ @ 0x18005D9CC (Windows--Internal--ComTaskPool--QueueTask__lambda_306411e1888b4c6b6a6c7d2021597688___.c)
 *     ?InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ @ 0x18005DAD0 (-InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18005DBAC (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x18005DBEC (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x18005DC10 (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x18015DDCC (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 */

__int64 __fastcall AtmosCheck::Initialize(__int64 a1)
{
  int Instance; // edi
  __int64 v3; // r9
  int UniqueContext; // eax
  HANDLE v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  AtmosCheck *v11; // rcx
  signed int LastError; // eax
  AtmosCheck *v14; // rcx
  __int64 v15; // r9
  const char *v16; // rdx
  void *v17; // rcx
  void *v18; // rcx
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+70h] [rbp+20h] BYREF
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
    v5 = CreateEventW(&EventAttributes, 1, 0, L"Global\\Client_Atmos_Check_Event");
    *(_QWORD *)(a1 + 104) = v5;
    if ( v5 )
    {
      *(_BYTE *)(a1 + 99) = 0;
      goto LABEL_12;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v16 = "Error ConvertStringSecurityDescriptorToSecurityDescriptor";
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v16 = "Error creating Global\\Client_Atmos_Check_Event";
  }
  AtmosCheck::Trace(v14, v16, (unsigned int)LastError, v15);
LABEL_12:
  if ( !*(_BYTE *)(a1 + 100) )
  {
    Instance = AtmosCheck::PerformLicenseCheck((AtmosCheck *)a1, 0LL, v6, v7);
    if ( Instance < 0 )
      goto LABEL_27;
  }
  wil::com_ptr_t<AtmosCheck,wil::err_returncode_policy>::com_ptr_t<AtmosCheck,wil::err_returncode_policy>(&v20, a1);
  wil::com_ptr_t<AtmosCheck,wil::err_returncode_policy>::com_ptr_t<AtmosCheck,wil::err_returncode_policy>(
    &EventAttributes,
    v20);
  v8 = *(unsigned int *)(a1 + 220);
  LODWORD(EventAttributes.lpSecurityDescriptor) = 1;
  Instance = Windows::Internal::ComTaskPool::QueueTask__lambda_306411e1888b4c6b6a6c7d2021597688___(
               v10,
               v9,
               v8,
               &EventAttributes);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&EventAttributes);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v20);
LABEL_14:
  if ( Instance < 0 )
  {
LABEL_27:
    *(_BYTE *)(a1 + 96) = 0;
    AtmosCheck::UninitializeAppServiceMode((PVOID)a1);
    v17 = *(void **)(a1 + 112);
    if ( v17 )
    {
      UnregisterWaitEx(v17, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *(_QWORD *)(a1 + 112) = 0LL;
    }
    v18 = *(void **)(a1 + 104);
    if ( v18 )
    {
      CloseHandle(v18);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
  v11 = (AtmosCheck *)SecurityDescriptor;
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  AtmosCheck::Trace(v11, "Init result", (unsigned int)Instance, v3);
  return (unsigned int)Instance;
}
