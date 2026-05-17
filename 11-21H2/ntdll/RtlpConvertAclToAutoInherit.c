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
  __int64 *v10; // rsi
  _DWORD *v11; // rdi
  __int64 v12; // r13
  void *ProcessHeap; // r14
  int v14; // ebx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // r15
  __int64 Heap; // rax
  __int64 v19; // r10
  int v20; // eax
  __int64 v21; // rsi
  int v22; // r15d
  unsigned __int16 *v23; // rbx
  int *v24; // r14
  int v25; // edx
  int v26; // edx
  char v27; // r8
  int v28; // ecx
  int v29; // r9d
  int v30; // ecx
  int v31; // eax
  int v32; // r14d
  __int64 v33; // rbx
  _DWORD *v34; // r15
  int v35; // ecx
  int v36; // ecx
  int v37; // eax
  char v38; // dl
  __int64 v39; // r15
  int v40; // r13d
  int v41; // eax
  int v42; // esi
  int v43; // edi
  _DWORD *v44; // r14
  char v45; // al
  int v46; // eax
  __int64 v47; // rbx
  char v48; // r8
  char v49; // r11
  int v50; // r14d
  unsigned __int8 *v51; // rdx
  _DWORD *v52; // r9
  __int64 v53; // rax
  int v54; // ecx
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 *v57; // r13
  unsigned __int8 v59; // cl
  int v60; // ecx
  _BYTE *v61; // r14
  _DWORD *v62; // r15
  int v63; // ebx
  _BYTE *v64; // r13
  int v65; // eax
  unsigned int v66; // esi
  int v67; // ebx
  __int64 v68; // rdi
  _DWORD *v69; // r12
  int v70; // eax
  int v71; // eax
  __int64 v72; // rsi
  __int64 v73; // rcx
  void *v74; // rax
  int v76; // [rsp+94h] [rbp-7Ch] BYREF
  _BYTE v77[4]; // [rsp+98h] [rbp-78h] BYREF
  int v78; // [rsp+9Ch] [rbp-74h] BYREF
  __int16 v79; // [rsp+A0h] [rbp-70h]
  int v80; // [rsp+A4h] [rbp-6Ch]
  int v81; // [rsp+A8h] [rbp-68h] BYREF
  __int64 *v82; // [rsp+B0h] [rbp-60h]
  void *v83; // [rsp+B8h] [rbp-58h]
  __int64 v84; // [rsp+C0h] [rbp-50h]
  __int64 v85; // [rsp+C8h] [rbp-48h]
  _DWORD *v86; // [rsp+D0h] [rbp-40h]
  unsigned __int8 *v87; // [rsp+D8h] [rbp-38h] BYREF
  unsigned __int16 *v88; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v89; // [rsp+E8h] [rbp-28h] BYREF
  int v90; // [rsp+F0h] [rbp-20h]
  int v91; // [rsp+F4h] [rbp-1Ch]
  int v92; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v93; // [rsp+100h] [rbp-10h]
  __int64 v94; // [rsp+108h] [rbp-8h]
  __int64 v95; // [rsp+110h] [rbp+0h]
  unsigned __int16 *v96; // [rsp+118h] [rbp+8h]
  _DWORD *v97; // [rsp+120h] [rbp+10h]
  char v98[8]; // [rsp+128h] [rbp+18h] BYREF
  int v99; // [rsp+130h] [rbp+20h]
  char v100[8]; // [rsp+158h] [rbp+48h] BYREF
  int v101; // [rsp+160h] [rbp+50h]

  v9 = a2;
  v10 = a8;
  v11 = a9;
  v94 = a5;
  v89 = a3;
  v93 = a6;
  v12 = 0LL;
  v88 = 0LL;
  v87 = 0LL;
  v78 = 0;
  v96 = a2;
  v95 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v83 = ProcessHeap;
  v86 = a7;
  v82 = a8;
  v97 = a9;
  v79 = 768;
  v14 = RtlInitializeSid((__int64)v100, (__int64)&v78, 1u);
  if ( v14 < 0 )
    return (unsigned int)v14;
  v101 = 0;
  v14 = RtlInitializeSid((__int64)v98, (__int64)&v78, 1u);
  if ( v14 < 0 )
    return (unsigned int)v14;
  v15 = v95;
  *a9 = 1024;
  v99 = 1;
  *a8 = 0LL;
  if ( v15 && !RtlValidAcl(v15) || !RtlValidAcl((__int64)v9) )
    return (unsigned int)-1073741705;
  v16 = RtlpInheritAcl(
          v15,
          0,
          0,
          a4,
          1,
          0,
          (__int64)v100,
          (__int64)v98,
          (__int64)v100,
          (__int64)v98,
          (__int64)a7,
          2,
          (unsigned __int64)&v89 & -(__int64)(v89 != 0),
          v89 != 0,
          (__int64 *)&v88,
          v77,
          &v92);
  v17 = (__int64)v88;
  v14 = v16;
  v85 = (__int64)v88;
  if ( v16 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_91;
  }
  if ( v16 >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, 24LL * v9[2]);
    v19 = 0LL;
    v84 = Heap;
    v12 = Heap;
    if ( !Heap )
    {
      v14 = -1073741801;
      goto LABEL_65;
    }
    LOWORD(v20) = v9[2];
    v21 = (__int64)(v9 + 4);
    v88 = v9 + 4;
    v22 = 0;
    v23 = v9 + 4;
    if ( (_WORD)v20 )
    {
      v24 = (int *)(v12 + 4);
      while ( *(_BYTE *)v23 <= 8u && *(_BYTE *)v23 != 4 )
      {
        v76 = *((_DWORD *)v23 + 1);
        RtlMapGenericMask(&v76, v86);
        if ( (unsigned __int8)(*(_BYTE *)v23 - 2) <= 2u || *(_BYTE *)v23 >= 7u )
          v25 = v86[3] | 0x1000000;
        else
          v25 = v86[3];
        v19 = 0LL;
        v26 = v76 & v25;
        v27 = *((_BYTE *)v23 + 1) & 3 | ~*((_BYTE *)v23 + 1) & 8;
        if ( (*((_BYTE *)v23 + 1) & 2) != 0 )
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
        v23 = (unsigned __int16 *)((char *)v23 + v23[1]);
        v20 = v9[2];
        if ( v22 >= v20 )
          goto LABEL_24;
      }
LABEL_49:
      ProcessHeap = v83;
      v10 = v82;
      *v11 |= 0x1000u;
      v17 = v85;
LABEL_91:
      v14 = 0;
      if ( (*v11 & 0x1000) != 0 )
      {
        if ( *v10 )
        {
          RtlFreeHeap((__int64)ProcessHeap, 0, *v10);
          *v10 = 0LL;
        }
        v74 = (void *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v9[1]);
        *v10 = (__int64)v74;
        if ( v74 )
        {
          memmove(v74, v9, v9[1]);
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
    v17 = v85;
    v32 = 0;
    v81 = 0;
    v33 = v85 + 8;
    if ( *(_WORD *)(v85 + 4) )
    {
      while ( *(_BYTE *)v33 <= 8u && *(_BYTE *)v33 != 4 )
      {
        v34 = v86;
        v76 = *(_DWORD *)(v33 + 4);
        RtlMapGenericMask(&v76, v86);
        if ( (unsigned __int8)(*(_BYTE *)v33 - 2) <= 2u || *(_BYTE *)v33 >= 7u )
          v35 = v34[3] | 0x1000000;
        else
          v35 = v34[3];
        v36 = v76 & v35;
        v19 = 0LL;
        if ( v36 )
        {
          v37 = *(_BYTE *)(v33 + 1) & 3;
          v38 = v37 | ~*(_BYTE *)(v33 + 1) & 8;
          if ( v37 | ~*(_BYTE *)(v33 + 1) & 8 )
          {
            v76 = 0;
            v39 = v21;
            v91 = (v38 & 2) != 0 ? v36 : 0;
            v40 = v91;
            v78 = (v38 & 1) != 0 ? v36 : 0;
            v41 = v78;
            v42 = (v38 & 8) != 0 ? v36 : 0;
            v90 = v42;
            if ( v9[2] )
            {
              v43 = (v38 & 1) != 0 ? v36 : 0;
              v44 = (_DWORD *)(v84 + 20);
              do
              {
                v45 = RtlpCompareAces((_BYTE *)v33, (char *)v39);
                v19 = 0LL;
                if ( v45 )
                {
                  v42 &= ~*(v44 - 3);
                  v40 &= ~*(v44 - 5);
                  v43 &= ~*(v44 - 4);
                  *v44 &= ~v90;
                  *(v44 - 2) &= ~v91;
                  *(v44 - 1) &= ~v78;
                }
                v44 += 6;
                v39 += *(unsigned __int16 *)(v39 + 2);
                v46 = v9[2];
                ++v76;
              }
              while ( v76 < v46 );
              v32 = v81;
              v80 = v43;
              v41 = v43;
              v11 = v97;
            }
            if ( v40 | v41 | v42 )
            {
              v12 = v84;
              goto LABEL_49;
            }
            v21 = (__int64)(v9 + 4);
          }
        }
        ++v32;
        v17 = v85;
        v33 += *(unsigned __int16 *)(v33 + 2);
        v81 = v32;
        if ( v32 >= *(unsigned __int16 *)(v85 + 4) )
        {
          LOWORD(v20) = v9[2];
          v12 = v84;
          goto LABEL_43;
        }
      }
      v10 = v82;
      goto LABEL_51;
    }
LABEL_43:
    v47 = (unsigned __int16)v20;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = (unsigned __int8 *)v21;
    if ( (_WORD)v20 )
    {
      v52 = (_DWORD *)(v12 + 16);
      do
      {
        v53 = *v51;
        if ( *v52 | v52[1] | *(v52 - 1) )
        {
          v54 = *((unsigned __int16 *)v51 + 1);
          v50 += v54;
          v9 = v96;
          if ( !RtlBaseAceType[v53] && v49 || (v17 = v85, RtlBaseAceType[v53] == 1) && v48 )
          {
            *v11 |= 0x1000u;
            goto LABEL_90;
          }
        }
        else
        {
          if ( RtlBaseAceType[v53] )
          {
            v17 = v85;
            if ( RtlBaseAceType[v53] == 1 )
              v49 = 1;
          }
          else
          {
            v48 = 1;
          }
          LOWORD(v54) = *((_WORD *)v51 + 1);
        }
        ++v19;
        v51 += (unsigned __int16)v54;
        v52 += 6;
      }
      while ( v19 < v47 );
    }
    v14 = RtlpInheritAcl(
            v95,
            0,
            0,
            a4,
            1,
            0,
            v94,
            v93,
            v94,
            v93,
            (__int64)v86,
            2,
            (unsigned __int64)&v89 & -(__int64)(v89 != 0),
            v89 != 0,
            (__int64 *)&v87,
            v77,
            &v92);
    if ( v14 >= 0 )
    {
      v55 = (__int64)v87;
      v56 = RtlAllocateHeap((__int64)v83, NtdllBaseTag + 1310720, v50 + (unsigned int)*((unsigned __int16 *)v87 + 1));
      v57 = v82;
      *v82 = v56;
      if ( v56 )
      {
        v59 = *v87;
        if ( *v87 <= *(_BYTE *)v9 )
          v59 = *(_BYTE *)v9;
        if ( (int)RtlCreateAcl(v56, v50 + (unsigned int)*(unsigned __int16 *)(v55 + 2), v59) >= 0 )
        {
          v60 = 0;
          v61 = (_BYTE *)(*v57 + 8);
          v80 = 0;
          if ( v9[2] )
          {
            v62 = (_DWORD *)(v84 + 16);
            do
            {
              v63 = *v62 | v62[1] | *(v62 - 1);
              if ( v63 )
              {
                memmove(v61, (const void *)v21, *(unsigned __int16 *)(v21 + 2));
                v61[1] &= ~0x10u;
                v64 = v61;
                v61 += *(unsigned __int16 *)(v21 + 2);
                ++*(_WORD *)(*v82 + 4);
                *((_DWORD *)v64 + 1) = v63 & *(_DWORD *)(v21 + 4);
                v65 = *(_DWORD *)(v21 + 4);
                v66 = 0x80000000;
                v67 = ~v65 & v63;
                if ( v67 )
                {
                  v68 = (__int64)v88;
                  v69 = v86;
                  do
                  {
                    if ( v66 < 0x10000000 )
                      break;
                    if ( (v66 & *(_DWORD *)(v68 + 4)) != 0 )
                    {
                      v81 = v66;
                      RtlMapGenericMask(&v81, v69);
                      v70 = v81;
                      if ( (v81 & v67) != 0 )
                      {
                        *((_DWORD *)v64 + 1) |= v66;
                        v67 &= ~v70;
                      }
                    }
                    v66 >>= 1;
                  }
                  while ( v67 );
                  v9 = v96;
                }
                *((_DWORD *)v64 + 1) |= v67;
                v60 = v80;
                v21 = (__int64)v88;
              }
              ++v60;
              v21 += *(unsigned __int16 *)(v21 + 2);
              v80 = v60;
              v71 = v9[2];
              v62 += 6;
              v88 = (unsigned __int16 *)v21;
            }
            while ( v60 < v71 );
            v11 = v97;
            v55 = (__int64)v87;
            v57 = v82;
          }
          v72 = (__int64)v87;
          memmove(v61, v87 + 8, (unsigned int)*(unsigned __int16 *)(v55 + 2) - 8);
          v73 = *v57;
          v12 = v84;
          v17 = v85;
          *(_WORD *)(v73 + 4) += *(_WORD *)(v72 + 4);
LABEL_90:
          v10 = v82;
          ProcessHeap = v83;
          goto LABEL_91;
        }
        v10 = v57;
LABEL_51:
        *v11 |= 0x1000u;
        ProcessHeap = v83;
        v12 = v84;
        goto LABEL_91;
      }
      v12 = v84;
      v14 = -1073741801;
    }
    ProcessHeap = v83;
LABEL_64:
    RtlFreeHeap((__int64)ProcessHeap, 0, v12);
  }
LABEL_65:
  if ( v17 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v17);
  if ( v87 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v87);
  return (unsigned int)v14;
}
