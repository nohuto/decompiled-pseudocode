/*
 * XREFs of ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x180535300
 * Callers:
 *     <none>
 * Callees:
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z @ 0x180064314 (--0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18014AF7C (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedResize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float *a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  float v7; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  LONG v12; // eax
  float v13; // xmm1_4
  LONG v14; // eax
  float v15; // xmm2_4
  HMONITOR v16; // rax
  HMONITOR v17; // rdi
  int v19; // r8d
  int v20; // r9d
  int v21; // r15d
  signed int v22; // r12d
  signed int v23; // r13d
  LONG left; // edx
  signed int top; // ecx
  int v26; // r9d
  __m128i v27; // xmm3
  KeyboardHosting::MonitorInformation *v28; // rcx
  RECT rc_8; // [rsp+28h] [rbp-91h] BYREF
  RECT v30; // [rsp+38h] [rbp-81h]
  _BYTE v31[24]; // [rsp+48h] [rbp-71h] BYREF
  LONG v32; // [rsp+60h] [rbp-59h]
  signed int v33; // [rsp+64h] [rbp-55h]
  int v34; // [rsp+68h] [rbp-51h]
  int v35; // [rsp+6Ch] [rbp-4Dh]
  int v36; // [rsp+70h] [rbp-49h]

  v7 = *a4;
  v9 = a4[1];
  *(_QWORD *)&rc_8.left = a3;
  v10 = *(float *)&a3;
  v11 = *((float *)&a3 + 1);
  v12 = (int)v7;
  *a7 = 0;
  v13 = v7 + a4[2];
  rc_8.left = v12;
  v14 = (int)v9;
  v15 = v9 + a4[3];
  rc_8.top = v14;
  *(_OWORD *)a6 = 0LL;
  rc_8.right = (int)v13;
  rc_8.bottom = (int)v15;
  v16 = MonitorFromRect(&rc_8, 0);
  v17 = v16;
  if ( !v16 )
    return 2147549183LL;
  KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v31, v16);
  v19 = v34;
  v20 = v35;
  v30 = rc_8;
  v21 = _mm_cvtsi128_si32((__m128i)rc_8);
  v22 = abs32(v34 - v32);
  v23 = abs32(v35 - v33);
  left = rc_8.left;
  if ( (int)(float)((float)((float)v36 * v10) / 100.0) < v22 )
    v22 = (int)(float)((float)((float)v36 * v10) / 100.0);
  if ( (int)(float)((float)((float)v36 * v11) / 100.0) < v23 )
    v23 = (int)(float)((float)((float)v36 * v11) / 100.0);
  if ( v21 + v22 < v34 )
    v19 = v21 + v22;
  if ( v23 + rc_8.top < v35 )
    v20 = v23 + rc_8.top;
  top = v30.top;
  if ( !a5 )
  {
    if ( v21 >= v19 - v22 )
      left = v19 - v22;
    if ( v30.top >= v20 - v23 )
      top = v20 - v23;
  }
  if ( left <= v32 )
    left = v32;
  if ( top <= v33 )
    top = v33;
  if ( left != v21 || v19 != rc_8.right || top != rc_8.top || v20 != rc_8.bottom )
  {
    *a7 = 1;
    v26 = v20 - top;
    v27 = _mm_cvtsi32_si128(top);
    v28 = (KeyboardHosting::MonitorInformation *)(a1 + 232);
    *(float *)a6 = (float)left;
    *(_DWORD *)(a6 + 4) = _mm_cvtepi32_ps(v27).m128_u32[0];
    *(float *)(a6 + 8) = (float)(v19 - left);
    *(float *)(a6 + 12) = (float)v26;
    if ( *(HMONITOR *)(a1 + 232) != v17 )
    {
      *(_QWORD *)v28 = v17;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v28);
      *(_BYTE *)(a1 + 544) = 1;
    }
  }
  return 0LL;
}
