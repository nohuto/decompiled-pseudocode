/*
 * XREFs of ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18005EC80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000FAB8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180019AC0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001D034 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::ValidateVisual(CTransitionWindowSnapshot *this)
{
  int v1; // eax
  CBaseObject *v2; // rsi
  struct CRectangleGeometryProxy **v4; // rsi
  int v5; // edx
  int v6; // r9d
  int v7; // eax
  int v8; // r8d
  int v9; // ecx
  int v10; // r8d
  int v11; // eax
  int RectangleGeometry; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct CDrawGeometryInstruction *v18; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 22);
  v2 = 0LL;
  v18 = 0LL;
  if ( (v1 & 0x1000) == 0 )
  {
LABEL_12:
    v16 = CRenderDataVisual::ValidateVisual(this);
    v13 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xABu);
    goto LABEL_13;
  }
  if ( *((_DWORD *)this + 70) )
  {
LABEL_11:
    *((_DWORD *)this + 22) = v1 & 0xFFFFEFFF;
    goto LABEL_12;
  }
  v4 = (struct CRectangleGeometryProxy **)((char *)this + 312);
  v5 = *((_DWORD *)this + 87);
  v6 = 0;
  v7 = *((_DWORD *)this + 88);
  v8 = *((_DWORD *)this + 89) - v5;
  v9 = *((_DWORD *)this + 86);
  if ( v8 >= 0 )
    v6 = v8;
  v10 = 0;
  v11 = v7 - v9;
  if ( v11 >= 0 )
    v10 = v11;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v9, v5, v10, v6, v4);
  v13 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0xA3u);
    return v13;
  }
  v14 = CDrawGeometryInstruction::Create(*((struct CBaseLegacyMilBrushProxy **)this + 38), *v4, &v18);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xA4u);
    v2 = v18;
  }
  else
  {
    v2 = v18;
    v15 = CRenderDataVisual::AddInstruction(this, v18);
    v13 = v15;
    if ( v15 >= 0 )
    {
      v1 = *((_DWORD *)this + 22);
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xA5u);
  }
LABEL_13:
  if ( v2 )
    CBaseObject::Release(v2);
  return v13;
}
