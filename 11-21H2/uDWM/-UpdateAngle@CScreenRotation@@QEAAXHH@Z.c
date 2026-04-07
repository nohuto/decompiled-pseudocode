/*
 * XREFs of ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800D3794
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x1801042B0 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 * Callees:
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180007640 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetCenter@CVisual@@QEAAXNN@Z @ 0x18005CDC4 (-SetCenter@CVisual@@QEAAXNN@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1801007DC (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

void __fastcall CScreenRotation::UpdateAngle(CScreenRotation *this, int a2, int a3)
{
  int v4; // r9d
  LONG v6; // ebp
  LONG v7; // ebx
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v11[20]; // [rsp+20h] [rbp-48h] BYREF
  float v12; // [rsp+34h] [rbp-34h]
  float v13; // [rsp+38h] [rbp-30h]
  struct tagPOINT v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h]

  v4 = a2;
  if ( *((_BYTE *)this + 338) )
  {
    v4 = (a3 - *((_DWORD *)this + 87)) % 360;
  }
  else
  {
    *((_BYTE *)this + 338) = 1;
    *((_DWORD *)this + 87) = a2 + a3;
  }
  if ( v4 == -270 )
  {
    v4 = 90;
  }
  else if ( v4 == 270 )
  {
    v4 = -90;
  }
  else if ( abs32(v4) == 360 )
  {
    v4 = 0;
  }
  *((_DWORD *)this + 85) = v4;
  v14 = (struct tagPOINT)*((_QWORD *)this + 16);
  v6 = v14.y >> 1;
  v7 = v14.x >> 1;
  CVisual::SetCenter(this, (double)(v14.x >> 1), (double)(v14.y >> 1));
  CVisual::SetRotation(this, (double)*((int *)this + 85));
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 85));
  v9 = *((_QWORD *)this + 40);
  v12 = 0.0;
  v13 = 0.0;
  v14 = 0LL;
  *(_DWORD *)(v9 + 940) = _mm_cvtepi32_ps(v8).m128_u32[0];
  if ( abs32(*((_DWORD *)this + 85)) == 180 || !*((_DWORD *)this + 85) )
  {
    if ( !*((_BYTE *)this + 338) )
      *((_BYTE *)this + 337) = 1;
  }
  else
  {
    v14.x = v6 - v7;
    v10 = *((_QWORD *)this + 40);
    v14.y = v7 - v6;
    v15 = *(_QWORD *)(v10 + 136);
    v12 = (float)((SHIDWORD(v15) >> 1) - ((int)v15 >> 1));
    v13 = (float)(((int)v15 >> 1) - (SHIDWORD(v15) >> 1));
  }
  CAnimatedTransitionVisual::Translate2D(
    *((CAnimatedTransitionVisual **)this + 40),
    (const struct TA_TRANSFORM_2D *)v11);
  CVisual::SetOffset((struct tagPOINT *)this, &v14);
  *((_DWORD *)this + 88) = a3;
}
