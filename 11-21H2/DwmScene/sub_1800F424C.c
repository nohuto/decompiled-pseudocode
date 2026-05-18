/*
 * XREFs of sub_1800F424C @ 0x1800F424C
 * Callers:
 *     sub_1800F592C @ 0x1800F592C (sub_1800F592C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180017748 @ 0x180017748 (sub_180017748.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_1800F3E48 @ 0x1800F3E48 (sub_1800F3E48.c)
 *     sub_1800F3F7C @ 0x1800F3F7C (sub_1800F3F7C.c)
 *     sub_1800F40A8 @ 0x1800F40A8 (sub_1800F40A8.c)
 *     sub_1800F40B4 @ 0x1800F40B4 (sub_1800F40B4.c)
 *     sub_1800F40F4 @ 0x1800F40F4 (sub_1800F40F4.c)
 *     sub_1800F56BC @ 0x1800F56BC (sub_1800F56BC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall sub_1800F424C(
        ID3D11Device *a1,
        IDXGIAdapter **a2,
        __int64 *a3,
        __int64 *a4,
        int a5,
        char a6,
        int a7,
        D3D_FEATURE_LEVEL a8,
        int a9,
        char a10)
{
  __int64 *v10; // r15
  __int64 *v11; // r13
  __int64 v13; // rcx
  __int64 v14; // r8
  ID3D11DeviceContext *v15; // r8
  IDXGIAdapter *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  char *v19; // r12
  int v20; // ecx
  char v21; // di
  HRESULT DXGIFactory1; // edi
  char *v23; // rsi
  ID3D11DeviceContext **v24; // rbx
  char *v25; // r15
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // edx
  ID3D11Device *v30; // rbx
  __int64 *v31; // rax
  __int64 i; // rdx
  struct ID3D11DeviceVtbl *lpVtbl; // rsi
  ID3D11DeviceContext *v34; // rax
  IDXGIAdapter *v35; // rcx
  int v36; // eax
  IDXGIAdapter *v37; // rcx
  bool v38; // zf
  float v39; // xmm6_4
  __int64 v40; // rsi
  IDXGIAdapter *v41; // rcx
  ID3D11DeviceContext v42; // rcx
  float v43; // xmm0_4
  struct ID3D11DeviceContextVtbl *v44; // rbx
  IDXGIAdapter *v45; // rcx
  IDXGIAdapter *SetPrivateData; // rdi
  IDXGIAdapter *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  D3D_FEATURE_LEVEL *v50; // rax
  UINT v51; // edx
  ID3D11DeviceContext *v52; // rcx
  ID3D11DeviceContext *v53; // rcx
  ID3D11Device *v54; // rcx
  IDXGIAdapter *v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  ID3D11DeviceContext *v58; // rcx
  ULONG (__stdcall *Release)(ID3D11DeviceContext *); // rax
  ULONG (__stdcall *j)(ID3D11DeviceContext *); // rax
  struct ID3D11DeviceContextVtbl *v61; // rcx
  ID3D11Device *v62; // rbx
  HRESULT (__stdcall *QueryInterface)(ID3D11Device *, const IID *const, void **); // rdi
  __int64 v64; // rcx
  ID3D11DeviceContext *v65; // rbx
  HRESULT (__stdcall *v66)(ID3D11DeviceContext *, const IID *const, void **); // rdi
  __int64 v67; // rcx
  ID3D11DeviceContext *v68; // rcx
  ID3D11Device *v69; // rcx
  ID3D11DeviceContext *v70; // rcx
  ID3D11Device *v71; // rcx
  ID3D11DeviceContext *v72; // rcx
  ID3D11Device *v73; // rcx
  unsigned __int64 v74; // r12
  __int64 v75; // rcx
  unsigned __int64 v76; // rax
  __int64 v77; // rdi
  char *v78; // rbx
  IDXGIAdapter *v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  D3D_FEATURE_LEVEL *v82; // rax
  __int64 (__fastcall ***v83)(_QWORD, void *, __int64 *); // rcx
  ID3D11Device *v84; // rcx
  __int64 v85; // rcx
  __int64 (__fastcall ***v86)(_QWORD, void *, __int64 *); // rcx
  ID3D11Device *v87; // rcx
  ID3D11DeviceContext *v88; // rcx
  __int64 v89; // rcx
  __int64 (__fastcall ***v90)(_QWORD, void *, __int64 *); // rcx
  ID3D11Device *v91; // rcx
  ID3D11DeviceContext *v92; // rbx
  HRESULT (__stdcall *v93)(ID3D11DeviceContext *, const IID *const, void **); // rdi
  IDXGIAdapter *v94; // rcx
  ID3D11DeviceContext *v95; // rcx
  __int64 v96; // rcx
  __int64 (__fastcall ***v97)(_QWORD, void *, __int64 *); // rcx
  ID3D11Device *v98; // rcx
  ID3D11Device *v99; // rbx
  HRESULT (__stdcall *v100)(ID3D11Device *, const IID *const, void **); // rdi
  __int64 v101; // rcx
  ID3D11DeviceContext *v102; // rcx
  __int64 v103; // rcx
  __int64 (__fastcall ***v104)(_QWORD, void *, __int64 *); // rcx
  ID3D11Device *v105; // rcx
  __int64 (__fastcall ***v106)(_QWORD, void *, __int64 *); // rbx
  __int64 (__fastcall *v107)(_QWORD, void *, __int64 *); // rdi
  __int64 v108; // rcx
  ID3D11DeviceContext *v109; // rcx
  __int64 v110; // rcx
  __int64 (__fastcall ***v111)(_QWORD, void *, __int64 *); // rcx
  ID3D11Device *v112; // rcx
  ID3D11DeviceContext *v113; // rcx
  __int64 v114; // rcx
  __int64 (__fastcall ***v115)(_QWORD, void *, __int64 *); // rcx
  ID3D11Device *v116; // rcx
  ID3D11DeviceContext *v117; // rcx
  __int64 v118; // rcx
  __int64 (__fastcall ***v119)(_QWORD, void *, __int64 *); // rcx
  ID3D11Device *v120; // rcx
  IDXGIAdapter *v121; // r15
  int v122; // ecx
  HRESULT (__stdcall *v123)(IDXGIAdapter *, const GUID *const, UINT, const void *); // rbx
  unsigned int v124; // eax
  __int64 v125; // r15
  int v126; // ecx
  void (__fastcall *v127)(__int64, void *, _QWORD, char *, int); // rbx
  unsigned int v128; // eax
  IDXGIAdapter *v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rcx
  int v133; // [rsp+28h] [rbp-E0h]
  int v134; // [rsp+28h] [rbp-E0h]
  D3D_FEATURE_LEVEL v135; // [rsp+38h] [rbp-D0h]
  D3D_FEATURE_LEVEL v136[2]; // [rsp+58h] [rbp-B0h] BYREF
  ID3D11Device *v137; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v138; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v139; // [rsp+70h] [rbp-98h]
  ID3D11Device *v140; // [rsp+78h] [rbp-90h] BYREF
  __int64 v141; // [rsp+80h] [rbp-88h]
  D3D_FEATURE_LEVEL v142; // [rsp+88h] [rbp-80h] BYREF
  ID3D11DeviceContext *v143; // [rsp+90h] [rbp-78h] BYREF
  __int64 v144; // [rsp+98h] [rbp-70h]
  __int128 v145; // [rsp+A0h] [rbp-68h] BYREF
  char *v146; // [rsp+B0h] [rbp-58h]
  __int64 *v147; // [rsp+B8h] [rbp-50h]
  _BYTE v148[256]; // [rsp+C8h] [rbp-40h] BYREF
  int v149; // [rsp+1C8h] [rbp+C0h]
  int v150; // [rsp+1CCh] [rbp+C4h]
  __int64 v151; // [rsp+1D8h] [rbp+D0h]
  int v152; // [rsp+1F8h] [rbp+F0h]
  ID3D11DeviceContext *v153[2]; // [rsp+208h] [rbp+100h] BYREF
  __m128i si128; // [rsp+218h] [rbp+110h]
  int v155; // [rsp+228h] [rbp+120h]
  char v156; // [rsp+22Ch] [rbp+124h] BYREF
  char String[256]; // [rsp+238h] [rbp+130h] BYREF
  int v158; // [rsp+3D0h] [rbp+2C8h]

  v10 = a4;
  v139 = a4;
  v11 = a3;
  v147 = a3;
  v140 = a1;
  v144 = 0LL;
  v153[0] = (ID3D11DeviceContext *)sub_180011088(0x30uLL);
  sub_18001DE8C((__int64 *)v153[0], (__int64 *)v153);
  sub_18001DE8C((__int64 *)(v13 + 8), (__int64 *)v153);
  sub_18001DE8C((__int64 *)(v14 + 16), (__int64 *)v153);
  LOWORD(v15[3].lpVtbl) = 257;
  v143 = v15;
  v16 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    ((void (__fastcall *)(IDXGIAdapter *))v16->lpVtbl->Release)(v16);
  }
  v17 = *v11;
  if ( *v11 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = *v10;
  if ( *v10 )
  {
    *v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v145 = 0LL;
  v19 = 0LL;
  v146 = 0LL;
  v142 = a10 & 1;
  if ( (a10 & 1) != 0 || (a10 & 2) != 0 )
  {
    v20 = a8;
    if ( a8 < D3D_FEATURE_LEVEL_10_0 )
      goto LABEL_14;
  }
  else
  {
    v20 = a8;
  }
  if ( (a6 & 4) != 0 )
  {
    v21 = 1;
    if ( v20 < 45312 )
    {
LABEL_14:
      DXGIFactory1 = -2147024809;
      v23 = (char *)v145;
      goto LABEL_241;
    }
  }
  else
  {
    v21 = 0;
  }
  *(__m128i *)v153 = _mm_load_si128((const __m128i *)&xmmword_1801BD890);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD880);
  v155 = 37120;
  v24 = v153;
  v25 = (char *)*((_QWORD *)&v145 + 1);
  do
  {
    v26 = *(_DWORD *)v24;
    LODWORD(v138) = v26;
    if ( v26 >= v20 && v26 <= a9 )
    {
      if ( v25 == v19 )
      {
        sub_1800F3E48((__int64 *)&v145, v25, &v138);
        v19 = v146;
        v25 = (char *)*((_QWORD *)&v145 + 1);
        v20 = a8;
      }
      else
      {
        *(_DWORD *)v25 = v26;
        v25 += 4;
        *((_QWORD *)&v145 + 1) = v25;
      }
    }
    v24 = (ID3D11DeviceContext **)((char *)v24 + 4);
  }
  while ( v24 != (ID3D11DeviceContext **)&v156 );
  v27 = (2 * (a6 & 1) + 32) | 0x40;
  if ( (a6 & 2) == 0 )
    v27 = 2 * (a6 & 1) + 32;
  v28 = v27 | 0x100;
  if ( !v21 )
    v28 = v27;
  LODWORD(v137) = a6 & 8;
  v29 = v28 | 0x800;
  if ( (a6 & 0x10) == 0 )
    v29 = v28;
  LODWORD(v138) = v29;
  v158 = a6 & 0x20;
  v30 = v140;
  v31 = sub_180017748((__int64 *)&v140[1]);
  DXGIFactory1 = CreateDXGIFactory1(&stru_1801BB820, (void **)v31);
  if ( DXGIFactory1 < 0 )
  {
LABEL_239:
    v23 = (char *)v145;
    goto LABEL_240;
  }
  if ( a5 )
  {
    v23 = (char *)v145;
    if ( a5 == 1 )
      goto LABEL_154;
    goto LABEL_32;
  }
  for ( i = 0LL; ; i = (unsigned int)(v136[0] + 1) )
  {
    v136[0] = i;
    lpVtbl = v30[1].lpVtbl;
    v34 = (ID3D11DeviceContext *)*((_QWORD *)lpVtbl->QueryInterface + 12);
    v153[0] = v34;
    v35 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      ((void (__fastcall *)(IDXGIAdapter *))v35->lpVtbl->Release)(v35);
      v34 = v153[0];
      i = (unsigned int)v136[0];
    }
    v36 = ((__int64 (__fastcall *)(struct ID3D11DeviceVtbl *, __int64, IDXGIAdapter **))v34)(lpVtbl, i, a2);
    v37 = *a2;
    if ( v36 == -2005270526 )
      break;
    DXGIFactory1 = ((__int64 (__fastcall *)(IDXGIAdapter *, _BYTE *))v37->lpVtbl[1].QueryInterface)(v37, v148);
    if ( DXGIFactory1 < 0 )
      goto LABEL_239;
    if ( !v158 || (v152 & 2) == 0 )
    {
      if ( v149 == 4318 )
      {
        if ( v150 == 1028 || v150 == 1058 || v150 == 1060 )
          continue;
        v38 = v150 == 1764;
LABEL_47:
        if ( v38 )
          continue;
      }
      else if ( v149 == 32902 )
      {
        v38 = ((v150 - 66) & 0xFFFFFFFB) == 0;
        goto LABEL_47;
      }
      if ( v151 < 0 )
        v39 = (float)(v151 & 1 | (unsigned int)((unsigned __int64)v151 >> 1))
            + (float)(v151 & 1 | (unsigned int)((unsigned __int64)v151 >> 1));
      else
        v39 = (float)(int)v151;
      if ( (_DWORD)v137 )
        v39 = v39 * -1.0;
      if ( (v152 & 2) != 0 )
        v39 = -3.4028235e38;
      v153[0] = v143;
      v140 = (ID3D11Device *)&v143;
      v141 = 0LL;
      v40 = sub_180011088(0x30uLL);
      v141 = v40;
      *(float *)(v40 + 32) = v39;
      v41 = *a2;
      *(_QWORD *)(v40 + 40) = *a2;
      if ( v41 )
        ((void (__fastcall *)(IDXGIAdapter *))v41->lpVtbl->AddRef)(v41);
      sub_18001DE7C((__int64 *)v40, (__int64 *)v153);
      sub_18001DE7C((__int64 *)(v40 + 8), (__int64 *)v153);
      sub_18001DE7C((__int64 *)(v40 + 16), (__int64 *)v153);
      *(_WORD *)(v40 + 24) = 0;
      v42.lpVtbl = v143[1].lpVtbl;
      v153[0] = (ID3D11DeviceContext *)v42.lpVtbl;
      LODWORD(v153[1]) = 0;
      if ( !BYTE1(v42.lpVtbl->GetDevice) )
      {
        v43 = *(float *)(v40 + 32);
        do
        {
          v153[0] = (ID3D11DeviceContext *)v42.lpVtbl;
          if ( v43 <= *(float *)&v42.lpVtbl->GetPrivateData )
          {
            LODWORD(v153[1]) = 0;
            v42.lpVtbl = (struct ID3D11DeviceContextVtbl *)v42.lpVtbl->Release;
          }
          else
          {
            LODWORD(v153[1]) = 1;
            v42.lpVtbl = (struct ID3D11DeviceContextVtbl *)v42.lpVtbl->QueryInterface;
          }
        }
        while ( !BYTE1(v42.lpVtbl->GetDevice) );
        v11 = v147;
      }
      if ( v144 == 0x555555555555555LL )
        sub_18001F56C();
      v141 = 0LL;
      sub_18001F31C(&v143, (__int64)v153, v40);
      continue;
    }
  }
  if ( v37 )
  {
    *a2 = 0LL;
    ((void (__fastcall *)(IDXGIAdapter *))v37->lpVtbl->Release)(v37);
  }
  v44 = v143->lpVtbl;
  v23 = (char *)v145;
  while ( 2 )
  {
    if ( v44 == (struct ID3D11DeviceContextVtbl *)v143 )
    {
      v10 = v139;
      goto LABEL_135;
    }
    v45 = *a2;
    SetPrivateData = (IDXGIAdapter *)v44->SetPrivateData;
    if ( *a2 != SetPrivateData )
    {
      v47 = *a2;
      if ( SetPrivateData )
      {
        ((void (__fastcall *)(HRESULT (__stdcall *)(ID3D11DeviceContext *, const GUID *const, UINT, const void *), IDXGIAdapter *))SetPrivateData->lpVtbl->AddRef)(
          v44->SetPrivateData,
          v47);
        v47 = *a2;
      }
      *a2 = SetPrivateData;
      v45 = SetPrivateData;
      if ( v47 )
      {
        ((void (__fastcall *)(IDXGIAdapter *))v47->lpVtbl->Release)(v47);
        v45 = *a2;
      }
    }
    DXGIFactory1 = ((__int64 (__fastcall *)(IDXGIAdapter *, _BYTE *))v45->lpVtbl[1].QueryInterface)(v45, v148);
    if ( DXGIFactory1 < 0 )
      goto LABEL_240;
    v48 = *v11;
    if ( *v11 )
    {
      *v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    v49 = *v139;
    if ( *v139 )
    {
      *v139 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    }
    v140 = 0LL;
    v153[0] = 0LL;
    v50 = (D3D_FEATURE_LEVEL *)sub_1800F40A8((__int64)v23);
    DXGIFactory1 = sub_1800F56BC(*a2, D3D_DRIVER_TYPE_UNKNOWN, v50, v51, v135, &v140, v136, v153);
    if ( DXGIFactory1 < 0 )
    {
      v55 = *a2;
      if ( *a2 )
      {
        *a2 = 0LL;
        ((void (__fastcall *)(IDXGIAdapter *))v55->lpVtbl->Release)(v55);
      }
      v56 = *v11;
      if ( *v11 )
      {
        *v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      }
      v57 = *v139;
      if ( *v139 )
      {
        *v139 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      }
      v58 = v153[0];
      if ( v153[0] )
      {
        v153[0] = 0LL;
        ((void (__fastcall *)(ID3D11DeviceContext *))v58->lpVtbl->Release)(v58);
      }
      v54 = v140;
      if ( v140 )
        goto LABEL_103;
      goto LABEL_104;
    }
    if ( v136[0] < a8 )
    {
      v52 = v153[0];
      if ( v153[0] )
      {
        v153[0] = 0LL;
        ((void (__fastcall *)(ID3D11DeviceContext *))v52->lpVtbl->Release)(v52);
      }
      goto LABEL_92;
    }
    if ( (_BYTE)v142 )
    {
      if ( v136[0] < D3D_FEATURE_LEVEL_11_0 )
      {
        LODWORD(v137) = 0;
        if ( ((int (__fastcall *)(ID3D11Device *, __int64, ID3D11Device **))v140->lpVtbl->CheckFeatureSupport)(
               v140,
               4LL,
               &v137) < 0
          || !(_DWORD)v137 )
        {
          v53 = v153[0];
          if ( v153[0] )
          {
            v153[0] = 0LL;
            ((void (__fastcall *)(ID3D11DeviceContext *))v53->lpVtbl->Release)(v53);
          }
LABEL_92:
          v54 = v140;
          if ( v140 )
          {
LABEL_103:
            v140 = 0LL;
            ((void (__fastcall *)(ID3D11Device *))v54->lpVtbl->Release)(v54);
          }
LABEL_104:
          Release = v44->Release;
          if ( *((_BYTE *)Release + 25) )
          {
            for ( j = v44->AddRef;
                  !*((_BYTE *)j + 25) && v44 == *((struct ID3D11DeviceContextVtbl **)j + 2);
                  j = (ULONG (__stdcall *)(ID3D11DeviceContext *))*((_QWORD *)j + 1) )
            {
              v44 = (struct ID3D11DeviceContextVtbl *)j;
            }
            v44 = (struct ID3D11DeviceContextVtbl *)j;
          }
          else
          {
            v44 = (struct ID3D11DeviceContextVtbl *)v44->Release;
            v61 = *(struct ID3D11DeviceContextVtbl **)Release;
            if ( !*(_BYTE *)(*(_QWORD *)Release + 25LL) )
            {
              do
              {
                v44 = v61;
                v61 = (struct ID3D11DeviceContextVtbl *)v61->QueryInterface;
              }
              while ( !BYTE1(v61->GetDevice) );
            }
          }
          continue;
        }
      }
    }
    break;
  }
  v62 = v140;
  QueryInterface = v140->lpVtbl->QueryInterface;
  v64 = *v11;
  if ( *v11 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
  }
  DXGIFactory1 = ((__int64 (__fastcall *)(ID3D11Device *, void *, __int64 *))QueryInterface)(v62, &unk_180128838, v11);
  if ( DXGIFactory1 < 0 )
  {
    v72 = v153[0];
    if ( v153[0] )
    {
      v153[0] = 0LL;
      ((void (__fastcall *)(ID3D11DeviceContext *))v72->lpVtbl->Release)(v72);
    }
    v73 = v140;
    if ( v140 )
    {
      v140 = 0LL;
      ((void (__fastcall *)(ID3D11Device *))v73->lpVtbl->Release)(v73);
    }
    goto LABEL_240;
  }
  v65 = v153[0];
  v66 = v153[0]->lpVtbl->QueryInterface;
  v10 = v139;
  v67 = *v139;
  if ( *v139 )
  {
    *v139 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
  }
  DXGIFactory1 = ((__int64 (__fastcall *)(ID3D11DeviceContext *, void *, __int64 *))v66)(v65, &unk_1801BCE18, v10);
  if ( DXGIFactory1 < 0 )
  {
    v70 = v153[0];
    if ( v153[0] )
    {
      v153[0] = 0LL;
      ((void (__fastcall *)(ID3D11DeviceContext *))v70->lpVtbl->Release)(v70);
    }
    v71 = v140;
    if ( v140 )
    {
      v140 = 0LL;
      ((void (__fastcall *)(ID3D11Device *))v71->lpVtbl->Release)(v71);
    }
    goto LABEL_241;
  }
  v68 = v153[0];
  if ( v153[0] )
  {
    v153[0] = 0LL;
    ((void (__fastcall *)(ID3D11DeviceContext *))v68->lpVtbl->Release)(v68);
  }
  v69 = v140;
  if ( v140 )
  {
    v140 = 0LL;
    ((void (__fastcall *)(ID3D11Device *))v69->lpVtbl->Release)(v69);
  }
LABEL_135:
  if ( v158 || *a2 && *v11 && *v10 )
    goto LABEL_232;
  *((_QWORD *)&v145 + 1) = v23;
  if ( v23 == v19 )
  {
    v74 = (v19 - v23) >> 2;
    if ( v74 <= 0x3FFFFFFFFFFFFFFFLL - (v74 >> 1) )
    {
      v76 = v74 + (v74 >> 1);
      v75 = 1LL;
      if ( v76 )
      {
        v75 = v74 + (v74 >> 1);
        if ( v76 > 0x3FFFFFFFFFFFFFFFLL )
          sub_1800120D4();
      }
    }
    else
    {
      v75 = 0x3FFFFFFFFFFFFFFFLL;
    }
    v77 = 4 * v75;
    v78 = (char *)sub_180011088(4 * v75);
    *(_DWORD *)v78 = 40960;
    sub_1800F40B4(v23, (__int64)v23, v78);
    if ( v23 )
      sub_180010884(v23, 4 * v74);
    v23 = v78;
    *(_QWORD *)&v145 = v78;
    v25 = v78 + 4;
    v19 = &v78[v77];
    v146 = &v78[v77];
  }
  else
  {
    *(_DWORD *)v23 = 40960;
    v25 = v23 + 4;
  }
  *((_QWORD *)&v145 + 1) = v25;
  v79 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    ((void (__fastcall *)(IDXGIAdapter *))v79->lpVtbl->Release)(v79);
  }
  v80 = *v11;
  if ( *v11 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
  }
  v81 = *v139;
  if ( *v139 )
  {
    *v139 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
  }
LABEL_154:
  v137 = 0LL;
  *(_QWORD *)v136 = 0LL;
  v82 = (D3D_FEATURE_LEVEL *)sub_1800F40A8((__int64)v23);
  DXGIFactory1 = sub_1800F56BC(
                   0LL,
                   D3D_DRIVER_TYPE_WARP,
                   v82,
                   (v25 - v23) >> 2,
                   v135,
                   &v137,
                   &v142,
                   (ID3D11DeviceContext **)v136);
  if ( DXGIFactory1 < 0 )
  {
    v83 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v136;
    if ( *(_QWORD *)v136 )
    {
      *(_QWORD *)v136 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v83)[2])(v83);
    }
    v84 = v137;
    if ( v137 )
    {
      v137 = 0LL;
      ((void (__fastcall *)(ID3D11Device *))v84->lpVtbl->Release)(v84);
    }
    goto LABEL_240;
  }
  v138 = 0LL;
  DXGIFactory1 = ((__int64 (__fastcall *)(ID3D11Device *, void *, __int64 *))v137->lpVtbl->QueryInterface)(
                   v137,
                   &unk_180128880,
                   &v138);
  if ( DXGIFactory1 < 0 )
  {
    v85 = v138;
    if ( v138 )
    {
      v138 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 16LL))(v85);
    }
    v86 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v136;
    if ( *(_QWORD *)v136 )
    {
      *(_QWORD *)v136 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v86)[2])(v86);
    }
    v87 = v137;
    if ( v137 )
    {
      v137 = 0LL;
      ((void (__fastcall *)(ID3D11Device *))v87->lpVtbl->Release)(v87);
    }
    goto LABEL_240;
  }
  v153[0] = 0LL;
  DXGIFactory1 = (*(__int64 (__fastcall **)(__int64, ID3D11DeviceContext **))(*(_QWORD *)v138 + 56LL))(v138, v153);
  if ( DXGIFactory1 < 0 )
  {
    v88 = v153[0];
    if ( v153[0] )
    {
      v153[0] = 0LL;
      ((void (__fastcall *)(ID3D11DeviceContext *))v88->lpVtbl->Release)(v88);
    }
    v89 = v138;
    if ( v138 )
    {
      v138 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 16LL))(v89);
    }
    v90 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v136;
    if ( *(_QWORD *)v136 )
    {
      *(_QWORD *)v136 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v90)[2])(v90);
    }
    v91 = v137;
    if ( v137 )
    {
      v137 = 0LL;
      ((void (__fastcall *)(ID3D11Device *))v91->lpVtbl->Release)(v91);
    }
    goto LABEL_240;
  }
  v92 = v153[0];
  v93 = v153[0]->lpVtbl->QueryInterface;
  v94 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    ((void (__fastcall *)(IDXGIAdapter *))v94->lpVtbl->Release)(v94);
  }
  DXGIFactory1 = ((__int64 (__fastcall *)(ID3D11DeviceContext *, void *, IDXGIAdapter **))v93)(v92, &unk_1801BB800, a2);
  if ( DXGIFactory1 < 0 )
  {
    v95 = v153[0];
    if ( v153[0] )
    {
      v153[0] = 0LL;
      ((void (__fastcall *)(ID3D11DeviceContext *))v95->lpVtbl->Release)(v95);
    }
    v96 = v138;
    if ( v138 )
    {
      v138 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96);
    }
    v97 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v136;
    if ( *(_QWORD *)v136 )
    {
      *(_QWORD *)v136 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v97)[2])(v97);
    }
    v98 = v137;
    if ( v137 )
    {
      v137 = 0LL;
      ((void (__fastcall *)(ID3D11Device *))v98->lpVtbl->Release)(v98);
    }
    goto LABEL_240;
  }
  v99 = v137;
  v100 = v137->lpVtbl->QueryInterface;
  v101 = *v11;
  if ( *v11 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v101 + 16LL))(v101);
  }
  DXGIFactory1 = ((__int64 (__fastcall *)(ID3D11Device *, void *, __int64 *))v100)(v99, &unk_180128838, v11);
  if ( DXGIFactory1 < 0 )
  {
    v102 = v153[0];
    if ( v153[0] )
    {
      v153[0] = 0LL;
      ((void (__fastcall *)(ID3D11DeviceContext *))v102->lpVtbl->Release)(v102);
    }
    v103 = v138;
    if ( v138 )
    {
      v138 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
    }
    v104 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v136;
    if ( *(_QWORD *)v136 )
    {
      *(_QWORD *)v136 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v104)[2])(v104);
    }
    v105 = v137;
    if ( v137 )
    {
      v137 = 0LL;
      ((void (__fastcall *)(ID3D11Device *))v105->lpVtbl->Release)(v105);
    }
    goto LABEL_240;
  }
  v106 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v136;
  v107 = ***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v136;
  v10 = v139;
  v108 = *v139;
  if ( *v139 )
  {
    *v139 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v108 + 16LL))(v108);
  }
  DXGIFactory1 = v107(v106, &unk_1801BCE18, v10);
  if ( DXGIFactory1 < 0 )
  {
    v109 = v153[0];
    if ( v153[0] )
    {
      v153[0] = 0LL;
      ((void (__fastcall *)(ID3D11DeviceContext *))v109->lpVtbl->Release)(v109);
    }
    v110 = v138;
    if ( v138 )
    {
      v138 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v110 + 16LL))(v110);
    }
    v111 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v136;
    if ( *(_QWORD *)v136 )
    {
      *(_QWORD *)v136 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v111)[2])(v111);
    }
    v112 = v137;
    if ( v137 )
    {
      v137 = 0LL;
      ((void (__fastcall *)(ID3D11Device *))v112->lpVtbl->Release)(v112);
    }
    goto LABEL_241;
  }
  DXGIFactory1 = ((__int64 (__fastcall *)(IDXGIAdapter *, _BYTE *))(*a2)->lpVtbl[1].QueryInterface)(*a2, v148);
  if ( DXGIFactory1 >= 0 )
  {
    v117 = v153[0];
    if ( v153[0] )
    {
      v153[0] = 0LL;
      ((void (__fastcall *)(ID3D11DeviceContext *))v117->lpVtbl->Release)(v117);
    }
    v118 = v138;
    if ( v138 )
    {
      v138 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v118 + 16LL))(v118);
    }
    v119 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v136;
    if ( *(_QWORD *)v136 )
    {
      *(_QWORD *)v136 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v119)[2])(v119);
    }
    v120 = v137;
    if ( v137 )
    {
      v137 = 0LL;
      ((void (__fastcall *)(ID3D11Device *))v120->lpVtbl->Release)(v120);
    }
LABEL_232:
    v121 = *a2;
    if ( *a2 && *v11 && *v139 )
    {
      memset(String, 0, sizeof(String));
      v122 = dword_1801F7EA0++;
      v133 = v122;
      sub_1800F40F4();
      v123 = v121->lpVtbl->SetPrivateData;
      v124 = strnlen(String, 0x7FFFFFFFuLL);
      ((void (__fastcall *)(IDXGIAdapter *, void *, _QWORD, char *, int))v123)(v121, &unk_180127F58, v124, String, v133);
      v125 = *v11;
      if ( *v11 )
      {
        memset(String, 0, sizeof(String));
        v126 = dword_1801F7EA0++;
        v134 = v126;
        sub_1800F40F4();
        v127 = *(void (__fastcall **)(__int64, void *, _QWORD, char *, int))(*(_QWORD *)v125 + 280LL);
        v128 = strnlen(String, 0x7FFFFFFFuLL);
        v127(v125, &unk_180127F58, v128, String, v134);
      }
      if ( DXGIFactory1 < 0 )
      {
LABEL_240:
        v10 = v139;
        goto LABEL_241;
      }
      goto LABEL_247;
    }
LABEL_32:
    DXGIFactory1 = -2147467259;
    goto LABEL_240;
  }
  v113 = v153[0];
  if ( v153[0] )
  {
    v153[0] = 0LL;
    ((void (__fastcall *)(ID3D11DeviceContext *))v113->lpVtbl->Release)(v113);
  }
  v114 = v138;
  if ( v138 )
  {
    v138 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v114 + 16LL))(v114);
  }
  v115 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v136;
  if ( *(_QWORD *)v136 )
  {
    *(_QWORD *)v136 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v115)[2])(v115);
  }
  v116 = v137;
  if ( v137 )
  {
    v137 = 0LL;
    ((void (__fastcall *)(ID3D11Device *))v116->lpVtbl->Release)(v116);
  }
LABEL_241:
  v129 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    ((void (__fastcall *)(IDXGIAdapter *))v129->lpVtbl->Release)(v129);
  }
  v130 = *v11;
  if ( *v11 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v130 + 16LL))(v130);
  }
  v131 = *v10;
  if ( *v10 )
  {
    *v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v131 + 16LL))(v131);
  }
LABEL_247:
  if ( v23 )
    sub_180010884(v23, 4 * ((v19 - v23) >> 2));
  sub_1800F3F7C((__int64 *)&v143, (__int64)&v143);
  return (unsigned int)DXGIFactory1;
}
