/*
 * XREFs of sub_140684450 @ 0x140684450
 * Callers:
 *     <none>
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     KeIsSingleGroupAffinityEx @ 0x140209C40 (KeIsSingleGroupAffinityEx.c)
 *     sub_140212034 @ 0x140212034 (sub_140212034.c)
 *     sub_140251894 @ 0x140251894 (sub_140251894.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetJobServerSilo @ 0x140377150 (PsGetJobServerSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405E009C @ 0x1405E009C (sub_1405E009C.c)
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     sub_140681870 @ 0x140681870 (sub_140681870.c)
 *     sub_140685304 @ 0x140685304 (sub_140685304.c)
 *     sub_14068578C @ 0x14068578C (sub_14068578C.c)
 *     sub_1406859D0 @ 0x1406859D0 (sub_1406859D0.c)
 *     sub_1406859F8 @ 0x1406859F8 (sub_1406859F8.c)
 *     sub_1406874F0 @ 0x1406874F0 (sub_1406874F0.c)
 *     sub_140687518 @ 0x140687518 (sub_140687518.c)
 *     sub_14068762C @ 0x14068762C (sub_14068762C.c)
 *     sub_140687654 @ 0x140687654 (sub_140687654.c)
 *     sub_14068A79C @ 0x14068A79C (sub_14068A79C.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFED4 @ 0x1406FFED4 (sub_1406FFED4.c)
 *     sub_1406FFEFC @ 0x1406FFEFC (sub_1406FFEFC.c)
 *     sub_140700158 @ 0x140700158 (sub_140700158.c)
 *     sub_1407001C8 @ 0x1407001C8 (sub_1407001C8.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     PsGetParentSilo @ 0x1407FC3C0 (PsGetParentSilo.c)
 *     sub_1409B0400 @ 0x1409B0400 (sub_1409B0400.c)
 *     sub_1409E2580 @ 0x1409E2580 (sub_1409E2580.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140A34854 @ 0x140A34854 (sub_140A34854.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140684450(ULONG_PTR a1, int a2, unsigned __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // rbx
  __int64 v7; // r13
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // r14d
  int v11; // r15d
  struct _KTHREAD *CurrentThread; // r9
  __int64 v13; // rcx
  __int64 result; // rax
  char *v15; // rbx
  bool *v16; // r12
  signed int v17; // esi
  unsigned int *v18; // r15
  void *v19; // r13
  bool v20; // zf
  int v21; // eax
  _DWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  _DWORD *v30; // rax
  int v31; // edx
  int *v32; // r8
  _BYTE *v33; // r9
  int v34; // ecx
  _BYTE *v35; // r9
  int v36; // r12d
  int *v37; // rsi
  __int64 v38; // r8
  __int64 v39; // rdx
  int v40; // eax
  _DWORD *v41; // rdx
  int v42; // edx
  _QWORD *v43; // rcx
  __int64 v44; // rax
  struct _KTHREAD *v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rdx
  _DWORD *v48; // r8
  _DWORD *v49; // rax
  __int64 v50; // r8
  _DWORD *v51; // rax
  _DWORD *v52; // r8
  int v53; // edx
  char *v54; // rcx
  int v55; // r13d
  int v56; // r13d
  int v57; // r13d
  int v58; // r13d
  __int64 v59; // rax
  __int64 v60; // rdx
  int v61; // edx
  __int64 v62; // rsi
  unsigned int v63; // r13d
  int v64; // r14d
  unsigned __int16 v65; // r8
  _QWORD *v66; // rdx
  unsigned __int16 v67; // cx
  int v68; // ecx
  int v69; // r8d
  unsigned int v70; // edx
  int v71; // ecx
  int v72; // eax
  unsigned int v73; // esi
  __int64 v74; // rax
  _OWORD *v75; // rcx
  int *v76; // rdx
  _OWORD *v77; // rcx
  _OWORD *v78; // rdx
  int v79; // r14d
  _BYTE *v80; // rcx
  _QWORD *v81; // r8
  unsigned __int16 v82; // dx
  unsigned int v83; // eax
  __int64 v84; // rcx
  int v85; // edx
  int v86; // eax
  __int64 ParentSilo; // rsi
  int v88; // r13d
  int v89; // r13d
  int v90; // r13d
  char v91; // al
  __int64 HostSilo; // rax
  const void **v93; // rax
  size_t v94; // r8
  __int64 v95; // rcx
  __int64 v96; // rax
  unsigned __int16 v97; // dx
  char v98; // [rsp+40h] [rbp-9C8h]
  int v100; // [rsp+58h] [rbp-9B0h] BYREF
  char v101; // [rsp+5Ch] [rbp-9ACh] BYREF
  bool v102; // [rsp+5Dh] [rbp-9ABh] BYREF
  bool v103; // [rsp+5Eh] [rbp-9AAh] BYREF
  char v104; // [rsp+5Fh] [rbp-9A9h]
  size_t v105; // [rsp+60h] [rbp-9A8h]
  struct _KTHREAD *v106; // [rsp+68h] [rbp-9A0h]
  int v107; // [rsp+70h] [rbp-998h] BYREF
  unsigned int v108; // [rsp+74h] [rbp-994h]
  PVOID Object; // [rsp+78h] [rbp-990h] BYREF
  __int64 v110; // [rsp+80h] [rbp-988h] BYREF
  size_t Size; // [rsp+88h] [rbp-980h]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp-978h]
  unsigned int *v113; // [rsp+98h] [rbp-970h] BYREF
  int v114; // [rsp+A0h] [rbp-968h] BYREF
  int v115; // [rsp+A4h] [rbp-964h] BYREF
  int v116; // [rsp+A8h] [rbp-960h] BYREF
  int v117; // [rsp+ACh] [rbp-95Ch] BYREF
  unsigned __int64 v118; // [rsp+B0h] [rbp-958h]
  int v119; // [rsp+B8h] [rbp-950h] BYREF
  __int64 v120; // [rsp+C0h] [rbp-948h] BYREF
  __int64 v121; // [rsp+C8h] [rbp-940h] BYREF
  __int64 v122; // [rsp+D0h] [rbp-938h] BYREF
  __int64 v123; // [rsp+D8h] [rbp-930h] BYREF
  __int64 v124; // [rsp+E0h] [rbp-928h] BYREF
  PVOID P; // [rsp+E8h] [rbp-920h]
  __int128 v126; // [rsp+F0h] [rbp-918h] BYREF
  __int128 v127; // [rsp+100h] [rbp-908h]
  _QWORD v128[14]; // [rsp+110h] [rbp-8F8h] BYREF
  __int128 v129; // [rsp+180h] [rbp-888h] BYREF
  __int128 v130; // [rsp+190h] [rbp-878h] BYREF
  __int128 v131; // [rsp+1A0h] [rbp-868h] BYREF
  _OWORD v132[5]; // [rsp+1B0h] [rbp-858h] BYREF
  __int128 v133; // [rsp+200h] [rbp-808h] BYREF
  __int128 v134; // [rsp+210h] [rbp-7F8h]
  __int128 v135; // [rsp+220h] [rbp-7E8h]
  __int128 v136; // [rsp+230h] [rbp-7D8h] BYREF
  __int128 v137; // [rsp+240h] [rbp-7C8h]
  __int128 v138; // [rsp+250h] [rbp-7B8h]
  __int64 v139; // [rsp+260h] [rbp-7A8h]
  _BYTE v140[40]; // [rsp+268h] [rbp-7A0h] BYREF
  __int128 v141; // [rsp+290h] [rbp-778h] BYREF
  __int128 v142; // [rsp+2A0h] [rbp-768h]
  int v143; // [rsp+2B0h] [rbp-758h]
  __int128 v144; // [rsp+2B8h] [rbp-750h] BYREF
  _QWORD v145[10]; // [rsp+2D0h] [rbp-738h] BYREF
  _QWORD v146[12]; // [rsp+320h] [rbp-6E8h] BYREF
  _QWORD v147[20]; // [rsp+380h] [rbp-688h] BYREF
  _BYTE v148[80]; // [rsp+420h] [rbp-5E8h] BYREF
  _OWORD v149[4]; // [rsp+470h] [rbp-598h] BYREF
  _WORD v150[136]; // [rsp+4B0h] [rbp-558h] BYREF
  _QWORD Src[56]; // [rsp+5C0h] [rbp-448h] BYREF
  _BYTE v152[512]; // [rsp+780h] [rbp-288h] BYREF
  _WORD v153[2]; // [rsp+980h] [rbp-88h] BYREF
  int v154; // [rsp+984h] [rbp-84h]
  __int64 v155; // [rsp+9A0h] [rbp-68h]

  v5 = a4;
  LODWORD(v105) = a4;
  v7 = a2;
  BugCheckParameter1 = a1;
  v118 = a3;
  v113 = a5;
  memset(Src, 0, sizeof(Src));
  memset(v150, 0, 0x108uLL);
  v102 = 0;
  v115 = 0;
  v121 = 0LL;
  v116 = 0;
  v141 = 0LL;
  v142 = 0LL;
  v143 = 0;
  v144 = 0LL;
  v120 = 0LL;
  v114 = 0;
  v123 = 0LL;
  memset(v147, 0, 0x98uLL);
  v131 = 0LL;
  LOWORD(v107) = 0;
  memset(v148, 0, 0x44uLL);
  Object = 0LL;
  v119 = 0;
  memset(v128, 0, 0x68uLL);
  memset(v145, 0, sizeof(v145));
  memset(v146, 0, 0x58uLL);
  memset(v140, 0, sizeof(v140));
  v129 = 0LL;
  memset(v132, 0, 0x48uLL);
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v139 = 0LL;
  v117 = 0;
  v124 = 0LL;
  v154 = 0;
  v122 = 0LL;
  memset(v149, 0, sizeof(v149));
  v130 = 0LL;
  v126 = 0LL;
  v127 = 0LL;
  v110 = 0LL;
  v101 = 0;
  v103 = 0;
  if ( (unsigned int)(v7 - 1) > 0x2E )
    return 3221225475LL;
  switch ( (_DWORD)v7 )
  {
    case 9:
      if ( (_DWORD)v5 == 144 || (_DWORD)v5 == 152 )
        goto LABEL_7;
      return 3221225476LL;
    case 0xC:
      if ( (_DWORD)v5 == 48 )
        goto LABEL_7;
      v20 = (_DWORD)v5 == 56;
LABEL_85:
      if ( v20 )
        goto LABEL_7;
      return 3221225476LL;
    case 0xD:
      if ( (_DWORD)v5 == 80 )
        goto LABEL_7;
      v20 = (_DWORD)v5 == 88;
      goto LABEL_85;
    case 0x13:
      if ( (_DWORD)v5 == 432 )
        goto LABEL_7;
      v20 = (_DWORD)v5 == 448;
      goto LABEL_85;
    case 0x14:
      if ( (_DWORD)v5 == 40 )
        goto LABEL_7;
      v20 = (_DWORD)v5 == 64;
      goto LABEL_85;
    case 0x1C:
      if ( (_DWORD)v5 == 16 )
        goto LABEL_7;
      v20 = (_DWORD)v5 == 40;
      goto LABEL_85;
    case 0x1E:
      if ( (_DWORD)v5 == 16 )
        goto LABEL_7;
      v20 = (_DWORD)v5 == 36;
      goto LABEL_85;
  }
  if ( (_DWORD)v7 != 43 )
  {
    v10 = dword_140A3AB3C[v7];
    v100 = v10;
    if ( (_DWORD)v5 == v10 )
      goto LABEL_8;
    if ( ((_DWORD)v7 == 3
       || (_DWORD)v7 == 5
       || (_DWORD)v7 == 11
       || (_DWORD)v7 == 14
       || (_DWORD)v7 == 31
       || (_DWORD)v7 == 37)
      && (unsigned int)v5 >= v10 )
    {
LABEL_7:
      v100 = v5;
      v10 = v5;
LABEL_8:
      v11 = 1;
      goto LABEL_9;
    }
    return 3221225476LL;
  }
  if ( (_DWORD)v5 != 1 )
    return 3221225476LL;
  v11 = 1;
  v10 = 1;
  v100 = 1;
LABEL_9:
  LODWORD(Size) = v10;
  CurrentThread = KeGetCurrentThread();
  v106 = CurrentThread;
  v104 = *((_BYTE *)CurrentThread + 562);
  if ( v104 )
  {
    if ( (_DWORD)v5 )
    {
      if ( ((dword_140A3AA7C[v7] - 1) & (unsigned int)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = a3 + v5;
      v13 = 0x7FFFFFFF0000LL;
      if ( a3 + v5 > 0x7FFFFFFF0000LL || v8 < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v13 = 0x7FFFFFFF0000LL;
    }
    if ( a5 )
    {
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a5;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
  }
  if ( BugCheckParameter1 )
  {
    result = sub_140732D40(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v15 = (char *)Object;
    goto LABEL_24;
  }
  v54 = *(char **)(*((_QWORD *)CurrentThread + 23) + 1296LL);
  Object = v54;
  v15 = v54;
  if ( v54 )
  {
    ObfReferenceObjectWithTag(v54, 0x79517350u);
LABEL_24:
    CurrentThread = v106;
    goto LABEL_25;
  }
  if ( (((_DWORD)v7 - 31) & 0xFFFFFFF7) != 0 )
    return 3221225506LL;
LABEL_25:
  v108 = v10;
  v98 = 0;
  v16 = 0LL;
  v17 = 0;
  if ( (int)v7 > 20 )
  {
    if ( (int)v7 > 36 )
    {
      v55 = v7 - 37;
      if ( v55 )
      {
        v56 = v55 - 1;
        if ( v56 )
        {
          v57 = v56 - 1;
          if ( !v57 )
          {
            if ( v15 )
            {
              PsGetJobServerSilo((__int64)v15, &v110);
              HostSilo = v110;
            }
            else
            {
              HostSilo = PsGetHostSilo();
            }
            v93 = (const void **)sub_140204738(HostSilo);
            v19 = (void *)a3;
            memmove((void *)a3, v93[165], v94);
            v98 = 1;
            v18 = a5;
            goto LABEL_39;
          }
          v58 = v57 - 3;
          if ( !v58 )
          {
            memset(v148, 0, 0x48uLL);
            sub_1406FFEFC(v15, v106);
            v17 = sub_140681870((__int64)v15, (__int64)v148);
            sub_1406FFE90(v15, v106);
            v16 = v148;
            goto LABEL_37;
          }
          v88 = v58 - 1;
          if ( !v88 )
          {
            v17 = 0;
            v91 = v101;
            if ( (unsigned __int64)(*((_QWORD *)v15 + 219) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
              v91 = 1;
            v101 = v91;
            v16 = (bool *)&v101;
            goto LABEL_37;
          }
          v89 = v88 - 1;
          if ( !v89 )
          {
            v144 = *(_OWORD *)(v15 + 1448);
            v16 = (bool *)&v144;
            goto LABEL_36;
          }
          v90 = v89 - 2;
          if ( !v90 )
          {
            sub_1406FFEFC(v15, CurrentThread);
            v123 = *((_QWORD *)v15 + 221);
            sub_1406FFE90(v15, v106);
            v16 = (bool *)&v123;
            goto LABEL_36;
          }
          if ( v90 == 1 )
          {
            v103 = (*((_DWORD *)v15 + 379) & 2) != 0;
            v16 = &v103;
            goto LABEL_36;
          }
          goto LABEL_215;
        }
        PsGetJobServerSilo((__int64)v15, &v110);
        v62 = v110;
        if ( !PsIsHostSilo(v110) )
        {
          v95 = *(_QWORD *)(v62 + 1464);
          *(_QWORD *)((char *)&v126 + 4) = *(_QWORD *)(v95 + 1304);
          BYTE12(v126) = *(_BYTE *)(v95 + 1368);
          if ( v104 )
          {
            v127 = 0LL;
          }
          else
          {
            v110 = 0LL;
            sub_140251894(&v110, &v113);
            *(_QWORD *)&v127 = *((_QWORD *)sub_140204738(v62) + 130);
            *((_QWORD *)&v127 + 1) = *(_QWORD *)v110;
          }
          LODWORD(v126) = PsGetServerSiloServiceSessionId(v62);
          v17 = 0;
          v16 = (bool *)&v126;
          goto LABEL_37;
        }
      }
      else
      {
        v96 = sub_140212034((__int64)v15);
        if ( v96 )
        {
          P = 0LL;
          v17 = sub_140A34854(v96, &v124);
          if ( v17 >= 0 )
          {
            v98 = 1;
            v97 = v124;
            v10 = (unsigned __int16)v124 + 16;
            v100 = v10;
            if ( v10 > (unsigned int)v105 )
            {
              v17 = -1073741789;
              v19 = (void *)a3;
              v18 = a5;
            }
            else
            {
              v19 = (void *)a3;
              *(_WORD *)a3 = v124;
              *(_WORD *)(a3 + 2) = v97;
              *(_QWORD *)(a3 + 8) = a3 + 16;
              memmove((void *)(a3 + 16), P, v97);
              v18 = a5;
              if ( a5 )
                *a5 = v10;
            }
            ExFreePoolWithTag(P, 0);
            goto LABEL_39;
          }
          goto LABEL_37;
        }
      }
    }
    else
    {
      if ( (_DWORD)v7 != 36 )
      {
        if ( (_DWORD)v7 == 21 )
        {
          v102 = (*((_DWORD *)v15 + 378) & 0x400) != 0;
          v16 = &v102;
          goto LABEL_36;
        }
        if ( (_DWORD)v7 != 26 )
        {
          switch ( (_DWORD)v7 )
          {
            case 0x1C:
              *(_OWORD *)&v140[24] = 0LL;
              sub_1407001C8(v15, CurrentThread);
              *(_QWORD *)&v140[8] = *((_QWORD *)v15 + 88) << 12;
              *(_QWORD *)v140 = *((_QWORD *)v15 + 146) << 12;
              *(_QWORD *)&v140[16] = *((_QWORD *)v15 + 191) << 12;
              v15 = (char *)Object;
              sub_140700158(Object, v106);
              v16 = v140;
              goto LABEL_36;
            case 0x1D:
              v122 = *((_QWORD *)v15 + 191);
              v16 = (bool *)&v122;
              v17 = 0;
              v15 = (char *)Object;
              goto LABEL_37;
            case 0x1E:
              v141 = *(_OWORD *)(v15 + 1432);
              if ( (_DWORD)v105 == 36 )
              {
                v142 = *(_OWORD *)(v15 + 1448);
                v143 = *((_DWORD *)v15 + 357);
              }
              v16 = (bool *)&v141;
              goto LABEL_36;
            case 0x1F:
              v17 = -1073741822;
              goto LABEL_37;
            case 0x20:
              sub_1406FFEFC(v15, CurrentThread);
              v84 = *((_QWORD *)v15 + 188);
              if ( v84 )
              {
                DWORD2(v129) = 1;
                v85 = *(_DWORD *)(v84 + 48);
                if ( (v85 & 1) != 0 )
                {
                  v11 = 3;
                  DWORD2(v129) = 3;
                  *(_QWORD *)&v129 = *(_QWORD *)(v84 + 40);
                }
                if ( (v85 & 2) != 0 )
                {
                  DWORD2(v129) = v11 | 4;
                  BYTE12(v129) = *(_BYTE *)(v84 + 64);
                }
              }
              sub_1406FFE90(v15, v106);
              v16 = (bool *)&v129;
              goto LABEL_36;
            case 0x21:
              goto LABEL_118;
            case 0x22:
              goto LABEL_87;
          }
          goto LABEL_215;
        }
        v19 = (void *)a3;
        v17 = sub_1409B0400(v15);
        if ( v17 < 0 )
        {
          v86 = 0;
        }
        else
        {
          v98 = 1;
          v86 = 8;
        }
        v108 = v86;
LABEL_80:
        v18 = a5;
        goto LABEL_39;
      }
      if ( (*((_DWORD *)v15 + 378) & 0x40000000) != 0 )
      {
        LODWORD(v130) = *((_DWORD *)v15 + 357);
        ParentSilo = PsGetParentSilo(v15, v8, v9, CurrentThread);
        if ( PsIsHostSilo(ParentSilo) )
          DWORD1(v130) = 0;
        else
          DWORD1(v130) = *(_DWORD *)(ParentSilo + 1428);
        DWORD2(v130) = *((_DWORD *)v15 + 354);
        BYTE12(v130) = sub_1405E009C((__int64)v15);
        v16 = (bool *)&v130;
        goto LABEL_36;
      }
    }
    v17 = -1073740535;
    goto LABEL_37;
  }
  if ( (_DWORD)v7 == 20 )
  {
    v17 = sub_140678C4C((__int64)CurrentThread, (__int64)v15, v149);
    v19 = (void *)a3;
    v18 = a5;
    if ( v17 >= 0 )
    {
      v16 = (bool *)v149;
      v17 = 0;
    }
    goto LABEL_39;
  }
  if ( (int)v7 > 11 )
  {
    if ( (_DWORD)v7 != 12 )
    {
      if ( (_DWORD)v7 != 13 )
      {
        if ( (_DWORD)v7 != 14 )
        {
          switch ( (_DWORD)v7 )
          {
            case 0xF:
              sub_1406FFEFC(v15, CurrentThread);
              v59 = *((_QWORD *)v15 + 150);
              if ( v59 )
              {
                v69 = *(_DWORD *)(v59 + 40);
                if ( (v69 & 0x40) == 0 )
                {
                  HIDWORD(v120) = *(_DWORD *)(v59 + 44);
                  v70 = ((v69 & 4 | 2u) >> 1) | 4;
                  if ( (v69 & 1) == 0 )
                    v70 = (v69 & 4 | 2u) >> 1;
                  v71 = v70 | 8;
                  if ( (v69 & 2) == 0 )
                    v71 = v70;
                  v72 = v71 | 0x10;
                  if ( (v69 & 0x20) == 0 )
                    v72 = v71;
                  LODWORD(v120) = v72;
                }
              }
              sub_1406FFE90(v15, v106);
              v16 = (bool *)&v120;
              goto LABEL_36;
            case 0x10:
              v116 = *((_DWORD *)v15 + 267);
              v16 = (bool *)&v116;
              goto LABEL_36;
            case 0x11:
              v121 = *((_QWORD *)v15 + 71);
              v16 = (bool *)&v121;
              goto LABEL_36;
            case 0x12:
              LODWORD(v131) = 7;
              WORD3(v131) = 0;
              sub_1406FFEFC(v15, CurrentThread);
              v68 = *((_DWORD *)v15 + 378);
              BYTE4(v131) = (v68 & 0x200) != 0;
              BYTE5(v131) = (v68 & 0x80000) != 0;
              *((_QWORD *)&v131 + 1) = *((_QWORD *)v15 + 143);
              sub_1406FFE90(v15, v106);
              v16 = (bool *)&v131;
              goto LABEL_36;
          }
          goto LABEL_35;
        }
        if ( a5 )
        {
          v73 = v105;
          if ( (v105 & 0xF) == 0 )
          {
            sub_1406FFEFC(v15, CurrentThread);
            v74 = 2LL;
            if ( (*((_DWORD *)v15 + 64) & 0x10) != 0 )
            {
              v77 = v15 + 264;
              v78 = v150;
              do
              {
                *v78 = *v77;
                v78[1] = v77[1];
                v78[2] = v77[2];
                v78[3] = v77[3];
                v78[4] = v77[4];
                v78[5] = v77[5];
                v78[6] = v77[6];
                v78 += 8;
                *(v78 - 1) = v77[7];
                v77 += 8;
                --v74;
              }
              while ( v74 );
              *(_QWORD *)v78 = *(_QWORD *)v77;
            }
            else
            {
              v75 = v150;
              v76 = dword_140D06E40;
              do
              {
                *v75 = *(_OWORD *)v76;
                v75[1] = *((_OWORD *)v76 + 1);
                v75[2] = *((_OWORD *)v76 + 2);
                v75[3] = *((_OWORD *)v76 + 3);
                v75[4] = *((_OWORD *)v76 + 4);
                v75[5] = *((_OWORD *)v76 + 5);
                v75[6] = *((_OWORD *)v76 + 6);
                v75 += 8;
                *(v75 - 1) = *((_OWORD *)v76 + 7);
                v76 += 32;
                --v74;
              }
              while ( v74 );
              *(_QWORD *)v75 = *(_QWORD *)v76;
            }
            sub_1406FFE90(v15, v106);
            v79 = v150[0];
            memset(v152, 0, 16LL * v150[0]);
            if ( (_WORD)v79 )
            {
              v80 = v152;
              v81 = &v150[4];
              v82 = v107;
              do
              {
                *((_WORD *)v80 + 4) = v82;
                *(_QWORD *)v80 = *v81;
                ++v82;
                ++v81;
                v80 += 16;
              }
              while ( v82 < (unsigned __int16)v79 );
            }
            v83 = 16 * v79;
            v108 = v83;
            v10 = 16 * v79;
            if ( v73 < v83 )
              v10 = v73;
            v100 = v10;
            v17 = v73 < v83 ? 0xC0000023 : 0;
            v98 = 1;
            v19 = (void *)a3;
            memmove((void *)a3, v152, v10);
            v18 = a5;
            goto LABEL_39;
          }
        }
LABEL_186:
        v17 = -1073741811;
        goto LABEL_37;
      }
LABEL_87:
      v128[9] = 0LL;
      *(_OWORD *)&v128[11] = 0LL;
      LOWORD(v100) = 0;
      BYTE2(v100) = 0;
      sub_140685304(v15);
      v128[1] = Src[9];
      v128[3] = Src[10];
      v128[5] = Src[0];
      sub_1406FFED4(v15, v106);
      v21 = *((_DWORD *)v15 + 378);
      if ( (v21 & 8) == 0 || (v21 & 0x4000) == 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)v15 + 378, 0xFFFFFFFB);
        v15 = (char *)Object;
      }
      ExAcquirePushLockSharedEx((ULONG_PTR)(v15 + 1224), 0LL);
      v128[7] = *((_QWORD *)v15 + 146) << 12;
      sub_140700158(v15, 0LL);
      v22 = (_DWORD *)*((_QWORD *)v15 + 147);
      if ( v22 )
      {
        LODWORD(v128[0]) = *v22;
        HIDWORD(v128[0]) = *(_DWORD *)(*((_QWORD *)v15 + 147) + 4LL);
        v23 = (_QWORD *)*((_QWORD *)v15 + 147);
        v24 = v23[9];
        if ( !v24 )
          v24 = v23[1];
        v128[2] = v24;
        v25 = v23[10];
        if ( !v25 )
          v25 = v23[2];
        v128[4] = v25;
        v26 = v23[11];
        if ( !v26 )
          v26 = v23[3];
        v128[6] = v26;
        v27 = v23[12];
        if ( !v27 )
          v27 = v23[4];
        v128[10] = v27 << 12;
        v28 = v23[13];
        if ( !v28 )
          v28 = v23[5];
        v128[8] = v28 << 12;
        v29 = 0LL;
        do
        {
          v30 = (_DWORD *)sub_1406859D0(v128, v29);
          v34 = v32[16];
          if ( v34 )
            *v33 = 1;
          else
            v34 = *v32;
          *v30 = v34;
          v29 = (unsigned int)(v31 + 1);
          v35 = v33 + 1;
        }
        while ( (int)v29 < 3 );
      }
      else
      {
        v128[0] = 0LL;
        v128[2] = 0LL;
        v128[4] = 0LL;
        v128[6] = 0LL;
        v128[10] = 0LL;
        v128[8] = 0LL;
        v60 = 0LL;
        do
        {
          *(_DWORD *)sub_1406859D0(v128, v60) = 0;
          v60 = (unsigned int)(v61 + 1);
        }
        while ( (int)v60 < 3 );
      }
      v36 = 0;
      v37 = &v100;
      v38 = 60LL;
      v110 = 60LL;
      do
      {
        v39 = *((_QWORD *)v15 + 147);
        if ( v39 && (v40 = sub_1406859F8((unsigned int)v36, v39, v38, v35), (v40 & *v41) != 0) )
          v42 = *(_DWORD *)((char *)v41 + v38);
        else
          v42 = 1;
        v107 = v42;
        LOBYTE(v38) = *(_BYTE *)v37;
        sub_14068578C((_DWORD)v15, v42, v38, (unsigned int)&v117, v36);
        if ( v36 )
        {
          if ( v36 == 1 )
            v43 = &v128[11];
          else
            v43 = &v128[9];
        }
        else
        {
          v43 = &v128[12];
        }
        *(_DWORD *)v43 = v117;
        ++v36;
        v38 = v110 + 4;
        v110 += 4LL;
        v37 = (int *)((char *)v37 + 1);
      }
      while ( v36 < 3 );
      v44 = *((_QWORD *)v15 + 147);
      v45 = v106;
      if ( v44 )
      {
        *(_DWORD *)(v44 + 4) = 0;
        memset((void *)(*((_QWORD *)v15 + 147) + 72LL), 0, 0x40uLL);
      }
      sub_1406FFE90(v15, v45);
      if ( (_DWORD)v105 == 88 )
      {
        v146[1] = v128[1];
        v146[2] = v128[2];
        v146[3] = v128[3];
        v146[4] = v128[4];
        v146[5] = v128[5];
        v146[6] = v128[6];
        v146[7] = v128[7];
        v146[8] = v128[10];
        v146[9] = v128[8];
        v146[10] = v128[9];
        v146[0] = v128[0] & 0x27820400278204LL;
        v16 = (bool *)v146;
      }
      else if ( (_DWORD)v105 == 80 )
      {
        v145[1] = v128[1];
        v145[2] = v128[2];
        v145[3] = v128[3];
        v145[4] = v128[4];
        v145[5] = v128[5];
        v145[6] = v128[6];
        v145[7] = v128[7];
        v145[8] = v128[8];
        v145[9] = v128[9];
        v145[0] = v128[0] & 0x7020400070204LL;
        v16 = (bool *)v145;
      }
      else
      {
        v16 = (bool *)v128;
      }
      v17 = 0;
      if ( (xmmword_140D06900 & 0x80000) != 0 )
        sub_1409E2580((_DWORD)v15, v7, (unsigned int)v128, (unsigned int)&v107, 0, 1830);
      goto LABEL_37;
    }
LABEL_118:
    sub_1406FFEFC(v15, CurrentThread);
    v46 = *((_QWORD *)v15 + 147);
    if ( v46 )
    {
      DWORD2(v132[2]) = *(_DWORD *)v46;
      v132[0] = *(_OWORD *)(v46 + 8);
      *(_QWORD *)&v132[1] = *(_QWORD *)(v46 + 24);
      *(_QWORD *)&v132[3] = *(_QWORD *)(v46 + 32) << 12;
      *((_QWORD *)&v132[1] + 1) = *(_QWORD *)(v46 + 40) << 12;
      v47 = 0LL;
      v48 = (_DWORD *)(v46 + 60);
      do
      {
        v49 = (_DWORD *)sub_140687518(v132, v47, v48);
        *v49 = *(_DWORD *)(v50 - 12);
        v51 = (_DWORD *)sub_1406874F0(v132);
        *v51 = *v52;
        v47 = (unsigned int)(v53 + 1);
        v48 = v52 + 1;
      }
      while ( (int)v47 < 3 );
    }
    sub_1406FFE90(v15, v106);
    if ( (_DWORD)v105 == 56 )
    {
      v136 = v132[0];
      *(_QWORD *)&v137 = *(_QWORD *)&v132[1];
      *((_QWORD *)&v137 + 1) = *(_QWORD *)&v132[3];
      v138 = *(_OWORD *)((char *)&v132[1] + 8);
      v139 = DWORD2(v132[2]) & 0x278204LL;
      v16 = (bool *)&v136;
    }
    else if ( (_DWORD)v105 == 48 )
    {
      v133 = v132[0];
      v134 = v132[1];
      *(_QWORD *)&v135 = *(_QWORD *)&v132[2];
      *((_QWORD *)&v135 + 1) = DWORD2(v132[2]) & 0x70204LL;
      v16 = (bool *)&v133;
    }
    else
    {
      v16 = (bool *)v132;
    }
    goto LABEL_36;
  }
  switch ( (_DWORD)v7 )
  {
    case 0xB:
      if ( a5 )
      {
        v63 = v105;
        if ( (v105 & 1) == 0 )
        {
          sub_1406FFEFC(v15, CurrentThread);
          v64 = 0;
          v65 = *((_WORD *)v15 + 132);
          if ( v65 )
          {
            v66 = v15 + 272;
            v67 = v107;
            do
            {
              if ( *v66 )
                v153[v64++] = v67;
              ++v67;
              ++v66;
            }
            while ( v67 < v65 );
          }
          sub_1406FFE90(v15, v106);
          v10 = 2 * v64;
          v108 = v10;
          v98 = 1;
          v17 = v63 < v10 ? 0xC0000023 : 0;
          if ( v10 > v63 )
            v10 = Size;
          LODWORD(Size) = v10;
          v19 = (void *)a3;
          memmove((void *)a3, v153, v10);
          v18 = a5;
          goto LABEL_39;
        }
      }
      goto LABEL_186;
    case 1:
      goto LABEL_35;
    case 2:
LABEL_63:
      sub_1406FFEFC(v15, CurrentThread);
      v147[3] = *((_QWORD *)v15 + 30);
      v147[4] = *((_QWORD *)v15 + 31);
      LODWORD(v147[5]) = *((_DWORD *)v15 + 65);
      LODWORD(v147[7]) = (unsigned __int8)v15[1065];
      HIDWORD(v147[7]) = *((_DWORD *)v15 + 145);
      if ( KeIsSingleGroupAffinityEx((unsigned __int16 *)v15 + 132, (unsigned __int16 *)&v107) )
        v147[6] = *(_QWORD *)&v15[8 * (unsigned __int16)v107 + 272];
      else
        v147[6] = 0LL;
      v147[0] = *((_QWORD *)v15 + 28);
      v147[1] = *((_QWORD *)v15 + 29);
      LODWORD(v147[2]) = (sub_14068762C((unsigned int)v7, (unsigned int)v105) | 0x7FFF) & *((_DWORD *)v15 + 64);
      if ( (_DWORD)v7 == 9 )
      {
        ExAcquirePushLockSharedEx((ULONG_PTR)(v15 + 1224), 0LL);
        v147[14] = *((_QWORD *)v15 + 84) << 12;
        v147[15] = *((_QWORD *)v15 + 85) << 12;
        v147[17] = *((_QWORD *)v15 + 88) << 12;
        v147[18] = *((_QWORD *)v15 + 86) << 12;
        sub_140700158(v15, 0LL);
        sub_1406FFE90(v15, v106);
        v147[16] = *((_QWORD *)v15 + 87) << 12;
      }
      else
      {
        sub_1406FFE90(v15, v106);
      }
      v17 = 0;
      v16 = (bool *)v147;
      goto LABEL_37;
    case 3:
      v108 = 0;
      v19 = (void *)a3;
      v17 = sub_140687654(v15);
      v98 = 1;
      goto LABEL_80;
    case 4:
      sub_1406FFEFC(v15, CurrentThread);
      v115 = *((_DWORD *)v15 + 136);
      sub_1406FFE90(v15, v106);
      v16 = (bool *)&v115;
      goto LABEL_36;
    case 5:
      v155 = 0LL;
      v98 = 1;
      *(_OWORD *)a3 = 0LL;
      *(_OWORD *)(a3 + 16) = 0LL;
      *(_QWORD *)(a3 + 32) = v155;
      v18 = a5;
      goto LABEL_38;
    case 6:
      v114 = *((_DWORD *)v15 + 137);
      v16 = (bool *)&v114;
      goto LABEL_36;
  }
  if ( (_DWORD)v7 != 8 )
  {
    if ( (_DWORD)v7 == 9 )
      goto LABEL_63;
    if ( (_DWORD)v7 == 10 )
    {
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140D3B148, 0LL);
      sub_14068A79C(v106);
      v16 = (bool *)&v119;
      goto LABEL_36;
    }
LABEL_215:
    v17 = -1073741821;
    goto LABEL_37;
  }
LABEL_35:
  sub_140685304(v15);
  v16 = (bool *)Src;
LABEL_36:
  v17 = 0;
LABEL_37:
  v18 = a5;
LABEL_38:
  v19 = (void *)a3;
LABEL_39:
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x79517350u);
  if ( v17 >= 0 && !v98 )
    memmove(v19, v16, v10);
  if ( v18 )
    *v18 = v108;
  return (unsigned int)v17;
}
