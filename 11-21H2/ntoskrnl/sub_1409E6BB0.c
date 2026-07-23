/*
 * XREFs of sub_1409E6BB0 @ 0x1409E6BB0
 * Callers:
 *     sub_140569768 @ 0x140569768 (sub_140569768.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402EDEB4 @ 0x1402EDEB4 (sub_1402EDEB4.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x14041BBC0 (ZwQueryVirtualMemory.c)
 *     sub_14070BB0C @ 0x14070BB0C (sub_14070BB0C.c)
 *     sub_140759008 @ 0x140759008 (sub_140759008.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1409E6BB0(int a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  int v5; // ecx
  int v6; // ecx
  const EVENT_DESCRIPTOR *v7; // r15
  __int64 *v8; // r12
  const wchar_t *v9; // rdi
  unsigned __int16 v10; // ax
  ULONG v11; // r13d
  int v12; // eax
  const wchar_t *v13; // rcx
  int v14; // ecx
  __int16 v15; // ax
  unsigned int v16; // ebx
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v18; // r14
  __int64 v19; // rax
  ULONG v20; // ecx
  unsigned int v21; // ebx
  __int64 v22; // rax
  unsigned int v23; // ebx
  unsigned __int16 *v24; // rax
  unsigned __int16 *v25; // rdi
  const wchar_t *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // ebx
  PVOID v33; // rcx
  char *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // ebx
  PVOID v41; // rcx
  char *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // ebx
  __int64 v46; // rax
  REGHANDLE v47; // rcx
  unsigned __int16 *v48; // r9
  unsigned __int16 *v49; // r10
  PVOID v50; // rbx
  _WORD v51[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v52[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v53[2]; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v54[2]; // [rsp+3Ch] [rbp-C4h] BYREF
  int v55; // [rsp+40h] [rbp-C0h] BYREF
  int v56; // [rsp+44h] [rbp-BCh] BYREF
  int v57; // [rsp+48h] [rbp-B8h] BYREF
  int v58; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v59; // [rsp+50h] [rbp-B0h] BYREF
  int v60; // [rsp+58h] [rbp-A8h] BYREF
  int v61; // [rsp+5Ch] [rbp-A4h] BYREF
  int v62; // [rsp+60h] [rbp-A0h] BYREF
  int v63; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-90h] BYREF
  PVOID v66; // [rsp+78h] [rbp-88h] BYREF
  char *v67; // [rsp+80h] [rbp-80h] BYREF
  char *v68; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v69; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v70; // [rsp+98h] [rbp-68h] BYREF
  PVOID v71; // [rsp+A0h] [rbp-60h] BYREF
  char *v72; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v73; // [rsp+B0h] [rbp-50h] BYREF
  char *v74; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v75; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v76; // [rsp+C8h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+E0h] [rbp-20h] BYREF
  int *v78; // [rsp+100h] [rbp+0h]
  __int64 v79; // [rsp+108h] [rbp+8h]
  _DWORD *v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+118h] [rbp+18h]
  __int64 v82; // [rsp+120h] [rbp+20h]
  _DWORD v83[2]; // [rsp+128h] [rbp+28h] BYREF
  _DWORD *v84; // [rsp+130h] [rbp+30h]
  __int64 v85; // [rsp+138h] [rbp+38h]
  PVOID v86; // [rsp+140h] [rbp+40h]
  _DWORD v87[2]; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 *v88; // [rsp+150h] [rbp+50h]
  __int64 v89; // [rsp+158h] [rbp+58h]
  _DWORD *v90; // [rsp+160h] [rbp+60h]
  __int64 v91; // [rsp+168h] [rbp+68h]
  __int64 v92; // [rsp+170h] [rbp+70h]
  _DWORD v93[2]; // [rsp+178h] [rbp+78h] BYREF
  _DWORD *v94; // [rsp+180h] [rbp+80h]
  __int64 v95; // [rsp+188h] [rbp+88h]
  __int64 v96; // [rsp+190h] [rbp+90h]
  _DWORD v97[2]; // [rsp+198h] [rbp+98h] BYREF
  int *v98; // [rsp+1A0h] [rbp+A0h]
  __int64 v99; // [rsp+1A8h] [rbp+A8h]
  int *v100; // [rsp+1B0h] [rbp+B0h]
  __int64 v101; // [rsp+1B8h] [rbp+B8h]
  PVOID *v102; // [rsp+1C0h] [rbp+C0h]
  __int64 v103; // [rsp+1C8h] [rbp+C8h]
  char **v104; // [rsp+1D0h] [rbp+D0h]
  __int64 v105; // [rsp+1D8h] [rbp+D8h]
  PVOID *p_P; // [rsp+1E0h] [rbp+E0h]
  __int64 v107; // [rsp+1E8h] [rbp+E8h]
  PVOID *v108; // [rsp+1F0h] [rbp+F0h]
  __int64 v109; // [rsp+1F8h] [rbp+F8h]
  char **v110; // [rsp+200h] [rbp+100h]
  __int64 v111; // [rsp+208h] [rbp+108h]
  __int64 *v112; // [rsp+210h] [rbp+110h]
  __int64 v113; // [rsp+218h] [rbp+118h]
  __int64 *v114; // [rsp+220h] [rbp+120h]
  __int64 v115; // [rsp+228h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+230h] [rbp+130h] BYREF
  const wchar_t *v117; // [rsp+240h] [rbp+140h]
  int v118; // [rsp+248h] [rbp+148h]
  int v119; // [rsp+24Ch] [rbp+14Ch]
  _WORD *v120; // [rsp+250h] [rbp+150h]
  __int64 v121; // [rsp+258h] [rbp+158h]
  const wchar_t *v122; // [rsp+260h] [rbp+160h]
  int v123; // [rsp+268h] [rbp+168h]
  int v124; // [rsp+26Ch] [rbp+16Ch]
  __int64 v125[38]; // [rsp+270h] [rbp+170h] BYREF

  v3 = (*(_DWORD *)a3 >> 20) & 1;
  v58 = a1;
  v60 = v3;
  v61 = *(_DWORD *)(a3 + 4);
  BaseAddress = *(PVOID *)(a3 + 8);
  v66 = *(PVOID *)(a3 + 16);
  v62 = *(_DWORD *)(a3 + 24);
  v63 = *(_DWORD *)(a3 + 28);
  v54[0] = 0;
  v52[0] = 0;
  v67 = 0LL;
  v59 = 0LL;
  v51[0] = 0;
  v53[0] = 0;
  v68 = 0LL;
  v70 = 0LL;
  v76 = 0LL;
  v5 = a1 - 1;
  if ( !v5 )
  {
    v56 = 0;
    goto LABEL_7;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v56 = 1;
LABEL_7:
    v7 = (const EVENT_DESCRIPTOR *)qword_140039248;
    goto LABEL_8;
  }
  if ( v6 != 1 )
    return;
  v56 = -1;
  v7 = &stru_140039AD0;
LABEL_8:
  v8 = &qword_140001AF8;
  v9 = L"(null)";
  if ( *(_QWORD *)(a2 + 1472) )
    v8 = *(__int64 **)(a2 + 1472);
  v10 = *(_WORD *)v8;
  v11 = 12;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v10 )
  {
    v51[0] = v10 >> 1;
    UserData.Ptr = (ULONGLONG)v51;
    v12 = *(unsigned __int16 *)v8;
    v13 = (const wchar_t *)v8[1];
  }
  else
  {
    v51[0] = 6;
    UserData.Ptr = (ULONGLONG)v51;
    v13 = L"(null)";
    v12 = 12;
  }
  v117 = v13;
  v118 = v12;
  v119 = 0;
  sub_14070BB0C(a2, (__int64)&v76);
  P = (PVOID)*((_QWORD *)&v76 + 1);
  LOWORD(v55) = v76;
  v121 = 2LL;
  if ( (_WORD)v76 )
  {
    v122 = (const wchar_t *)*((_QWORD *)&v76 + 1);
    v120 = v54;
    v14 = (unsigned __int16)v76;
    v15 = (unsigned __int16)v76 >> 1;
  }
  else
  {
    v122 = L"(null)";
    v120 = v54;
    v14 = 12;
    v15 = 6;
  }
  v123 = v14;
  v54[0] = v15;
  v124 = 0;
  v16 = sub_1402EDEB4(v125, a2, &v70) + 4;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, 512LL, 1853049172LL);
  v18 = Pool2;
  if ( !Pool2 )
    goto LABEL_19;
  if ( ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryMappedFilenameInformation,
         Pool2,
         0x200uLL,
         0LL) < 0 )
  {
    *v18 = 0;
LABEL_19:
    v52[0] = 6;
    v19 = 2LL * v16;
    *(&UserData.Ptr + v19) = (ULONGLONG)v52;
    v20 = 12;
    *((_QWORD *)&UserData.Size + v19) = 2LL;
    goto LABEL_20;
  }
  if ( !*v18 )
    goto LABEL_19;
  v52[0] = *v18 >> 1;
  v35 = 2LL * v16;
  *(&UserData.Ptr + v35) = (ULONGLONG)v52;
  *((_QWORD *)&UserData.Size + v35) = 2LL;
  v20 = *v18;
  v9 = (const wchar_t *)*((_QWORD *)v18 + 1);
LABEL_20:
  v21 = v16 + 1;
  v22 = 2LL * v21;
  v23 = v21 + 1;
  *(&UserData.Ptr + v22) = (ULONGLONG)v9;
  *(&UserData.Size + 2 * v22) = v20;
  *(&UserData.Reserved + 2 * v22) = 0;
  v24 = (unsigned __int16 *)ExAllocatePool2(256LL, 512LL, 1853049172LL);
  v25 = v24;
  if ( v24 )
  {
    if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v66, MemoryMappedFilenameInformation, v24, 0x200uLL, 0LL) >= 0 )
    {
      if ( *v25 )
      {
        v53[0] = *v25 >> 1;
        v36 = 2LL * v23;
        *(&UserData.Ptr + v36) = (ULONGLONG)v53;
        *((_QWORD *)&UserData.Size + v36) = 2LL;
        v11 = *v25;
        v26 = (const wchar_t *)*((_QWORD *)v25 + 1);
        goto LABEL_24;
      }
    }
    else
    {
      *v25 = 0;
    }
  }
  v53[0] = 6;
  v26 = L"(null)";
  v27 = 2LL * v23;
  *(&UserData.Ptr + v27) = (ULONGLONG)v53;
  *((_QWORD *)&UserData.Size + v27) = 2LL;
LABEL_24:
  v28 = 2LL * (v23 + 1);
  *(&UserData.Ptr + v28) = (ULONGLONG)v26;
  *(&UserData.Size + 2 * v28) = v11;
  *(&UserData.Reserved + 2 * v28) = 0;
  v29 = 2LL * (v23 + 2);
  *(&UserData.Ptr + v29) = (ULONGLONG)&v60;
  *((_QWORD *)&UserData.Size + v29) = 4LL;
  v30 = 2LL * (v23 + 3);
  *(&UserData.Ptr + v30) = (ULONGLONG)&v61;
  *((_QWORD *)&UserData.Size + v30) = 4LL;
  v31 = v23 + 4;
  v32 = v23 + 5;
  v31 *= 2LL;
  *(&UserData.Ptr + v31) = (ULONGLONG)&v56;
  v33 = BaseAddress;
  *((_QWORD *)&UserData.Size + v31) = 4LL;
  if ( (int)sub_140759008((unsigned __int64)v33, &v59, &v69, &v57) < 0 )
    v34 = 0LL;
  else
    v34 = (char *)BaseAddress - v59;
  v67 = v34;
  v37 = 2LL * v32;
  *(&UserData.Ptr + v37) = (ULONGLONG)&BaseAddress;
  *((_QWORD *)&UserData.Size + v37) = 8LL;
  v38 = 2LL * (v32 + 1);
  *(&UserData.Ptr + v38) = (ULONGLONG)&v67;
  *((_QWORD *)&UserData.Size + v38) = 8LL;
  v39 = v32 + 2;
  v40 = v32 + 3;
  v39 *= 2LL;
  *(&UserData.Ptr + v39) = (ULONGLONG)&v62;
  v41 = v66;
  *((_QWORD *)&UserData.Size + v39) = 4LL;
  if ( (int)sub_140759008((unsigned __int64)v41, &v59, &v69, &v57) < 0 )
    v42 = 0LL;
  else
    v42 = (char *)v66 - v59;
  v68 = v42;
  v43 = 2LL * v40;
  *(&UserData.Ptr + v43) = (ULONGLONG)&v66;
  *((_QWORD *)&UserData.Size + v43) = 8LL;
  v44 = v40 + 1;
  v45 = v40 + 2;
  v44 *= 2LL;
  *(&UserData.Ptr + v44) = (ULONGLONG)&v68;
  *((_QWORD *)&UserData.Size + v44) = 8LL;
  v46 = 2LL * v45;
  *(&UserData.Ptr + v46) = (ULONGLONG)&v63;
  v47 = qword_140C15FC8;
  *((_QWORD *)&UserData.Size + v46) = 4LL;
  EtwWrite(v47, v7, 0LL, v45 + 1, &UserData);
  if ( (unsigned int)dword_140C043E0 > 5 && sub_1402A2000((__int64)&dword_140C043E0, 0x400000000000LL) )
  {
    v50 = P;
    v78 = &v58;
    v80 = v83;
    v82 = v8[1];
    v83[0] = *(unsigned __int16 *)v8;
    v84 = v87;
    v87[0] = (unsigned __int16)v55;
    v69 = v70;
    v88 = &v69;
    v90 = v93;
    v92 = *((_QWORD *)v49 + 1);
    v93[0] = *v49;
    v94 = v97;
    v96 = *((_QWORD *)v48 + 1);
    v97[0] = *v48;
    v57 = v60;
    v98 = &v57;
    v55 = v61;
    v100 = &v55;
    v71 = BaseAddress;
    v102 = &v71;
    v72 = v67;
    v104 = &v72;
    LODWORD(P) = v62;
    p_P = &P;
    v73 = v66;
    v108 = &v73;
    v74 = v68;
    v110 = &v74;
    LODWORD(v59) = v63;
    v112 = &v59;
    v79 = 4LL;
    v81 = 2LL;
    v83[1] = 0;
    v85 = 2LL;
    v86 = v50;
    v87[1] = 0;
    v89 = 8LL;
    v91 = 2LL;
    v93[1] = 0;
    v95 = 2LL;
    v97[1] = 0;
    v99 = 4LL;
    v101 = 4LL;
    v103 = 8LL;
    v105 = 8LL;
    v107 = 4LL;
    v109 = 8LL;
    v111 = 8LL;
    v113 = 4LL;
    v114 = &v75;
    v75 = 0x1000000LL;
    v115 = 8LL;
    sub_14020A9C4((__int64)&dword_140C043E0, (unsigned __int8 *)&word_1400359E6, 0LL, 0LL, 0x15u, &v77);
  }
  else
  {
    v50 = P;
  }
  if ( v50 )
    ExFreePoolWithTag(v50, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
}
