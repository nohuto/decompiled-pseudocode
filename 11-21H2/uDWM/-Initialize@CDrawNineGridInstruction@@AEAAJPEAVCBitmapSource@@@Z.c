/*
 * XREFs of ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x18001B204
 * Callers:
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18001AFA8 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000DF0C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLayout@@@Z @ 0x18001B03C (-GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLay.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18001B0D4 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawNineGridInstruction::Initialize(struct _MARGINS *this, struct CBitmapSource *a2)
{
  struct _MARGINS v2; // xmm0
  unsigned int v3; // r14d
  unsigned int v6; // esi
  int v7; // ecx
  __int64 *i; // r15
  __int64 v9; // rdx
  int v10; // r12d
  __int64 v11; // rcx
  int v12; // r13d
  CDesktopManager *v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  __int64 v20; // [rsp+50h] [rbp-59h]
  __int64 v21; // [rsp+68h] [rbp-41h]
  int v22; // [rsp+70h] [rbp-39h]
  int v23; // [rsp+74h] [rbp-35h]
  unsigned __int64 v24; // [rsp+78h] [rbp-31h] BYREF
  float v25; // [rsp+80h] [rbp-29h]
  float v26; // [rsp+84h] [rbp-25h]
  struct _MARGINS v27; // [rsp+90h] [rbp-19h] BYREF
  _DWORD v28[8]; // [rsp+A0h] [rbp-9h] BYREF

  v2 = (struct _MARGINS)*((_OWORD *)a2 + 2);
  v3 = 0;
  v24 = 0LL;
  this[1] = v2;
  v6 = 0;
  this[2] = *((struct _MARGINS *)a2 + 3);
  v7 = *((_DWORD *)a2 + 20);
  v25 = *((float *)a2 + 6);
  v26 = *((float *)a2 + 7);
  if ( v7 > 0 && *((int *)a2 + 22) > 0 )
  {
    v19 = *((_DWORD *)a2 + 21);
    if ( v19 > 0 && *((int *)a2 + 23) > 0 )
      v24 = __PAIR64__(v19, v7);
  }
  v27 = v2;
  CDrawNineGridInstruction::GetNineGridLayout(&v27, (const struct MilPointAndSizeL *)&v24, (struct NineGridLayout *)v28);
  this[7].cyTopHeight = 0;
  for ( i = (__int64 *)&this[3].cxLeftWidth; ; ++i )
  {
    v9 = v3 / 3;
    v10 = v28[v9 + 4];
    v11 = v3 % 3;
    v12 = v28[(unsigned int)(v9 + 1) + 4];
    v22 = v28[v11];
    v23 = v28[(unsigned int)(v11 + 1)];
    if ( v23 - v22 <= 0 || v12 - v10 <= 0 )
    {
      *i = 0LL;
      goto LABEL_5;
    }
    v14 = CDesktopManager::s_pDesktopManagerInstance;
    ++this[7].cyTopHeight;
    v15 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(*((_QWORD *)v14 + 5), (CBaseObject **)&this[3] + v3);
    v6 = v15;
    if ( v15 < 0 )
      break;
    v21 = *((_QWORD *)a2 + 2);
    v27 = (struct _MARGINS)_xmm;
    v17 = *i;
    *(float *)&v24 = (float)v22;
    *((float *)&v24 + 1) = (float)v10;
    v26 = (float)v12;
    v25 = (float)v23;
    v18 = CImageLegacyMilBrushProxy::Update(
            v17,
            v16,
            (__int64)&v27,
            (__int64)&v24,
            0LL,
            1u,
            0,
            0LL,
            0LL,
            1,
            v20,
            1,
            1,
            v21);
    v6 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x8Cu);
      return v6;
    }
LABEL_5:
    if ( ++v3 >= 9 )
      return v6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x70u);
  return v6;
}
