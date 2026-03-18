/*
 * XREFs of ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C015A564
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0158B10 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DD990 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C02DE428 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C02DE594 (-DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z.c)
 */

__int64 __fastcall DxgkpBlitA8R8R8G8(
        unsigned __int8 *a1,
        int a2,
        int a3,
        __int64 a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5,
        unsigned __int8 *a6,
        int a7,
        const struct tagRECT *a8,
        struct tagRECT *a9,
        struct tagRECT *a10)
{
  int v10; // r12d
  int v11; // r13d
  LONG left; // r11d
  LONG right; // esi
  LONG top; // r8d
  LONG bottom; // r10d
  LONG v17; // r14d
  LONG v18; // r15d
  int v19; // r11d
  LONG v20; // ebp
  LONG v21; // ebx
  int v22; // r14d
  int v23; // ebx
  int v24; // r10d
  int v25; // r8d
  int v26; // ebx
  int v27; // eax
  int v28; // r13d
  unsigned __int64 v29; // r8
  LONG v30; // ecx
  LONG v31; // r10d
  unsigned __int8 *v32; // r15
  int v33; // ecx
  unsigned int v34; // r13d
  unsigned __int8 *v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // r12
  int v39; // r10d
  unsigned __int8 *v40; // rax
  unsigned __int8 *v41; // rdi
  __int64 v42; // rbp
  int v43; // r10d
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  int v46; // ebx
  int v47; // ecx
  struct _UFIXPOINT_PIXEL *v48; // r13
  unsigned __int8 *v49; // rcx
  int v50; // r15d
  struct _UFIXPOINT_PIXEL *v51; // r9
  unsigned int v52; // r8d
  unsigned int *v53; // r11
  int v54; // r10d
  unsigned int v55; // edx
  signed __int64 v56; // r9
  _BYTE *v57; // r8
  unsigned int v58; // ecx
  unsigned int v59; // eax
  unsigned __int8 *v60; // r8
  unsigned __int8 *v61; // r8
  int v62; // eax
  bool v63; // cc
  struct _UFIXPOINT_PIXEL *v64; // rdx
  int *v65; // r11
  int v66; // r9d
  _BYTE *v67; // rdx
  int v68; // eax
  unsigned int v69; // r9d
  _BYTE *v70; // r11
  unsigned int *v71; // rdx
  unsigned int v72; // r10d
  unsigned int v73; // r9d
  signed __int64 v74; // r8
  unsigned int v75; // ecx
  unsigned int v76; // eax
  int v77; // ebp
  int v78; // esi
  int v79; // r9d
  int v80; // r8d
  _DWORD *v81; // rdx
  unsigned int v82; // eax
  int v83; // r11d
  int v84; // ecx
  int v85; // edx
  int v86; // ecx
  int v87; // r8d
  struct _UFIXPOINT_PIXEL *v88; // r8
  _DWORD *v89; // rdx
  unsigned int v90; // r9d
  signed __int64 v91; // r10
  int v92; // r11d
  unsigned int v93; // eax
  unsigned int v94; // eax
  _BYTE *v95; // r11
  _DWORD *v96; // rdx
  int v97; // r8d
  unsigned int v98; // r9d
  unsigned int v99; // esi
  signed __int64 v100; // r10
  unsigned int v101; // eax
  _DWORD *v102; // rdx
  int v103; // r9d
  _BYTE *v104; // r15
  signed __int64 v105; // r8
  int v106; // ecx
  LONG v107; // [rsp+50h] [rbp-88h]
  unsigned int v108; // [rsp+50h] [rbp-88h]
  int v109; // [rsp+50h] [rbp-88h]
  int v110; // [rsp+58h] [rbp-80h]
  LONG v111; // [rsp+5Ch] [rbp-7Ch]
  int v112; // [rsp+5Ch] [rbp-7Ch]
  struct tagRECT v113; // [rsp+60h] [rbp-78h]
  __int64 v114; // [rsp+60h] [rbp-78h]
  unsigned __int8 *v115; // [rsp+60h] [rbp-78h]
  unsigned __int8 *v116; // [rsp+60h] [rbp-78h]
  int v117; // [rsp+70h] [rbp-68h]
  int v118; // [rsp+74h] [rbp-64h]
  int v119; // [rsp+78h] [rbp-60h]
  unsigned __int8 *v120; // [rsp+80h] [rbp-58h]
  int v121; // [rsp+88h] [rbp-50h]
  int v122; // [rsp+8Ch] [rbp-4Ch]
  unsigned int v123; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int8 *v124; // [rsp+90h] [rbp-48h]
  struct _UFIXPOINT_PIXEL *v125; // [rsp+98h] [rbp-40h]
  struct _UFIXPOINT_PIXEL *v126; // [rsp+A0h] [rbp-38h]
  int v127; // [rsp+120h] [rbp+48h]

  v10 = a2;
  v11 = a4;
  left = a9->left;
  right = a9->right;
  if ( a9->left == right
    || (top = a9->top, bottom = a9->bottom, top == bottom)
    || (v17 = a8->right, v107 = a8->left, a8->left == v17)
    || (v18 = a8->bottom, v111 = a8->top, v111 == v18) )
  {
    DxgkpConvertRects(a2, a3, a5, a8, 1u, a9, a10);
    return 0LL;
  }
  switch ( a5 )
  {
    case D3DKMDT_VPPR_IDENTITY:
      break;
    case D3DKMDT_VPPR_ROTATE90:
      v20 = a2 - right;
      v21 = a9->top;
      right = a2 - left;
      v113.top = v20;
      v10 = a3;
      v19 = a4;
      a3 = a2;
      a4 = 4294967292LL;
      v40 = &a1[4 * a2 - 4];
      goto LABEL_19;
    case D3DKMDT_VPPR_ROTATE180:
      v21 = a2 - right;
      v20 = a3 - bottom;
      v113.top = a3 - bottom;
      bottom = a2 - left;
      right = a3 - top;
      a4 = (unsigned int)-(int)a4;
      v19 = -4;
      v40 = &a1[4 * a2 - 4 + v11 * (a3 - 1)];
      goto LABEL_19;
    case D3DKMDT_VPPR_ROTATE270:
      v113.top = a9->left;
      v10 = a3;
      a4 = 4LL;
      v20 = a9->left;
      v21 = a3 - bottom;
      v39 = a3;
      v19 = -v11;
      a3 = a2;
      bottom = v39 - top;
      v40 = &a1[v11 * (v10 - 1)];
LABEL_19:
      v113.left = v21;
      *(_QWORD *)&v113.right = __PAIR64__(right, bottom);
      v117 = a4;
      v120 = v40;
      goto LABEL_7;
  }
  v120 = a1;
  v19 = 4;
  a4 = (unsigned int)a4;
  v117 = a4;
  v113 = *a9;
  right = HIDWORD(*(unsigned __int128 *)a9);
  bottom = *(_QWORD *)&a9->right;
  v20 = HIDWORD(*(_QWORD *)&a9->left);
  v21 = (LONG)*a9;
LABEL_7:
  v22 = v17 - v107;
  v23 = v22 * v21;
  v24 = v22 * bottom;
  v121 = v18 - v111;
  v127 = v19;
  v25 = v23 / v10;
  v26 = (v23 - v23 % v10 + v22 - 1) / v22;
  v110 = v26;
  v27 = (v10 + v24 - 1 - (v24 - 1) % v10) / v22;
  v28 = v27;
  v118 = v27;
  v122 = v25 + v107;
  a10->left = v25 + v107;
  v29 = HIDWORD(*(_QWORD *)&v113.left);
  v30 = (v18 - v111) * v113.top / a3 + v111;
  a10->top = v30;
  v31 = (v10 + v24 - 1) / v10 + v107;
  *(_QWORD *)&v113.left = HIDWORD(*(_QWORD *)&v113.right);
  a10->right = v31;
  a10->bottom = v111 + (a3 + (v18 - v111) * v113.bottom - 1) / a3;
  v32 = &a6[4 * v122 + a7 * v30];
  v33 = v22;
  v124 = v32;
  if ( a5 == D3DKMDT_VPPR_IDENTITY && v22 == v10 )
  {
    if ( v121 == a3 )
    {
      v34 = 4 * (v27 - v26);
      v35 = &v120[(int)a4 * (int)v29 + v26 * v19];
      if ( (int)v29 < v113.left )
      {
        v36 = (unsigned int)(right - v29);
        v37 = (int)a4;
        do
        {
          memmove(v32, v35, v34);
          v32 += a7;
          v35 += v37;
          --v36;
        }
        while ( v36 );
      }
      return 0LL;
    }
  }
  else if ( v121 == a3 )
  {
    v41 = &v120[(int)a4 * v20];
    if ( v20 < right )
    {
      v42 = (unsigned int)(right - v20);
      v114 = (int)a4;
      do
      {
        DxgkpGetBilinearLineFromSource(v41, v19, v10, (struct _PIXEL *)v32, 0LL, v33, v26, v28);
        v41 += v114;
        v32 += a7;
        v19 = v127;
        v33 = v22;
        --v42;
      }
      while ( v42 );
    }
    return 0LL;
  }
  v43 = v31 - v122;
  v44 = 16LL * (2 * v43 + 2);
  if ( !is_mul_ok(2 * v43 + 2, 0x10uLL) )
    v44 = -1LL;
  v45 = operator new[](v44, 0x4B677844u, 256LL, a4);
  v46 = 0;
  v126 = (struct _UFIXPOINT_PIXEL *)v45;
  if ( v45 )
  {
    v47 = a10->right - a10->left;
    v125 = (struct _UFIXPOINT_PIXEL *)v45;
    v48 = (struct _UFIXPOINT_PIXEL *)(v45 + 16LL * (v47 + 1));
    *(_OWORD *)(v45 + 16LL * v47) = 0LL;
    *((_OWORD *)v48 + a10->right - a10->left) = 0LL;
    v49 = &v120[v117 * v20];
    v115 = v49;
    if ( v121 <= a3 )
    {
      v123 = (unsigned __int16)((v121 << 16) / a3);
      v109 = (v121 * v20 - v121 * v20 % a3 + v121 - 1) / v121;
      v116 = &v120[v109 * v117];
      v112 = (a3 + v121 * right - 1 - (v121 * right - 1) % a3) / v121;
      v77 = v121 * v109 % a3;
      if ( v77 <= 0 )
      {
        memset(v48, 0, 16LL * (a10->right - a10->left));
        v78 = v127;
      }
      else
      {
        v78 = v127;
        DxgkpGetBilinearLineFromSource(&v116[-v117], v127, v10, 0LL, v48, v22, v110, v118);
        v79 = 0;
        if ( a10->right - a10->left > 0 )
        {
          v80 = (unsigned __int16)((v77 << 16) / a3) >> 8;
          v81 = (_DWORD *)((char *)v48 + 8);
          do
          {
            ++v79;
            v81[1] = v80 * (v81[1] >> 8);
            *v81 = v80 * (*v81 >> 8);
            v82 = *(v81 - 1);
            v81 += 4;
            *(v81 - 5) = v80 * (v82 >> 8);
            *(v81 - 6) = v80 * (*(v81 - 6) >> 8);
          }
          while ( v79 < a10->right - a10->left );
        }
      }
      DxgkpGetBilinearLineFromSource(v116, v78, v10, 0LL, v126, v22, v110, v118);
      v83 = v109;
      if ( v109 >= v112 )
      {
LABEL_82:
        if ( v77 && a10->right - a10->left > 0 )
        {
          v102 = (_DWORD *)((char *)v48 + 12);
          v103 = (unsigned __int16)(((a3 - v77) << 16) / a3) >> 8;
          v104 = v32 + 2;
          v105 = v126 - v48;
          do
          {
            ++v46;
            v106 = *v102 + v103 * (*(_DWORD *)((char *)v102 + v105) >> 8) + 0x8000;
            v102 += 4;
            v104[1] = BYTE2(v106);
            *v104 = (unsigned int)(*(v102 - 5) + v103 * (*(_DWORD *)((char *)v102 + v105 - 20) >> 8) + 0x8000) >> 16;
            v104 += 4;
            *(v104 - 5) = (unsigned int)(*(v102 - 6) + v103 * (*(_DWORD *)((char *)v102 + v105 - 24) >> 8) + 0x8000) >> 16;
            *(v104 - 6) = (unsigned int)(*(v102 - 7) + v103 * (*(_DWORD *)((char *)v102 + v105 - 28) >> 8) + 0x8000) >> 16;
          }
          while ( v46 < a10->right - a10->left );
        }
      }
      else
      {
        v84 = v77 << 16;
        v85 = a3 << 16;
        while ( 1 )
        {
          v86 = (v121 << 16) + v84;
          v87 = a10->right - a10->left;
          v77 += v121;
          v119 = v86;
          if ( v77 >= a3 )
          {
            v77 -= a3;
            v119 = v86 - v85;
            v94 = (unsigned __int16)((v86 - v85) / a3);
            if ( v87 > 0 )
            {
              v95 = v32 + 2;
              v96 = (_DWORD *)((char *)v48 + 12);
              v97 = 0;
              v98 = (v123 - v94) >> 8;
              v99 = v94 >> 8;
              v100 = v126 - v48;
              do
              {
                ++v97;
                v95[1] = (*v96 + 0x8000 + v98 * (*(_DWORD *)((char *)v96 + v100) >> 8)) >> 16;
                *v95 = (*(v96 - 1) + 0x8000 + v98 * (*(_DWORD *)((char *)v96 + v100 - 4) >> 8)) >> 16;
                v95 += 4;
                *(v95 - 5) = (*(v96 - 2) + 0x8000 + v98 * (*(_DWORD *)((char *)v96 + v100 - 8) >> 8)) >> 16;
                *(v95 - 6) = (*(v96 - 3) + 0x8000 + v98 * (*(_DWORD *)((char *)v96 + v100 - 12) >> 8)) >> 16;
                *v96 = v99 * (*(_DWORD *)((char *)v96 + v100) >> 8);
                v101 = *(_DWORD *)((char *)v96 + v100 - 4);
                v96 += 4;
                *(v96 - 5) = v99 * (v101 >> 8);
                *(v96 - 6) = v99 * (*(_DWORD *)((char *)v96 + v100 - 24) >> 8);
                *(v96 - 7) = v99 * (*(_DWORD *)((char *)v96 + v100 - 28) >> 8);
              }
              while ( v97 < a10->right - a10->left );
              v78 = v127;
              v83 = v109;
            }
            v88 = v126;
            v32 += a7;
          }
          else
          {
            v63 = v87 <= 0;
            v88 = v126;
            if ( !v63 )
            {
              v89 = (_DWORD *)((char *)v48 + 12);
              v90 = v123 >> 8;
              v91 = v126 - v48;
              v92 = 0;
              do
              {
                ++v92;
                *v89 += v90 * (*(_DWORD *)((char *)v89 + v91) >> 8);
                v93 = *(_DWORD *)((char *)v89 + v91 - 4);
                v89 += 4;
                *(v89 - 5) += v90 * (v93 >> 8);
                *(v89 - 6) += v90 * (*(_DWORD *)((char *)v89 + v91 - 24) >> 8);
                *(v89 - 7) += v90 * (*(_DWORD *)((char *)v89 + v91 - 28) >> 8);
              }
              while ( v92 < a10->right - a10->left );
              v83 = v109;
            }
          }
          v109 = v83 + 1;
          if ( v83 + 1 >= v112 && !v77 )
            break;
          v116 += v117;
          DxgkpGetBilinearLineFromSource(v116, v78, v10, 0LL, v88, v22, v110, v118);
          v83 = v109;
          v84 = v119;
          v85 = a3 << 16;
          if ( v109 >= v112 )
            goto LABEL_82;
        }
      }
    }
    else
    {
      v50 = v20 * v121 % a3;
      if ( v50 )
      {
        DxgkpGetBilinearLineFromSource(&v49[-v117], v127, v10, 0LL, v48, v22, v110, v118);
        v49 = &v120[v117 * v20];
      }
      DxgkpGetBilinearLineFromSource(v49, v127, v10, 0LL, v126, v22, v110, v118);
      if ( v20 < right )
      {
        v51 = v125;
        while ( 1 )
        {
          if ( v50 && v50 < a3 )
          {
            v52 = (unsigned __int16)((v50 << 16) / (unsigned int)a3);
            if ( a10->right - a10->left > 0 )
            {
              v53 = (unsigned int *)((char *)v48 + 12);
              v54 = 0;
              v55 = (0x10000 - v52) >> 8;
              v108 = v52 >> 8;
              v56 = v51 - v48;
              v57 = v124 + 2;
              do
              {
                v58 = *(unsigned int *)((char *)v53 + v56);
                ++v54;
                v59 = *v53;
                v53 += 4;
                v57[1] = (v55 * (v58 >> 8) + 0x8000 + v108 * (v59 >> 8)) >> 16;
                *v57 = (v55 * (*(unsigned int *)((char *)v53 + v56 - 20) >> 8) + 0x8000 + v108 * (*(v53 - 5) >> 8)) >> 16;
                v57 += 4;
                *(v57 - 5) = (v55 * (*(unsigned int *)((char *)v53 + v56 - 24) >> 8) + 0x8000 + v108 * (*(v53 - 6) >> 8)) >> 16;
                *(v57 - 6) = (v55 * (*(unsigned int *)((char *)v53 + v56 - 28) >> 8) + 0x8000 + v108 * (*(v53 - 7) >> 8)) >> 16;
              }
              while ( v54 < a10->right - a10->left );
              v51 = v125;
            }
          }
          else if ( a10->right - a10->left > 0 )
          {
            v60 = v124;
            v65 = (int *)((char *)v51 + 8);
            v66 = 0;
            v67 = v124 + 2;
            do
            {
              ++v66;
              v67[1] = (unsigned int)(v65[1] + 0x8000) >> 16;
              v68 = *v65;
              v65 += 4;
              *v67 = (unsigned int)(v68 + 0x8000) >> 16;
              v67 += 4;
              *(v67 - 5) = (unsigned int)(*(v65 - 5) + 0x8000) >> 16;
              *(v67 - 6) = (unsigned int)(*(v65 - 6) + 0x8000) >> 16;
            }
            while ( v66 < a10->right - a10->left );
            v51 = v125;
            goto LABEL_42;
          }
          v60 = v124;
LABEL_42:
          v61 = &v60[a7];
          v62 = v50 - a3 + v121;
          v124 = v61;
          v63 = v50 < a3;
          v50 -= a3;
          if ( v63 )
            v50 = v62;
          if ( v50 < a3 )
          {
            v64 = v48;
            ++v20;
            v125 = v48;
            v48 = v51;
            if ( v20 < right || v50 )
            {
              v115 += v117;
              DxgkpGetBilinearLineFromSource(v115, v127, v10, 0LL, v64, v22, v110, v118);
              v61 = v124;
              v51 = v125;
            }
            else
            {
              v51 = v64;
            }
          }
          if ( v20 >= right )
            goto LABEL_56;
        }
      }
      v61 = v124;
LABEL_56:
      if ( v50 )
      {
        v69 = (unsigned __int16)((v50 << 16) / a3);
        if ( a10->right - a10->left > 0 )
        {
          v70 = v61 + 2;
          v71 = (unsigned int *)((char *)v48 + 12);
          v72 = (0x10000 - v69) >> 8;
          v73 = v69 >> 8;
          v74 = v125 - v48;
          do
          {
            v75 = *(unsigned int *)((char *)v71 + v74);
            ++v46;
            v76 = *v71;
            v71 += 4;
            v70[1] = (v72 * (v75 >> 8) + 0x8000 + v73 * (v76 >> 8)) >> 16;
            *v70 = (v72 * (*(unsigned int *)((char *)v71 + v74 - 20) >> 8) + 0x8000 + v73 * (*(v71 - 5) >> 8)) >> 16;
            v70 += 4;
            *(v70 - 5) = (v72 * (*(unsigned int *)((char *)v71 + v74 - 24) >> 8) + 0x8000 + v73 * (*(v71 - 6) >> 8)) >> 16;
            *(v70 - 6) = (v72 * (*(unsigned int *)((char *)v71 + v74 - 28) >> 8) + 0x8000 + v73 * (*(v71 - 7) >> 8)) >> 16;
          }
          while ( v46 < a10->right - a10->left );
        }
      }
    }
    operator delete[](v126);
    return 0LL;
  }
  WdLogSingleEntry1(6LL, -1073741670LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate line buffer for DxgkpBlitA8R8R8G8, returning 0x%I64x!",
    -1073741670LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225626LL;
}
