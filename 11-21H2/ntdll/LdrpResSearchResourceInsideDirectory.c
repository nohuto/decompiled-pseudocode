/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x180065904
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180064E1C (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800EF7DC (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrpResCompareResourceNames @ 0x180066974 (LdrpResCompareResourceNames.c)
 *     RtlULongLongSub @ 0x180066B24 (RtlULongLongSub.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x1800674C0 (LdrpSectionTableFromVirtualAddress.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC820 (LdrpTraceLoadMUIDll.c)
 *     LdrpResReadFile @ 0x1800EF728 (LdrpResReadFile.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        unsigned __int64 *a10,
        _QWORD *a11,
        int a12,
        _WORD *a13)
{
  unsigned __int64 v13; // r15
  __int64 v16; // r14
  int v17; // r13d
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  int v20; // r8d
  int v21; // esi
  int v22; // r12d
  int v23; // r11d
  int v24; // ecx
  unsigned __int64 v25; // rbx
  unsigned int *v26; // rdi
  int v27; // eax
  int v28; // ecx
  unsigned __int64 v29; // r10
  unsigned int v30; // r13d
  char *v31; // rdx
  char *v32; // rcx
  unsigned int *v33; // r12
  unsigned int *v34; // rcx
  int v35; // esi
  int v36; // eax
  int v37; // r15d
  __int64 result; // rax
  int v39; // esi
  int v40; // r8d
  char *Heap; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  bool v45; // zf
  char v46; // si
  __int64 v47; // rax
  unsigned int *v48; // r14
  __int64 v49; // rax
  int v50; // r8d
  unsigned __int64 v51; // rbx
  __int64 v52; // rsi
  unsigned __int64 v53; // r13
  int v54; // r10d
  unsigned __int64 v55; // r11
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 *v58; // r9
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rdx
  int v62; // r8d
  __int64 v63; // rax
  unsigned int v64; // r10d
  __int64 v65; // r11
  __int64 v66; // r14
  __int64 v67; // r15
  __int64 v68; // rax
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // r11
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // r14
  __int64 v76; // rcx
  unsigned __int64 v77; // r14
  unsigned __int64 v78; // rdx
  __int64 v79; // rcx
  unsigned int v80; // [rsp+40h] [rbp-188h]
  unsigned int *BaseAddress; // [rsp+48h] [rbp-180h]
  unsigned __int64 v82; // [rsp+50h] [rbp-178h] BYREF
  char v83; // [rsp+58h] [rbp-170h]
  unsigned __int16 v84; // [rsp+5Ch] [rbp-16Ch]
  int v85; // [rsp+60h] [rbp-168h]
  char v86; // [rsp+64h] [rbp-164h]
  int v87; // [rsp+68h] [rbp-160h]
  unsigned int *v88; // [rsp+70h] [rbp-158h]
  int v89; // [rsp+78h] [rbp-150h]
  __int64 v90; // [rsp+80h] [rbp-148h]
  signed __int16 v91; // [rsp+88h] [rbp-140h]
  int v92; // [rsp+8Ch] [rbp-13Ch]
  unsigned __int64 v93; // [rsp+90h] [rbp-138h]
  __int64 v94; // [rsp+98h] [rbp-130h]
  unsigned __int64 v95; // [rsp+A0h] [rbp-128h]
  int v96; // [rsp+A8h] [rbp-120h]
  int v97; // [rsp+ACh] [rbp-11Ch]
  unsigned __int64 v98; // [rsp+B0h] [rbp-118h]
  int v99; // [rsp+B8h] [rbp-110h]
  unsigned __int64 v100; // [rsp+C0h] [rbp-108h]
  char *v101; // [rsp+C8h] [rbp-100h]
  HANDLE Handle; // [rsp+D0h] [rbp-F8h]
  __int64 v103; // [rsp+D8h] [rbp-F0h]
  __int64 v104; // [rsp+E0h] [rbp-E8h]
  __int64 v105; // [rsp+E8h] [rbp-E0h]
  int v106; // [rsp+F0h] [rbp-D8h]
  __int64 v107; // [rsp+F8h] [rbp-D0h]
  __int64 v108; // [rsp+100h] [rbp-C8h]
  unsigned int *v109; // [rsp+108h] [rbp-C0h]
  unsigned int *v110; // [rsp+110h] [rbp-B8h]
  _QWORD *v111; // [rsp+118h] [rbp-B0h]
  _WORD *v112; // [rsp+120h] [rbp-A8h]
  __int64 v113; // [rsp+128h] [rbp-A0h]
  unsigned __int64 *v114; // [rsp+130h] [rbp-98h]
  _QWORD v115[2]; // [rsp+138h] [rbp-90h] BYREF
  _QWORD *v116; // [rsp+148h] [rbp-80h]
  int v117; // [rsp+150h] [rbp-78h] BYREF
  const wchar_t *v118; // [rsp+158h] [rbp-70h]
  __int128 v119; // [rsp+160h] [rbp-68h]
  _BYTE v120[16]; // [rsp+170h] [rbp-58h] BYREF

  v13 = a4;
  v93 = a4;
  v95 = a3;
  Handle = a2;
  v16 = a1;
  v94 = a1;
  v103 = a5;
  v108 = a6;
  v105 = a7;
  v107 = a9;
  v114 = a10;
  v116 = a11;
  v112 = a13;
  v119 = 0LL;
  v91 = 0;
  LOWORD(v17) = 0;
  v90 = 0LL;
  BaseAddress = 0LL;
  v89 = 0;
  v84 = 0;
  LODWORD(v115[0]) = 5636180;
  v115[1] = L"LdrpResSearchResourceInsideDirectory Enter";
  v117 = 5505106;
  v118 = L"LdrpResSearchResourceInsideDirectory Exit";
  if ( RtlGetCurrentServiceSessionId() )
  {
    v18 = (__int64)NtCurrentPeb()->SharedData + 555;
    v89 = v84;
    LOWORD(v17) = v90;
  }
  else
  {
    v18 = 2147353477LL;
  }
  if ( (*(_BYTE *)v18 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v79 = (__int64)NtCurrentPeb()->SharedData + 554;
      v89 = v84;
      LOWORD(v17) = v90;
    }
    else
    {
      v79 = 2147353476LL;
    }
    LdrpTraceLoadMUIDll(v115, *(unsigned __int8 *)v79);
  }
  if ( !v13 )
    return 3221225485LL;
  if ( !v103 )
    return 3221225485LL;
  v19 = (_QWORD *)v105;
  if ( !v105 )
    return 3221225485LL;
  v20 = a8;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  LOBYTE(v21) = a12;
  v85 = a12;
  if ( (a12 & 0x8000) != 0 && ((unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a6) )
    return 3221225485LL;
  v22 = a12 & 0x1000;
  v87 = v22;
  v83 = v22 != 0;
  v23 = a12 & 0x8800;
  v96 = v23;
  if ( (a12 & 0x1000) != 0 && !a3 )
    return 3221225485LL;
  if ( v23 != 34816 )
  {
    if ( v16 )
      goto LABEL_13;
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
LABEL_13:
  v111 = (_QWORD *)v105;
  v24 = a8;
  v97 = a8;
  v25 = v13;
  v26 = 0LL;
  v88 = 0LL;
  v100 = 0LL;
  if ( v112 )
    *v112 = 0;
LABEL_15:
  if ( !v25 )
    goto LABEL_48;
  v27 = v24;
  v28 = v24 - 1;
  v97 = v28;
  v106 = v28;
  if ( !v27 )
    goto LABEL_48;
  v90 = *v19;
  if ( !v28 && v20 == 3 )
  {
    v100 = v25;
    if ( !v107 )
      goto LABEL_187;
    v91 = *(_WORD *)v107;
    v89 = 0;
    v84 = 0;
    if ( (~(_BYTE)v21 & 4) != 0 )
      v90 = *(unsigned __int16 *)(v107 + 4);
  }
  if ( v23 == 34816 )
  {
    result = LdrpResReadFile(Handle);
    if ( (int)result < 0 )
      return result;
    v20 = a8;
    v23 = v96;
    if ( v96 == 34816 )
      goto LABEL_181;
  }
  if ( !v22 )
  {
LABEL_181:
    v29 = v95;
  }
  else
  {
    if ( v25 + 24 < v25 )
      goto LABEL_193;
    v82 = v25 + 24;
    v29 = v95;
    if ( v25 + 24 > v95 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_192;
  }
  v30 = WORD6(v119);
  if ( v23 != 34816 )
    v30 = *(unsigned __int16 *)(v25 + 12);
  v92 = v30;
  if ( v30 && v22 )
  {
    v104 = 8LL * v30;
    v44 = 8 * v30;
    if ( v44 + v25 + 16 < v25 )
      goto LABEL_193;
    v82 = v44 + v25 + 16;
    if ( v82 > v29 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_192;
  }
  v31 = (char *)(v25 + 16);
  v104 = v25 + 16;
  v101 = (char *)(v25 + 16);
  if ( (v90 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( v30 )
    {
      if ( v22 )
      {
        if ( &v31[v30] < v31 )
          goto LABEL_193;
        v82 = (unsigned __int64)&v31[v30];
      }
      v31 += 8 * (int)v30;
      v104 = (__int64)v31;
      v101 = v31;
    }
    v30 = HIWORD(v119);
    if ( v23 != 34816 )
      v30 = *(unsigned __int16 *)(v25 + 14);
    v92 = v30;
    if ( v22 )
    {
      v115[0] = 8LL * v30;
      v32 = &v31[8 * v30];
      if ( v32 < v31 )
        goto LABEL_193;
      v82 = (unsigned __int64)&v31[8 * v30];
      if ( (unsigned __int64)v32 > v29 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
        goto LABEL_192;
    }
  }
  if ( !v30 )
  {
    v98 = 0LL;
    goto LABEL_50;
  }
  if ( v23 != 34816 )
  {
LABEL_34:
    if ( v100 && (v21 & 0x20) != 0 )
    {
      v25 = 0LL;
      v98 = 0LL;
      v26 = (unsigned int *)(v13 + *((unsigned int *)v31 + 1));
      if ( v22 )
      {
        if ( (unsigned __int64)v26 < v13 )
          goto LABEL_193;
        v82 = v13 + *((unsigned int *)v31 + 1);
      }
      v88 = v26;
      v17 = *(_DWORD *)v31;
      v90 = *(unsigned int *)v31;
      v20 = a8;
      goto LABEL_48;
    }
LABEL_35:
    v25 = 0LL;
    v98 = 0LL;
    v33 = (unsigned int *)v31;
    v101 = v31;
    v34 = (unsigned int *)&v31[8 * v30 - 8];
    v110 = v34;
    LOBYTE(v35) = v30;
    v92 = v30;
    v36 = v30;
    while ( 1 )
    {
      if ( v33 > v34 )
      {
        v16 = v94;
        v21 = v85;
        goto LABEL_41;
      }
      v37 = v36 >> 1;
      if ( !(v36 >> 1) )
      {
        v21 = v85;
        v13 = v93;
        v16 = v94;
        if ( v36 )
        {
          result = LdrpResCompareResourceNames(v94, Handle, v95);
          if ( (int)result < 0 )
            return result;
          if ( !v99 )
          {
            v49 = v33[1];
            v22 = v87;
            if ( (int)v49 >= 0 )
            {
              if ( v87 )
              {
                if ( !v100 )
                  goto LABEL_192;
                v26 = (unsigned int *)(v93 + v49);
                if ( v93 + v49 < v93 )
                  goto LABEL_193;
                v82 = v93 + v49;
              }
              else
              {
                v26 = (unsigned int *)(v93 + v49);
              }
              v88 = v26;
            }
            else
            {
              if ( v87 )
              {
                if ( v100 )
                  goto LABEL_192;
                LODWORD(v49) = v49 & 0x7FFFFFFF;
                v25 = v93 + v49;
                if ( v93 + v49 < v93 )
                  goto LABEL_193;
                v82 = v93 + v49;
              }
              else
              {
                v25 = v93 + (v49 & 0xFFFFFFFF7FFFFFFFuLL);
              }
              v98 = v25;
            }
            goto LABEL_42;
          }
        }
LABEL_41:
        v22 = v87;
        goto LABEL_42;
      }
      v109 = v33;
      v46 = v35 & 1;
      v45 = v46 == 0;
      v86 = v46;
      v35 = v37 - 1;
      v47 = v37;
      if ( v45 )
        v47 = v35;
      v48 = &v33[2 * v47];
      v109 = v48;
      result = LdrpResCompareResourceNames(v94, Handle, v95);
      if ( (int)result < 0 )
        return result;
      if ( !v99 )
      {
        v63 = v48[1];
        v22 = v87;
        if ( (int)v63 >= 0 )
        {
          v25 = 0LL;
          v98 = 0LL;
          if ( v87 )
          {
            if ( !v100 )
              goto LABEL_192;
            v13 = v93;
            v26 = (unsigned int *)(v93 + v63);
            if ( v93 + v63 < v93 )
              goto LABEL_193;
            v82 = v93 + v63;
          }
          else
          {
            v13 = v93;
            v26 = (unsigned int *)(v93 + v63);
          }
          v88 = v26;
        }
        else
        {
          if ( v87 )
          {
            if ( !v100 )
            {
              LODWORD(v63) = v63 & 0x7FFFFFFF;
              v13 = v93;
              v25 = v93 + v63;
              if ( v93 + v63 >= v93 )
              {
                v82 = v93 + v63;
                goto LABEL_136;
              }
LABEL_193:
              v82 = -1LL;
            }
LABEL_192:
            v80 = -1073741701;
LABEL_52:
            Heap = (char *)BaseAddress;
LABEL_53:
            if ( Heap )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
            if ( RtlGetCurrentServiceSessionId() )
              v42 = (__int64)NtCurrentPeb()->SharedData + 555;
            else
              v42 = 2147353477LL;
            if ( (*(_BYTE *)v42 & 1) != 0 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                v43 = (__int64)NtCurrentPeb()->SharedData + 554;
              else
                v43 = 2147353476LL;
              LdrpTraceLoadMUIDll(&v117, *(unsigned __int8 *)v43);
            }
            return v80;
          }
          v13 = v93;
          v25 = v93 + (v63 & 0xFFFFFFFF7FFFFFFFuLL);
LABEL_136:
          v98 = v25;
        }
        v16 = v94;
        v21 = v85;
LABEL_42:
        if ( !v100 || v26 )
          goto LABEL_43;
        if ( (v21 & 4) == 0 )
        {
          HIWORD(v50) = HIWORD(v89);
          LOWORD(v50) = v89 + 1;
          v89 = v50;
          v84 = v50;
          if ( (unsigned __int16)v50 < v91 )
          {
            v90 = *(unsigned __int16 *)(v107 + 8LL * (unsigned __int16)v50 + 4);
            v31 = (char *)v104;
            goto LABEL_35;
          }
          if ( !*(_BYTE *)(v107 + 516) )
          {
            v21 |= 0x20u;
            v85 = v21;
            a12 = v21;
            v31 = (char *)v104;
            goto LABEL_34;
          }
LABEL_43:
          v19 = (_QWORD *)(v105 + 8);
          v105 = (__int64)v19;
          v111 = v19;
          v20 = a8;
          LOWORD(v17) = v90;
          v23 = v96;
          v24 = v97;
          goto LABEL_15;
        }
        v20 = a8;
        LOWORD(v17) = v90;
LABEL_48:
        v39 = v21 & 2;
        if ( v26 && !v39 )
        {
          if ( v22
            && ((unsigned __int64)v26 <= v13 || (unsigned __int64)(v26 + 4) > v95 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
          {
            v88 = 0LL;
            goto LABEL_192;
          }
          if ( v112 )
            *v112 = v17;
          v51 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (v16 & 1) == 0 && v96 != 34816 )
          {
            v52 = 0LL;
            v113 = 0LL;
            v53 = v95;
            goto LABEL_101;
          }
          if ( *(_WORD *)(v103 + 24) == 267 )
          {
            v64 = *(_DWORD *)(v103 + 136);
          }
          else if ( *(_WORD *)(v103 + 24) == 523 )
          {
            v64 = *(_DWORD *)(v103 + 152);
          }
          else
          {
            v64 = 0;
          }
          if ( !v64 )
          {
            v88 = 0LL;
            v80 = -1073741687;
            goto LABEL_52;
          }
          v65 = v64;
          if ( v22 )
          {
            if ( v51 + v64 < v51 )
              goto LABEL_193;
            v82 = v51 + v64;
            if ( (int)RtlULongLongSub(v82, v13, &v82) < 0 )
              goto LABEL_192;
          }
          v52 = v65 + v51 - v13;
          v113 = v52;
          v53 = v95;
          v66 = LdrpSectionTableFromVirtualAddress((unsigned int)v16 & 0xFFFFFFFC, v95, v103, v108, v64, v83);
          if ( !v66 )
            goto LABEL_210;
          if ( v96 == 34816 )
          {
            result = LdrpResReadFile(Handle);
            if ( (int)result < 0 )
              return result;
            v26 = (unsigned int *)v120;
            v88 = (unsigned int *)v120;
          }
          if ( *v26 > *(_DWORD *)(v66 + 8) )
          {
            v67 = *(unsigned int *)(v66 + 12);
            v68 = LdrpSectionTableFromVirtualAddress(v51, v53, v103, v108, *v26, v83);
            if ( v68 )
            {
              v69 = *(unsigned int *)(v68 + 12);
              v70 = LdrpSectionTableFromVirtualAddress(v51, v53, v103, v108, *(_DWORD *)(v68 + 12), v83);
              v71 = v70;
              v54 = -1073741675;
              if ( v70 )
              {
                if ( v22 )
                {
                  v72 = (unsigned int)v69 - (unsigned __int64)*(unsigned int *)(v70 + 12);
                  v73 = v72 + v51;
                  if ( v72 + v51 < v51 )
                  {
                    v82 = -1LL;
                    v74 = -1073741675;
                    v73 = -1LL;
                  }
                  else
                  {
                    v82 = v72 + v51;
                    v74 = 0;
                  }
                  if ( v74 < 0 )
                    goto LABEL_192;
                  if ( v73 + *(unsigned int *)(v71 + 20) < v73 )
                    goto LABEL_193;
                  v82 = v73 + *(unsigned int *)(v71 + 20);
                }
                v75 = v51 + *(unsigned int *)(v71 + 20) - (unsigned __int64)*(unsigned int *)(v71 + 12) + v69;
              }
              else
              {
                v75 = 0LL;
              }
              if ( v22
                && ((int)RtlULongLongSub(*(unsigned int *)(v71 + 12), v67, &v82) < 0
                 || (int)RtlULongLongSub(v82, v75 - v93, &v82) < 0) )
              {
                goto LABEL_192;
              }
              v76 = *(unsigned int *)(v71 + 12) - v67 - v75;
              v13 = v93;
              v52 += v93 + v76;
              v113 = v52;
              v16 = v94;
              goto LABEL_102;
            }
LABEL_210:
            v88 = 0LL;
            goto LABEL_192;
          }
          v16 = v94;
LABEL_101:
          v54 = -1073741675;
LABEL_102:
          if ( v22 )
          {
            if ( (int)RtlULongLongSub(*v26, v52, &v82) < 0 )
              goto LABEL_192;
            v56 = v82;
            if ( v82 < v13 - v16 )
              goto LABEL_210;
            if ( v82 > v53 )
              goto LABEL_210;
            if ( !(_DWORD)v55 )
              goto LABEL_210;
            v57 = (unsigned int)v55;
            if ( v55 > v53 || v82 + v55 > v53 )
              goto LABEL_210;
          }
          else
          {
            v56 = 0LL;
            v57 = v26[1];
          }
          v58 = v114;
          if ( v114 )
          {
            if ( v22 )
            {
              v59 = v56 + v51;
              if ( v56 + v51 < v51 )
              {
                v82 = -1LL;
                v60 = -1LL;
              }
              else
              {
                v82 = v56 + v51;
                v54 = 0;
                v60 = v56 + v51;
              }
              if ( v54 < 0 || v60 < v51 || v60 > v53 + (v51 & 0xFFFFFFFFFFFFFFFCuLL) )
                goto LABEL_192;
              *v114 = v59;
            }
            else
            {
              *v114 = v51 + *v26 - v52;
            }
          }
          if ( v116 )
          {
            if ( v22 && v58 )
            {
              v61 = *v58 + v57;
              if ( v61 < *v58 )
                goto LABEL_193;
              v82 = *v58 + v57;
              if ( v61 > v51 + v53 )
                goto LABEL_192;
            }
            *v116 = v57;
          }
LABEL_123:
          v80 = 0;
          goto LABEL_52;
        }
        if ( v25 && v39 )
        {
          if ( v22 )
          {
            if ( v25 + 24 < v25 )
            {
              v82 = -1LL;
              v98 = 0LL;
              goto LABEL_192;
            }
            v82 = v25 + 24;
            v77 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
            v78 = v95;
            if ( v25 + 24 > v95 + v77 )
            {
              v98 = 0LL;
              goto LABEL_192;
            }
          }
          else
          {
            v77 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
            v78 = v95;
          }
          if ( v114 )
          {
            if ( v22 && (v25 < v77 || v25 > v77 + v78) )
              goto LABEL_192;
            *v114 = v25;
          }
          goto LABEL_123;
        }
LABEL_50:
        v40 = v20 - v97 - 1;
        if ( !v40 )
        {
          v80 = -1073741686;
          goto LABEL_52;
        }
        v62 = v40 - 1;
        if ( !v62 )
        {
          v80 = -1073741685;
          goto LABEL_52;
        }
        if ( v62 == 1 )
        {
          v80 = -1073741308;
          goto LABEL_52;
        }
LABEL_187:
        v80 = -1073741811;
        goto LABEL_52;
      }
      if ( v99 >= 0 )
        break;
      v34 = v48 - 2;
      v110 = v48 - 2;
      if ( v86 )
      {
        v92 = v37;
        goto LABEL_74;
      }
      v92 = v37 - 1;
      v36 = v37 - 1;
LABEL_75:
      v13 = v93;
    }
    v33 = v48 + 2;
    v101 = (char *)(v48 + 2);
    v92 = v37;
    v34 = v110;
LABEL_74:
    v36 = v37;
    LOBYTE(v35) = v37;
    goto LABEL_75;
  }
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v30);
  BaseAddress = (unsigned int *)Heap;
  if ( !Heap )
  {
    v80 = -1073741801;
    goto LABEL_53;
  }
  result = LdrpResReadFile(Handle);
  if ( (int)result >= 0 )
  {
    v31 = Heap;
    v104 = (__int64)Heap;
    v101 = Heap;
    LOBYTE(v21) = a12;
    v85 = a12;
    v89 = v84;
    v105 = (__int64)v111;
    v97 = v106;
    v26 = v88;
    goto LABEL_34;
  }
  return result;
}
