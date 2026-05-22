/*
 * XREFs of ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1801D0FEC
 * Callers:
 *     ?OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ @ 0x1801A511C (-OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     operator___0 @ 0x1801D0FC0 (operator___0.c)
 *     ?ClampCursorAttractionDelta@CursorAttraction@@AEAA?AUXMFLOAT2@DirectX@@AEBUtagPOINT@@@Z @ 0x1801D1194 (-ClampCursorAttractionDelta@CursorAttraction@@AEAA-AUXMFLOAT2@DirectX@@AEBUtagPOINT@@@Z.c)
 *     ?ComputeAverageCursorVelocity@CursorAttraction@@AEAA?AUXMFLOAT2@DirectX@@XZ @ 0x1801D121C (-ComputeAverageCursorVelocity@CursorAttraction@@AEAA-AUXMFLOAT2@DirectX@@XZ.c)
 *     ?IsCursorAtRest@CursorAttraction@@AEAA_NXZ @ 0x1801D12F0 (-IsCursorAtRest@CursorAttraction@@AEAA_NXZ.c)
 *     ?IsPointInRect@CursorAttraction@@AEAA_NAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x1801D1384 (-IsPointInRect@CursorAttraction@@AEAA_NAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x1801D13B0 (-UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z.c)
 */

struct tagPOINT __fastcall CursorAttraction::ApplyCursorAttraction(
        struct tagRECT *this,
        struct tagPOINT *a2,
        const struct tagPOINT *a3,
        struct tagRECT *a4)
{
  bool v4; // zf
  struct tagPOINT v6; // rcx
  int bottom; // r8d
  int v10; // ecx
  CursorAttraction *v11; // rcx
  bool IsPointInRect; // bp
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  __int64 v17; // rcx
  __m128 v18; // xmm1
  float v19; // xmm1_4
  struct tagRECT v21; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp+18h] BYREF

  v4 = a4->left == 0;
  v6 = *a3;
  *a2 = *a3;
  if ( !v4 || a4->top || a4->right || a4->bottom )
  {
    *((struct tagPOINT *)&this[3].top + (unsigned int)this[3].left) = v6;
    bottom = this[2].bottom;
    v10 = bottom;
    v21 = *this;
    *this = *a4;
    if ( bottom >= (a4->right - a4->left) / 2 )
      v10 = (a4->right - a4->left) / 2;
    if ( bottom >= (a4->bottom - a4->top) / 2 )
      bottom = (a4->bottom - a4->top) / 2;
    this->left += v10;
    this->right -= v10;
    this->top += bottom;
    this->bottom -= bottom;
    if ( operator___0(&v21, this) )
      LOBYTE(this[2].left) = 0;
    CursorAttraction::UpdateAttractionParameters((CursorAttraction *)this, a3);
    IsPointInRect = CursorAttraction::IsPointInRect(v11, a3, this);
    v13 = *(float *)&this[2].right * *(float *)&this[2].right;
    v14 = (float)(a3->x - this[1].left);
    v15 = (float)(a3->y - this[1].top);
    v16 = (float)(v15 * v15) + (float)(v14 * v14);
    if ( IsPointInRect || v13 < v16 )
    {
      if ( LOBYTE(this[2].left) )
      {
        if ( v13 < v16 )
          LOBYTE(this[2].left) = 0;
      }
      else if ( CursorAttraction::IsCursorAtRest((CursorAttraction *)this) && IsPointInRect )
      {
        LOBYTE(this[2].left) = 1;
      }
    }
    else
    {
      CursorAttraction::ClampCursorAttractionDelta(this, &v22, a3);
      CursorAttraction::ComputeAverageCursorVelocity(v17, &v23);
      v18 = _mm_mul_ps((__m128)v22, (__m128)v23);
      v19 = v18.m128_f32[0] + _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
      if ( !LOBYTE(this[2].left) || v19 > 0.0 )
      {
        a2->x += (int)*(float *)&v22;
        a2->y += (int)*((float *)&v22 + 1);
      }
    }
    this[3].left = (this[3].left + 1) % 0xAu;
  }
  return (struct tagPOINT)a2;
}
