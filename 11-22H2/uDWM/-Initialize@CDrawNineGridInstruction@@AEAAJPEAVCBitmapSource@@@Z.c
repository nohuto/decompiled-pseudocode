/*
 * XREFs of ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x18001777C
 * Callers:
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x180017AB0 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLayout@@@Z @ 0x180017680 (-GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLay.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x180017974 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003858C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawNineGridInstruction::Initialize(struct _MARGINS *this, struct CBitmapSource *a2)
{
  struct _MARGINS v2; // xmm0
  unsigned int v3; // r14d
  unsigned int v5; // edi
  struct _MARGINS *i; // r15
  __int64 v7; // rdx
  int v8; // r12d
  __int64 v9; // rcx
  int v10; // r13d
  CDesktopManager *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // [rsp+70h] [rbp-39h]
  int v18; // [rsp+74h] [rbp-35h]
  __int64 v19; // [rsp+78h] [rbp-31h] BYREF
  float v20; // [rsp+80h] [rbp-29h]
  float v21; // [rsp+84h] [rbp-25h]
  struct _MARGINS v22; // [rsp+90h] [rbp-19h] BYREF
  _DWORD v23[8]; // [rsp+A0h] [rbp-9h] BYREF

  v2 = (struct _MARGINS)*((_OWORD *)a2 + 2);
  v3 = 0;
  v19 = 0LL;
  this[1] = v2;
  v5 = 0;
  this[2] = *((struct _MARGINS *)a2 + 3);
  v20 = *((float *)a2 + 6);
  v21 = *((float *)a2 + 7);
  if ( *((int *)a2 + 20) > 0 && *((int *)a2 + 22) > 0 && *((int *)a2 + 21) > 0 && *((int *)a2 + 23) > 0 )
    v19 = *((_QWORD *)a2 + 10);
  v22 = v2;
  CDrawNineGridInstruction::GetNineGridLayout(&v22, (const struct MilPointAndSizeL *)&v19, (struct NineGridLayout *)v23);
  this[7].cyTopHeight = 0;
  for ( i = this + 3; ; i = (struct _MARGINS *)((char *)i + 8) )
  {
    v7 = v3 / 3;
    v8 = v23[v7 + 4];
    v9 = v3 % 3;
    v10 = v23[(unsigned int)(v7 + 1) + 4];
    v17 = v23[v9];
    v18 = v23[(unsigned int)(v9 + 1)];
    if ( v18 - v17 <= 0 || v10 - v8 <= 0 )
    {
      *(_QWORD *)&i->cxLeftWidth = 0LL;
      goto LABEL_5;
    }
    v12 = CDesktopManager::s_pDesktopManagerInstance;
    ++this[7].cyTopHeight;
    v13 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(*((_QWORD *)v12 + 6), (char *)&this[3] + 8 * v3);
    v5 = v13;
    if ( v13 < 0 )
      break;
    v22 = (struct _MARGINS)_xmm;
    v15 = *(_QWORD *)&i->cxLeftWidth;
    *(float *)&v19 = (float)v17;
    *((float *)&v19 + 1) = (float)v8;
    v21 = (float)v10;
    v20 = (float)v18;
    v16 = CImageLegacyMilBrushProxy::Update(v15, v14, &v22, &v19);
    v5 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x8Cu, 0LL);
      return v5;
    }
LABEL_5:
    if ( ++v3 >= 9 )
      return v5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x70u, 0LL);
  return v5;
}
