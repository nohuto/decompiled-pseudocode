/*
 * XREFs of ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18004FBF0
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x18004F984 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z @ 0x180050300 (-SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z.c)
 *     ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x18005036C (-GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z.c)
 *     ?GetThemePercentage@@YAJPEAXHHHPEAM@Z @ 0x180050624 (-GetThemePercentage@@YAJPEAXHHHPEAM@Z.c)
 *     ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x180050684 (-CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180050A64 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180050FB0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHelper(
        void *a1,
        const int *a2,
        int *a3,
        struct CTopLevelWindow::WindowFrame *a4,
        struct CTopLevelWindow::WindowFrame *a5)
{
  int v6; // r8d
  void *v9; // rsi
  HRESULT ThemeMargins; // eax
  unsigned int v11; // ebx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // r9d
  int v17; // r9d
  __int64 v18; // rdx
  unsigned int v19; // r12d
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // edx
  struct CBitmapSource *v26; // rax
  CBaseObject **v27; // r12
  int v28; // r8d
  int *v29; // rdx
  _QWORD *v30; // rcx
  int v31; // edx
  int v32; // eax
  __int64 v34; // rsi
  __int64 i; // rbx
  CBaseObject *v36; // rcx
  unsigned int iPropId; // [rsp+20h] [rbp-E0h]
  unsigned int cxLeftWidth; // [rsp+40h] [rbp-C0h]
  int v39; // [rsp+40h] [rbp-C0h]
  struct CBitmapSource *v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B0h]
  struct _MARGINS v42; // [rsp+60h] [rbp-A0h]
  struct _MARGINS v43; // [rsp+70h] [rbp-90h]
  struct _MARGINS v44; // [rsp+80h] [rbp-80h]
  struct _MARGINS v45; // [rsp+90h] [rbp-70h] BYREF
  struct _MARGINS v46; // [rsp+A0h] [rbp-60h]
  void *v47; // [rsp+B0h] [rbp-50h]
  struct _MARGINS v48; // [rsp+C0h] [rbp-40h] BYREF
  struct _MARGINS v49; // [rsp+D0h] [rbp-30h] BYREF
  struct _MARGINS v50; // [rsp+E0h] [rbp-20h] BYREF
  struct _MARGINS v51; // [rsp+F0h] [rbp-10h] BYREF
  struct _MARGINS v52; // [rsp+100h] [rbp+0h] BYREF
  struct _MARGINS v53; // [rsp+110h] [rbp+10h] BYREF
  struct _MARGINS v54; // [rsp+120h] [rbp+20h] BYREF
  MARGINS pMargins; // [rsp+130h] [rbp+30h] BYREF
  struct _MARGINS v56; // [rsp+140h] [rbp+40h] BYREF

  v6 = a2[1];
  v47 = a1;
  v9 = a1;
  ThemeMargins = GetThemeMargins(a1, 0LL, v6, 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1050;
LABEL_55:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A4A8, 1LL, ThemeMargins, iPropId);
    return v11;
  }
  cxLeftWidth = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v9, a2[3], 2u, &pMargins, &v40);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1062;
    goto LABEL_55;
  }
  v12 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 191) = v40;
  *((_QWORD *)a5 + 191) = v41;
  v13 = a2[4];
  *(_QWORD *)&v44.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v12);
  *(_QWORD *)&v42.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v12);
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v9, v13, 2u, &pMargins, &v40);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1071;
    goto LABEL_55;
  }
  v14 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 193) = v40;
  *((_QWORD *)a5 + 193) = v41;
  v15 = *((unsigned int *)a2 + 1);
  *(_QWORD *)&v43.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v14);
  *(_QWORD *)&v46.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v14);
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v9, v15, cxLeftWidth, 0LL, 1, 2, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1089;
    goto LABEL_55;
  }
  ThemeMargins = GetThemePercentage(v9, a2[1], *a3, v16, (float *)a4 + 465);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1092;
    goto LABEL_55;
  }
  ThemeMargins = GetThemePercentage(v9, a2[1], a3[1], v17, (float *)a5 + 465);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1093;
    goto LABEL_55;
  }
  ThemeMargins = GetThemeMargins(v9, 0LL, a2[1], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1095;
    goto LABEL_55;
  }
  v48 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 1u, &v48);
  v18 = *((unsigned int *)a2 + 6);
  *(_QWORD *)&v44.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v43.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v9, v18, cxLeftWidth, 5LL, 6, 7, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1112;
    goto LABEL_55;
  }
  ThemeMargins = GetThemeMargins(v9, 0LL, a2[6], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1114;
    goto LABEL_55;
  }
  v49 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 6u, &v49);
  *(_QWORD *)&v42.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v46.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  v50 = v44;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0, &v50);
  v51 = v43;
  CTopLevelWindow::SetSizingMargins(a4, a5, 2u, &v51);
  v52 = v42;
  CTopLevelWindow::SetSizingMargins(a4, a5, 5u, &v52);
  v53 = v46;
  CTopLevelWindow::SetSizingMargins(a4, a5, 7u, &v53);
  ThemeMargins = GetThemeMargins(v9, 0LL, a2[10], 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1128;
    goto LABEL_55;
  }
  v19 = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v9, a2[12], 2u, &pMargins, &v40);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1134;
    goto LABEL_55;
  }
  v20 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 209) = v40;
  *((_QWORD *)a5 + 209) = v41;
  v21 = a2[13];
  *(_QWORD *)&v44.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v20);
  *(_QWORD *)&v42.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v20);
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v9, v21, 2u, &pMargins, &v40);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1143;
    goto LABEL_55;
  }
  v22 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 211) = v40;
  *((_QWORD *)a5 + 211) = v41;
  v23 = *((unsigned int *)a2 + 10);
  *(_QWORD *)&v43.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v22);
  *(_QWORD *)&v46.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v22);
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v9, v23, v19, 9LL, 10, 11, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1161;
    goto LABEL_55;
  }
  ThemeMargins = GetThemeMargins(v9, 0LL, a2[10], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1163;
    goto LABEL_55;
  }
  v54 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xAu, &v54);
  v24 = *((unsigned int *)a2 + 15);
  *(_QWORD *)&v44.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v43.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v9, v24, v19, 14LL, 15, 16, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1180;
    goto LABEL_55;
  }
  ThemeMargins = GetThemeMargins(v9, 0LL, a2[15], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1182;
    goto LABEL_55;
  }
  v45 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xFu, &v45);
  v25 = a2[17];
  *(_QWORD *)&v42.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v46.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::CreateBitmapFromAtlas(v9, v25, &v56, &v40);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1190;
    goto LABEL_55;
  }
  v26 = v40;
  *((_QWORD *)a4 + 219) = v40;
  *((_QWORD *)a5 + 219) = v26;
  _InterlockedAdd((volatile signed __int32 *)v26 + 2, 1u);
  v45 = v56;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x11u, &v45);
  v45 = v44;
  CTopLevelWindow::SetSizingMargins(a4, a5, 9u, &v45);
  v45 = v43;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xBu, &v45);
  v45 = v42;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xEu, &v45);
  v45 = v46;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x10u, &v45);
  v27 = (CBaseObject **)((char *)a5 + 1768);
  v28 = 18;
  v29 = (int *)(a2 + 18);
  *(_QWORD *)&v44.cxLeftWidth = a4 - a5;
  v30 = (_QWORD *)((char *)a5 + 1768);
  v39 = 18;
  *(_QWORD *)&v42.cxLeftWidth = a2 + 18;
  *(_QWORD *)&v43.cxLeftWidth = (char *)a5 + 1768;
  while ( 1 )
  {
    v31 = *v29;
    if ( v31 )
      break;
LABEL_23:
    ++v28;
    v29 = (int *)(*(_QWORD *)&v42.cxLeftWidth + 4LL);
    v39 = v28;
    v30 += 2;
    *(_QWORD *)&v42.cxLeftWidth += 4LL;
    *(_QWORD *)&v43.cxLeftWidth = v30;
    if ( v28 > 21 )
      goto LABEL_24;
  }
  v32 = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v9, v31, 2u, &pMargins, &v40);
  v11 = v32;
  if ( v32 < 0 && (unsigned __int16)v32 != 1168 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A4A8, 1LL, v32, 0x4B9u);
    return v11;
  }
  if ( (unsigned __int16)v32 != 1168 )
  {
    v30 = *(_QWORD **)&v43.cxLeftWidth;
    v28 = v39;
    *(_QWORD *)(*(_QWORD *)&v44.cxLeftWidth + *(_QWORD *)&v43.cxLeftWidth) = v40;
    *v30 = v41;
    goto LABEL_23;
  }
LABEL_24:
  if ( (_WORD)v11 == 1168 )
  {
    v34 = *(_QWORD *)&v44.cxLeftWidth;
    for ( i = 18LL; i <= 21; ++i )
    {
      if ( a2[i] )
      {
        v36 = *(CBaseObject **)((char *)v27 + v34);
        if ( v36 )
        {
          CBaseObject::Release(v36);
          *(CBaseObject **)((char *)v27 + v34) = 0LL;
        }
        if ( *v27 )
        {
          CBaseObject::Release(*v27);
          *v27 = 0LL;
        }
      }
      v27 += 2;
    }
    v9 = v47;
  }
  ThemeMargins = CTopLevelWindow::CreateNCButtons(v9, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1238;
    goto LABEL_55;
  }
  return v11;
}
