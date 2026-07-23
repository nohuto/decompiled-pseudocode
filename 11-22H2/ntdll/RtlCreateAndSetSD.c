/*
 * XREFs of RtlCreateAndSetSD @ 0x180068790
 * Callers:
 *     RtlCreateUserSecurityObject @ 0x1800E1B70 (RtlCreateUserSecurityObject.c)
 * Callees:
 *     RtlCreateSecurityDescriptor @ 0x180014840 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180014870 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1800148D0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180014930 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1800186F0 (RtlCreateAcl.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlAddAce @ 0x180068A80 (RtlAddAce.c)
 *     RtlCopySid @ 0x180069210 (RtlCopySid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x180069250 (RtlSetSaclSecurityDescriptor.c)
 */

NTSTATUS __cdecl RtlCreateAndSetSD(
        PRTL_ACE_DATA AceData,
        ULONG AceCount,
        PSID OwnerSid,
        PSID GroupSid,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor)
{
  int SecurityDescriptor; // ebx
  unsigned int v6; // r12d
  _DWORD *v7; // r14
  ULONG v8; // r9d
  void *ProcessHeap; // r13
  ULONG v11; // esi
  ULONG v12; // r15d
  PRTL_ACE_DATA v13; // r8
  int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  ACL *Heap; // rax
  ACL *v18; // rdi
  ACL *v19; // rbp
  ULONG v20; // r15d
  ACCESS_MASK *p_AccessMask; // rsi
  ACL *v22; // r12
  unsigned __int8 *v23; // r8
  ULONG AceListLength; // ebp
  ACCESS_MASK v25; // edx
  char v26; // al
  int v27; // ecx
  ACL *Acl; // [rsp+30h] [rbp-58h]
  ACL *Sacl; // [rsp+38h] [rbp-50h]

  SecurityDescriptor = 0;
  Acl = 0LL;
  v6 = 0;
  Sacl = 0LL;
  v7 = 0LL;
  v8 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v11 = 8;
  v12 = 8;
  if ( !AceCount )
  {
LABEL_9:
    v16 = 40;
    if ( v11 != 8 )
    {
      if ( v11 + 40 < 0x28 )
        return -1073741801;
      v16 = v11 + 40;
    }
    if ( v12 != 8 )
    {
      if ( v16 + v12 < v16 )
        return -1073741801;
      v16 += v12;
    }
    Heap = (ACL *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v16);
    v18 = Heap;
    if ( Heap )
    {
      v19 = Heap + 5;
      if ( v11 == 8
        || (Acl = Heap + 5,
            v19 = (ACL *)((char *)v19 + v11),
            SecurityDescriptor = RtlCreateAcl(Heap + 5, v11, 2u),
            SecurityDescriptor >= 0) )
      {
        if ( v12 == 8 || (Sacl = v19, SecurityDescriptor = RtlCreateAcl(v19, v12, 2u), SecurityDescriptor >= 0) )
        {
          v7 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v6);
          if ( v7 )
          {
            v20 = 0;
            if ( AceCount )
            {
              p_AccessMask = &AceData->AccessMask;
              while ( 1 )
              {
                v22 = 0LL;
                v23 = **(unsigned __int8 ***)(p_AccessMask + 1);
                AceListLength = 4 * v23[1] + 8;
                if ( !*((_BYTE *)p_AccessMask - 4) )
                  break;
                if ( *((_BYTE *)p_AccessMask - 4) == 1 )
                {
                  v25 = *p_AccessMask;
                  v26 = *((_BYTE *)p_AccessMask - 2);
                  v27 = *((unsigned __int8 *)p_AccessMask - 3);
                  *(_BYTE *)v7 = 1;
                  goto LABEL_22;
                }
                if ( *((_BYTE *)p_AccessMask - 4) != 2 )
                  goto LABEL_24;
                v25 = *p_AccessMask;
                v26 = *((_BYTE *)p_AccessMask - 2);
                LOBYTE(v27) = *((_BYTE *)p_AccessMask - 3);
                v22 = Sacl;
                *(_BYTE *)v7 = 2;
LABEL_23:
                v7[1] = v25;
                *((_BYTE *)v7 + 1) = v26 | v27;
                AceListLength += 12;
                *((_WORD *)v7 + 1) = AceListLength;
                SecurityDescriptor = RtlCopySid(4 * v23[1] + 8, v7 + 2, v23);
LABEL_24:
                if ( SecurityDescriptor < 0 )
                  goto LABEL_39;
                SecurityDescriptor = RtlAddAce(v22, 2u, 0xFFFFFFFF, v7, AceListLength);
                if ( SecurityDescriptor < 0 )
                  goto LABEL_39;
                ++v20;
                p_AccessMask += 4;
                if ( v20 >= AceCount )
                  goto LABEL_27;
              }
              v25 = *p_AccessMask;
              v26 = *((_BYTE *)p_AccessMask - 2);
              LOBYTE(v27) = *((_BYTE *)p_AccessMask - 3);
              *(_BYTE *)v7 = 0;
LABEL_22:
              v22 = Acl;
              goto LABEL_23;
            }
LABEL_27:
            SecurityDescriptor = RtlCreateSecurityDescriptor(v18, 1u);
            if ( SecurityDescriptor >= 0 )
            {
              SecurityDescriptor = RtlSetOwnerSecurityDescriptor(v18, OwnerSid, 0);
              if ( SecurityDescriptor >= 0 )
              {
                SecurityDescriptor = RtlSetGroupSecurityDescriptor(v18, GroupSid, 0);
                if ( SecurityDescriptor >= 0 )
                {
                  SecurityDescriptor = RtlSetDaclSecurityDescriptor(v18, 1u, Acl, 0);
                  if ( SecurityDescriptor >= 0 )
                  {
                    SecurityDescriptor = RtlSetSaclSecurityDescriptor(v18, Sacl != 0LL, Sacl, 0);
                    if ( SecurityDescriptor >= 0 )
                    {
                      SecurityDescriptor = 0;
                      *NewSecurityDescriptor = v18;
LABEL_33:
                      RtlFreeHeap(ProcessHeap, 0, v7);
                      return SecurityDescriptor;
                    }
                  }
                }
              }
            }
          }
          else
          {
            SecurityDescriptor = -1073741801;
          }
        }
      }
LABEL_39:
      RtlFreeHeap(ProcessHeap, 0, v18);
      if ( !v7 )
        return SecurityDescriptor;
      goto LABEL_33;
    }
    return -1073741801;
  }
  v13 = AceData;
  while ( 1 )
  {
    v14 = 4 * *((unsigned __int8 *)*v13->Sid + 1);
    if ( v13->AceType )
    {
      if ( v13->AceType != 1 )
        break;
    }
    v15 = v14 + 20;
    if ( v14 + 20 + v11 < v11 )
      return -1073741801;
    v11 += v14 + 20;
LABEL_6:
    if ( v6 > v15 )
      v15 = v6;
    ++v8;
    ++v13;
    v6 = v15;
    if ( v8 >= AceCount )
      goto LABEL_9;
  }
  if ( v13->AceType == 2 )
  {
    v15 = v14 + 20;
    if ( v14 + 20 + v12 < v12 )
      return -1073741801;
    v12 += v14 + 20;
    goto LABEL_6;
  }
  return -1073741811;
}
