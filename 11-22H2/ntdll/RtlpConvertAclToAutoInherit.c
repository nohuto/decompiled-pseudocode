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
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 *a8,
        _DWORD *a9)
{
  unsigned __int16 *v9; // r12
  _DWORD *v10; // r13
  __int64 *v12; // r14
  _DWORD *v13; // rdi
  void *ProcessHeap; // rsi
  int v15; // ebx
  __int64 Heap; // rax
  int v17; // r9d
  char *v18; // r15
  int v19; // esi
  unsigned __int16 *v20; // r11
  int *v21; // rbx
  int v22; // ecx
  int v23; // edx
  int v24; // edx
  char v25; // r8
  int v26; // r10d
  int v27; // ecx
  int v28; // eax
  __int64 v29; // rsi
  int v30; // r11d
  __int64 v31; // r14
  unsigned __int16 *v32; // r10
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
  __int64 v44; // rbx
  char v45; // r8
  char v46; // r11
  int v47; // esi
  unsigned __int8 *v48; // rdx
  __int64 v49; // r10
  _DWORD *v50; // r9
  __int64 v51; // rax
  unsigned __int16 *v52; // rcx
  __int64 v53; // rax
  bool v54; // zf
  unsigned __int8 *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // r8
  int v59; // r8d
  int v60; // r12d
  _BYTE *v61; // r14
  unsigned __int16 *v62; // rdi
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
  unsigned __int8 *v73; // rsi
  void *v74; // rax
  _BYTE v76[3]; // [rsp+91h] [rbp-7Fh] BYREF
  int v77; // [rsp+94h] [rbp-7Ch] BYREF
  __int16 v78; // [rsp+98h] [rbp-78h]
  unsigned __int16 *v79; // [rsp+A0h] [rbp-70h]
  void *v80; // [rsp+A8h] [rbp-68h]
  __int64 *v81; // [rsp+B0h] [rbp-60h]
  __int64 v82; // [rsp+B8h] [rbp-58h]
  unsigned __int8 *v83; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v84; // [rsp+C8h] [rbp-48h] BYREF
  int v85; // [rsp+D0h] [rbp-40h]
  int v86; // [rsp+D4h] [rbp-3Ch]
  int v87; // [rsp+D8h] [rbp-38h]
  __int64 v88; // [rsp+E0h] [rbp-30h] BYREF
  void *Src; // [rsp+E8h] [rbp-28h]
  int v90; // [rsp+F4h] [rbp-1Ch]
  int v91; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v92; // [rsp+100h] [rbp-10h]
  __int64 v93; // [rsp+108h] [rbp-8h]
  _DWORD *v94; // [rsp+110h] [rbp+0h]
  _DWORD *v95; // [rsp+118h] [rbp+8h]
  __int64 v96; // [rsp+120h] [rbp+10h]
  char v97[8]; // [rsp+128h] [rbp+18h] BYREF
  int v98; // [rsp+130h] [rbp+20h]
  char v99[8]; // [rsp+158h] [rbp+48h] BYREF
  int v100; // [rsp+160h] [rbp+50h]

  v9 = a2;
  v10 = a7;
  v12 = a8;
  v13 = a9;
  v93 = a5;
  v88 = a3;
  v92 = a6;
  v84 = 0LL;
  v83 = 0LL;
  v82 = 0LL;
  v77 = 0;
  v79 = a2;
  v96 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v80 = ProcessHeap;
  v95 = a7;
  v81 = a8;
  v94 = a9;
  v78 = 768;
  v15 = RtlInitializeSid((__int64)v99, (__int64)&v77, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v100 = 0;
  v15 = RtlInitializeSid((__int64)v97, (__int64)&v77, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  *a9 = 1024;
  *a8 = 0LL;
  v98 = 1;
  if ( a1 && !RtlValidAcl(a1) || !RtlValidAcl((__int64)v9) )
    return (unsigned int)-1073741705;
  v15 = RtlpInheritAcl(
          a1,
          0,
          0,
          a4,
          1,
          0,
          (__int64)v99,
          (__int64)v97,
          (__int64)v99,
          (__int64)v97,
          (__int64)a7,
          2,
          (unsigned __int64)&v88 & -(__int64)(v88 != 0),
          v88 != 0,
          &v84,
          v76,
          &v91);
  if ( v15 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_112;
  }
  if ( v15 >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, 24LL * v9[2]);
    v17 = 0;
    v82 = Heap;
    if ( !Heap )
    {
      v15 = -1073741801;
      goto LABEL_81;
    }
    v18 = (char *)(v9 + 4);
    v19 = 0;
    v20 = v9 + 4;
    Src = v9 + 4;
    if ( v9[2] )
    {
      v21 = (int *)(Heap + 4);
      while ( *(_BYTE *)v20 <= 8u && *(_BYTE *)v20 != 4 )
      {
        v22 = *((_DWORD *)v20 + 1);
        if ( v22 < 0 )
          v22 |= *a7;
        if ( (v22 & 0x40000000) != 0 )
          v22 |= a7[1];
        if ( (v22 & 0x20000000) != 0 )
          v22 |= a7[2];
        if ( (v22 & 0x10000000) != 0 )
          v22 |= a7[3];
        if ( (unsigned __int8)(*(_BYTE *)v20 - 2) <= 2u || *(_BYTE *)v20 >= 7u )
          v23 = a7[3] | 0x1000000;
        else
          v23 = a7[3];
        v24 = v22 & v23 & 0xFFFFFFF;
        v25 = *((_BYTE *)v20 + 1) & 3 | ~*((_BYTE *)v20 + 1) & 8;
        if ( (*((_BYTE *)v20 + 1) & 2) != 0 )
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
        v20 = (unsigned __int16 *)((char *)v20 + v20[1]);
        if ( v19 >= v9[2] )
          goto LABEL_32;
      }
      goto LABEL_66;
    }
LABEL_32:
    v29 = v84;
    v30 = 0;
    v87 = 0;
    v31 = v84 + 8;
    if ( !*(_WORD *)(v84 + 4) )
      goto LABEL_60;
    v32 = v9;
    while ( *(_BYTE *)v31 <= 8u && *(_BYTE *)v31 != 4 )
    {
      v33 = *(_DWORD *)(v31 + 4);
      if ( v33 < 0 )
        v33 |= *v10;
      if ( (v33 & 0x40000000) != 0 )
        v33 |= v10[1];
      if ( (v33 & 0x20000000) != 0 )
        v33 |= v10[2];
      if ( (v33 & 0x10000000) != 0 )
        v33 |= v10[3];
      if ( (unsigned __int8)(*(_BYTE *)v31 - 2) <= 2u || *(_BYTE *)v31 >= 7u )
        v34 = v10[3] | 0x1000000;
      else
        v34 = v10[3];
      v35 = v33 & v34 & 0xFFFFFFF;
      if ( v35 )
      {
        v36 = *(_BYTE *)(v31 + 1) & 3;
        v37 = v36 | ~*(_BYTE *)(v31 + 1) & 8;
        if ( v36 | ~*(_BYTE *)(v31 + 1) & 8 )
        {
          v38 = (*(_BYTE *)(v31 + 1) & 2) != 0 ? v35 : 0;
          v77 = (*(_BYTE *)(v31 + 1) & 1) != 0 ? v35 : 0;
          v39 = (v37 & 1) != 0 ? v35 : 0;
          v40 = (v37 & 8) != 0 ? v35 : 0;
          v90 = v40;
          v85 = 0;
          if ( v32[2] )
          {
            v41 = (v37 & 1) != 0 ? v35 : 0;
            v42 = (_DWORD *)(v82 + 20);
            v43 = (v37 & 2) != 0 ? v35 : 0;
            do
            {
              if ( RtlpCompareAces((_BYTE *)v31, v18) )
              {
                v40 &= ~*(v42 - 3);
                v38 &= ~*(v42 - 5);
                v41 &= ~*(v42 - 4);
                *v42 &= ~v90;
                *(v42 - 2) &= ~v43;
                *(v42 - 1) &= ~v77;
              }
              v42 += 6;
              v18 += *((unsigned __int16 *)v18 + 1);
              ++v85;
            }
            while ( v85 < v79[2] );
            v10 = v95;
            v32 = v79;
            v30 = v87;
            v29 = v84;
            v86 = v41;
            v39 = v41;
            v13 = v94;
          }
          if ( v38 | v39 | v40 )
            break;
          v18 = (char *)(v32 + 4);
        }
      }
      ++v30;
      v31 += *(unsigned __int16 *)(v31 + 2);
      v87 = v30;
      if ( v30 >= *(unsigned __int16 *)(v29 + 4) )
      {
        v9 = v79;
LABEL_60:
        v44 = v9[2];
        v45 = 0;
        v46 = 0;
        v47 = 0;
        v48 = (unsigned __int8 *)v18;
        if ( v9[2] )
        {
          v49 = 0LL;
          v50 = (_DWORD *)(v82 + 16);
          do
          {
            if ( !(*v50 | v50[1] | *(v50 - 1)) )
            {
              v51 = *v48;
              if ( RtlBaseAceType[v51] )
              {
                v9 = v79;
                if ( RtlBaseAceType[v51] == 1 )
                  v46 = 1;
              }
              else
              {
                v45 = 1;
              }
              v52 = (unsigned __int16 *)(v48 + 2);
              goto LABEL_75;
            }
            v52 = (unsigned __int16 *)(v48 + 2);
            v47 += *((unsigned __int16 *)v48 + 1);
            v53 = *v48;
            v9 = v79;
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
              v12 = v81;
              goto LABEL_111;
            }
LABEL_75:
            ++v49;
            v48 += *v52;
            v50 += 6;
          }
          while ( v49 < v44 );
        }
        v15 = RtlpInheritAcl(
                v96,
                0,
                0,
                a4,
                1,
                0,
                v93,
                v92,
                v93,
                v92,
                (__int64)v10,
                2,
                (unsigned __int64)&v88 & -(__int64)(v88 != 0),
                v88 != 0,
                (__int64 *)&v83,
                v76,
                &v91);
        if ( v15 < 0 )
        {
LABEL_79:
          v57 = v82;
          ProcessHeap = v80;
LABEL_80:
          RtlFreeHeap((__int64)ProcessHeap, 0, v57);
          goto LABEL_81;
        }
        v55 = v83;
        v56 = RtlAllocateHeap((__int64)v80, NtdllBaseTag + 1310720, v47 + (unsigned int)*((unsigned __int16 *)v83 + 1));
        v12 = v81;
        *v81 = v56;
        if ( !v56 )
        {
          v15 = -1073741801;
          goto LABEL_79;
        }
        v59 = *v83;
        if ( (unsigned __int8)v59 <= *(_BYTE *)v9 )
          v59 = *(unsigned __int8 *)v9;
        if ( (int)RtlCreateAcl(v56, v47 + (unsigned int)*((unsigned __int16 *)v55 + 1), v59) >= 0 )
        {
          v60 = 0;
          v61 = (_BYTE *)(*v12 + 8);
          if ( v79[2] )
          {
            v62 = v79;
            v63 = (_DWORD *)(v82 + 16);
            do
            {
              v64 = (unsigned __int16 *)(v18 + 2);
              v65 = *v63 | v63[1] | *(v63 - 1);
              if ( v65 )
              {
                memmove(v61, Src, *v64);
                v61[1] &= ~0x10u;
                v66 = v61;
                v67 = Src;
                v61 += *v64;
                ++*(_WORD *)(*v81 + 4);
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
              v18 = (char *)Src + *v64;
              v72 = v62[2];
              Src = v18;
            }
            while ( v60 < v72 );
            v13 = v94;
            v55 = v83;
          }
          v73 = v83;
          memmove(v61, v83 + 8, (unsigned int)*((unsigned __int16 *)v55 + 1) - 8);
          v12 = v81;
          v9 = v79;
          *(_WORD *)(*v81 + 4) += *((_WORD *)v73 + 2);
LABEL_111:
          ProcessHeap = v80;
LABEL_112:
          v15 = 0;
          if ( (*v13 & 0x1000) != 0 )
          {
            if ( *v12 )
            {
              RtlFreeHeap((__int64)ProcessHeap, 0, *v12);
              *v12 = 0LL;
            }
            v74 = (void *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v9[1]);
            *v12 = (__int64)v74;
            if ( v74 )
              memmove(v74, v9, v9[1]);
            else
              v15 = -1073741801;
          }
          v57 = v82;
          if ( !v82 )
            goto LABEL_81;
          goto LABEL_80;
        }
LABEL_66:
        *v13 |= 0x1000u;
        ProcessHeap = v80;
        goto LABEL_112;
      }
    }
    v9 = v79;
    v12 = v81;
    goto LABEL_66;
  }
LABEL_81:
  if ( v84 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v84);
  if ( v83 )
    RtlFreeHeap((__int64)v80, 0, (__int64)v83);
  return (unsigned int)v15;
}
