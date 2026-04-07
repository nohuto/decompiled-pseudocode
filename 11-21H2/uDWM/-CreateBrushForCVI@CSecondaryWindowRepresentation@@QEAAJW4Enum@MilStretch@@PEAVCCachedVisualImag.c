/*
 * XREFs of ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCRectResourceProxy@@PEAVCDoubleResourceProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001ABA4
 * Callers:
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001A2C0 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001CBFC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000DF0C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18001B0D4 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::CreateBrushForCVI(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        CBaseObject **a6)
{
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // edi
  int v11; // eax
  volatile signed __int32 *v12; // rbx
  int v13; // eax
  __int64 v15; // [rsp+38h] [rbp-41h]
  CBaseObject *v16; // [rsp+70h] [rbp-9h] BYREF
  __int128 v17; // [rsp+78h] [rbp-1h] BYREF
  __int128 v18; // [rsp+88h] [rbp+Fh] BYREF

  v16 = 0LL;
  v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
  v17 = 0LL;
  v8 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(v7, &v16);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x45Au);
    goto LABEL_9;
  }
  if ( a4 )
  {
    v11 = 0;
    v17 = 0LL;
  }
  else
  {
    v11 = 1;
    v17 = _xmm;
  }
  v15 = a4;
  v12 = (volatile signed __int32 *)v16;
  v18 = _xmm;
  v13 = CImageLegacyMilBrushProxy::Update(v16, v9, &v17, &v18, a5, v11, 1, v15, 0LL, 2);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x487u);
LABEL_10:
    if ( v12 )
      CBaseObject::Release((CBaseObject *)v12);
    return v10;
  }
  if ( *a6 )
    CBaseObject::Release(*a6);
  *a6 = (CBaseObject *)v12;
  if ( v12 )
  {
    _InterlockedIncrement(v12 + 2);
LABEL_9:
    v12 = (volatile signed __int32 *)v16;
    goto LABEL_10;
  }
  return v10;
}
