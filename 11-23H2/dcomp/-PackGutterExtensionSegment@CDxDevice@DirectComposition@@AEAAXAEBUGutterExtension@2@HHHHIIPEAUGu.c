/*
 * XREFs of ?PackGutterExtensionSegment@CDxDevice@DirectComposition@@AEAAXAEBUGutterExtension@2@HHHHIIPEAUGutterExtensionVertex@12@1PEAUtagRECT@@@Z @ 0x180023670
 * Callers:
 *     ?ExecuteGutterExtensions@CDxDevice@DirectComposition@@QEAAJAEBV?$DynArray@UGutterExtension@DirectComposition@@$0A@@@PEAUID3D11ShaderResourceView@@PEAUID3D11RenderTargetView@@IIW4DXGI_FORMAT@@@Z @ 0x1800233F0 (-ExecuteGutterExtensions@CDxDevice@DirectComposition@@QEAAJAEBV-$DynArray@UGutterExtension@Direc.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CDxDevice::PackGutterExtensionSegment(
        DirectComposition::CDxDevice *this,
        const struct DirectComposition::GutterExtension *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        signed int a7,
        signed int a8,
        struct DirectComposition::CDxDevice::GutterExtensionVertex *a9,
        struct DirectComposition::CDxDevice::GutterExtensionVertex *a10,
        struct tagRECT *a11)
{
  int v14; // edx
  bool v15; // zf
  float *v16; // r15
  float *v17; // rbp
  int v18; // esi
  float v19; // xmm3_4
  float v20; // xmm6_4
  float v21; // xmm2_4
  float v22; // xmm7_4
  int v23; // eax
  int v24; // edx
  int v25; // r8d
  int v26; // eax
  int v27; // r9d
  LONG left; // ecx
  int top; // ecx
  int bottom; // ecx
  LONG right; // eax
  int v32; // eax
  int v33; // ecx
  float v34; // xmm2_4
  int v35; // r10d
  int v36; // r11d
  LONG v37; // ecx
  int v38; // ecx
  LONG v39; // eax
  LONG v40; // eax
  int v41; // edx
  int v42; // ecx
  float v43; // xmm2_4
  float v44; // xmm3_4
  int v45; // r8d
  int v46; // r9d
  LONG v47; // eax
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // edx
  int v52; // r8d
  int v53; // eax
  int v54; // r9d
  LONG v55; // ecx
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // r8d
  int v60; // ecx
  float v61; // xmm2_4
  int v62; // r9d
  int v63; // r11d
  LONG v64; // ecx
  int v65; // ecx
  int v66; // ecx
  LONG v67; // eax
  int v68; // edx
  int v69; // ecx
  float v70; // xmm2_4
  float v71; // xmm3_4
  LONG v72; // ecx
  LONG v73; // eax

  v14 = *((_DWORD *)a2 + 1);
  v15 = *((_BYTE *)a2 + 12) == 0;
  v16 = (float *)((char *)a9 + 16);
  v17 = (float *)((char *)a10 + 16);
  v18 = 2 * a6;
  v19 = (float)(2 * a5) * 0.015625;
  v20 = (float)a7;
  v21 = (float)(2 * a6) / 320.0;
  v22 = (float)a8;
  v23 = *(_DWORD *)a2;
  *((float *)a9 + 1) = v21;
  *(float *)a9 = v19;
  if ( v15 )
  {
    v24 = 2 * v14;
    *((float *)a9 + 2) = (float)(2 * (v23 + a3)) / v20;
    *((float *)a9 + 3) = (float)v24 / v22;
    v25 = 2 * (v23 + a3) + 2 * *((_DWORD *)a2 + 4);
    v26 = *((_DWORD *)a2 + 5);
    *((float *)a10 + 3) = v21;
    *((float *)a10 + 2) = v19;
    v27 = v24 + 2 * v26;
    *(float *)a10 = (float)v25 / v20;
    *((float *)a10 + 1) = (float)v27 / v22;
    left = a11->left;
    if ( a11->left >= v25 / 2 )
      left = v25 / 2;
    a11->left = left;
    top = a11->top;
    if ( top >= v27 / 2 )
      top = v27 / 2;
    a11->top = top;
    bottom = a11->bottom;
    right = (v25 + 1) / 2;
    if ( a11->right > right )
      right = a11->right;
    a11->right = right;
    if ( bottom <= (v27 + 1) / 2 )
      bottom = (v27 + 1) / 2;
    a11->bottom = bottom;
    v32 = *((_DWORD *)a2 + 1);
    v33 = a3 + *(_DWORD *)a2;
    *v16 = v19;
    v33 *= 2;
    *((float *)a9 + 6) = (float)v33 / v20;
    v34 = (float)(v18 + 2) / 320.0;
    *((float *)a9 + 5) = v34;
    *((float *)a9 + 7) = (float)(2 * v32 + 2) / v22;
    v35 = v33 + 2 * *((_DWORD *)a2 + 4);
    v36 = 2 * v32 + 2 + 2 * *((_DWORD *)a2 + 5);
    *((float *)a10 + 6) = v19;
    *((float *)a10 + 7) = v34;
    *v17 = (float)v35 / v20;
    *((float *)a10 + 5) = (float)v36 / v22;
    v37 = a11->left;
    if ( a11->left >= v35 / 2 )
      v37 = v35 / 2;
    a11->left = v37;
    v38 = a11->bottom;
    v39 = v36 / 2;
    if ( a11->top < v36 / 2 )
      v39 = a11->top;
    a11->top = v39;
    v40 = (v35 + 1) / 2;
    if ( a11->right > v40 )
      v40 = a11->right;
    a11->right = v40;
    if ( v38 <= (v36 + 1) / 2 )
      v38 = (v36 + 1) / 2;
    a11->bottom = v38;
    v41 = 2 * *((_DWORD *)a2 + 1) + 1;
    v42 = 2 * (a4 + a3 + *(_DWORD *)a2);
    *((float *)a9 + 11) = (float)v41 / v22;
    v43 = (float)(v18 + 1) / 320.0;
    *((float *)a9 + 10) = (float)v42 / v20;
    *((float *)a9 + 9) = v43;
    v44 = (float)(2 * (a5 + a4)) * 0.015625;
    *((float *)a9 + 8) = v44;
    v45 = v42 + 2 * *((_DWORD *)a2 + 4);
    v46 = v41 + 2 * *((_DWORD *)a2 + 5);
    *((float *)a10 + 10) = v44;
    v47 = v45 / 2;
    *((float *)a10 + 8) = (float)v45 / v20;
    *((float *)a10 + 9) = (float)v46 / v22;
    *((float *)a10 + 11) = v43;
    v48 = a11->top;
    if ( a11->left < v45 / 2 )
      v47 = a11->left;
    a11->left = v47;
    if ( v48 >= v46 / 2 )
      v48 = v46 / 2;
    a11->top = v48;
  }
  else
  {
    v51 = 2 * (a3 + v14);
    *((float *)a9 + 2) = (float)(2 * v23 + 2) / v20;
    *((float *)a9 + 3) = (float)v51 / v22;
    v52 = 2 * v23 + 2 + 2 * *((_DWORD *)a2 + 4);
    v53 = *((_DWORD *)a2 + 5);
    *((float *)a10 + 3) = v21;
    *((float *)a10 + 2) = v19;
    v54 = v51 + 2 * v53;
    *(float *)a10 = (float)v52 / v20;
    *((float *)a10 + 1) = (float)v54 / v22;
    v55 = a11->left;
    if ( a11->left >= v52 / 2 )
      v55 = v52 / 2;
    a11->left = v55;
    v56 = a11->top;
    if ( v56 >= v54 / 2 )
      v56 = v54 / 2;
    a11->top = v56;
    v57 = a11->right;
    if ( v57 <= (v52 + 1) / 2 )
      v57 = (v52 + 1) / 2;
    a11->right = v57;
    v58 = a11->bottom;
    if ( v58 <= (v54 + 1) / 2 )
      v58 = (v54 + 1) / 2;
    a11->bottom = v58;
    v59 = 2 * (a3 + *((_DWORD *)a2 + 1));
    v60 = 2 * *(_DWORD *)a2;
    *v16 = v19;
    *((float *)a9 + 6) = (float)v60 / v20;
    v61 = (float)(v18 + 2) / 320.0;
    *((float *)a9 + 5) = v61;
    *((float *)a9 + 7) = (float)v59 / v22;
    v62 = v60 + 2 * *((_DWORD *)a2 + 4);
    v63 = v59 + 2 * *((_DWORD *)a2 + 5);
    *((float *)a10 + 6) = v19;
    *((float *)a10 + 7) = v61;
    *((float *)a10 + 5) = (float)v63 / v22;
    *v17 = (float)v62 / v20;
    v64 = a11->left;
    if ( a11->left >= v62 / 2 )
      v64 = v62 / 2;
    a11->left = v64;
    v65 = a11->top;
    if ( v65 >= v63 / 2 )
      v65 = v63 / 2;
    a11->top = v65;
    v66 = a11->bottom;
    v67 = (v62 + 1) / 2;
    if ( a11->right > v67 )
      v67 = a11->right;
    a11->right = v67;
    if ( v66 <= (v63 + 1) / 2 )
      v66 = (v63 + 1) / 2;
    a11->bottom = v66;
    v68 = 2 * (*((_DWORD *)a2 + 1) + a3 + a4);
    v69 = 2 * *(_DWORD *)a2 + 1;
    *((float *)a9 + 11) = (float)v68 / v22;
    *((float *)a9 + 10) = (float)v69 / v20;
    v70 = (float)(v18 + 1) / 320.0;
    v71 = (float)(2 * (a5 + a4)) * 0.015625;
    *((float *)a9 + 9) = v70;
    *((float *)a9 + 8) = v71;
    v45 = v69 + 2 * *((_DWORD *)a2 + 4);
    v46 = v68 + 2 * *((_DWORD *)a2 + 5);
    *((float *)a10 + 10) = v71;
    *((float *)a10 + 8) = (float)v45 / v20;
    *((float *)a10 + 9) = (float)v46 / v22;
    *((float *)a10 + 11) = v70;
    v72 = a11->left;
    if ( a11->left >= v45 / 2 )
      v72 = v45 / 2;
    a11->left = v72;
    v73 = v46 / 2;
    if ( a11->top < v46 / 2 )
      v73 = a11->top;
    a11->top = v73;
  }
  v49 = a11->right;
  if ( v49 <= (v45 + 1) / 2 )
    v49 = (v45 + 1) / 2;
  a11->right = v49;
  v50 = a11->bottom;
  if ( v50 <= (v46 + 1) / 2 )
    v50 = (v46 + 1) / 2;
  a11->bottom = v50;
}
