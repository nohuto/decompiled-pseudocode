/*
 * XREFs of ?PrecreateStartMenuConfigRegKey@StartDocked@@YAXXZ @ 0x18019FA74
 * Callers:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x1801039F4 (--0XamlLauncher@@QEAA@XZ.c)
 * Callees:
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability @ 0x1800EC0B0 (CapabilityHelper--CreateSecurityAttributesForUWPCapability.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall StartDocked::PrecreateStartMenuConfigRegKey(StartDocked *this)
{
  struct _ACL *v1; // rax
  DWORD v2; // eax
  HKEY v3; // rdi
  DWORD LastError; // ebx
  unsigned int v5; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-68h]
  unsigned int phkResulta; // [rsp+20h] [rbp-68h]
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+50h] [rbp-38h] BYREF
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  WINBOOL bDaclDefaulted; // [rsp+90h] [rbp+8h] BYREF
  WINBOOL bDaclPresent; // [rsp+98h] [rbp+10h] BYREF
  HKEY psidGroup; // [rsp+A0h] [rbp+18h] BYREF
  PACL pDacl; // [rsp+A8h] [rbp+20h] BYREF

  CapabilityHelper::CreateSecurityAttributesForUWPCapability(&pSecurityDescriptor);
  psidGroup = 0LL;
  if ( RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Start", 0, 1u, &psidGroup) == 2 )
  {
    v3 = psidGroup;
    if ( psidGroup )
    {
      LastError = GetLastError();
      RegCloseKey(v3);
      SetLastError(LastError);
    }
    psidGroup = 0LL;
    v5 = RegCreateKeyExW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Start",
           0,
           0LL,
           0,
           0xF003Fu,
           &SecurityAttributes,
           &psidGroup,
           0LL);
    if ( v5 )
      wil::details::in1diag3::Throw_Win32(
        retaddr,
        (void *)0x18,
        (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\StartDockedHelpers.h",
        (const char *)v5,
        phkResulta);
  }
  else
  {
    pDacl = 0LL;
    bDaclPresent = 0;
    bDaclDefaulted = 0;
    if ( GetSecurityDescriptorDacl(pSecurityDescriptor, &bDaclPresent, &pDacl, &bDaclDefaulted) )
    {
      v1 = pDacl;
      if ( !pDacl )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x25,
          (int)"shellcommon\\internal\\shell\\inc\\Private\\StartDockedHelpers.h",
          (const char *)0x8000FFFFLL);
        v1 = pDacl;
      }
      v2 = SetSecurityInfo(psidGroup, SE_REGISTRY_KEY, 4u, 0LL, 0LL, v1, 0LL);
      if ( v2 )
        wil::details::in1diag3::Throw_Win32(
          retaddr,
          (void *)0x2C,
          (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\StartDockedHelpers.h",
          (const char *)v2,
          phkResult);
    }
  }
  if ( psidGroup )
    RegCloseKey(psidGroup);
  if ( pSecurityDescriptor )
    LocalFree(pSecurityDescriptor);
}
