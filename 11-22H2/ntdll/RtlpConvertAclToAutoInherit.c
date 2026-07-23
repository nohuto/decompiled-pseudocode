/*
 * XREFs of RtlpConvertAclToAutoInherit @ 0x1800F1E80
 * Callers:
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800F2704 (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlpCompareAces @ 0x180010934 (RtlpCompareAces.c)
 *     RtlInitializeSid @ 0x180013050 (RtlInitializeSid.c)
 *     RtlpInheritAcl @ 0x18001812C (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x1800186F0 (RtlCreateAcl.c)
 *     RtlValidAcl @ 0x18001B3B0 (RtlValidAcl.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlpConvertAclToAutoInherit(
        PACL Acl,
        ACL *Src,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        PVOID *a8,
        _DWORD *a9)
{
  ACL *v9; // r12
  _DWORD *v10; // r13
  PVOID *v12; // r14
  _DWORD *v13; // rdi
  void *ProcessHeap; // rsi
  int v15; // ebx
  int *Heap; // rax
  int v17; // r9d
  ACL *v18; // r15
  int v19; // esi
  ACL *v20; // r11
  int *v21; // rbx
  int v22; // ecx
  int v23; // edx
  int v24; // edx
  char v25; // r8
  int v26; // r10d
  int v27; // ecx
  int v28; // eax
  unsigned __int16 *v29; // rsi
  int v30; // r11d
  char *v31; // r14
  ACL *v32; // r10
  int v33; // ecx
  int v34; // edx
  int v35; // edx
  int v36; // eax
  char v37; // cl
  int v38; // r12d
  int v39; // eax
  int v40; // ebx
  int v41; // edi
  _DWORD *v42; // rsi
  int v43; // r13d
  __int64 AceCount; // rbx
  char v45; // r8
  char v46; // r11
  int v47; // esi
  ACL *v48; // rdx
  __int64 v49; // r10
  _DWORD *v50; // r9
  __int64 AclRevision; // rax
  unsigned __int16 *p_AclSize; // rcx
  __int64 v53; // rax
  bool v54; // zf
  unsigned __int16 *v55; // rbx
  ACL *v56; // rax
  PVOID v57; // r8
  ULONG v59; // r8d
  int v60; // r12d
  _BYTE *v61; // r14
  ACL *v62; // rdi
  _DWORD *v63; // rsi
  unsigned __int16 *v64; // r15
  int v65; // ebx
  _BYTE *v66; // rdx
  _DWORD *v67; // r8
  int v68; // ecx
  int i; // ebx
  int v70; // eax
  int v71; // eax
  int v72; // eax
  _WORD *v73; // rsi
  PVOID v74; // rax
  _BYTE v76[3]; // [rsp+91h] [rbp-7Fh] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+94h] [rbp-7Ch] BYREF
  ACL *v78; // [rsp+A0h] [rbp-70h]
  PVOID HeapHandle; // [rsp+A8h] [rbp-68h]
  __int64 v80; // [rsp+B0h] [rbp-60h]
  PVOID BaseAddress; // [rsp+B8h] [rbp-58h]
  PVOID v82; // [rsp+C0h] [rbp-50h] BYREF
  PVOID v83; // [rsp+C8h] [rbp-48h] BYREF
  int v84; // [rsp+D0h] [rbp-40h]
  int v85; // [rsp+D4h] [rbp-3Ch]
  int v86; // [rsp+D8h] [rbp-38h]
  __int64 v87; // [rsp+E0h] [rbp-30h] BYREF
  void *Srca; // [rsp+E8h] [rbp-28h]
  int v89; // [rsp+F4h] [rbp-1Ch]
  int v90; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v91; // [rsp+100h] [rbp-10h]
  __int64 v92; // [rsp+108h] [rbp-8h]
  _DWORD *v93; // [rsp+110h] [rbp+0h]
  _DWORD *v94; // [rsp+118h] [rbp+8h]
  PACL v95; // [rsp+120h] [rbp+10h]
  char v96[8]; // [rsp+128h] [rbp+18h] BYREF
  int v97; // [rsp+130h] [rbp+20h]
  char Sid[8]; // [rsp+158h] [rbp+48h] BYREF
  int v99; // [rsp+160h] [rbp+50h]

  v9 = Src;
  v10 = a7;
  v12 = a8;
  v13 = a9;
  v92 = a5;
  v87 = a3;
  v91 = a6;
  v83 = 0LL;
  v82 = 0LL;
  BaseAddress = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v78 = Src;
  v95 = Acl;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  v94 = a7;
  v80 = (__int64)a8;
  v93 = a9;
  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
  v15 = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v99 = 0;
  v15 = RtlInitializeSid(v96, &IdentifierAuthority, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  *a9 = 1024;
  *a8 = 0LL;
  v97 = 1;
  if ( Acl && !RtlValidAcl(Acl) || !RtlValidAcl(v9) )
    return (unsigned int)-1073741705;
  v15 = RtlpInheritAcl(
          (__int64)Acl,
          0LL,
          0,
          a4,
          1,
          0,
          (__int64)Sid,
          (__int64)v96,
          (__int64)Sid,
          (__int64)v96,
          (__int64)a7,
          2,
          (unsigned __int64)&v87 & -(__int64)(v87 != 0),
          v87 != 0,
          &v83,
          v76,
          &v90);
  if ( v15 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_112;
  }
  if ( v15 >= 0 )
  {
    Heap = (int *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 24LL * v9->AceCount);
    v17 = 0;
    BaseAddress = Heap;
    if ( !Heap )
    {
      v15 = -1073741801;
      goto LABEL_81;
    }
    v18 = v9 + 1;
    v19 = 0;
    v20 = v9 + 1;
    Srca = &v9[1];
    if ( v9->AceCount )
    {
      v21 = Heap + 1;
      while ( v20->AclRevision <= 8u && v20->AclRevision != 4 )
      {
        v22 = *(_DWORD *)&v20->AceCount;
        if ( v22 < 0 )
          v22 |= *a7;
        if ( (v22 & 0x40000000) != 0 )
          v22 |= a7[1];
        if ( (v22 & 0x20000000) != 0 )
          v22 |= a7[2];
        if ( (v22 & 0x10000000) != 0 )
          v22 |= a7[3];
        if ( (unsigned __int8)(v20->AclRevision - 2) <= 2u || v20->AclRevision >= 7u )
          v23 = a7[3] | 0x1000000;
        else
          v23 = a7[3];
        v24 = v22 & v23 & 0xFFFFFFF;
        v25 = v20->Sbz1 & 3 | ~v20->Sbz1 & 8;
        if ( (v20->Sbz1 & 2) != 0 )
        {
          v17 = v24;
          v26 = v24;
        }
        else
        {
          v26 = 0;
        }
        *(v21 - 1) = v26;
        v21[2] = v17;
        v27 = (v25 & 1) != 0 ? v24 : 0;
        *v21 = v27;
        v21[3] = v27;
        ++v19;
        v28 = (v25 & 8) != 0 ? v24 : 0;
        v17 = 0;
        v21[1] = v28;
        v21[4] = v28;
        v21 += 6;
        v20 = (ACL *)((char *)v20 + v20->AclSize);
        if ( v19 >= v9->AceCount )
          goto LABEL_32;
      }
      goto LABEL_66;
    }
LABEL_32:
    v29 = (unsigned __int16 *)v83;
    v30 = 0;
    v86 = 0;
    v31 = (char *)v83 + 8;
    if ( !*((_WORD *)v83 + 2) )
      goto LABEL_60;
    v32 = v9;
    while ( (unsigned __int8)*v31 <= 8u && *v31 != 4 )
    {
      v33 = *((_DWORD *)v31 + 1);
      if ( v33 < 0 )
        v33 |= *v10;
      if ( (v33 & 0x40000000) != 0 )
        v33 |= v10[1];
      if ( (v33 & 0x20000000) != 0 )
        v33 |= v10[2];
      if ( (v33 & 0x10000000) != 0 )
        v33 |= v10[3];
      if ( (unsigned __int8)(*v31 - 2) <= 2u || (unsigned __int8)*v31 >= 7u )
        v34 = v10[3] | 0x1000000;
      else
        v34 = v10[3];
      v35 = v33 & v34 & 0xFFFFFFF;
      if ( v35 )
      {
        v36 = v31[1] & 3;
        v37 = v36 | ~v31[1] & 8;
        if ( v36 | ~v31[1] & 8 )
        {
          v38 = (v31[1] & 2) != 0 ? v35 : 0;
          *(_DWORD *)IdentifierAuthority.Value = (v31[1] & 1) != 0 ? v35 : 0;
          v39 = (v37 & 1) != 0 ? v35 : 0;
          v40 = (v37 & 8) != 0 ? v35 : 0;
          v89 = v40;
          v84 = 0;
          if ( v32->AceCount )
          {
            v41 = (v37 & 1) != 0 ? v35 : 0;
            v42 = (char *)BaseAddress + 20;
            v43 = (v37 & 2) != 0 ? v35 : 0;
            do
            {
              if ( RtlpCompareAces(v31, (char *)v18) )
              {
                v40 &= ~*(v42 - 3);
                v38 &= ~*(v42 - 5);
                v41 &= ~*(v42 - 4);
                *v42 &= ~v89;
                *(v42 - 2) &= ~v43;
                *(v42 - 1) &= ~*(_DWORD *)IdentifierAuthority.Value;
              }
              v42 += 6;
              v18 = (ACL *)((char *)v18 + v18->AclSize);
              ++v84;
            }
            while ( v84 < v78->AceCount );
            v10 = v94;
            v32 = v78;
            v30 = v86;
            v29 = (unsigned __int16 *)v83;
            v85 = v41;
            v39 = v41;
            v13 = v93;
          }
          if ( v38 | v39 | v40 )
            break;
          v18 = v32 + 1;
        }
      }
      ++v30;
      v31 += *((unsigned __int16 *)v31 + 1);
      v86 = v30;
      if ( v30 >= v29[2] )
      {
        v9 = v78;
LABEL_60:
        AceCount = v9->AceCount;
        v45 = 0;
        v46 = 0;
        v47 = 0;
        v48 = v18;
        if ( v9->AceCount )
        {
          v49 = 0LL;
          v50 = (char *)BaseAddress + 16;
          do
          {
            if ( !(*v50 | v50[1] | *(v50 - 1)) )
            {
              AclRevision = v48->AclRevision;
              if ( RtlBaseAceType[AclRevision] )
              {
                v9 = v78;
                if ( RtlBaseAceType[AclRevision] == 1 )
                  v46 = 1;
              }
              else
              {
                v45 = 1;
              }
              p_AclSize = &v48->AclSize;
              goto LABEL_75;
            }
            p_AclSize = &v48->AclSize;
            v47 += v48->AclSize;
            v53 = v48->AclRevision;
            v9 = v78;
            if ( RtlBaseAceType[v53] )
            {
              if ( RtlBaseAceType[v53] != 1 )
                goto LABEL_75;
              v54 = v45 == 0;
            }
            else
            {
              v54 = v46 == 0;
            }
            if ( !v54 )
            {
              *v13 |= 0x1000u;
              v12 = (PVOID *)v80;
              goto LABEL_111;
            }
LABEL_75:
            ++v49;
            v48 = (ACL *)((char *)v48 + *p_AclSize);
            v50 += 6;
          }
          while ( v49 < AceCount );
        }
        v15 = RtlpInheritAcl(
                (__int64)v95,
                0LL,
                0,
                a4,
                1,
                0,
                v92,
                v91,
                v92,
                v91,
                (__int64)v10,
                2,
                (unsigned __int64)&v87 & -(__int64)(v87 != 0),
                v87 != 0,
                &v82,
                v76,
                &v90);
        if ( v15 < 0 )
        {
LABEL_79:
          v57 = BaseAddress;
          ProcessHeap = HeapHandle;
LABEL_80:
          RtlFreeHeap(ProcessHeap, 0, v57);
          goto LABEL_81;
        }
        v55 = (unsigned __int16 *)v82;
        v56 = (ACL *)RtlAllocateHeap(
                       HeapHandle,
                       NtdllBaseTag + 1310720,
                       v47 + (unsigned int)*((unsigned __int16 *)v82 + 1));
        v12 = (PVOID *)v80;
        *(_QWORD *)v80 = v56;
        if ( !v56 )
        {
          v15 = -1073741801;
          goto LABEL_79;
        }
        v59 = *(unsigned __int8 *)v82;
        if ( (unsigned __int8)v59 <= v9->AclRevision )
          v59 = v9->AclRevision;
        if ( RtlCreateAcl(v56, v47 + v55[1], v59) >= 0 )
        {
          v60 = 0;
          v61 = (char *)*v12 + 8;
          if ( v78->AceCount )
          {
            v62 = v78;
            v63 = (char *)BaseAddress + 16;
            do
            {
              v64 = &v18->AclSize;
              v65 = *v63 | v63[1] | *(v63 - 1);
              if ( v65 )
              {
                memmove(v61, Srca, *v64);
                v61[1] &= ~0x10u;
                v66 = v61;
                v67 = Srca;
                v61 += *v64;
                ++*(_WORD *)(*(_QWORD *)v80 + 4LL);
                v68 = 0x80000000;
                *((_DWORD *)v66 + 1) = v67[1] & v65;
                for ( i = ~v67[1] & v65; i; v68 = (unsigned int)v68 >> 1 )
                {
                  if ( (unsigned int)v68 < 0x10000000 )
                    break;
                  if ( (v68 & v67[1]) != 0 )
                  {
                    v70 = v68;
                    if ( v68 < 0 )
                      v70 = *v10 | v68;
                    if ( (v70 & 0x40000000) != 0 )
                      v70 |= v10[1];
                    if ( (v70 & 0x20000000) != 0 )
                      v70 |= v10[2];
                    if ( (v70 & 0x10000000) != 0 )
                      v70 |= v10[3];
                    v71 = v70 & 0xFFFFFFF;
                    if ( (v71 & i) != 0 )
                    {
                      *((_DWORD *)v66 + 1) |= v68;
                      i &= ~v71;
                    }
                  }
                }
                *((_DWORD *)v66 + 1) |= i;
              }
              ++v60;
              v63 += 6;
              v18 = (ACL *)((char *)Srca + *v64);
              v72 = v62->AceCount;
              Srca = v18;
            }
            while ( v60 < v72 );
            v13 = v93;
            v55 = (unsigned __int16 *)v82;
          }
          v73 = v82;
          memmove(v61, (char *)v82 + 8, (unsigned int)v55[1] - 8);
          v12 = (PVOID *)v80;
          v9 = v78;
          *(_WORD *)(*(_QWORD *)v80 + 4LL) += v73[2];
LABEL_111:
          ProcessHeap = HeapHandle;
LABEL_112:
          v15 = 0;
          if ( (*v13 & 0x1000) != 0 )
          {
            if ( *v12 )
            {
              RtlFreeHeap(ProcessHeap, 0, *v12);
              *v12 = 0LL;
            }
            v74 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v9->AclSize);
            *v12 = v74;
            if ( v74 )
              memmove(v74, v9, v9->AclSize);
            else
              v15 = -1073741801;
          }
          v57 = BaseAddress;
          if ( !BaseAddress )
            goto LABEL_81;
          goto LABEL_80;
        }
LABEL_66:
        *v13 |= 0x1000u;
        ProcessHeap = HeapHandle;
        goto LABEL_112;
      }
    }
    v9 = v78;
    v12 = (PVOID *)v80;
    goto LABEL_66;
  }
LABEL_81:
  if ( v83 )
    RtlFreeHeap(ProcessHeap, 0, v83);
  if ( v82 )
    RtlFreeHeap(HeapHandle, 0, v82);
  return (unsigned int)v15;
}
