/*
 * XREFs of ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180039474
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18001F480 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z @ 0x180020ED0 (-UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180022308 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18003234C (-InternalRelease@-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x180032860 (--$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180039E9C (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180095F8C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=5
Microsoft::Bamo::BaseBamoConnection **__fastcall InputSystemServerConnection::Create(
        Microsoft::Bamo::BaseBamoConnection **a1,
        __int64 a2)
{
  const char *v4; // r9
  __int64 (__fastcall *v5)(__int64, PSECURITY_DESCRIPTOR, __int64 *); // rbx
  int v6; // eax
  __int64 v7; // r9
  int v8; // eax
  Microsoft::Bamo::BaseBamoConnection *v9; // rbx
  InputSystem *v10; // rsi
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-30h]
  int v14; // [rsp+20h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v17; // [rsp+80h] [rbp+30h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+88h] [rbp+38h] BYREF

  *a1 = 0LL;
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)(A;;0x001F0003;;;S-1-15-3-1024-1502825166-1963708345-261"
           "6377461-2562897074-4192028372-3968301570-1997628692-1435953622)",
          1u,
          &SecurityDescriptor,
          0LL) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\inputsystemserverconnection.cpp",
      v4);
  v17 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, PSECURITY_DESCRIPTOR, __int64 *))(*(_QWORD *)a2 + 64LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v17);
  v6 = v5(a2, SecurityDescriptor, &v17);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\inputsystemserverconnection.cpp",
      (const char *)(unsigned int)v6,
      v13);
  Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(a1);
  DWORD2(v15) = 1;
  *(_QWORD *)&v15 = 0LL;
  v8 = Microsoft::Bamo::BaseBamoConnection::CreateServer<InputSystemServerConnection>(a2, v17, &v15, v7, a1);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x32,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\inputsystemserverconnection.cpp",
      (const char *)(unsigned int)v8,
      v14);
  v9 = *a1;
  *(_QWORD *)&v15 = operator new(0xB8uLL);
  v10 = InputSystem::InputSystem((InputSystem *)v15, *a1);
  v11 = *((_QWORD *)v9 + 31);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *((_QWORD *)v9 + 31) = v10;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v17);
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return a1;
}
