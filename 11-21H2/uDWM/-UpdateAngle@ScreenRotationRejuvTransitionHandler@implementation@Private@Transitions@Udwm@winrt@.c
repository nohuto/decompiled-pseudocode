/*
 * XREFs of ?UpdateAngle@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXHH@Z @ 0x1800F56FC
 * Callers:
 *     ?UpdateFloatProperties@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@6@@Z @ 0x1800F5B80 (-UpdateFloatProperties@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@U.c)
 * Callees:
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180007640 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Captured@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x180042064 (-Captured@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QE.c)
 *     ?SetCenter@CVisual@@QEAAXNN@Z @ 0x18005CDC4 (-SetCenter@CVisual@@QEAAXNN@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1801007DC (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::UpdateAngle(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *this)
{
  __int64 v2; // rcx
  int v3; // r8d
  int v4; // r9d
  char v5; // al
  struct tagPOINT *v6; // rcx
  int v7; // edi
  int v8; // esi
  __m128i v9; // xmm0
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-48h]
  _BYTE v13[20]; // [rsp+28h] [rbp-40h] BYREF
  float v14; // [rsp+3Ch] [rbp-2Ch]
  float v15; // [rsp+40h] [rbp-28h]
  struct tagPOINT v16; // [rsp+88h] [rbp+20h] BYREF

  if ( !winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::Captured(this) )
    return;
  if ( *(_BYTE *)(v2 + 108) )
  {
    v4 = (v3 - *(_DWORD *)(v2 + 112)) % 360;
  }
  else
  {
    *(_BYTE *)(v2 + 108) = 1;
    *(_DWORD *)(v2 + 112) = v4 + v3;
  }
  *(_DWORD *)(v2 + 72) = v4;
  if ( v4 == -270 || v4 == -360 )
  {
    v4 += 360;
  }
  else
  {
    if ( v4 != 270 && v4 != 360 )
      goto LABEL_12;
    v4 -= 360;
  }
  *(_DWORD *)(v2 + 72) = v4;
LABEL_12:
  if ( v4 == 90 || v4 == -90 )
    v5 = v4 <= 0;
  else
    v5 = *(_BYTE *)(v2 + 79);
  *(_BYTE *)(v2 + 77) = v5;
  v6 = *(struct tagPOINT **)(v2 + 48);
  v16 = v6[16];
  v7 = v16.x / 2;
  v8 = v16.y / 2;
  CVisual::SetCenter((CVisual *)v6, (double)(v16.x / 2), (double)(v16.y / 2));
  CVisual::SetRotation(*((CVisual **)this + 6), (double)*((int *)this + 18));
  v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 18));
  v10 = *((_QWORD *)this + 7);
  v16 = 0LL;
  v14 = 0.0;
  v15 = 0.0;
  *(_DWORD *)(v10 + 940) = _mm_cvtepi32_ps(v9).m128_u32[0];
  if ( abs32(*((_DWORD *)this + 18)) != 180 )
  {
    if ( *((_DWORD *)this + 18) )
    {
      v16.x = v8 - v7;
      v11 = *((_QWORD *)this + 7);
      v16.y = v7 - v8;
      v12 = *(_QWORD *)(v11 + 136);
      v14 = (float)((SHIDWORD(v12) >> 1) - ((int)v12 >> 1));
      v15 = (float)(((int)v12 >> 1) - (SHIDWORD(v12) >> 1));
    }
  }
  CAnimatedTransitionVisual::Translate2D(*((CAnimatedTransitionVisual **)this + 7), (const struct TA_TRANSFORM_2D *)v13);
  CVisual::SetOffset(*((struct tagPOINT **)this + 6), &v16);
}
