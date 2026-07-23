/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1409B8170
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402DE190 @ 0x1402DE190 (sub_1402DE190.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x140724CE0 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1407B4A50 (RtlValidAcl.c)
 *     sub_1409B863C @ 0x1409B863C (sub_1409B863C.c)
 *     sub_1409B8B20 @ 0x1409B8B20 (sub_1409B8B20.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlAddResourceAttributeAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ULONG AccessMask,
        PSID Sid,
        PCLAIM_SECURITY_ATTRIBUTES_INFORMATION AttributeInfo,
        PULONG ReturnLength)
{
  NTSTATUS v11; // ebx
  int v12; // ecx
  __int64 AclRevision; // rdx
  _BYTE *v14; // rdi
  _BYTE *PoolWithQuotaTag; // rax
  size_t v16; // r13
  unsigned __int16 v17; // cx
  ULONG v18; // ecx
  PACL v19; // rdx
  unsigned int i; // r8d
  __int64 v21; // r8
  _WORD *v22; // r15
  ULONG v23; // edx
  char v24; // al
  int v26; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int NumberOfBytes; // [rsp+2Ch] [rbp-DCh] BYREF
  ULONG NumberOfBytes_4; // [rsp+30h] [rbp-D8h]
  PVOID FirstFree; // [rsp+38h] [rbp-D0h] BYREF
  int v30; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v31; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  NumberOfBytes_4 = AceFlags;
  FirstFree = 0LL;
  v30 = 0;
  v31 = 256;
  memset(Src, 0, sizeof(Src));
  NumberOfBytes = 256;
  if ( !ReturnLength )
    return -1073741811;
  *ReturnLength = 0;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v12 = *(_DWORD *)((char *)Sid + 2) - v30;
  if ( !v12 )
    v12 = *((unsigned __int16 *)Sid + 3) - v31;
  if ( v12 || *((_BYTE *)Sid + 1) != 1 || *((_DWORD *)Sid + 2) )
    return -1073741811;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= (unsigned __int8)AceRevision )
    AclRevision = (unsigned __int8)AceRevision;
  v30 = AclRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0
    || AccessMask
    || !(unsigned __int8)sub_1409B8B20(AttributeInfo, AclRevision, 0LL)
    || AttributeInfo->AttributeCount != 1 )
  {
    return -1073741811;
  }
  v14 = Src;
  v11 = sub_1409B863C(AttributeInfo->Attribute.pAttributeV1, Src, &NumberOfBytes);
  if ( v11 == -1073741789 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, NumberOfBytes, 0x62507452u);
    v14 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      return -1073741801;
    v11 = sub_1409B863C(AttributeInfo->Attribute.pAttributeV1, PoolWithQuotaTag, &NumberOfBytes);
  }
  if ( v11 >= 0 )
  {
    if ( RtlValidAcl(Acl) && RtlFirstFreeAce(Acl, &FirstFree) )
    {
      v16 = NumberOfBytes;
      v17 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
      LOWORD(v26) = v17;
      if ( NumberOfBytes > 0xFFFF || (int)sub_1402DE190(v17, NumberOfBytes, (__int16 *)&v26) < 0 )
      {
        v11 = -1073741675;
      }
      else
      {
        v18 = 8;
        v19 = Acl + 1;
        *ReturnLength = 8;
        for ( i = 0; i < Acl->AceCount; v19 = (PACL)((char *)v19 + v19->AclSize) )
        {
          ++i;
          v18 = *ReturnLength + v19->AclSize;
          *ReturnLength = v18;
        }
        v21 = (unsigned __int16)v26;
        v22 = FirstFree;
        v23 = v18 + (unsigned __int16)v26;
        *ReturnLength = v23;
        if ( v22 && (char *)v22 + v21 <= (char *)Acl + Acl->AclSize )
        {
          v24 = NumberOfBytes_4;
          v22[1] = v21;
          *((_BYTE *)v22 + 1) = v24;
          *(_BYTE *)v22 = 18;
          *((_DWORD *)v22 + 1) = 0;
          RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v22 + 4, Sid);
          memmove(&v22[2 * *((unsigned __int8 *)Sid + 1) + 8], v14, v16);
          ++Acl->AceCount;
          Acl->AclRevision = v30;
        }
        else
        {
          v11 = -1073741671;
          *ReturnLength = (v23 + 3) & 0xFFFFFFFC;
        }
      }
    }
    else
    {
      v11 = -1073741705;
    }
  }
  if ( v14 && v14 != Src )
    ExFreePoolWithTag(v14, 0);
  return v11;
}
