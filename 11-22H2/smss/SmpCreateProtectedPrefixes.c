/*
 * XREFs of SmpCreateProtectedPrefixes @ 0x14000FC70
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

__int64 SmpCreateProtectedPrefixes()
{
  char v0; // di
  NTSTATUS v1; // ebx
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  unsigned __int8 v4; // cl
  void *FileAttributes; // [rsp+30h] [rbp-D8h]
  unsigned __int8 OldValue[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-58h] BYREF
  void *FileHandle; // [rsp+B8h] [rbp-50h] BYREF
  PSID v12; // [rsp+C0h] [rbp-48h] BYREF
  PSID Sid; // [rsp+C8h] [rbp-40h] BYREF
  PSID v14; // [rsp+D0h] [rbp-38h] BYREF
  PSID v15; // [rsp+D8h] [rbp-30h] BYREF
  PSID v16; // [rsp+E0h] [rbp-28h] BYREF
  PSID v17; // [rsp+E8h] [rbp-20h] BYREF
  PSID v18; // [rsp+F0h] [rbp-18h] BYREF
  PSID v19; // [rsp+F8h] [rbp-10h] BYREF
  int v20; // [rsp+100h] [rbp-8h] BYREF
  const wchar_t *v21; // [rsp+108h] [rbp+0h]
  int v22; // [rsp+110h] [rbp+8h] BYREF
  const wchar_t *v23; // [rsp+118h] [rbp+10h]
  int v24; // [rsp+120h] [rbp+18h] BYREF
  const wchar_t *v25; // [rsp+128h] [rbp+20h]
  int v26; // [rsp+130h] [rbp+28h] BYREF
  const wchar_t *v27; // [rsp+138h] [rbp+30h]
  int v28; // [rsp+140h] [rbp+38h] BYREF
  const wchar_t *v29; // [rsp+148h] [rbp+40h]
  int v30; // [rsp+150h] [rbp+48h] BYREF
  const wchar_t *v31; // [rsp+158h] [rbp+50h]
  int v32; // [rsp+160h] [rbp+58h] BYREF
  const wchar_t *v33; // [rsp+168h] [rbp+60h]
  int v34; // [rsp+170h] [rbp+68h] BYREF
  const wchar_t *v35; // [rsp+178h] [rbp+70h]
  int v36; // [rsp+180h] [rbp+78h] BYREF
  const wchar_t *v37; // [rsp+188h] [rbp+80h]
  int v38; // [rsp+190h] [rbp+88h] BYREF
  const wchar_t *v39; // [rsp+198h] [rbp+90h]
  int v40; // [rsp+1A0h] [rbp+98h] BYREF
  const wchar_t *v41; // [rsp+1A8h] [rbp+A0h]
  _BYTE SecurityDescriptor[40]; // [rsp+1B0h] [rbp+A8h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v44; // [rsp+1E0h] [rbp+D8h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v45; // [rsp+1E8h] [rbp+E0h] BYREF
  _ACL Acl; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _ACL Sacl; // [rsp+608h] [rbp+500h] BYREF

  *(_WORD *)&v44.Value[4] = 256;
  Handle = 0LL;
  v37 = L"\\Device\\NamedPipe\\";
  FileHandle = 0LL;
  v39 = L"\\Device\\mailslot\\";
  *(_DWORD *)v44.Value = 0;
  v21 = L"\\Device\\NamedPipe\\ProtectedPrefix";
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v23 = L"\\Device\\mailslot\\ProtectedPrefix";
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v25 = L"\\Device\\NamedPipe\\ProtectedPrefix\\Administrators";
  v0 = 1;
  *(_DWORD *)v45.Value = 0;
  v27 = L"\\Device\\mailslot\\ProtectedPrefix\\Administrators";
  v29 = L"\\Device\\NamedPipe\\ProtectedPrefix\\LocalService";
  v31 = L"\\Device\\mailslot\\ProtectedPrefix\\LocalService";
  v33 = L"\\Device\\NamedPipe\\ProtectedPrefix\\NetWorkService";
  v35 = L"\\Device\\mailslot\\ProtectedPrefix\\NetWorkService";
  v41 = L"\\Device\\NamedPipe\\Sessions";
  *(_WORD *)&v45.Value[4] = 4096;
  Sid = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v12 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  OldValue[0] = 1;
  v36 = 2490404;
  v38 = 2359330;
  v20 = 4456514;
  v22 = 4325440;
  v24 = 6422624;
  v26 = 6291550;
  v28 = 6160476;
  v30 = 6029402;
  v32 = 6422624;
  v34 = 6291550;
  v40 = 3538996;
  v1 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v1 >= 0 )
  {
    v1 = RtlCreateAcl(&Acl, 0x408u, 2u);
    if ( v1 >= 0 )
    {
      v1 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
      if ( v1 >= 0 )
      {
        ObjectAttributes.Attributes = 64;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v1 = NtCreateFile(&PipePrefix1, 0x1F01FFu, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 3u, 2u, 1u, 0LL, 0);
        if ( v1 >= 0 )
        {
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
          v2 = NtCreateFile(&MailPrefix1, 0x1F01FFu, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 3u, 2u, 1u, 0LL, 0);
          v1 = v2;
          if ( v2 == -1073741766 )
          {
            v0 = 0;
          }
          else if ( v2 < 0 )
          {
            goto LABEL_46;
          }
          v1 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 2u, 0x20u, 0x220u, 0, 0, 0, 0, 0, 0, &Sid);
          if ( v1 >= 0 )
          {
            v1 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, Sid);
            if ( v1 >= 0 )
            {
              v1 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &v14);
              if ( v1 >= 0 )
              {
                v1 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v14);
                if ( v1 >= 0 )
                {
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
                  v1 = NtCreateFile(
                         &PipePrefix2,
                         0x1F01FFu,
                         &ObjectAttributes,
                         &IoStatusBlock,
                         0LL,
                         0x80u,
                         3u,
                         2u,
                         1u,
                         0LL,
                         0);
                  if ( v1 >= 0 )
                  {
                    if ( v0 )
                    {
                      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v26;
                      NtCreateFile(
                        &MailPrefix2,
                        0x1F01FFu,
                        &ObjectAttributes,
                        &IoStatusBlock,
                        0LL,
                        0x80u,
                        3u,
                        2u,
                        1u,
                        0LL,
                        0);
                    }
                    v1 = RtlCreateAcl(&Acl, 0x408u, 2u);
                    if ( v1 >= 0 )
                    {
                      v1 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x13u, 0, 0, 0, 0, 0, 0, 0, &v15);
                      if ( v1 >= 0 )
                      {
                        v1 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v15);
                        if ( v1 >= 0 )
                        {
                          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v28;
                          v1 = NtCreateFile(
                                 &PipePrefix3,
                                 0x1F01FFu,
                                 &ObjectAttributes,
                                 &IoStatusBlock,
                                 0LL,
                                 0x80u,
                                 3u,
                                 2u,
                                 1u,
                                 0LL,
                                 0);
                          if ( v1 >= 0 )
                          {
                            if ( !v0
                              || (ObjectAttributes.ObjectName = (PUNICODE_STRING)&v30,
                                  v1 = NtCreateFile(
                                         &MailPrefix3,
                                         0x1F01FFu,
                                         &ObjectAttributes,
                                         &IoStatusBlock,
                                         0LL,
                                         0x80u,
                                         3u,
                                         2u,
                                         1u,
                                         0LL,
                                         0),
                                  v1 >= 0) )
                            {
                              v1 = RtlCreateAcl(&Acl, 0x408u, 2u);
                              if ( v1 >= 0 )
                              {
                                v1 = RtlAllocateAndInitializeSid(
                                       &IdentifierAuthority,
                                       1u,
                                       0x14u,
                                       0,
                                       0,
                                       0,
                                       0,
                                       0,
                                       0,
                                       0,
                                       &v16);
                                if ( v1 >= 0 )
                                {
                                  v1 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v16);
                                  if ( v1 >= 0 )
                                  {
                                    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v32;
                                    v1 = NtCreateFile(
                                           &PipePrefix4,
                                           0x1F01FFu,
                                           &ObjectAttributes,
                                           &IoStatusBlock,
                                           0LL,
                                           0x80u,
                                           3u,
                                           2u,
                                           1u,
                                           0LL,
                                           0);
                                    if ( v1 >= 0 )
                                    {
                                      if ( !v0
                                        || (ObjectAttributes.ObjectName = (PUNICODE_STRING)&v34,
                                            v1 = NtCreateFile(
                                                   &MailPrefix4,
                                                   0x1F01FFu,
                                                   &ObjectAttributes,
                                                   &IoStatusBlock,
                                                   0LL,
                                                   0x80u,
                                                   3u,
                                                   2u,
                                                   1u,
                                                   0LL,
                                                   0),
                                            v1 >= 0) )
                                      {
                                        v1 = RtlCreateAcl(&Acl, 0x408u, 2u);
                                        if ( v1 >= 0 )
                                        {
                                          v1 = RtlAllocateAndInitializeSid(&v44, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &v12);
                                          if ( v1 >= 0 )
                                          {
                                            v1 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v12);
                                            if ( v1 >= 0 )
                                            {
                                              v1 = RtlAllocateAndInitializeSid(
                                                     &IdentifierAuthority,
                                                     1u,
                                                     0xCu,
                                                     0,
                                                     0,
                                                     0,
                                                     0,
                                                     0,
                                                     0,
                                                     0,
                                                     &v19);
                                              if ( v1 >= 0 )
                                              {
                                                v1 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v19);
                                                if ( v1 >= 0 )
                                                {
                                                  v1 = RtlAllocateAndInitializeSid(
                                                         &IdentifierAuthority,
                                                         1u,
                                                         7u,
                                                         0,
                                                         0,
                                                         0,
                                                         0,
                                                         0,
                                                         0,
                                                         0,
                                                         &v18);
                                                  if ( v1 >= 0 )
                                                  {
                                                    v1 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v18);
                                                    if ( v1 >= 0 )
                                                    {
                                                      v1 = RtlCreateAcl(&Sacl, 0x408u, 2u);
                                                      if ( v1 >= 0 )
                                                      {
                                                        v1 = RtlAllocateAndInitializeSid(
                                                               &v45,
                                                               1u,
                                                               0x1000u,
                                                               0,
                                                               0,
                                                               0,
                                                               0,
                                                               0,
                                                               0,
                                                               0,
                                                               &v17);
                                                        if ( v1 >= 0 )
                                                        {
                                                          LODWORD(FileAttributes) = 1;
                                                          v1 = RtlAddMandatoryAce(
                                                                 &Sacl,
                                                                 2u,
                                                                 0,
                                                                 (ULONG)v17,
                                                                 0x11u,
                                                                 FileAttributes);
                                                          if ( v1 >= 0 )
                                                          {
                                                            v1 = RtlSetSaclSecurityDescriptor(
                                                                   SecurityDescriptor,
                                                                   1u,
                                                                   &Sacl,
                                                                   0);
                                                            if ( v1 >= 0 )
                                                            {
                                                              v3 = RtlAdjustPrivilege(8u, 1u, 0, OldValue);
                                                              v4 = OldValue[0];
                                                              ObjectAttributes.Length = 48;
                                                              if ( v3 < 0 )
                                                                v4 = 1;
                                                              ObjectAttributes.RootDirectory = 0LL;
                                                              OldValue[0] = v4;
                                                              ObjectAttributes.Attributes = 64;
                                                              ObjectAttributes.ObjectName = (PUNICODE_STRING)&v36;
                                                              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                                                              v1 = NtOpenFile(
                                                                     &FileHandle,
                                                                     0x11E0000u,
                                                                     &ObjectAttributes,
                                                                     &IoStatusBlock,
                                                                     3u,
                                                                     0x20u);
                                                              if ( v1 >= 0 )
                                                              {
                                                                v1 = NtSetSecurityObject(
                                                                       FileHandle,
                                                                       0x1Cu,
                                                                       SecurityDescriptor);
                                                                if ( v1 >= 0 )
                                                                {
                                                                  if ( v0 )
                                                                  {
                                                                    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v38;
                                                                    v1 = NtOpenFile(
                                                                           &Handle,
                                                                           0x11E0000u,
                                                                           &ObjectAttributes,
                                                                           &IoStatusBlock,
                                                                           3u,
                                                                           0x20u);
                                                                    if ( v1 < 0 )
                                                                      goto LABEL_46;
                                                                    NtSetSecurityObject(
                                                                      Handle,
                                                                      0x1Cu,
                                                                      SecurityDescriptor);
                                                                  }
                                                                  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v40;
                                                                  ObjectAttributes.Length = 48;
                                                                  ObjectAttributes.RootDirectory = 0LL;
                                                                  ObjectAttributes.Attributes = 64;
                                                                  ObjectAttributes.SecurityDescriptor = SmpPrimarySecurityDescriptor;
                                                                  ObjectAttributes.SecurityQualityOfService = 0LL;
                                                                  v1 = NtCreateFile(
                                                                         &SmpPipeSessionsPrefix,
                                                                         0x1F01FFu,
                                                                         &ObjectAttributes,
                                                                         &IoStatusBlock,
                                                                         0LL,
                                                                         0x80u,
                                                                         3u,
                                                                         2u,
                                                                         1u,
                                                                         0LL,
                                                                         0);
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_46:
  if ( Handle )
    NtClose(Handle);
  if ( FileHandle )
    NtClose(FileHandle);
  if ( !OldValue[0] )
    RtlAdjustPrivilege(8u, 0, 0, OldValue);
  if ( v12 )
    RtlFreeSid(v12);
  if ( Sid )
    RtlFreeSid(Sid);
  if ( v14 )
    RtlFreeSid(v14);
  if ( v15 )
    RtlFreeSid(v15);
  if ( v16 )
    RtlFreeSid(v16);
  if ( v17 )
    RtlFreeSid(v17);
  if ( v18 )
    RtlFreeSid(v18);
  if ( v19 )
    RtlFreeSid(v19);
  return (unsigned int)v1;
}
