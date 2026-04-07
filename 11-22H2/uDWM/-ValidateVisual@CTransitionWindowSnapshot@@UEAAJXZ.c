/*
 * XREFs of ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x180052440
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001BEDC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18001C1C0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18005252C (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::ValidateVisual(CTransitionWindowSnapshot *this)
{
  CBaseObject *v1; // rsi
  bool v3; // zf
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
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  int v18; // eax
  struct CDrawGeometryInstruction *v20; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = (*((_DWORD *)this + 22) & 0x1000) == 0;
  v20 = 0LL;
  if ( v3 )
  {
LABEL_11:
    v18 = CRenderDataVisual::ValidateVisual(this);
    v13 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xABu, 0LL);
    goto LABEL_12;
  }
  if ( *((_DWORD *)this + 70) )
  {
LABEL_10:
    *((_DWORD *)this + 22) &= ~0x1000u;
    goto LABEL_11;
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0xA3u, 0LL);
    return v13;
  }
  v14 = CDrawGeometryInstruction::Create(*((struct CBaseLegacyMilBrushProxy **)this + 38), *v4, &v20);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xA4u, 0LL);
    v1 = v20;
  }
  else
  {
    v1 = v20;
    v17 = CRenderDataVisual::AddInstruction(this, v20, v15, v16);
    v13 = v17;
    if ( v17 >= 0 )
      goto LABEL_10;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xA5u, 0LL);
  }
LABEL_12:
  if ( v1 )
    CBaseObject::Release(v1);
  return v13;
}
