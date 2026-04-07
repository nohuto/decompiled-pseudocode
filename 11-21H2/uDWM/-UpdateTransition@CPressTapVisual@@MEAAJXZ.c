/*
 * XREFs of ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800C9A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CVisual@@QEAAXXZ @ 0x180010F7C (-Hide@CVisual@@QEAAXXZ.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013228 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001EE50 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180027CA0 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18004C890 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800C9940 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CPressTapVisual::UpdateTransition(CPressTapVisual *this)
{
  float v1; // xmm0_4
  float v3; // xmm7_4
  float v4; // xmm7_4
  float v5; // xmm2_4
  int v6; // esi
  LONG v7; // edi
  int v8; // ebp
  CVisual *v9; // rcx
  LONG v10; // ebx
  CVisualProxy **v11; // rcx
  float v12; // xmm8_4
  float v13; // xmm1_4
  float v14; // xmm7_4
  float v15; // xmm2_4
  float v16; // xmm6_4
  __m128i v17; // xmm0
  CVisual *v18; // rcx
  LONG v19; // edi
  LONG v20; // ebx
  struct tagSIZE v22; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((float *)this + 93);
  v3 = *(double *)(*((_QWORD *)this + 51) + 48LL);
  if ( v1 < v3 )
  {
    v13 = (float)*((int *)this + 85);
    v14 = (float)(v3 - v1) / *((float *)this + 94);
    v15 = (float)((float)(*((float *)this + 96) - *((float *)this + 95)) * v14) + *((float *)this + 95);
    v16 = (float)(1.0 - *((float *)this + 100)) * v14;
    v17 = _mm_cvtsi32_si128(*((_DWORD *)this + 84));
    v18 = (CVisual *)*((_QWORD *)this + 44);
    v19 = (int)(float)(v13 * v15);
    v20 = (int)(float)(_mm_cvtepi32_ps(v17).m128_f32[0] * v15);
    if ( v20 < 1 )
      v20 = 1;
    v22.cx = v20;
    if ( v19 < 1 )
      v19 = 1;
    v22.cy = v19;
    CVisual::SetSize(v18, &v22);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 44), *((_DWORD *)this + 78) - v20 / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 44), *((_DWORD *)this + 79) - v19 / 2);
    CVisual::Hide(*((CVisual **)this + 45));
    v11 = (CVisualProxy **)*((_QWORD *)this + 44);
    v12 = 1.0 - v16;
  }
  else
  {
    v4 = v3 / v1;
    v5 = (float)((float)(*((float *)this + 98) - *((float *)this + 97)) * v4) + *((float *)this + 97);
    v6 = *((_DWORD *)this + 80) + (int)(float)((float)(*((_DWORD *)this + 82) - *((_DWORD *)this + 80)) * v4);
    v7 = (int)(float)((float)*((int *)this + 87) * v5);
    v8 = *((_DWORD *)this + 81) + (int)(float)((float)(*((_DWORD *)this + 83) - *((_DWORD *)this + 81)) * v4);
    v9 = (CVisual *)*((_QWORD *)this + 45);
    v10 = (int)(float)((float)*((int *)this + 86) * v5);
    if ( v10 < 1 )
      v10 = 1;
    v22.cx = v10;
    if ( v7 < 1 )
      v7 = 1;
    v22.cy = v7;
    CVisual::SetSize(v9, &v22);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 45), v6 - v10 / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 45), v8 - v7 / 2);
    v11 = (CVisualProxy **)*((_QWORD *)this + 45);
    v12 = 1.0 - (float)((float)(1.0 - *((float *)this + 99)) * v4);
  }
  CVisual::SendSetOpacity(v11, v12);
  if ( *(_BYTE *)(*((_QWORD *)this + 51) + 72LL) )
    CPressTapVisual::Stop(this);
  return 0LL;
}
