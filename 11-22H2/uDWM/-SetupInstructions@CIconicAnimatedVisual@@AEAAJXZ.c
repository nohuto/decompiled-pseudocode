/*
 * XREFs of ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800C2774
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800C2C10 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001BEDC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180042274 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x1800C4A64 (-GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CIconicAnimatedVisual::SetupInstructions(CIconicAnimatedVisual *this)
{
  int *v1; // rbx
  CBaseObject *v3; // rdi
  float v4; // xmm1_4
  __m128i v5; // xmm0
  float v6; // xmm1_4
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  CBaseObject *v11; // rdx
  __int128 v12; // xmm1
  int v13; // eax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  CBaseObject *v19; // [rsp+30h] [rbp-38h] BYREF
  CBaseObject *v20; // [rsp+38h] [rbp-30h] BYREF
  struct _D3DCOLORVALUE v21; // [rsp+40h] [rbp-28h] BYREF
  __int128 v22; // [rsp+50h] [rbp-18h]

  v19 = 0LL;
  v1 = (int *)((char *)this + 376);
  v3 = 0LL;
  v20 = 0LL;
  if ( IsRectEmpty((const RECT *)((char *)this + 376)) )
    goto LABEL_6;
  CImmersiveState::GetPillarBoxColor(&v21);
  v4 = (float)*((int *)this + 96);
  *(float *)&v22 = (float)*v1;
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 95));
  *((float *)&v22 + 2) = v4;
  v6 = (float)*((int *)this + 97);
  DWORD1(v22) = _mm_cvtepi32_ps(v5).m128_u32[0];
  *((float *)&v22 + 3) = v6;
  v7 = CSolidRectangleInstruction::Create(&v20);
  v10 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC0u);
    v3 = v20;
    goto LABEL_12;
  }
  v3 = v20;
  v11 = v20;
  v12 = *(__int128 *)&v21.r;
  *((_OWORD *)v20 + 2) = v22;
  *((_OWORD *)v11 + 1) = v12;
  v13 = CRenderDataVisual::AddInstruction(this, v11, v8, v9);
  v10 = v13;
  if ( v13 >= 0 )
  {
LABEL_6:
    v14 = CDrawGeometryInstruction::Create(
            *((struct CBaseLegacyMilBrushProxy **)this + 39),
            *((struct CBaseGeometryProxy **)this + 44),
            &v19);
    v10 = v14;
    if ( v14 >= 0 )
    {
      v17 = CRenderDataVisual::AddInstruction(this, v19, v15, v16);
      v10 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xCAu);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xC9u);
    }
    if ( v19 )
      CBaseObject::Release(v19);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xC3u);
  }
LABEL_12:
  if ( v3 )
    CBaseObject::Release(v3);
  return v10;
}
