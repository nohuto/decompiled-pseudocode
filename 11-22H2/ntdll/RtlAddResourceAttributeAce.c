/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1800F41E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x18001B310 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x18001B350 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x18001B3B0 (RtlValidAcl.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlCopySid @ 0x180069210 (RtlCopySid.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlUShortAdd @ 0x1800F1C08 (RtlUShortAdd.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800F49A0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x1800F5648 (RtlpValidAttributeInfo.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
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
  int AclRevision; // ecx
  _BYTE *v14; // rdi
  _BYTE *Heap; // rax
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
  memset_thunk_772440563353939046(Src, 0, 0x100uLL);
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
    || !(unsigned __int8)RtlpValidAttributeInfo(AttributeInfo, 0LL)
    || AttributeInfo->AttributeCount != 1 )
  {
    return -1073741811;
  }
  v14 = Src;
  v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Src, &Size);
  if ( v11 == -1073741789 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, Size);
    v14 = Heap;
    if ( !Heap )
      return -1073741801;
    v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Heap, &Size);
  }
  if ( v11 >= 0 )
  {
    if ( RtlValidAcl(Acl) && RtlFirstFreeAce(Acl, &FirstFree) )
    {
      v16 = Size;
      v17 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
      LOWORD(v26) = v17;
      if ( Size > 0xFFFF || (int)RtlUShortAdd(v17, Size, (__int16 *)&v26) < 0 )
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
        v21 = (unsigned __int16)v26;
        v22 = FirstFree;
        v23 = v18 + (unsigned __int16)v26;
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
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
  return v11;
}
