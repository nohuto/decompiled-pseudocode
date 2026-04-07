/*
 * XREFs of ?_UpdateInstructions@CSolidRectangleVisual@@IEAAJXZ @ 0x1800D8EB4
 * Callers:
 *     ?ValidateVisual@CSolidRectangleVisual@@UEAAJXZ @ 0x1800D8E30 (-ValidateVisual@CSolidRectangleVisual@@UEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180042274 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSolidRectangleVisual::_UpdateInstructions(CSolidRectangleVisual *this)
{
  __m128i v1; // xmm0
  __m128i v3; // xmm1
  __m128i v4; // xmm0
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  CBaseObject *v10; // rdi
  CBaseObject *v11; // rdx
  int v12; // eax
  CBaseObject *v14; // [rsp+30h] [rbp-28h] BYREF
  __int128 v15; // [rsp+38h] [rbp-20h]

  v1 = _mm_cvtsi32_si128(*((_DWORD *)this + 72));
  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 74));
  v14 = 0LL;
  LODWORD(v15) = _mm_cvtepi32_ps(v1).m128_u32[0];
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 73));
  DWORD2(v15) = _mm_cvtepi32_ps(v3).m128_u32[0];
  *(float *)v3.m128i_i32 = (float)*((int *)this + 75);
  DWORD1(v15) = _mm_cvtepi32_ps(v4).m128_u32[0];
  HIDWORD(v15) = v3.m128i_i32[0];
  v5 = CRenderDataVisual::ClearInstructions(this);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = CSolidRectangleInstruction::Create(&v14);
    v10 = v14;
    v6 = v7;
    if ( v7 >= 0 )
    {
      v11 = v14;
      *((_OWORD *)v14 + 2) = v15;
      *((_OWORD *)v10 + 1) = *((_OWORD *)this + 19);
      v12 = CRenderDataVisual::AddInstruction(this, v11, v8, v9);
      v6 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x40u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3Du);
    }
    if ( v10 )
      CBaseObject::Release(v10);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x3Cu);
  }
  return v6;
}
