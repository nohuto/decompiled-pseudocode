/*
 * XREFs of ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C00300D0
 * Callers:
 *     ?GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C002F6C0 (-GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@II.c)
 * Callees:
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00058C8 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001EF80 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngCopyBits @ 0x1C0030980 (EngCopyBits.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0099AE4 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FE930 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x1C02D8F4C (-vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02D8FAC (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x1C02D9090 (-vInit256Default@XEPALOBJ@@QEAAXXZ.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C02D9100 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z @ 0x1C02DC87C (-bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z.c)
 *     EncodeRLE8 @ 0x1C02EEF60 (EncodeRLE8.c)
 *     EncodeRLE4 @ 0x1C02F0E8C (EncodeRLE4.c)
 */

__int64 __fastcall GreGetDIBitsInternalWorker(
        unsigned int a1,
        DC **a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        __int64 *a10,
        __int64 a11,
        int a12,
        unsigned int a13,
        unsigned int a14)
{
  __int64 v15; // rbx
  int v16; // r14d
  __int64 v17; // r12
  SURFOBJ *v18; // r15
  __int64 v19; // r9
  int v20; // r13d
  __int64 v21; // rsi
  unsigned int v22; // r10d
  unsigned int v23; // r9d
  int v24; // edi
  int v25; // r11d
  int v26; // edx
  bool v27; // zf
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // eax
  int v31; // eax
  unsigned int v32; // r14d
  int v33; // edx
  unsigned __int64 v34; // rcx
  unsigned int v35; // r8d
  __int64 v36; // rbx
  int v37; // eax
  struct tagRGBTRIPLE *v38; // rax
  __int64 v39; // r14
  DC *v40; // rax
  unsigned int v41; // r8d
  __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // edx
  __int64 v45; // rax
  struct tagRGBTRIPLE *XlateObject; // rdi
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  LONG v51; // esi
  int v52; // ebx
  int v53; // r14d
  int v54; // esi
  LONG v55; // r10d
  LONG v56; // r9d
  LONG v57; // edx
  LONG v58; // ecx
  unsigned int v59; // ebx
  LONG v60; // r14d
  unsigned __int64 v61; // r8
  LONG v62; // r11d
  LONG v63; // eax
  SURFOBJ *v64; // rdx
  unsigned int v65; // ebx
  Gre::Base *v66; // rcx
  int v67; // eax
  int v68; // eax
  int v69; // ecx
  int v70; // eax
  int v71; // ebx
  __int64 v72; // rdx
  __int64 v73; // rdi
  struct tagRGBTRIPLE *v74; // r12
  int *v75; // rax
  unsigned int v76; // eax
  int IsCMYKColor; // eax
  _QWORD *v78; // rdi
  struct tagRGBTRIPLE *v79; // r10
  struct tagRGBTRIPLE *v80; // rdi
  __int64 i; // rcx
  unsigned int v82; // edi
  _QWORD *v83; // r12
  unsigned __int16 v84; // dx
  unsigned __int16 v85; // r8
  unsigned int v86; // eax
  struct tagRGBTRIPLE *v87; // r9
  struct tagRGBTRIPLE *v88; // rcx
  __int64 v89; // r8
  unsigned int v90; // ecx
  unsigned int v91; // eax
  struct tagRGBTRIPLE *v92; // r9
  struct tagRGBTRIPLE *v93; // rcx
  struct tagRGBTRIPLE *v94; // rdx
  struct tagRGBTRIPLE *v95; // rax
  unsigned int v96; // eax
  int v97; // eax
  bool v98; // [rsp+60h] [rbp-138h]
  unsigned int v99; // [rsp+64h] [rbp-134h]
  int v100; // [rsp+64h] [rbp-134h]
  struct tagRGBTRIPLE *v101; // [rsp+68h] [rbp-130h] BYREF
  unsigned int v102; // [rsp+70h] [rbp-128h]
  int v103; // [rsp+74h] [rbp-124h]
  int v104; // [rsp+78h] [rbp-120h]
  int v105; // [rsp+7Ch] [rbp-11Ch]
  __int64 v106; // [rsp+80h] [rbp-118h] BYREF
  int v107; // [rsp+88h] [rbp-110h]
  unsigned int v108; // [rsp+8Ch] [rbp-10Ch]
  unsigned int v109; // [rsp+90h] [rbp-108h]
  int v110; // [rsp+98h] [rbp-100h]
  unsigned int v111; // [rsp+A0h] [rbp-F8h]
  __int64 v112; // [rsp+A8h] [rbp-F0h] BYREF
  _QWORD *v113; // [rsp+B0h] [rbp-E8h]
  __int64 v114; // [rsp+B8h] [rbp-E0h] BYREF
  int v115; // [rsp+C0h] [rbp-D8h]
  int v116; // [rsp+C8h] [rbp-D0h]
  void **v117; // [rsp+D0h] [rbp-C8h] BYREF
  char v118; // [rsp+D8h] [rbp-C0h]
  int v119; // [rsp+DCh] [rbp-BCh]
  int v120; // [rsp+E0h] [rbp-B8h] BYREF
  LONG v121; // [rsp+E4h] [rbp-B4h]
  LONG v122; // [rsp+E8h] [rbp-B0h]
  int v123; // [rsp+ECh] [rbp-ACh]
  __int64 v124; // [rsp+F0h] [rbp-A8h]
  __int64 v125; // [rsp+F8h] [rbp-A0h]
  __int64 *v126; // [rsp+100h] [rbp-98h]
  unsigned int v127; // [rsp+108h] [rbp-90h]
  int v128; // [rsp+10Ch] [rbp-8Ch]
  DC **v129; // [rsp+110h] [rbp-88h]
  unsigned __int64 *v130; // [rsp+118h] [rbp-80h]
  __int64 v131; // [rsp+120h] [rbp-78h] BYREF
  __int64 v132; // [rsp+128h] [rbp-70h]
  __int64 v133; // [rsp+130h] [rbp-68h]
  POINTL pptlSrc; // [rsp+138h] [rbp-60h] BYREF
  __int64 v135; // [rsp+140h] [rbp-58h]
  RECTL prclDest; // [rsp+148h] [rbp-50h] BYREF

  v132 = a3;
  v129 = a2;
  v15 = a1;
  v113 = a5;
  v16 = a8;
  v116 = a8;
  v110 = a8;
  v102 = a9;
  v111 = a9;
  v126 = a10;
  v17 = a11;
  v133 = a11;
  v135 = a11;
  v18 = 0LL;
  v131 = 0LL;
  v19 = *((_QWORD *)*a2 + 6);
  v130 = (unsigned __int64 *)(a4 + 32);
  v20 = 1;
  if ( !(unsigned int)bIsCompatible(&v131, *(_QWORD *)(*(_QWORD *)(a4 + 32) + 128LL), *(_QWORD *)(a4 + 32), v19, 1) )
    return 0LL;
  v21 = v131;
  v120 = 0;
  v123 = 0;
  v125 = 0LL;
  if ( (_DWORD)v15 == 12 )
  {
    v107 = 1;
    v101 = (struct tagRGBTRIPLE *)(a11 + 12);
    v76 = *(unsigned __int16 *)(a11 + 4);
    v108 = v76;
    v26 = *(unsigned __int16 *)(a11 + 6);
    v104 = v26;
    *(_WORD *)(a11 + 8) = 1;
    v23 = *(unsigned __int16 *)(a11 + 10);
    v99 = v23;
    v28 = ((v76 * v23 + 31) >> 3) & 0x1FFFFFFC;
    v24 = 0;
    v103 = 0;
    v105 = 0;
    if ( v76 && v26 )
    {
      v22 = a14;
      goto LABEL_16;
    }
    goto LABEL_244;
  }
  v22 = a14;
  if ( a14 < 0x28 )
    return 0LL;
  v101 = (struct tagRGBTRIPLE *)(a11 + 40);
  if ( (unsigned int)v15 > 0x28 )
  {
    memset_0((void *)(a11 + 40), 0, v15 - 40);
    v22 = a14;
  }
  v107 = 0;
  *(_DWORD *)a11 = 40;
  *(_WORD *)(a11 + 12) = 1;
  v23 = *(unsigned __int16 *)(a11 + 14);
  v99 = v23;
  v24 = *(_DWORD *)(a11 + 16);
  v103 = v24;
  v105 = v24;
  v25 = *(_DWORD *)(a11 + 4);
  v108 = v25;
  if ( v25 <= 0 )
    goto LABEL_244;
  v26 = *(_DWORD *)(a11 + 8);
  if ( !v26 )
    goto LABEL_244;
  if ( v26 >= 0 )
    goto LABEL_9;
  LODWORD(v125) = 1;
  if ( v24 )
  {
    if ( v24 != 3 )
    {
LABEL_244:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  v26 = -v26;
LABEL_9:
  v104 = v26;
  switch ( v24 )
  {
    case 3:
      v27 = ((v23 - 16) & 0xFFFFFFEF) == 0;
      goto LABEL_11;
    case 1:
      v27 = v23 == 8;
LABEL_11:
      if ( v27 )
        break;
      goto LABEL_92;
    case 2:
      if ( v23 != 4 )
        goto LABEL_92;
      break;
    case 10:
      IsCMYKColor = DC::bIsCMYKColor(*v129);
      v26 = v104;
      if ( IsCMYKColor )
      {
        v24 = 10;
        *(_DWORD *)(a11 + 16) = 10;
        goto LABEL_93;
      }
      break;
    default:
LABEL_92:
      v24 = 0;
      *(_DWORD *)(a11 + 16) = 0;
LABEL_93:
      v103 = v24;
      v105 = v24;
      break;
  }
  v28 = ((v25 * v23 + 31) >> 3) & 0x1FFFFFFC;
  if ( !v24 || v24 == 3 )
    *(_DWORD *)(a11 + 20) = v26 * v28;
  *(_QWORD *)(a11 + 32) = 0LL;
LABEL_16:
  v98 = (unsigned int)(v24 - 1) <= 1;
  if ( v26 < a8 )
  {
    v16 = v26;
    v116 = v26;
    v110 = v26;
  }
  v128 = v16;
  v29 = v26 - v16;
  v30 = v102;
  if ( v29 < v102 )
  {
    v30 = v29;
    v102 = v29;
    v111 = v29;
  }
  v127 = v30;
  if ( (unsigned int)(v24 - 1) > 1 && a13 < v28 * v30 )
    return 0LL;
  v124 = 0LL;
  if ( v22 < 0x34 && v24 == 3 )
    return 0LL;
  if ( v23 <= 8 )
  {
    switch ( v23 )
    {
      case 1u:
        v33 = 1;
        v32 = 2;
        v31 = a12;
        goto LABEL_28;
      case 4u:
        v33 = 2;
        v32 = 16;
        v31 = a12;
        goto LABEL_28;
      case 8u:
        v33 = 3;
        v32 = 256;
        v31 = a12;
        goto LABEL_28;
    }
  }
  v31 = a12;
  if ( a12 == 1 )
    v31 = 0;
  v32 = 0;
  if ( v23 == 32 )
  {
    v33 = 6;
    goto LABEL_28;
  }
  if ( v23 != 16 )
  {
    if ( v23 == 24 )
    {
      v33 = 5;
      goto LABEL_28;
    }
    return 0LL;
  }
  v33 = 4;
LABEL_28:
  v120 = v33;
  v115 = 0;
  v114 = 0LL;
  if ( v31 == 1 )
  {
    if ( v22 < v15 + 2 * (unsigned __int64)v32 )
    {
      EngSetLastError(0x57u);
LABEL_144:
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v114);
      return 0LL;
    }
    v112 = *((_QWORD *)Gre::Base::Globals((Gre::Base *)v32) + 5);
    GreAcquireSemaphore(v112);
    v78 = v113;
    if ( !v21 && v120 == 3 && *(_QWORD *)(*v113 + 72LL) )
    {
      v36 = 0LL;
      v106 = 0LL;
      v79 = v101;
      v80 = v101;
      for ( i = 256LL; i; --i )
      {
        *(_WORD *)&v80->rgbtBlue = 0;
        v80 = (struct tagRGBTRIPLE *)((char *)v80 + 2);
      }
      v82 = 0;
      v83 = v113;
      do
      {
        v84 = 0;
        v85 = *(_WORD *)(*v83 + 28LL);
        if ( v85 )
        {
          while ( *(unsigned __int8 *)(v84 + *(_QWORD *)(*v83 + 72LL) + 4LL) != v82 )
          {
            if ( ++v84 >= v85 )
              goto LABEL_157;
          }
          *((_WORD *)&v79->rgbtBlue + v82) = v84;
        }
LABEL_157:
        ++v82;
      }
      while ( v82 < 0x100 );
      v17 = v133;
    }
    else
    {
      if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v114, 1u, v32, 0LL, 0, 0, 0, 0x200u, 1) )
      {
        SEMOBJ::vUnlock((SEMOBJ *)&v112);
        goto LABEL_144;
      }
      v36 = v114;
      v106 = v114;
      v86 = 0;
      v87 = v101;
      if ( v32 )
      {
        v88 = v101;
        do
        {
          *(_WORD *)&v88->rgbtBlue = v86++;
          v88 = (struct tagRGBTRIPLE *)((char *)v88 + 2);
        }
        while ( v86 < v32 );
      }
      v89 = *(_QWORD *)(*(_QWORD *)v132 + 1776LL);
      if ( v21 )
        v89 = v21;
      XEPALOBJ::vGetEntriesFrom(&v106, *v78, v89, v87, v32);
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v112);
  }
  else
  {
    v34 = *v130;
    if ( v31 )
    {
      if ( v33 != *(_DWORD *)(v34 + 96) )
        goto LABEL_144;
      v36 = v21;
      v106 = v21;
    }
    else
    {
      v35 = 0;
      if ( *(_DWORD *)(v34 + 96) == v33 && v21 )
      {
        v35 = 1;
        if ( v24 == 3 || ((v33 - 4) & 0xFFFFFFFD) != 0 )
        {
          if ( v33 == 5 && (*(_BYTE *)(v21 + 24) & 4) != 0 )
            v35 = 0;
        }
        else
        {
          v68 = *(_DWORD *)(v21 + 24);
          if ( (v68 & 2) != 0 )
          {
            v75 = *(int **)(v21 + 112);
            v69 = *v75;
            LODWORD(v106) = v75[1];
            LODWORD(v112) = v75[2];
          }
          else
          {
            LODWORD(v106) = 65280;
            if ( (v68 & 4) != 0 )
            {
              v69 = 255;
              LODWORD(v112) = 16711680;
            }
            else
            {
              v69 = 16711680;
              LODWORD(v112) = 255;
            }
          }
          if ( v33 == 4 )
          {
            v70 = 31744;
            v71 = 992;
            v109 = 31;
          }
          else
          {
            v70 = 16711680;
            v71 = 65280;
            v109 = 255;
          }
          if ( v69 != v70 || (_DWORD)v106 != v71 || (_DWORD)v112 != v109 )
            v35 = 0;
        }
      }
      if ( v35 )
      {
        v36 = v21;
        v106 = v21;
      }
      else
      {
        if ( v32 )
        {
          v90 = 1;
        }
        else
        {
          v90 = 8;
          if ( v33 == 4 )
            v90 = 2;
        }
        if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v114, v90, v32, 0LL, 0x7C00u, 0x3E0u, 0x1Fu, 0x200u, 1) )
          goto LABEL_144;
        v36 = v114;
        v106 = v114;
        if ( *(_DWORD *)(*v130 + 96) == v120 && v120 == 3 )
        {
          v91 = 0;
          v92 = v101;
          if ( v32 )
          {
            v93 = v101;
            do
            {
              *(_WORD *)&v93->rgbtBlue = v91++;
              v93 = (struct tagRGBTRIPLE *)((char *)v93 + 2);
            }
            while ( v91 < v32 );
          }
          XEPALOBJ::vGetEntriesFrom(&v106, *v113, *(_QWORD *)(*(_QWORD *)v132 + 1776LL), v92, v32);
          XEPALOBJ::vInit256Default((XEPALOBJ *)&v106);
        }
        else
        {
          switch ( v120 )
          {
            case 1:
              **(_DWORD **)(v114 + 112) = 0;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 4LL) = 0xFFFFFF;
              break;
            case 2:
              **(_DWORD **)(v114 + 112) = 0;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 4LL) = 128;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 8LL) = 0x8000;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 12LL) = 32896;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 16LL) = 0x800000;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 20LL) = 8388736;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 24LL) = 8421376;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 28LL) = 8421504;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 32LL) = 12632256;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 36LL) = 255;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 40LL) = 65280;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 44LL) = 0xFFFF;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 48LL) = 16711680;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 52LL) = 16711935;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 56LL) = 16776960;
              *(_DWORD *)(*(_QWORD *)(v36 + 112) + 60LL) = 0xFFFFFF;
              break;
            case 3:
              XEPALOBJ::vInit256Rainbow((XEPALOBJ *)&v106);
              break;
          }
        }
        v23 = v99;
        v22 = a14;
      }
      if ( v107 )
      {
        v34 = 3 * v32 + 12LL;
        if ( v22 < v34 )
          goto LABEL_144;
        if ( ((v23 - 16) & 0xFFFFFFE7) != 0 || v23 == 40 )
          XEPALOBJ::vFill_triples((XEPALOBJ *)&v106, v101, v35, v32);
      }
      else
      {
        if ( v24 == 3 )
          v32 = 3;
        v34 = 4 * v32 + 40LL;
        if ( v22 < v34 )
          goto LABEL_144;
        v37 = *(_DWORD *)(v36 + 24);
        if ( (v37 & 0x4000) != 0 )
        {
          memmove(v101, *(const void **)(v36 + 112), 2LL * v32);
        }
        else if ( v24 == 3 || v23 <= 8 && (v34 = 274LL, _bittest((const int *)&v34, v23)) )
        {
          if ( (v37 & 8) != 0 )
          {
            v38 = v101;
            *(_DWORD *)&v101->rgbtBlue = 16711680;
            *(_DWORD *)&v38[1].rgbtGreen = 65280;
            *(_DWORD *)&v38[2].rgbtRed = 255;
          }
          else if ( (v37 & 2) != 0 && v32 == 3 )
          {
            v94 = v101;
            *(_DWORD *)&v101->rgbtBlue = **(_DWORD **)(v36 + 112);
            *(_DWORD *)&v94[1].rgbtGreen = *(_DWORD *)(*(_QWORD *)(v36 + 112) + 4LL);
            v34 = *(unsigned int *)(*(_QWORD *)(v36 + 112) + 8LL);
            *(_DWORD *)&v94[2].rgbtRed = v34;
          }
          else if ( (v37 & 4) != 0 )
          {
            v95 = v101;
            *(_DWORD *)&v101->rgbtBlue = 255;
            *(_DWORD *)&v95[1].rgbtGreen = 65280;
            *(_DWORD *)&v95[2].rgbtRed = 16711680;
          }
          else
          {
            if ( v32 >= *(_DWORD *)(v36 + 28) )
              v32 = *(_DWORD *)(v36 + 28);
            if ( v32 )
            {
              HIBYTE(v100) = 0;
              v72 = 0LL;
              v73 = v32;
              v74 = v101;
              do
              {
                BYTE2(v100) = *(_DWORD *)(v72 + *(_QWORD *)(v36 + 112));
                v34 = HIWORD(*(_DWORD *)(v72 + *(_QWORD *)(v36 + 112)));
                LOBYTE(v100) = BYTE2(*(_DWORD *)(v72 + *(_QWORD *)(v36 + 112)));
                BYTE1(v100) = BYTE1(*(_DWORD *)(v72 + *(_QWORD *)(v36 + 112)));
                *(_DWORD *)&v74->rgbtBlue = v100;
                v74 = (struct tagRGBTRIPLE *)((char *)v74 + 4);
                v72 += 4LL;
                --v73;
              }
              while ( v73 );
              v17 = v133;
            }
          }
        }
      }
    }
  }
  v101 = 0LL;
  v39 = *v113;
  v40 = *v129;
  v41 = *((_DWORD *)*v129 + 30);
  v109 = v41;
  v42 = *(_QWORD *)(*((_QWORD *)v40 + 122) + 248LL);
  if ( !v21
    && (!v36
     || (*(_DWORD *)(v36 + 24) & 0x800) != 0 && ((v34 = *(_QWORD *)(v39 + 80)) == 0 || v34 == *(_QWORD *)(v39 + 72)))
    || !v36
    && (*(_DWORD *)(v21 + 24) & 0x800) != 0
    && ((v34 = *(_QWORD *)(v39 + 80)) == 0 || v34 == *(_QWORD *)(v39 + 72))
    || v21
    && v36
    && ((v43 = *(_QWORD *)(v21 + 120), v43 != v21) ? (v44 = *(_DWORD *)(v43 + 32)) : (v44 = *(_DWORD *)(v21 + 32)),
        (v45 = *(_QWORD *)(v36 + 120), v45 != v36)
      ? (v34 = *(unsigned int *)(v45 + 32))
      : (v34 = *(unsigned int *)(v36 + 32)),
        v44 == (_DWORD)v34) )
  {
    XlateObject = (struct tagRGBTRIPLE *)((char *)Gre::Base::Globals((Gre::Base *)v34) + 6896);
    v101 = XlateObject;
LABEL_54:
    v47 = 1;
    goto LABEL_55;
  }
  v107 = 1;
  if ( (v41 & 7) != 0 && v42 )
  {
    v107 = 0;
  }
  else if ( v21 && v36 && (unsigned int)EXLATEOBJ::bSearchCache(&v101, v21, v36, v39, v39, 0, 0xFFFFFF, 0, 0) )
  {
    v47 = 1;
    XlateObject = v101;
    goto LABEL_55;
  }
  XlateObject = (struct tagRGBTRIPLE *)CreateXlateObject(v42, v109, v21, v36, v39, v39, 0, 0xFFFFFF, 0, 0);
  v101 = XlateObject;
  if ( XlateObject )
  {
    if ( v107 && v21 && v36 && (*(_DWORD *)&XlateObject[25].rgbtGreen & 0x200) == 0 )
      EXLATEOBJ::vAddToCache(&v101, v21, v36, v39, v39);
    goto LABEL_54;
  }
  v47 = 0;
LABEL_55:
  if ( !v47 )
  {
LABEL_143:
    EXLATEOBJ::vAltUnlock((Gre::Base **)&v101);
    goto LABEL_144;
  }
  v48 = *v126;
  if ( !*v126 && !v98 )
  {
    if ( XlateObject )
    {
      v49 = *(_DWORD *)&XlateObject[12].rgbtBlue;
      if ( v49 >= 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(0LL) + 8 * *(int *)&XlateObject[12].rgbtBlue
                                                                                 + 1658);
      }
      else if ( v49 == -1 )
      {
        FreeThreadBufferWithTag(XlateObject);
      }
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v114);
    return 1LL;
  }
  v121 = v108;
  v51 = v102;
  v122 = v102;
  v117 = 0LL;
  v118 = 0;
  v119 = 0;
  if ( v98 )
  {
    v52 = v104;
    if ( !v102 )
      v51 = v104;
    v122 = v51;
    SURFMEM::bCreateDIB((SURFMEM *)&v117, (struct _DEVBITMAPINFO *)&v120, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v53 = 0;
    if ( v127 )
      v53 = v128;
    v110 = v53;
    v96 = v52;
    if ( v127 )
      v96 = v127;
    v102 = v96;
    v111 = v96;
  }
  else
  {
    SURFMEM::bCreateDIB(
      (SURFMEM *)&v117,
      (struct _DEVBITMAPINFO *)&v120,
      (void *)(v48 + v126[2]),
      0LL,
      0,
      0LL,
      0LL,
      0,
      1,
      0,
      0);
    v52 = v104;
    v53 = v116;
  }
  if ( !v117 )
    goto LABEL_142;
  SURFACE::hdev((SURFACE *)v117, *((HDEV *)*v129 + 6));
  memset_0(v117[9], 0, *((unsigned int *)v117 + 16));
  v54 = v103;
  v55 = 0;
  *(_QWORD *)&prclDest.left = 0LL;
  v56 = 0;
  v57 = v121;
  prclDest.right = v121;
  v58 = v122;
  prclDest.bottom = v122;
  pptlSrc.x = 0;
  v59 = v52 - v102;
  pptlSrc.y = v59 - v53;
  v60 = v53 - v59;
  v61 = *v130;
  v62 = *(_DWORD *)(*v130 + 56);
  v63 = v60 + *(_DWORD *)(*v130 + 60);
  if ( v60 > 0 )
  {
    v56 = v60;
    prclDest.top = v60;
  }
  if ( v62 < v121 )
  {
    v57 = v62;
    prclDest.right = v62;
  }
  if ( v63 < v122 )
  {
    v58 = v63;
    prclDest.bottom = v63;
  }
  if ( v57 < 0 )
  {
    v55 = v57;
    prclDest.left = v57;
  }
  else if ( v58 < v56 )
  {
    v56 = v58;
    prclDest.top = v58;
  }
  if ( v55 != v57 && v56 != v58 )
    v20 = 0;
  if ( v20 )
  {
LABEL_142:
    SURFMEM::~SURFMEM((SURFMEM *)&v117);
    goto LABEL_143;
  }
  if ( v61 )
    v64 = (SURFOBJ *)(v61 + 24);
  else
    v64 = 0LL;
  if ( v117 )
    v18 = (SURFOBJ *)(v117 + 3);
  EngCopyBits(v18, v64, 0LL, (XLATEOBJ *)XlateObject, &prclDest, &pptlSrc);
  if ( !v98 )
    goto LABEL_84;
  if ( v54 == 2 )
  {
    v97 = EncodeRLE4(v117[9], *v126 + v126[2], v108, v102, *(_DWORD *)(v17 + 20));
  }
  else
  {
    if ( v54 != 1 )
      goto LABEL_241;
    v97 = EncodeRLE8(v117[9], *v126 + v126[2], v108, v102, *(_DWORD *)(v17 + 20));
  }
  *(_DWORD *)(v17 + 20) = v97;
LABEL_241:
  if ( !*(_DWORD *)(v17 + 20) )
    goto LABEL_142;
LABEL_84:
  v65 = prclDest.bottom - prclDest.top;
  SURFMEM::~SURFMEM((SURFMEM *)&v117);
  if ( XlateObject )
  {
    v67 = *(_DWORD *)&XlateObject[12].rgbtBlue;
    if ( v67 >= 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v66) + 8 * *(int *)&XlateObject[12].rgbtBlue
                                                                               + 1658);
    }
    else if ( v67 == -1 )
    {
      FreeThreadBufferWithTag(XlateObject);
    }
  }
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v114);
  return v65;
}
