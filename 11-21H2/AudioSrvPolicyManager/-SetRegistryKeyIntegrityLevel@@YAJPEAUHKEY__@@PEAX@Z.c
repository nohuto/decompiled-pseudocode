/*
 * XREFs of ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800408C8
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x1800340B4 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18003B7B4 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002BBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SetRegistryKeyIntegrityLevel(HKEY hKey, PSID pSid)
{
  int KeySecurity; // ebx
  struct _ACL *v5; // r15
  void *v6; // rax
  void *v7; // r12
  struct _ACL *v8; // r14
  int v9; // ebx
  DWORD v10; // ebx
  struct _ACL *v11; // rax
  struct _ACL *v12; // rdi
  DWORD v13; // esi
  HANDLE v14; // rax
  HANDLE ProcessHeap; // rax
  bool v16; // sf
  signed int LastError; // eax
  HANDLE v18; // rax
  DWORD cbSecurityDescriptor; // [rsp+30h] [rbp-49h] BYREF
  PACL pSacl; // [rsp+38h] [rbp-41h] BYREF
  LPVOID pAceList; // [rsp+40h] [rbp-39h] BYREF
  WINBOOL bSaclDefaulted; // [rsp+48h] [rbp-31h] BYREF
  WINBOOL bSaclPresent; // [rsp+4Ch] [rbp-2Dh] BYREF
  LPVOID pAce; // [rsp+50h] [rbp-29h] BYREF
  _BYTE pSecurityDescriptor[40]; // [rsp+58h] [rbp-21h] BYREF
  DWORD pAclInformation; // [rsp+80h] [rbp+7h] BYREF
  int v28; // [rsp+84h] [rbp+Bh]
  int v29; // [rsp+88h] [rbp+Fh]

  KeySecurity = -2147024809;
  if ( !pSid )
    return (unsigned int)KeySecurity;
  pSacl = 0LL;
  cbSecurityDescriptor = 0;
  v5 = 0LL;
  KeySecurity = RegGetKeySecurity(hKey, 0x10u, 0LL, &cbSecurityDescriptor);
  if ( KeySecurity != 122 )
  {
LABEL_28:
    v16 = KeySecurity < 0;
    if ( KeySecurity <= 0 )
      goto LABEL_30;
    goto LABEL_29;
  }
  v6 = operator new[](cbSecurityDescriptor, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    KeySecurity = RegGetKeySecurity(hKey, 0x10u, v6, &cbSecurityDescriptor);
    if ( KeySecurity )
    {
LABEL_27:
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v7);
      goto LABEL_28;
    }
    if ( !GetSecurityDescriptorSacl(v7, &bSaclPresent, &pSacl, &bSaclDefaulted) )
    {
      KeySecurity = GetLastError();
      goto LABEL_27;
    }
    v8 = pSacl;
    v9 = 8;
    pAceList = 0LL;
    pAclInformation = 0;
    v28 = 0;
    v29 = 0;
    if ( pSacl && GetAclInformation(pSacl, &pAclInformation, 0xCu, AclSizeInformation) )
      v9 = v28;
    v10 = GetLengthSid(pSid) + 8 + v9;
    if ( v10 > 0xFFFF )
      v10 = 0xFFFF;
    v11 = (struct _ACL *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      if ( InitializeAcl(v11, v10, 2u) && AddAccessAllowedAceEx(v12, 2u, 3u, 1u, pSid) && GetAce(v12, 0, &pAce) )
      {
        KeySecurity = 0;
        *(_BYTE *)pAce = 17;
        if ( !v8 )
          goto LABEL_23;
        v13 = 0;
        if ( !pAclInformation )
          goto LABEL_23;
        while ( !GetAce(v8, v13, &pAceList)
             || *(_BYTE *)pAceList == 17
             || AddAce(v12, 2u, 0xFFFFFFFF, pAceList, *((unsigned __int16 *)pAceList + 1)) )
        {
          if ( ++v13 >= pAclInformation )
            goto LABEL_23;
        }
      }
      KeySecurity = GetLastError();
      if ( !KeySecurity )
      {
LABEL_23:
        v5 = v12;
        goto LABEL_27;
      }
    }
    else
    {
      KeySecurity = 8;
    }
    v14 = GetProcessHeap();
    HeapFree(v14, 0, v12);
    goto LABEL_27;
  }
  LOWORD(KeySecurity) = 122;
LABEL_29:
  KeySecurity = (unsigned __int16)KeySecurity | 0x80070000;
  v16 = KeySecurity < 0;
LABEL_30:
  if ( !v16 )
  {
    if ( !InitializeSecurityDescriptor(pSecurityDescriptor, 1u)
      || !SetSecurityDescriptorSacl(pSecurityDescriptor, 1, v5, 0)
      || RegSetKeySecurity(hKey, 0x10u, pSecurityDescriptor) )
    {
      LastError = GetLastError();
      KeySecurity = LastError;
      if ( LastError > 0 )
        KeySecurity = (unsigned __int16)LastError | 0x80070000;
    }
    if ( v5 )
    {
      v18 = GetProcessHeap();
      HeapFree(v18, 0, v5);
    }
  }
  return (unsigned int)KeySecurity;
}
