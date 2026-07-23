/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1409BB3C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUShortAdd @ 0x140322854 (RtlUShortAdd.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCopySid @ 0x140715180 (RtlCopySid.c)
 *     RtlValidAcl @ 0x140736A70 (RtlValidAcl.c)
 *     RtlValidSid @ 0x140737590 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x1407F32C0 (RtlFirstFreeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1409BB898 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x1409BBD80 (RtlpValidAttributeInfo.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
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
  __int64 Pool2; // rax
  size_t v16; // r13
  USHORT v17; // cx
  ULONG v18; // ecx
  PACL v19; // rdx
  unsigned int i; // r8d
  __int64 v21; // r8
  _WORD *v22; // r15
  ULONG v23; // edx
  char v24; // al
  USHORT pusResult[2]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int Size; // [rsp+2Ch] [rbp-DCh] BYREF
  ULONG Size_4; // [rsp+30h] [rbp-D8h]
  PVOID FirstFree; // [rsp+38h] [rbp-D0h] BYREF
  int v30; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v31; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = AceFlags;
  FirstFree = 0LL;
  v30 = 0;
  v31 = 256;
  memset(Src, 0, sizeof(Src));
  Size = 256;
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
    || !(unsigned __int8)RtlpValidAttributeInfo(AttributeInfo, AclRevision, 0LL)
    || AttributeInfo->AttributeCount != 1 )
  {
    return -1073741811;
  }
  v14 = Src;
  v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Src, &Size);
  if ( v11 == -1073741789 )
  {
    Pool2 = ExAllocatePool2(65LL, Size, 1649439826LL);
    v14 = (_BYTE *)Pool2;
    if ( !Pool2 )
      return -1073741801;
    v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Pool2, &Size);
  }
  if ( v11 >= 0 )
  {
    if ( RtlValidAcl(Acl) && RtlFirstFreeAce(Acl, &FirstFree) )
    {
      v16 = Size;
      v17 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
      pusResult[0] = v17;
      if ( Size > 0xFFFF || RtlUShortAdd(v17, Size, pusResult) < 0 )
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
          v18 += v19->AclSize;
          *ReturnLength = v18;
        }
        v21 = pusResult[0];
        v22 = FirstFree;
        v23 = v18 + pusResult[0];
        *ReturnLength = v23;
        if ( v22 && (char *)v22 + v21 <= (char *)Acl + Acl->AclSize )
        {
          v24 = Size_4;
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
