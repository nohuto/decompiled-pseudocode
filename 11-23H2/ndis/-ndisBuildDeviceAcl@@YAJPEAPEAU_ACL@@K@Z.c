/*
 * XREFs of ?ndisBuildDeviceAcl@@YAJPEAPEAU_ACL@@K@Z @ 0x1C0032110
 * Callers:
 *     ?ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z @ 0x1C0031F74 (-ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z.c)
 *     ?ndisCreateSecurityDescriptorEx@@YAJPEAXK@Z @ 0x1C011FBFC (-ndisCreateSecurityDescriptorEx@@YAJPEAXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int64 __fastcall ndisBuildDeviceAcl(struct _ACL **a1, char a2)
{
  _DWORD *v2; // r15
  _DWORD *v3; // r13
  GENERIC_MAPPING *FileObjectGenericMapping; // rax
  ULONG v6; // edi
  int v7; // r12d
  ULONG v8; // eax
  _DWORD *Pool2; // rax
  int v10; // r14d
  ACL *v11; // rax
  ACL *v12; // rsi
  NTSTATUS Acl; // ebx
  ULONG v15; // ebx
  ULONG v16; // ebx
  ULONG v17; // eax
  _DWORD *v18; // rax
  ACCESS_MASK AccessMask; // [rsp+20h] [rbp-30h] BYREF
  int v20; // [rsp+24h] [rbp-2Ch]
  int v21; // [rsp+28h] [rbp-28h]
  int v22; // [rsp+2Ch] [rbp-24h]
  int v23; // [rsp+30h] [rbp-20h]
  int v24; // [rsp+34h] [rbp-1Ch]
  struct _ACL **v25; // [rsp+38h] [rbp-18h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+40h] [rbp-10h] BYREF

  v25 = a1;
  v2 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v3 = 0LL;
  AccessMask = 0x10000000;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  FileObjectGenericMapping = IoGetFileObjectGenericMapping();
  RtlMapGenericMask(&AccessMask, FileObjectGenericMapping);
  v6 = RtlLengthSid(SeExports->SeAliasAdminsSid) + 16;
  v20 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v6 += RtlLengthSid(SeExports->SeLocalSystemSid) + 8;
  v7 = a2 & 8;
  if ( (a2 & 8) != 0 )
    v6 += RtlLengthSid(SeExports->SeNetworkServiceSid) + 8;
  v21 = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    v15 = RtlLengthSid(&unk_1C00DA608);
    v16 = RtlLengthSid(&unk_1C00DA5E8) + v15;
    v6 += v16 + 32 + RtlLengthSid(&unk_1C00DA5C8);
  }
  v22 = a2 & 4;
  if ( (a2 & 4) != 0 )
  {
    v8 = RtlLengthRequiredSid(2u);
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v8, 1935885390);
    v2 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( RtlInitializeSid(Pool2, &IdentifierAuthority, 2u) )
    {
      Acl = -1073741670;
      goto LABEL_35;
    }
    v2[2] = 32;
    v2[3] = 556;
    v6 += RtlLengthSid(v2) + 8;
  }
  v23 = a2 & 0x20;
  if ( (a2 & 0x20) != 0 )
    v6 += RtlLengthSid(SeExports->SeLocalServiceSid) + 8;
  v24 = a2 & 0x40;
  if ( (a2 & 0x40) != 0 )
  {
    v17 = RtlLengthRequiredSid(2u);
    v18 = (_DWORD *)ExAllocatePool2(64LL, v17, 1819296846);
    v3 = v18;
    if ( !v18 )
    {
      Acl = -1073741670;
      goto LABEL_34;
    }
    if ( RtlInitializeSid(v18, &IdentifierAuthority, 2u) )
    {
      Acl = -1073741670;
LABEL_43:
      ExFreePoolWithTag(v3, 0);
      goto LABEL_34;
    }
    v3[2] = 32;
    v3[3] = 559;
    v6 += RtlLengthSid(v3) + 8;
  }
  v10 = a2 & 0x80;
  if ( v10 )
    v6 += RtlLengthSid(&unk_1C00DA5A8) + 8;
  v11 = (ACL *)ExAllocatePool2(64LL, v6, 1702052942);
  v12 = v11;
  if ( v11 )
  {
    memset(v11, 0, v6);
    Acl = RtlCreateAcl(v12, v6, 2u);
    if ( Acl < 0 )
    {
      ExFreePoolWithTag(v12, 0);
    }
    else
    {
      RtlAddAccessAllowedAce(v12, 2u, AccessMask, SeExports->SeAliasAdminsSid);
      if ( v20 )
        RtlAddAccessAllowedAce(v12, 2u, AccessMask, SeExports->SeLocalSystemSid);
      if ( v7 )
        RtlAddAccessAllowedAce(v12, 2u, AccessMask, SeExports->SeNetworkServiceSid);
      if ( v21 )
      {
        RtlAddAccessAllowedAce(v12, 2u, AccessMask, &unk_1C00DA5C8);
        RtlAddAccessAllowedAce(v12, 2u, AccessMask, &unk_1C00DA5E8);
        RtlAddAccessAllowedAce(v12, 2u, AccessMask, &unk_1C00DA608);
      }
      if ( v22 )
        RtlAddAccessAllowedAce(v12, 2u, AccessMask, v2);
      if ( v23 )
        RtlAddAccessAllowedAce(v12, 2u, AccessMask, SeExports->SeLocalServiceSid);
      if ( v24 )
        RtlAddAccessAllowedAce(v12, 2u, AccessMask, v3);
      if ( v10 )
        RtlAddAccessAllowedAce(v12, 2u, AccessMask, &unk_1C00DA5A8);
      Acl = 0;
      *v25 = v12;
    }
  }
  else
  {
    Acl = -1073741670;
  }
  if ( v3 )
    goto LABEL_43;
LABEL_34:
  if ( v2 )
LABEL_35:
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)Acl;
}
