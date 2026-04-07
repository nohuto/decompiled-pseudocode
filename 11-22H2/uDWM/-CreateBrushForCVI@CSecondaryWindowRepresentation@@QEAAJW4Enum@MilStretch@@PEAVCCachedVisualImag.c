/*
 * XREFs of ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCRectResourceProxy@@PEAVCDoubleResourceProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000AB7C
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18000995C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000A7A0 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 * Callees:
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x180017974 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003858C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
  volatile signed __int32 *v11; // rbx
  int v12; // eax
  CBaseObject *v14; // [rsp+70h] [rbp-9h] BYREF
  __int128 v15; // [rsp+78h] [rbp-1h] BYREF
  __int128 v16; // [rsp+88h] [rbp+Fh] BYREF

  v14 = 0LL;
  v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  v15 = 0LL;
  v8 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(v7, &v14);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x45Au, 0LL);
    goto LABEL_9;
  }
  if ( a4 )
    v15 = 0LL;
  else
    v15 = _xmm;
  v11 = (volatile signed __int32 *)v14;
  v16 = _xmm;
  v12 = CImageLegacyMilBrushProxy::Update(v14, v9, &v15, &v16);
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x487u, 0LL);
LABEL_10:
    if ( v11 )
      CBaseObject::Release((CBaseObject *)v11);
    return v10;
  }
  if ( *a6 )
    CBaseObject::Release(*a6);
  *a6 = (CBaseObject *)v11;
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 2);
LABEL_9:
    v11 = (volatile signed __int32 *)v14;
    goto LABEL_10;
  }
  return v10;
}
