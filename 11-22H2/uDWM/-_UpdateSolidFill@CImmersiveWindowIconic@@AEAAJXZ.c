/*
 * XREFs of ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800C538C
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800C4D50 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800C4FEC (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180042274 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CImmersiveWindowIconic::_UpdateSolidFill(CImmersiveWindowIconic *this)
{
  unsigned __int8 *v2; // rcx
  __int64 v3; // rax
  float v4; // xmm0_4
  __int64 v5; // rax
  __m128i v6; // xmm1
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  CBaseObject *v12; // rdi
  CBaseObject *v13; // rdx
  __int128 v14; // xmm1
  int v15; // eax
  CBaseObject *v17; // [rsp+30h] [rbp-38h] BYREF
  __int128 v18; // [rsp+38h] [rbp-30h]
  __int128 v19; // [rsp+48h] [rbp-20h]

  v17 = 0LL;
  v2 = (unsigned __int8 *)*((_QWORD *)this + 36);
  *(_QWORD *)&v19 = 0LL;
  v3 = v2[201];
  *(float *)&v18 = GammaLUT_sRGB_to_scRGB[v2[200]] / 255.0;
  v4 = GammaLUT_sRGB_to_scRGB[v3];
  v5 = v2[202];
  *((float *)&v18 + 1) = v4 / 255.0;
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 33));
  *((float *)&v18 + 2) = GammaLUT_sRGB_to_scRGB[v5] / 255.0;
  *((float *)&v18 + 3) = FLOAT_1_0;
  *((float *)&v19 + 2) = (float)*((int *)this + 32) + 0.0;
  *((float *)&v19 + 3) = _mm_cvtepi32_ps(v6).m128_f32[0] + 0.0;
  v7 = CRenderDataVisual::ClearInstructions(this);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = CSolidRectangleInstruction::Create(&v17);
    v12 = v17;
    v8 = v9;
    if ( v9 >= 0 )
    {
      v13 = v17;
      v14 = v18;
      *((_OWORD *)v17 + 2) = v19;
      *((_OWORD *)v12 + 1) = v14;
      v15 = CRenderDataVisual::AddInstruction(this, v13, v10, v11);
      v8 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x85u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x81u);
    }
    if ( v12 )
      CBaseObject::Release(v12);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x7Fu);
  }
  return v8;
}
