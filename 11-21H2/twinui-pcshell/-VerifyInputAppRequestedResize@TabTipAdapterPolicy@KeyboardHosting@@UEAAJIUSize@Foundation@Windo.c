/*
 * XREFs of ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x1804832C0
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180473CE0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180474140 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1800BE420 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedResize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  __m128 v7; // xmm2
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm1_4
  HMONITOR v12; // rax
  HMONITOR v13; // rdi
  int v15; // r8d
  int v16; // r9d
  int v17; // r14d
  signed int v18; // r12d
  signed int v19; // r13d
  LONG left; // edx
  LONG top; // ecx
  int v22; // r9d
  __m128i v23; // xmm3
  KeyboardHosting::MonitorInformation *v24; // rcx
  RECT rc; // [rsp+38h] [rbp-61h] BYREF
  HMONITOR v26; // [rsp+48h] [rbp-51h] BYREF
  __int128 v27; // [rsp+50h] [rbp-49h]
  __int128 v28; // [rsp+60h] [rbp-39h]
  int v29; // [rsp+70h] [rbp-29h]

  v7 = (__m128)_mm_loadu_si128(a4);
  *(_QWORD *)&rc.left = a3;
  *a7 = 0;
  v9 = *(float *)&rc.left;
  v10 = *(float *)&rc.top;
  v11 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
  rc.left = (int)v7.m128_f32[0];
  *(_OWORD *)a6 = 0LL;
  rc.top = (int)v11;
  rc.right = (int)(float)(_mm_shuffle_ps(v7, v7, 170).m128_f32[0] + v7.m128_f32[0]);
  rc.bottom = (int)(float)(_mm_shuffle_ps(v7, v7, 255).m128_f32[0] + v11);
  v12 = MonitorFromRect(&rc, 0);
  v13 = v12;
  if ( !v12 )
    return 2147549183LL;
  v29 = 100;
  v26 = v12;
  v27 = 0LL;
  v28 = 0LL;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)&v26);
  v15 = DWORD2(v28);
  v16 = HIDWORD(v28);
  v17 = _mm_cvtsi128_si32((__m128i)rc);
  v18 = abs32(DWORD2(v28) - v28);
  v19 = abs32(HIDWORD(v28) - DWORD1(v28));
  left = rc.left;
  if ( (int)(float)((float)((float)v29 * v9) / 100.0) < v18 )
    v18 = (int)(float)((float)((float)v29 * v9) / 100.0);
  if ( (int)(float)((float)((float)v29 * v10) / 100.0) < v19 )
    v19 = (int)(float)((float)((float)v29 * v10) / 100.0);
  if ( v17 + v18 < SDWORD2(v28) )
    v15 = v17 + v18;
  if ( v19 + rc.top < SHIDWORD(v28) )
    v16 = v19 + rc.top;
  top = rc.top;
  if ( !a5 )
  {
    if ( v17 >= v15 - v18 )
      left = v15 - v18;
    if ( rc.top >= v16 - v19 )
      top = v16 - v19;
  }
  if ( left <= (int)v28 )
    left = v28;
  if ( top <= SDWORD1(v28) )
    top = DWORD1(v28);
  if ( left != v17 || v15 != rc.right || top != rc.top || v16 != rc.bottom )
  {
    *a7 = 1;
    v22 = v16 - top;
    v23 = _mm_cvtsi32_si128(top);
    v24 = (KeyboardHosting::MonitorInformation *)(a1 + 232);
    *(float *)a6 = (float)left;
    *(_DWORD *)(a6 + 4) = _mm_cvtepi32_ps(v23).m128_u32[0];
    *(float *)(a6 + 8) = (float)(v15 - left);
    *(float *)(a6 + 12) = (float)v22;
    if ( *(HMONITOR *)(a1 + 232) != v13 )
    {
      *(_QWORD *)v24 = v13;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v24);
      *(_BYTE *)(a1 + 448) = 1;
    }
  }
  return 0LL;
}
