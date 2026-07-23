/*
 * XREFs of RtlpConvertAclToAutoInherit @ 0x1800F2438
 * Callers:
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800F2C98 (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlpInheritAcl @ 0x1800108D4 (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x180010E90 (RtlCreateAcl.c)
 *     RtlMapGenericMask @ 0x180012190 (RtlMapGenericMask.c)
 *     RtlpCompareAces @ 0x180012418 (RtlpCompareAces.c)
 *     RtlInitializeSid @ 0x1800128B0 (RtlInitializeSid.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlValidAcl @ 0x180048180 (RtlValidAcl.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlpConvertAclToAutoInherit(
        ACL *a1,
        ACL *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        GENERIC_MAPPING *a7,
        PVOID *a8,
        _DWORD *a9)
{
  ACL *v9; // r12
  PVOID *v10; // rsi
  _DWORD *v11; // rdi
  ACCESS_MASK *v12; // r13
  void *ProcessHeap; // r14
  int v14; // ebx
  ACL *v15; // rbx
  int v16; // eax
  PVOID v17; // r15
  ACCESS_MASK *Heap; // rax
  __int64 v19; // r10
  int AceCount; // eax
  ACL *v21; // rsi
  int v22; // r15d
  ACL *v23; // rbx
  ACCESS_MASK *v24; // r14
  unsigned int GenericAll; // edx
  ACCESS_MASK v26; // edx
  char v27; // r8
  ACCESS_MASK v28; // ecx
  ACCESS_MASK v29; // r9d
  ACCESS_MASK v30; // ecx
  ACCESS_MASK v31; // eax
  int v32; // r14d
  char *v33; // rbx
  PGENERIC_MAPPING v34; // r15
  int v35; // ecx
  ACCESS_MASK v36; // ecx
  int v37; // eax
  char v38; // dl
  ACL *v39; // r15
  ACCESS_MASK v40; // r13d
  ACCESS_MASK v41; // eax
  ACCESS_MASK v42; // esi
  ACCESS_MASK v43; // edi
  _DWORD *v44; // r14
  char v45; // al
  signed int v46; // eax
  __int64 v47; // rbx
  char v48; // r8
  char v49; // r11
  int v50; // r14d
  ACL *v51; // rdx
  _DWORD *v52; // r9
  __int64 AclRevision; // rax
  int AclSize; // ecx
  unsigned __int16 *v55; // rbx
  ACL *v56; // rax
  PVOID *v57; // r13
  unsigned __int8 v59; // cl
  signed int v60; // ecx
  _BYTE *v61; // r14
  _DWORD *v62; // r15
  int v63; // ebx
  _BYTE *v64; // r13
  int v65; // eax
  ACCESS_MASK v66; // esi
  int v67; // ebx
  _DWORD *v68; // rdi
  GENERIC_MAPPING *v69; // r12
  ACCESS_MASK v70; // eax
  int v71; // eax
  _WORD *v72; // rsi
  _WORD *v73; // rcx
  PVOID v74; // rax
  ACCESS_MASK AccessMask; // [rsp+94h] [rbp-7Ch] BYREF
  _BYTE v77[4]; // [rsp+98h] [rbp-78h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+9Ch] [rbp-74h] BYREF
  ACCESS_MASK v79; // [rsp+A4h] [rbp-6Ch]
  ACCESS_MASK v80; // [rsp+A8h] [rbp-68h] BYREF
  PVOID *v81; // [rsp+B0h] [rbp-60h]
  PVOID HeapHandle; // [rsp+B8h] [rbp-58h]
  ACCESS_MASK *v83; // [rsp+C0h] [rbp-50h]
  char *v84; // [rsp+C8h] [rbp-48h]
  PGENERIC_MAPPING GenericMapping; // [rsp+D0h] [rbp-40h]
  PVOID v86; // [rsp+D8h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v88; // [rsp+E8h] [rbp-28h] BYREF
  ACCESS_MASK v89; // [rsp+F0h] [rbp-20h]
  ACCESS_MASK v90; // [rsp+F4h] [rbp-1Ch]
  int v91; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v92; // [rsp+100h] [rbp-10h]
  __int64 v93; // [rsp+108h] [rbp-8h]
  PACL Acl; // [rsp+110h] [rbp+0h]
  ACL *v95; // [rsp+118h] [rbp+8h]
  _DWORD *v96; // [rsp+120h] [rbp+10h]
  char v97[8]; // [rsp+128h] [rbp+18h] BYREF
  int v98; // [rsp+130h] [rbp+20h]
  char Sid[8]; // [rsp+158h] [rbp+48h] BYREF
  int v100; // [rsp+160h] [rbp+50h]

  v9 = a2;
  v10 = a8;
  v11 = a9;
  v93 = a5;
  v88 = a3;
  v92 = a6;
  v12 = 0LL;
  BaseAddress = 0LL;
  v86 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v95 = a2;
  Acl = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  GenericMapping = a7;
  v81 = a8;
  v96 = a9;
  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
  v14 = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  if ( v14 < 0 )
    return (unsigned int)v14;
  v100 = 0;
  v14 = RtlInitializeSid(v97, &IdentifierAuthority, 1u);
  if ( v14 < 0 )
    return (unsigned int)v14;
  v15 = Acl;
  *a9 = 1024;
  v98 = 1;
  *a8 = 0LL;
  if ( v15 && !RtlValidAcl(v15) || !RtlValidAcl(v9) )
    return (unsigned int)-1073741705;
  v16 = RtlpInheritAcl(
          (__int64)v15,
          0LL,
          0,
          a4,
          1,
          0,
          (__int64)Sid,
          (__int64)v97,
          (__int64)Sid,
          (__int64)v97,
          (__int64)a7,
          2,
          (unsigned __int64)&v88 & -(__int64)(v88 != 0),
          v88 != 0,
          &BaseAddress,
          v77,
          &v91);
  v17 = BaseAddress;
  v14 = v16;
  v84 = (char *)BaseAddress;
  if ( v16 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_91;
  }
  if ( v16 >= 0 )
  {
    Heap = (ACCESS_MASK *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 24LL * v9->AceCount);
    v19 = 0LL;
    v83 = Heap;
    v12 = Heap;
    if ( !Heap )
    {
      v14 = -1073741801;
      goto LABEL_65;
    }
    LOWORD(AceCount) = v9->AceCount;
    v21 = v9 + 1;
    BaseAddress = &v9[1];
    v22 = 0;
    v23 = v9 + 1;
    if ( (_WORD)AceCount )
    {
      v24 = v12 + 1;
      while ( v23->AclRevision <= 8u && v23->AclRevision != 4 )
      {
        AccessMask = *(_DWORD *)&v23->AceCount;
        RtlMapGenericMask(&AccessMask, GenericMapping);
        if ( (unsigned __int8)(v23->AclRevision - 2) <= 2u || v23->AclRevision >= 7u )
          GenericAll = GenericMapping->GenericAll | 0x1000000;
        else
          GenericAll = GenericMapping->GenericAll;
        v19 = 0LL;
        v26 = AccessMask & GenericAll;
        v27 = v23->Sbz1 & 3 | ~v23->Sbz1 & 8;
        if ( (v23->Sbz1 & 2) != 0 )
        {
          v28 = v26;
          v29 = v26;
        }
        else
        {
          v28 = 0;
          v29 = 0;
        }
        v24[2] = v29;
        *(v24 - 1) = v28;
        v30 = (v27 & 1) != 0 ? v26 : 0;
        *v24 = v30;
        v24[3] = v30;
        ++v22;
        v31 = (v27 & 8) != 0 ? v26 : 0;
        v24[1] = v31;
        v24[4] = v31;
        v24 += 6;
        v23 = (ACL *)((char *)v23 + v23->AclSize);
        AceCount = v9->AceCount;
        if ( v22 >= AceCount )
          goto LABEL_24;
      }
LABEL_49:
      ProcessHeap = HeapHandle;
      v10 = v81;
      *v11 |= 0x1000u;
      v17 = v84;
LABEL_91:
      v14 = 0;
      if ( (*v11 & 0x1000) != 0 )
      {
        if ( *v10 )
        {
          RtlFreeHeap(ProcessHeap, 0, *v10);
          *v10 = 0LL;
        }
        v74 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v9->AclSize);
        *v10 = v74;
        if ( v74 )
        {
          memmove(v74, v9, v9->AclSize);
          v14 = 0;
        }
        else
        {
          v14 = -1073741801;
        }
      }
      if ( !v12 )
        goto LABEL_65;
      goto LABEL_64;
    }
LABEL_24:
    v17 = v84;
    v32 = 0;
    v80 = 0;
    v33 = v84 + 8;
    if ( *((_WORD *)v84 + 2) )
    {
      while ( (unsigned __int8)*v33 <= 8u && *v33 != 4 )
      {
        v34 = GenericMapping;
        AccessMask = *((_DWORD *)v33 + 1);
        RtlMapGenericMask(&AccessMask, GenericMapping);
        if ( (unsigned __int8)(*v33 - 2) <= 2u || (unsigned __int8)*v33 >= 7u )
          v35 = v34->GenericAll | 0x1000000;
        else
          v35 = v34->GenericAll;
        v36 = AccessMask & v35;
        v19 = 0LL;
        if ( v36 )
        {
          v37 = v33[1] & 3;
          v38 = v37 | ~v33[1] & 8;
          if ( v37 | ~v33[1] & 8 )
          {
            AccessMask = 0;
            v39 = v21;
            v90 = (v38 & 2) != 0 ? v36 : 0;
            v40 = v90;
            *(_DWORD *)IdentifierAuthority.Value = (v38 & 1) != 0 ? v36 : 0;
            v41 = *(_DWORD *)IdentifierAuthority.Value;
            v42 = (v38 & 8) != 0 ? v36 : 0;
            v89 = v42;
            if ( v9->AceCount )
            {
              v43 = (v38 & 1) != 0 ? v36 : 0;
              v44 = v83 + 5;
              do
              {
                v45 = RtlpCompareAces(v33, (char *)v39);
                v19 = 0LL;
                if ( v45 )
                {
                  v42 &= ~*(v44 - 3);
                  v40 &= ~*(v44 - 5);
                  v43 &= ~*(v44 - 4);
                  *v44 &= ~v89;
                  *(v44 - 2) &= ~v90;
                  *(v44 - 1) &= ~*(_DWORD *)IdentifierAuthority.Value;
                }
                v44 += 6;
                v39 = (ACL *)((char *)v39 + v39->AclSize);
                v46 = v9->AceCount;
                ++AccessMask;
              }
              while ( (int)AccessMask < v46 );
              v32 = v80;
              v79 = v43;
              v41 = v43;
              v11 = v96;
            }
            if ( v40 | v41 | v42 )
            {
              v12 = v83;
              goto LABEL_49;
            }
            v21 = v9 + 1;
          }
        }
        ++v32;
        v17 = v84;
        v33 += *((unsigned __int16 *)v33 + 1);
        v80 = v32;
        if ( v32 >= *((unsigned __int16 *)v84 + 2) )
        {
          LOWORD(AceCount) = v9->AceCount;
          v12 = v83;
          goto LABEL_43;
        }
      }
      v10 = v81;
      goto LABEL_51;
    }
LABEL_43:
    v47 = (unsigned __int16)AceCount;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = v21;
    if ( (_WORD)AceCount )
    {
      v52 = v12 + 4;
      do
      {
        AclRevision = v51->AclRevision;
        if ( *v52 | v52[1] | *(v52 - 1) )
        {
          AclSize = v51->AclSize;
          v50 += AclSize;
          v9 = v95;
          if ( !RtlBaseAceType[AclRevision] && v49 || (v17 = v84, RtlBaseAceType[AclRevision] == 1) && v48 )
          {
            *v11 |= 0x1000u;
            goto LABEL_90;
          }
        }
        else
        {
          if ( RtlBaseAceType[AclRevision] )
          {
            v17 = v84;
            if ( RtlBaseAceType[AclRevision] == 1 )
              v49 = 1;
          }
          else
          {
            v48 = 1;
          }
          LOWORD(AclSize) = v51->AclSize;
        }
        ++v19;
        v51 = (ACL *)((char *)v51 + (unsigned __int16)AclSize);
        v52 += 6;
      }
      while ( v19 < v47 );
    }
    v14 = RtlpInheritAcl(
            (__int64)Acl,
            0LL,
            0,
            a4,
            1,
            0,
            v93,
            v92,
            v93,
            v92,
            (__int64)GenericMapping,
            2,
            (unsigned __int64)&v88 & -(__int64)(v88 != 0),
            v88 != 0,
            &v86,
            v77,
            &v91);
    if ( v14 >= 0 )
    {
      v55 = (unsigned __int16 *)v86;
      v56 = (ACL *)RtlAllocateHeap(
                     HeapHandle,
                     NtdllBaseTag + 1310720,
                     v50 + (unsigned int)*((unsigned __int16 *)v86 + 1));
      v57 = v81;
      *v81 = v56;
      if ( v56 )
      {
        v59 = *(_BYTE *)v86;
        if ( *(_BYTE *)v86 <= v9->AclRevision )
          v59 = v9->AclRevision;
        if ( RtlCreateAcl(v56, v50 + v55[1], v59) >= 0 )
        {
          v60 = 0;
          v61 = (char *)*v57 + 8;
          v79 = 0;
          if ( v9->AceCount )
          {
            v62 = v83 + 4;
            do
            {
              v63 = *v62 | v62[1] | *(v62 - 1);
              if ( v63 )
              {
                memmove(v61, v21, v21->AclSize);
                v61[1] &= ~0x10u;
                v64 = v61;
                v61 += v21->AclSize;
                ++*((_WORD *)*v81 + 2);
                *((_DWORD *)v64 + 1) = v63 & *(_DWORD *)&v21->AceCount;
                v65 = *(_DWORD *)&v21->AceCount;
                v66 = 0x80000000;
                v67 = ~v65 & v63;
                if ( v67 )
                {
                  v68 = BaseAddress;
                  v69 = GenericMapping;
                  do
                  {
                    if ( v66 < 0x10000000 )
                      break;
                    if ( (v66 & v68[1]) != 0 )
                    {
                      v80 = v66;
                      RtlMapGenericMask(&v80, v69);
                      v70 = v80;
                      if ( (v80 & v67) != 0 )
                      {
                        *((_DWORD *)v64 + 1) |= v66;
                        v67 &= ~v70;
                      }
                    }
                    v66 >>= 1;
                  }
                  while ( v67 );
                  v9 = v95;
                }
                *((_DWORD *)v64 + 1) |= v67;
                v60 = v79;
                v21 = (ACL *)BaseAddress;
              }
              ++v60;
              v21 = (ACL *)((char *)v21 + v21->AclSize);
              v79 = v60;
              v71 = v9->AceCount;
              v62 += 6;
              BaseAddress = v21;
            }
            while ( v60 < v71 );
            v11 = v96;
            v55 = (unsigned __int16 *)v86;
            v57 = v81;
          }
          v72 = v86;
          memmove(v61, (char *)v86 + 8, (unsigned int)v55[1] - 8);
          v73 = *v57;
          v12 = v83;
          v17 = v84;
          v73[2] += v72[2];
LABEL_90:
          v10 = v81;
          ProcessHeap = HeapHandle;
          goto LABEL_91;
        }
        v10 = v57;
LABEL_51:
        *v11 |= 0x1000u;
        ProcessHeap = HeapHandle;
        v12 = v83;
        goto LABEL_91;
      }
      v12 = v83;
      v14 = -1073741801;
    }
    ProcessHeap = HeapHandle;
LABEL_64:
    RtlFreeHeap(ProcessHeap, 0, v12);
  }
LABEL_65:
  if ( v17 )
    RtlFreeHeap(ProcessHeap, 0, v17);
  if ( v86 )
    RtlFreeHeap(ProcessHeap, 0, v86);
  return (unsigned int)v14;
}
