/*
 * XREFs of AslEnvBuildBasic @ 0x1800EEA40
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x1800EE140 (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 * Callees:
 *     AslRegistryGetStringExpand @ 0x1800EDB74 (AslRegistryGetStringExpand.c)
 *     AslRegistryGetString @ 0x1800EF1D0 (AslRegistryGetString.c)
 *     AslRegistryOpenKey @ 0x1800EF534 (AslRegistryOpenKey.c)
 *     RtlDownlevelGetNtSystemRoot @ 0x18016D080 (RtlDownlevelGetNtSystemRoot.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     AslLogCallPrintf @ 0x180738B40 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvBuildBasic(_QWORD *a1, size_t *a2)
{
  void *v2; // r15
  PVOID ProcessHeap; // r13
  _OWORD *Heap; // rax
  _OWORD *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  const void **v8; // rbx
  wchar_t **v9; // rax
  __int64 v10; // rbx
  size_t v11; // rbx
  SIZE_T v12; // r13
  unsigned __int64 v13; // r15
  size_t v14; // r12
  char *v15; // rbx
  __int64 v16; // r15
  size_t v17; // r15
  char *v18; // r13
  void *v19; // rcx
  SIZE_T v20; // rdi
  unsigned int v21; // r13d
  size_t v22; // rbx
  PVOID v23; // rax
  int v24; // eax
  char *v25; // r12
  __int64 *v26; // r15
  SIZE_T v27; // rbx
  void *v28; // rdi
  void *v29; // r13
  void *v30; // rdi
  _WORD *v31; // rax
  __int64 v32; // r15
  size_t v33; // r15
  wchar_t **v34; // r13
  wchar_t **v35; // rax
  wchar_t **v36; // rdi
  size_t v37; // rcx
  bool v38; // cc
  __int64 v39; // r12
  size_t v40; // r12
  wchar_t **v41; // r13
  size_t v42; // rdi
  size_t v43; // rbx
  PVOID v44; // rax
  __int64 v46; // r14
  size_t v47; // r14
  unsigned __int64 v48; // r15
  unsigned __int64 v49; // rbx
  __int64 v50; // rcx
  SIZE_T v51; // r14
  SIZE_T v52; // r15
  _DWORD *NtSystemRoot; // rax
  SIZE_T v54; // rbx
  __int64 v55; // rcx
  SIZE_T v56; // r14
  unsigned __int64 v57; // rbx
  __int64 v58; // r15
  __int64 v59; // rcx
  const void *v60; // rax
  __int64 v61; // r14
  size_t v62; // r14
  SIZE_T v63; // r15
  const void **v64; // rbx
  __int64 v65; // r15
  const void *v66; // rax
  unsigned __int64 v67; // rdi
  _OWORD *v68; // rax
  _OWORD *v69; // r13
  int v70; // r8d
  int v71; // r8d
  SIZE_T v72; // rdi
  _OWORD *v73; // rax
  _OWORD *v74; // r15
  SIZE_T v75; // rdi
  _OWORD *v76; // rax
  _OWORD *v77; // rbx
  SIZE_T v78; // rdi
  _OWORD *v79; // rax
  _OWORD *v80; // r14
  SIZE_T v81; // rdi
  _OWORD *v82; // rax
  _OWORD *v83; // r15
  unsigned __int64 v84; // rdi
  _OWORD *v85; // rax
  _OWORD *v86; // r15
  SIZE_T v87; // rdi
  _OWORD *v88; // rax
  _OWORD *v89; // r13
  unsigned __int64 v90; // rdi
  _OWORD *v91; // rax
  _OWORD *v92; // r14
  _WORD *v93; // rax
  __int64 v94; // rbx
  size_t v95; // rbx
  wchar_t **v96; // r13
  unsigned __int64 v97; // rdi
  _OWORD *v98; // rax
  _OWORD *v99; // r13
  char *v100; // rbx
  unsigned __int64 v101; // rdi
  _OWORD *v102; // rax
  _OWORD *v103; // r13
  __int64 v104; // r15
  size_t v105; // r15
  char *v106; // r13
  unsigned __int64 v107; // rdi
  _WORD *v108; // rax
  _OWORD *v109; // rax
  void *v110; // rcx
  unsigned __int64 v111; // rdi
  _OWORD *v112; // rax
  _OWORD *v113; // r13
  SIZE_T v114; // rdi
  _OWORD *v115; // rax
  _OWORD *v116; // r13
  unsigned __int64 v117; // rdi
  _OWORD *v118; // rax
  _OWORD *v119; // r13
  unsigned __int64 v120; // rdi
  _WORD *v121; // rax
  _OWORD *v122; // rax
  unsigned __int64 v123; // rdi
  _OWORD *v124; // rax
  _OWORD *v125; // r13
  unsigned __int64 v126; // rbx
  _OWORD *v127; // rax
  _OWORD *v128; // rdi
  unsigned __int64 v129; // rbx
  _OWORD *v130; // rax
  _OWORD *v131; // r15
  unsigned __int64 v132; // rbx
  _OWORD *v133; // rax
  _OWORD *v134; // r15
  unsigned __int64 v135; // rbx
  _OWORD *v136; // rax
  _OWORD *v137; // r15
  int v138; // r8d
  PVOID P; // [rsp+30h] [rbp-49h]
  void *Src; // [rsp+38h] [rbp-41h] BYREF
  size_t Size[2]; // [rsp+40h] [rbp-39h]
  __int64 v142; // [rsp+50h] [rbp-29h]
  __int64 v143; // [rsp+58h] [rbp-21h]
  PVOID Ptr[2]; // [rsp+60h] [rbp-19h]
  wchar_t **v145; // [rsp+70h] [rbp-9h]
  HANDLE Handle; // [rsp+78h] [rbp-1h] BYREF
  _WORD *v147; // [rsp+80h] [rbp+7h]
  wchar_t **v148; // [rsp+88h] [rbp+Fh]
  unsigned int v151; // [rsp+F0h] [rbp+77h]
  int v152; // [rsp+F0h] [rbp+77h]
  _DWORD *v153; // [rsp+F0h] [rbp+77h]
  const void *v154; // [rsp+F0h] [rbp+77h]
  unsigned int v155; // [rsp+F0h] [rbp+77h]
  const void *v156; // [rsp+F0h] [rbp+77h]
  PVOID HeapHandle; // [rsp+F8h] [rbp+7Fh]

  Handle = 0LL;
  Src = 0LL;
  v2 = 0LL;
  P = 0LL;
  v142 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  Size[0] = (size_t)ProcessHeap;
  v143 = 1024LL;
  Ptr[1] = 0LL;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x400uLL);
  v5 = Heap;
  if ( !Heap )
  {
    v138 = 1190;
    *(_OWORD *)Size = 0LL;
    *(_OWORD *)Ptr = 0LL;
LABEL_383:
    v7 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslEnvBuildBasic", v138, (unsigned int)"Out of memory");
    v5 = Ptr[1];
    goto LABEL_69;
  }
  memset_0(Heap, 0, 0x400uLL);
  Ptr[1] = v5;
  v20 = 1024LL;
  v142 = 1024LL;
  v49 = 22LL;
  v14 = 22LL;
  *v5 = *(_OWORD *)L"SystemRoot=";
  *((_DWORD *)v5 + 4) = *(_DWORD *)L"ot=";
  *((_WORD *)v5 + 10) = aSystemroot_0[10];
  v65 = ((__int64 (*)(void))RtlDownlevelGetNtSystemRoot)();
  v66 = (const void *)((__int64 (*)(void))RtlDownlevelGetNtSystemRoot)();
  v46 = -1LL;
  v156 = v66;
  v50 = 0LL;
  do
    ++v46;
  while ( *(_WORD *)(v65 + 2 * v46) );
  v47 = 2 * v46;
  if ( v47 )
  {
    v48 = v47 + 22;
    if ( v47 + 22 < 0x16 )
    {
      v7 = -1073741811;
      goto LABEL_135;
    }
    if ( v48 <= 0x400 )
    {
LABEL_83:
      memcpy_0((char *)v5 + 22, v66, v47);
      v49 = v47 + 22;
      if ( v48 >= 0x16 )
        v14 = v47 + 22;
      v50 = 0LL;
      goto LABEL_86;
    }
    v67 = v143 - 1 + v48;
    if ( v67 < v48 )
    {
      v7 = -1073741675;
      goto LABEL_135;
    }
    v20 = ~(v143 - 1) & v67;
    if ( v5 )
    {
      v69 = RtlReAllocateHeap(ProcessHeap, 0, v5, v20);
    }
    else
    {
      v68 = RtlAllocateHeap(ProcessHeap, 0, v20);
      v69 = v68;
      if ( !v68 )
      {
LABEL_132:
        v7 = -1073741801;
LABEL_135:
        v70 = 1200;
        goto LABEL_140;
      }
      memset_0(v68, 0, v20);
    }
    if ( v69 )
    {
      v66 = v156;
      v5 = v69;
      Ptr[1] = v69;
      ProcessHeap = HeapHandle;
      v142 = v20;
      goto LABEL_83;
    }
    goto LABEL_132;
  }
LABEL_86:
  v51 = v49 + 2;
  if ( v49 + 2 < v49 )
  {
    v7 = -1073741811;
LABEL_137:
    v70 = 1204;
    goto LABEL_140;
  }
  if ( v51 <= v20 )
    goto LABEL_88;
  v72 = v143 - 1 + v51;
  if ( v72 < v51 )
  {
    v7 = -1073741675;
    goto LABEL_137;
  }
  v20 = ~(v143 - 1) & v72;
  if ( v5 )
  {
    v74 = RtlReAllocateHeap(ProcessHeap, 0, v5, v20);
  }
  else
  {
    v73 = RtlAllocateHeap(ProcessHeap, 0, v20);
    v74 = v73;
    if ( v73 )
      memset_0(v73, 0, v20);
  }
  v50 = 0LL;
  if ( !v74 )
  {
    v7 = -1073741801;
    goto LABEL_137;
  }
  v5 = v74;
  Ptr[1] = v74;
  v142 = v20;
LABEL_88:
  *(_WORD *)((char *)v5 + v49) = 0;
  v52 = v49 + 26;
  if ( v14 <= v51 )
    v14 = v49 + 2;
  if ( v52 < v51 )
  {
    v7 = -1073741811;
    goto LABEL_382;
  }
  if ( v52 <= v20 )
    goto LABEL_92;
  v75 = v143 - 1 + v52;
  if ( v75 < v52 )
  {
    v7 = -1073741675;
    goto LABEL_382;
  }
  v20 = ~(v143 - 1) & v75;
  if ( v5 )
  {
    v77 = RtlReAllocateHeap(ProcessHeap, 0, v5, v20);
  }
  else
  {
    v76 = RtlAllocateHeap(ProcessHeap, 0, v20);
    v77 = v76;
    if ( !v76 )
    {
LABEL_163:
      v7 = -1073741801;
LABEL_382:
      v70 = 1208;
      goto LABEL_140;
    }
    memset_0(v76, 0, v20);
  }
  if ( !v77 )
    goto LABEL_163;
  v5 = v77;
  Ptr[1] = v77;
  v142 = v20;
LABEL_92:
  *(_OWORD *)((char *)v5 + v51) = *(_OWORD *)L"SystemDrive=";
  if ( v14 <= v52 )
    v14 = v51 + 24;
  *(_QWORD *)((char *)v5 + v51 + 16) = *(_QWORD *)L"ive=";
  NtSystemRoot = (_DWORD *)RtlDownlevelGetNtSystemRoot(v50);
  v54 = v51 + 28;
  v153 = NtSystemRoot;
  if ( v51 + 28 < v51 + 24 )
  {
    v7 = -1073741811;
    goto LABEL_380;
  }
  if ( v54 <= v20 )
  {
    v55 = 0LL;
    goto LABEL_97;
  }
  v78 = v143 - 1 + v54;
  if ( v78 < v54 )
  {
    v7 = -1073741675;
    goto LABEL_380;
  }
  v20 = ~(v143 - 1) & v78;
  if ( v5 )
  {
    v80 = RtlReAllocateHeap(ProcessHeap, 0, v5, v20);
  }
  else
  {
    v79 = RtlAllocateHeap(ProcessHeap, 0, v20);
    v80 = v79;
    if ( v79 )
      memset_0(v79, 0, v20);
  }
  v55 = 0LL;
  if ( !v80 )
  {
    v7 = -1073741801;
LABEL_380:
    v70 = 1212;
    goto LABEL_140;
  }
  NtSystemRoot = v153;
  v5 = v80;
  Ptr[1] = v80;
  v142 = v20;
LABEL_97:
  v56 = v52 + 6;
  *(_DWORD *)((char *)v5 + v52) = *NtSystemRoot;
  if ( v14 <= v54 )
    v14 = v52 + 4;
  if ( v56 < v54 )
  {
    v7 = -1073741811;
    goto LABEL_378;
  }
  if ( v56 <= v20 )
    goto LABEL_101;
  v81 = v56 + v143 - 1;
  if ( v81 < v56 )
  {
    v7 = -1073741675;
    goto LABEL_378;
  }
  v20 = ~(v143 - 1) & v81;
  if ( v5 )
  {
    v83 = RtlReAllocateHeap(ProcessHeap, 0, v5, v20);
  }
  else
  {
    v82 = RtlAllocateHeap(ProcessHeap, 0, v20);
    v83 = v82;
    if ( v82 )
      memset_0(v82, 0, v20);
  }
  v55 = 0LL;
  if ( !v83 )
  {
    v7 = -1073741801;
LABEL_378:
    v70 = 1218;
    goto LABEL_140;
  }
  v5 = v83;
  Ptr[1] = v83;
  v142 = v20;
LABEL_101:
  *(_WORD *)((char *)v5 + v54) = 0;
  v57 = v54 + 16;
  if ( v14 <= v56 )
    v14 = v56;
  if ( v57 < v56 )
  {
    v7 = -1073741811;
    goto LABEL_376;
  }
  if ( v57 <= v20 )
    goto LABEL_105;
  v84 = v57 + v143 - 1;
  if ( v84 < v57 )
  {
    v7 = -1073741675;
    goto LABEL_376;
  }
  v20 = ~(v143 - 1) & v84;
  if ( v5 )
  {
    v86 = RtlReAllocateHeap(ProcessHeap, 0, v5, v20);
  }
  else
  {
    v85 = RtlAllocateHeap(ProcessHeap, 0, v20);
    v86 = v85;
    if ( !v85 )
    {
LABEL_190:
      v7 = -1073741801;
LABEL_376:
      v70 = 1222;
      goto LABEL_140;
    }
    memset_0(v85, 0, v20);
  }
  if ( !v86 )
    goto LABEL_190;
  v5 = v86;
  Ptr[1] = v86;
  v142 = v20;
LABEL_105:
  *(_QWORD *)((char *)v5 + v56) = *(_QWORD *)L"WinDir=";
  if ( v14 <= v57 )
    v14 = v56 + 14;
  *(_DWORD *)((char *)v5 + v56 + 8) = *(_DWORD *)L"ir=";
  *(_WORD *)((char *)v5 + v56 + 12) = aWindir_0[6];
  v58 = RtlDownlevelGetNtSystemRoot(v55);
  v60 = (const void *)RtlDownlevelGetNtSystemRoot(v59);
  v61 = -1LL;
  v154 = v60;
  do
    ++v61;
  while ( *(_WORD *)(v58 + 2 * v61) );
  v62 = 2 * v61;
  if ( v62 )
  {
    v63 = v62 + v57;
    if ( v62 + v57 < v57 )
    {
      v7 = -1073741811;
      goto LABEL_202;
    }
    if ( v63 <= v20 )
      goto LABEL_112;
    v87 = v63 + v143 - 1;
    if ( v87 < v63 )
    {
      v7 = -1073741675;
      goto LABEL_202;
    }
    v20 = ~(v143 - 1) & v87;
    if ( v5 )
    {
      v89 = RtlReAllocateHeap(ProcessHeap, 0, v5, v20);
    }
    else
    {
      v88 = RtlAllocateHeap(ProcessHeap, 0, v20);
      v89 = v88;
      if ( !v88 )
      {
LABEL_199:
        v7 = -1073741801;
LABEL_202:
        v70 = 1224;
        goto LABEL_140;
      }
      memset_0(v88, 0, v20);
    }
    if ( v89 )
    {
      v60 = v154;
      v5 = v89;
      Ptr[1] = v89;
      v142 = v20;
LABEL_112:
      memcpy_0((char *)v5 + v57, v60, v62);
      v57 += v62;
      if ( v14 <= v63 )
        v14 = v63;
      goto LABEL_114;
    }
    goto LABEL_199;
  }
LABEL_114:
  v13 = v57 + 2;
  if ( v57 + 2 < v57 )
  {
    v7 = -1073741811;
    goto LABEL_374;
  }
  if ( v13 > v20 )
  {
    v90 = v13 + v143 - 1;
    if ( v90 < v13 )
    {
      v7 = -1073741675;
    }
    else
    {
      v20 = ~(v143 - 1) & v90;
      v21 = 0;
      if ( v5 )
      {
        v92 = RtlReAllocateHeap(HeapHandle, 0, v5, v20);
      }
      else
      {
        v91 = RtlAllocateHeap(HeapHandle, 0, v20);
        v92 = v91;
        if ( v91 )
          memset_0(v91, 0, v20);
      }
      if ( v92 )
      {
        v5 = v92;
        Ptr[1] = v92;
        v142 = v20;
        goto LABEL_117;
      }
      v7 = -1073741801;
    }
LABEL_374:
    v70 = 1228;
    goto LABEL_140;
  }
  v21 = 0;
LABEL_117:
  *(_WORD *)((char *)v5 + v57) = 0;
  Ptr[0] = (PVOID)(v57 + 2);
  if ( v14 <= v13 )
    v14 = v57 + 2;
  Size[1] = v14;
  if ( (int)AslRegistryOpenKey(&Handle) >= 0 )
  {
    v64 = (const void **)off_1807CC2F0;
    v155 = 0;
    v145 = off_1807CC2F0;
    do
    {
      if ( (int)AslRegistryGetString(&Src, Handle, *(v64 - 1)) >= 0 )
      {
        v93 = *v64;
        v94 = -1LL;
        v147 = v93;
        do
          ++v94;
        while ( v93[v94] );
        v95 = 2 * v94;
        if ( v95 )
        {
          v96 = (wchar_t **)(v95 + v13);
          v148 = (wchar_t **)(v95 + v13);
          if ( v95 + v13 < v13 )
          {
            v7 = -1073741811;
LABEL_139:
            v70 = 1246;
            goto LABEL_140;
          }
          if ( (unsigned __int64)v96 > v20 )
          {
            v97 = (unsigned __int64)&v96[(unsigned __int64)v143 / 8 - 1] + 7;
            if ( v97 < (unsigned __int64)v96 )
            {
              v7 = -1073741675;
              goto LABEL_139;
            }
            v20 = ~(v143 - 1) & v97;
            if ( v5 )
            {
              v99 = RtlReAllocateHeap(HeapHandle, 0, v5, v20);
            }
            else
            {
              v98 = RtlAllocateHeap(HeapHandle, 0, v20);
              v99 = v98;
              if ( !v98 )
                goto LABEL_267;
              memset_0(v98, 0, v20);
            }
            if ( !v99 )
            {
LABEL_267:
              v7 = -1073741801;
              goto LABEL_139;
            }
            v93 = v147;
            v5 = v99;
            Ptr[1] = v99;
            v96 = v148;
            v142 = v20;
          }
          memcpy_0((char *)v5 + v13, v93, v95);
          v13 = (unsigned __int64)v96;
          if ( v14 <= (unsigned __int64)v96 )
            v14 = (size_t)v96;
        }
        v100 = (char *)(v13 + 2);
        if ( v13 + 2 < v13 )
        {
          v7 = -1073741811;
          goto LABEL_280;
        }
        if ( (unsigned __int64)v100 > v20 )
        {
          v101 = (unsigned __int64)&v100[v143 - 1];
          if ( v101 < (unsigned __int64)v100 )
          {
            v7 = -1073741675;
            goto LABEL_280;
          }
          v20 = ~(v143 - 1) & v101;
          if ( v5 )
          {
            v103 = RtlReAllocateHeap(HeapHandle, 0, v5, v20);
          }
          else
          {
            v102 = RtlAllocateHeap(HeapHandle, 0, v20);
            v103 = v102;
            if ( v102 )
              memset_0(v102, 0, v20);
          }
          if ( !v103 )
          {
            v7 = -1073741801;
LABEL_280:
            v70 = 1248;
            goto LABEL_140;
          }
          v5 = v103;
          Ptr[1] = v103;
          v142 = v20;
        }
        Ptr[0] = (PVOID)(v13 + 2);
        if ( v14 <= (unsigned __int64)v100 )
          v14 = v13 + 2;
        *(_WORD *)((char *)v5 + v13) = 61;
        Size[1] = v14;
        v104 = -1LL;
        do
          ++v104;
        while ( *((_WORD *)Src + v104) );
        v105 = 2 * v104;
        if ( v105 )
        {
          v106 = &v100[v105];
          if ( &v100[v105] < v100 )
          {
            v7 = -1073741811;
            goto LABEL_274;
          }
          if ( (unsigned __int64)v106 > v20 )
          {
            v107 = (unsigned __int64)&v106[v143 - 1];
            if ( v107 < (unsigned __int64)v106 )
            {
              v7 = -1073741675;
              goto LABEL_274;
            }
            v20 = ~(v143 - 1) & v107;
            if ( v5 )
            {
              v109 = RtlReAllocateHeap(HeapHandle, 0, v5, v20);
            }
            else
            {
              v108 = RtlAllocateHeap(HeapHandle, 0, v20);
              v147 = v108;
              if ( !v108 )
                goto LABEL_271;
              memset_0(v108, 0, v20);
              v109 = v147;
            }
            if ( !v109 )
            {
LABEL_271:
              v7 = -1073741801;
LABEL_274:
              v70 = 1250;
              goto LABEL_140;
            }
            v5 = v109;
            Ptr[1] = v109;
            v142 = v20;
          }
          memcpy_0((char *)v5 + (_QWORD)v100, Src, v105);
          v100 += v105;
          Ptr[0] = v106;
          if ( v14 <= (unsigned __int64)v106 )
            v14 = (size_t)v106;
          Size[1] = v14;
        }
        if ( Src )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
          v110 = (void *)Size[0];
          v5 = Ptr[1];
          v100 = (char *)Ptr[0];
          v20 = v142;
          v14 = Size[1];
          HeapHandle = (PVOID)Size[0];
        }
        else
        {
          v110 = HeapHandle;
        }
        v13 = (unsigned __int64)(v100 + 2);
        Src = 0LL;
        if ( v100 + 2 < v100 )
        {
          v7 = -1073741811;
          goto LABEL_278;
        }
        if ( v13 > v20 )
        {
          v111 = v13 + v143 - 1;
          if ( v111 < v13 )
          {
            v7 = -1073741675;
            goto LABEL_278;
          }
          v20 = ~(v143 - 1) & v111;
          if ( v5 )
          {
            v113 = RtlReAllocateHeap(v110, 0, v5, v20);
          }
          else
          {
            v112 = RtlAllocateHeap(v110, 0, v20);
            v113 = v112;
            if ( v112 )
              memset_0(v112, 0, v20);
          }
          if ( !v113 )
          {
            v7 = -1073741801;
LABEL_278:
            v70 = 1257;
            goto LABEL_140;
          }
          v5 = v113;
          Ptr[1] = v113;
          v142 = v20;
        }
        v21 = v155;
        *(_WORD *)((char *)v5 + (_QWORD)v100) = 0;
        v64 = (const void **)v145;
        if ( v14 <= v13 )
          v14 = v13;
        Size[1] = v14;
        Ptr[0] = (PVOID)v13;
      }
      ++v21;
      v64 += 2;
      v155 = v21;
      v145 = (wchar_t **)v64;
    }
    while ( v21 < 2 );
    ZwClose(Handle);
    v21 = 0;
    Handle = 0LL;
  }
  v6 = AslRegistryOpenKey(&Handle);
  v7 = v6;
  if ( v6 < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"AslEnvBuildBasic", 1274, (unsigned int)"Failed to open reg key [%x]", v6);
    goto LABEL_142;
  }
  v8 = (const void **)off_1807CC318;
  v151 = 0;
  v145 = off_1807CC318;
  do
  {
    if ( (int)AslRegistryGetString(&Src, Handle, *(v8 - 1)) >= 0 )
    {
      v9 = (wchar_t **)*v8;
      v10 = -1LL;
      v148 = v9;
      do
        ++v10;
      while ( *((_WORD *)v9 + v10) );
      v11 = 2 * v10;
      if ( v11 )
      {
        v12 = v11 + v13;
        v147 = (_WORD *)(v11 + v13);
        if ( v11 + v13 < v13 )
        {
          v7 = -1073741811;
          goto LABEL_313;
        }
        if ( v12 > v20 )
        {
          v114 = v143 - 1 + v12;
          if ( v114 < v12 )
          {
            v7 = -1073741675;
            goto LABEL_313;
          }
          v20 = ~(v143 - 1) & v114;
          if ( v5 )
          {
            v116 = RtlReAllocateHeap(HeapHandle, 0, v5, v20);
          }
          else
          {
            v115 = RtlAllocateHeap(HeapHandle, 0, v20);
            v116 = v115;
            if ( !v115 )
              goto LABEL_310;
            memset_0(v115, 0, v20);
          }
          if ( !v116 )
          {
LABEL_310:
            v7 = -1073741801;
LABEL_313:
            v70 = 1284;
            goto LABEL_140;
          }
          v9 = v148;
          v5 = v116;
          Ptr[1] = v116;
          v12 = (SIZE_T)v147;
          v142 = v20;
        }
        memcpy_0((char *)v5 + v13, v9, v11);
        v13 = v12;
        if ( v14 <= v12 )
          v14 = v12;
      }
      v15 = (char *)(v13 + 2);
      if ( v13 + 2 < v13 )
      {
        v7 = -1073741811;
        goto LABEL_325;
      }
      if ( (unsigned __int64)v15 > v20 )
      {
        v117 = (unsigned __int64)&v15[v143 - 1];
        if ( v117 < (unsigned __int64)v15 )
        {
          v7 = -1073741675;
          goto LABEL_325;
        }
        v20 = ~(v143 - 1) & v117;
        if ( v5 )
        {
          v119 = RtlReAllocateHeap(HeapHandle, 0, v5, v20);
        }
        else
        {
          v118 = RtlAllocateHeap(HeapHandle, 0, v20);
          v119 = v118;
          if ( v118 )
            memset_0(v118, 0, v20);
        }
        if ( !v119 )
        {
          v7 = -1073741801;
LABEL_325:
          v70 = 1286;
          goto LABEL_140;
        }
        v5 = v119;
        Ptr[1] = v119;
        v142 = v20;
      }
      Ptr[0] = (PVOID)(v13 + 2);
      if ( v14 <= (unsigned __int64)v15 )
        v14 = v13 + 2;
      *(_WORD *)((char *)v5 + v13) = 61;
      Size[1] = v14;
      v16 = -1LL;
      do
        ++v16;
      while ( *((_WORD *)Src + v16) );
      v17 = 2 * v16;
      if ( v17 )
      {
        v18 = &v15[v17];
        if ( &v15[v17] < v15 )
        {
          v7 = -1073741811;
          goto LABEL_319;
        }
        if ( (unsigned __int64)v18 > v20 )
        {
          v120 = (unsigned __int64)&v18[v143 - 1];
          if ( v120 < (unsigned __int64)v18 )
          {
            v7 = -1073741675;
            goto LABEL_319;
          }
          v20 = ~(v143 - 1) & v120;
          if ( v5 )
          {
            v122 = RtlReAllocateHeap(HeapHandle, 0, v5, v20);
          }
          else
          {
            v121 = RtlAllocateHeap(HeapHandle, 0, v20);
            v147 = v121;
            if ( !v121 )
              goto LABEL_316;
            memset_0(v121, 0, v20);
            v122 = v147;
          }
          if ( !v122 )
          {
LABEL_316:
            v7 = -1073741801;
LABEL_319:
            v70 = 1288;
            goto LABEL_140;
          }
          v5 = v122;
          Ptr[1] = v122;
          v142 = v20;
        }
        memcpy_0((char *)v5 + (_QWORD)v15, Src, v17);
        v15 += v17;
        Ptr[0] = v18;
        if ( v14 <= (unsigned __int64)v18 )
          v14 = (size_t)v18;
        Size[1] = v14;
      }
      if ( Src )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
        v19 = (void *)Size[0];
        v5 = Ptr[1];
        v15 = (char *)Ptr[0];
        v20 = v142;
        v14 = Size[1];
        HeapHandle = (PVOID)Size[0];
      }
      else
      {
        v19 = HeapHandle;
      }
      v13 = (unsigned __int64)(v15 + 2);
      Src = 0LL;
      if ( v15 + 2 < v15 )
      {
        v7 = -1073741811;
        goto LABEL_323;
      }
      if ( v13 > v20 )
      {
        v123 = v13 + v143 - 1;
        if ( v123 < v13 )
        {
          v7 = -1073741675;
          goto LABEL_323;
        }
        v20 = ~(v143 - 1) & v123;
        if ( v5 )
        {
          v125 = RtlReAllocateHeap(v19, 0, v5, v20);
        }
        else
        {
          v124 = RtlAllocateHeap(v19, 0, v20);
          v125 = v124;
          if ( v124 )
            memset_0(v124, 0, v20);
        }
        if ( !v125 )
        {
          v7 = -1073741801;
LABEL_323:
          v70 = 1295;
          goto LABEL_140;
        }
        v5 = v125;
        Ptr[1] = v125;
        v142 = v20;
      }
      v21 = v151;
      *(_WORD *)((char *)v5 + (_QWORD)v15) = 0;
      v8 = (const void **)v145;
      if ( v14 <= v13 )
        v14 = v13;
      Size[1] = v14;
      Ptr[0] = (PVOID)v13;
    }
    ++v21;
    v8 += 2;
    v151 = v21;
    v145 = (wchar_t **)v8;
  }
  while ( v21 < 4 );
  ZwClose(Handle);
  Handle = 0LL;
  v22 = Size[1];
  v145 = (wchar_t **)Size[1];
  v23 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size[1] + 2);
  P = v23;
  v2 = v23;
  if ( !v23 )
  {
    v138 = 1310;
    goto LABEL_383;
  }
  v5 = Ptr[1];
  memcpy_0(v23, Ptr[1], v22);
  v24 = AslRegistryOpenKey(&Handle);
  v7 = v24;
  if ( v24 < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"AslEnvBuildBasic", 1320, (unsigned int)"Failed to open reg key [%x]", v24);
LABEL_69:
    v29 = (void *)Size[0];
    goto LABEL_70;
  }
  v25 = (char *)Ptr[0];
  v26 = (__int64 *)off_1807CC2C8;
  v27 = v142;
  v28 = P;
  v152 = 0;
  v29 = (void *)Size[0];
  HeapHandle = (PVOID)Size[0];
  v148 = off_1807CC2C8;
  while ( (int)AslRegistryGetStringExpand((wchar_t **)&Src, (__int64)Handle, *v26, (__int64)v28) < 0 )
  {
LABEL_66:
    v26 += 2;
    v148 = (wchar_t **)v26;
    if ( (unsigned int)++v152 >= 2 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v28);
      v42 = Size[1];
      v43 = Size[1] + 2;
      v44 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size[1] + 2);
      v2 = v44;
      if ( v44 )
      {
        v5 = Ptr[1];
        memcpy_0(v44, Ptr[1], v42);
        *a1 = v2;
        v2 = 0LL;
        *a2 = v43 >> 1;
        v7 = 0;
        goto LABEL_69;
      }
      v138 = 1367;
      goto LABEL_383;
    }
  }
  v30 = Src;
  if ( wcschr((const wchar_t *)Src, 0x25u) )
  {
    AslLogCallPrintf(1, (unsigned int)"AslEnvBuildBasic", 1337, (unsigned int)"Failed to expand: %ls %ls", *v26, v30);
LABEL_65:
    v28 = P;
    goto LABEL_66;
  }
  v31 = (_WORD *)v26[1];
  v32 = -1LL;
  v147 = v31;
  do
    ++v32;
  while ( v31[v32] );
  v33 = 2 * v32;
  if ( v33 )
  {
    v34 = (wchar_t **)&v25[v33];
    if ( &v25[v33] < v25 )
    {
      v7 = -1073741811;
      goto LABEL_362;
    }
    if ( (unsigned __int64)v34 > v27 )
    {
      v126 = (unsigned __int64)&v34[(unsigned __int64)v143 / 8 - 1] + 7;
      if ( v126 < (unsigned __int64)v34 )
      {
        v7 = -1073741675;
LABEL_362:
        v70 = 1341;
        goto LABEL_140;
      }
      v27 = ~(v143 - 1) & v126;
      if ( v5 )
      {
        v128 = RtlReAllocateHeap(HeapHandle, 0, v5, v27);
      }
      else
      {
        v127 = RtlAllocateHeap(HeapHandle, 0, v27);
        v128 = v127;
        if ( !v127 )
          goto LABEL_359;
        memset_0(v127, 0, v27);
      }
      if ( !v128 )
      {
LABEL_359:
        v7 = -1073741801;
        goto LABEL_362;
      }
      v31 = v147;
      v5 = v128;
      Ptr[1] = v128;
      v142 = v27;
    }
    memcpy_0((char *)v5 + (_QWORD)v25, v31, v33);
    v35 = v145;
    v25 += v33;
    if ( v145 <= v34 )
      v35 = v34;
    v29 = HeapHandle;
    v145 = v35;
  }
  v36 = (wchar_t **)(v25 + 2);
  if ( v25 + 2 < v25 )
  {
    v7 = -1073741811;
    goto LABEL_144;
  }
  if ( (unsigned __int64)v36 > v27 )
  {
    v129 = (unsigned __int64)&v36[(unsigned __int64)v143 / 8 - 1] + 7;
    if ( v129 < (unsigned __int64)v36 )
    {
      v7 = -1073741675;
LABEL_144:
      v71 = 1343;
      goto LABEL_145;
    }
    v27 = ~(v143 - 1) & v129;
    if ( v5 )
    {
      v131 = RtlReAllocateHeap(v29, 0, v5, v27);
    }
    else
    {
      v130 = RtlAllocateHeap(v29, 0, v27);
      v131 = v130;
      if ( v130 )
        memset_0(v130, 0, v27);
    }
    if ( !v131 )
    {
      v7 = -1073741801;
      goto LABEL_144;
    }
    v5 = v131;
    Ptr[1] = v131;
    v142 = v27;
  }
  v37 = (size_t)v145;
  v38 = v145 <= v36;
  *(_WORD *)((char *)v5 + (_QWORD)v25) = 61;
  Ptr[0] = v25 + 2;
  if ( v38 )
    v37 = (size_t)(v25 + 2);
  v145 = (wchar_t **)v37;
  Size[1] = v37;
  v39 = -1LL;
  do
    ++v39;
  while ( *((_WORD *)Src + v39) );
  v40 = 2 * v39;
  if ( !v40 )
  {
LABEL_58:
    if ( Src )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
      v37 = Size[1];
      v29 = (void *)Size[0];
      v5 = Ptr[1];
      v36 = (wchar_t **)Ptr[0];
      v27 = v142;
      v145 = (wchar_t **)Size[1];
      HeapHandle = (PVOID)Size[0];
    }
    else
    {
      v29 = HeapHandle;
    }
    v25 = (char *)v36 + 2;
    Src = 0LL;
    if ( (wchar_t **)((char *)v36 + 2) < v36 )
    {
      v7 = -1073741811;
LABEL_372:
      v71 = 1352;
LABEL_145:
      AslLogCallPrintf(1, (unsigned int)"AslEnvBuildBasic", v71, (unsigned int)"Out of memory");
      goto LABEL_146;
    }
    if ( (unsigned __int64)v25 > v27 )
    {
      v135 = (unsigned __int64)&v25[v143 - 1];
      if ( v135 < (unsigned __int64)v25 )
      {
        v7 = -1073741675;
        goto LABEL_372;
      }
      v27 = ~(v143 - 1) & v135;
      if ( v5 )
      {
        v137 = RtlReAllocateHeap(v29, 0, v5, v27);
      }
      else
      {
        v136 = RtlAllocateHeap(v29, 0, v27);
        v137 = v136;
        if ( v136 )
          memset_0(v136, 0, v27);
      }
      if ( !v137 )
      {
        v7 = -1073741801;
        goto LABEL_372;
      }
      v37 = (size_t)v145;
      v5 = v137;
      Ptr[1] = v137;
      v142 = v27;
    }
    v26 = (__int64 *)v148;
    *(_WORD *)((char *)v5 + (_QWORD)v36) = 0;
    if ( v37 <= (unsigned __int64)v25 )
      v37 = (size_t)v36 + 2;
    v145 = (wchar_t **)v37;
    Size[1] = v37;
    goto LABEL_65;
  }
  v41 = (wchar_t **)((char *)v36 + v40);
  if ( (wchar_t **)((char *)v36 + v40) >= v36 )
  {
    if ( (unsigned __int64)v41 > v27 )
    {
      v132 = (unsigned __int64)&v41[(unsigned __int64)v143 / 8 - 1] + 7;
      if ( v132 < (unsigned __int64)v41 )
      {
        v7 = -1073741675;
        goto LABEL_368;
      }
      v27 = ~(v143 - 1) & v132;
      if ( v5 )
      {
        v134 = RtlReAllocateHeap(HeapHandle, 0, v5, v27);
      }
      else
      {
        v133 = RtlAllocateHeap(HeapHandle, 0, v27);
        v134 = v133;
        if ( !v133 )
          goto LABEL_365;
        memset_0(v133, 0, v27);
      }
      if ( !v134 )
      {
LABEL_365:
        v7 = -1073741801;
        goto LABEL_368;
      }
      v5 = v134;
      Ptr[1] = v134;
      v142 = v27;
    }
    memcpy_0((char *)v5 + (_QWORD)v36, Src, v40);
    v37 = (size_t)v145;
    v36 = (wchar_t **)((char *)v36 + v40);
    Ptr[0] = v41;
    if ( v145 <= v41 )
      v37 = (size_t)v41;
    v145 = (wchar_t **)v37;
    Size[1] = v37;
    goto LABEL_58;
  }
  v7 = -1073741811;
LABEL_368:
  v70 = 1345;
LABEL_140:
  AslLogCallPrintf(1, (unsigned int)"AslEnvBuildBasic", v70, (unsigned int)"Out of memory");
LABEL_142:
  v29 = HeapHandle;
LABEL_146:
  v2 = P;
LABEL_70:
  if ( v5 )
    RtlFreeHeap(v29, 0, v5);
  if ( Src )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  if ( Handle )
    ZwClose(Handle);
  return v7;
}
