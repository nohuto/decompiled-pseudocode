/*
 * XREFs of ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C00C03C0
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00793CC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     <none>
 */

struct _devicemodeW *__fastcall GetClosestMode(struct tagGRAPHICS_DEVICE *a1, struct _devicemodeW *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  _DWORD *v6; // rdx
  _DWORD *v7; // r10
  struct tagGRAPHICS_DEVICE *v8; // r8
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  unsigned int v11; // r13d
  unsigned int v12; // r9d
  unsigned int v13; // r12d
  DWORD dmFields; // eax
  int v15; // edi
  unsigned int v16; // ebp
  unsigned int v17; // eax
  unsigned int v18; // ecx
  bool v19; // cf
  __int64 v21; // rsi
  unsigned int v22; // ecx
  __int64 v23; // r8
  unsigned int v24; // eax
  DWORD dmPelsWidth; // edi
  DWORD dmPelsHeight; // r9d
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // ecx
  DWORD v30; // edx
  unsigned int v31; // eax
  int v32; // ebp
  DWORD dmDisplayFixedOutput; // esi
  unsigned int v34; // r9d
  unsigned int v35; // ecx
  DWORD v36; // edx
  unsigned int v37; // r8d
  unsigned int v38; // ecx
  unsigned int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // edx
  DWORD dmBitsPerPel; // edx
  unsigned int v43; // ecx
  unsigned int v44; // esi
  unsigned int v45; // ecx
  DWORD dmDisplayFrequency; // edx
  unsigned int v47; // ecx
  unsigned int v48; // esi
  int v49; // [rsp+0h] [rbp-68h]
  int v50; // [rsp+4h] [rbp-64h]
  unsigned int v51; // [rsp+8h] [rbp-60h]
  unsigned int v52; // [rsp+Ch] [rbp-5Ch]
  __int64 v53; // [rsp+10h] [rbp-58h]
  _DWORD *v54; // [rsp+18h] [rbp-50h]
  unsigned int v56; // [rsp+78h] [rbp+10h]

  v4 = -1;
  v6 = 0LL;
  v49 = -1;
  v7 = 0LL;
  v54 = 0LL;
  v8 = a1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  if ( !a2->dmDisplayFrequency )
    a2->dmDisplayFrequency = 60;
  if ( !a2->dmBitsPerPel )
    a2->dmBitsPerPel = 32;
  dmFields = a2->dmFields;
  v15 = dmFields & 0x80;
  v50 = v15;
  if ( (dmFields & 0x80) == 0 )
    a2->dmDisplayOrientation = 0;
  if ( (dmFields & 0x20000000) == 0 )
    a2->dmDisplayFixedOutput = 0;
  v16 = 0;
  v51 = 0;
  do
  {
    if ( v6 && !v12 )
    {
      v17 = v6[43];
      v18 = v6[44];
      if ( v17 < v18 )
      {
        if ( v17 >= 0x1E0 )
        {
          v19 = v18 < 0x280;
          goto LABEL_15;
        }
      }
      else if ( v17 >= 0x280 )
      {
        v19 = v18 < 0x1E0;
LABEL_15:
        if ( !v19 && v6[46] >= 0x3Cu )
          return (struct _devicemodeW *)v6;
      }
    }
    v52 = 0;
    v56 = *((_DWORD *)v8 + 47);
    if ( !v56 )
      goto LABEL_51;
    v21 = 0LL;
    v22 = *((_DWORD *)v8 + 47);
    v53 = 0LL;
    while ( 1 )
    {
      if ( a3 && *(_DWORD *)(v21 + *((_QWORD *)v8 + 24)) )
        goto LABEL_86;
      v23 = *(_QWORD *)(v21 + *((_QWORD *)v8 + 24) + 8);
      if ( !a4 || ((LOBYTE(a2->dmDisplayFlags) ^ *(_BYTE *)(v23 + 180)) & 2) == 0 )
      {
        if ( !v15 )
          goto LABEL_27;
        v24 = dwOrientationDiffTable[4 * *(unsigned int *)(v23 + 84) + a2->dmDisplayOrientation];
        if ( v12 >= v24 )
          break;
      }
LABEL_85:
      v8 = a1;
      v22 = v56;
LABEL_86:
      v21 += 16LL;
      v16 = v51;
      ++v52;
      v53 = v21;
      if ( v52 >= v22 )
        goto LABEL_50;
    }
    if ( v12 > v24 )
      v7 = (_DWORD *)v23;
LABEL_27:
    dmPelsWidth = a2->dmPelsWidth;
    if ( dmPelsWidth && v7 != (_DWORD *)v23 )
    {
      v38 = *(_DWORD *)(v23 + 172);
      v39 = dmPelsWidth - v38;
      if ( dmPelsWidth < v38 )
        v39 = *(_DWORD *)(v23 + 172) - dmPelsWidth;
      if ( v9 < v39 )
        goto LABEL_84;
      if ( v9 > v39 )
        v7 = (_DWORD *)v23;
    }
    dmPelsHeight = a2->dmPelsHeight;
    if ( dmPelsHeight )
    {
      if ( v7 != (_DWORD *)v23 )
      {
        v40 = *(_DWORD *)(v23 + 176);
        v41 = dmPelsHeight - v40;
        if ( dmPelsHeight < v40 )
          v41 = *(_DWORD *)(v23 + 176) - dmPelsHeight;
        if ( v10 < v41 )
          goto LABEL_83;
        if ( v10 <= v41 )
        {
LABEL_70:
          dmBitsPerPel = a2->dmBitsPerPel;
          v43 = *(_DWORD *)(v23 + 168);
          v44 = dmBitsPerPel - v43;
          if ( dmBitsPerPel < v43 )
            v44 = *(_DWORD *)(v23 + 168) - dmBitsPerPel;
          if ( v4 < v44 )
            goto LABEL_53;
          if ( v4 <= v44 )
          {
            v45 = a2->dmDisplayFixedOutput != *(_DWORD *)(v23 + 88);
            if ( v13 < v45 )
              goto LABEL_53;
            if ( v13 <= v45 )
            {
              dmDisplayFrequency = a2->dmDisplayFrequency;
              v47 = *(_DWORD *)(v23 + 184);
              v48 = dmDisplayFrequency - v47;
              if ( dmDisplayFrequency < v47 )
                v48 = *(_DWORD *)(v23 + 184) - dmDisplayFrequency;
              if ( v11 <= v48 )
                goto LABEL_53;
            }
            v16 = v51;
          }
          v21 = v53;
        }
        v7 = (_DWORD *)v23;
      }
    }
    else if ( v7 != (_DWORD *)v23 )
    {
      goto LABEL_70;
    }
    if ( !v7
      || !v16
      && (v7[43] > dmPelsWidth && dmPelsWidth || v7[44] > dmPelsHeight && dmPelsHeight
                                              || v7[46] > a2->dmDisplayFrequency) )
    {
      goto LABEL_83;
    }
    v54 = v7;
    v49 = dwOrientationDiffTable[4 * *(unsigned int *)(v23 + 84) + a2->dmDisplayOrientation];
    v27 = *(_DWORD *)(v23 + 172);
    if ( dmPelsWidth < v27 )
      v9 = v27 - dmPelsWidth;
    else
      v9 = dmPelsWidth - v27;
    v28 = *(_DWORD *)(v23 + 176);
    if ( dmPelsHeight < v28 )
      v10 = v28 - dmPelsHeight;
    else
      v10 = dmPelsHeight - v28;
    v29 = *(_DWORD *)(v23 + 168);
    v30 = a2->dmBitsPerPel;
    v31 = v29 - v30;
    v32 = *(_DWORD *)(v23 + 88);
    dmDisplayFixedOutput = a2->dmDisplayFixedOutput;
    v34 = v30 - v29;
    v19 = v30 < v29;
    v35 = *(_DWORD *)(v23 + 184);
    v36 = a2->dmDisplayFrequency;
    if ( v19 )
      v34 = v31;
    v4 = v34;
    v37 = a2->dmDisplayFrequency - v35;
    v13 = dmDisplayFixedOutput != v32;
    if ( v36 < v35 )
      v37 = v35 - v36;
    v11 = v37;
    if ( v49 || v34 || v9 || v10 || dmDisplayFixedOutput != v32 || v37 )
    {
LABEL_53:
      v21 = v53;
LABEL_83:
      v12 = v49;
LABEL_84:
      v15 = v50;
      goto LABEL_85;
    }
LABEL_50:
    v6 = v54;
    v16 = v51;
    v12 = v49;
    v15 = v50;
    v8 = a1;
LABEL_51:
    v51 = ++v16;
  }
  while ( v16 < 2 );
  return (struct _devicemodeW *)v6;
}
