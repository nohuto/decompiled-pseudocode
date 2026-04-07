/*
 * XREFs of ?GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800127C0
 * Callers:
 *     ?GetAbsoluteWindowRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x180012780 (-GetAbsoluteWindowRect@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800298A4 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::GetAbsoluteWindowRect(
        __int64 a1,
        __int64 a2)
{
  int v3; // edx
  int v4; // ecx
  __m128i v5; // xmm0
  __int64 result; // rax
  __m128i v7; // xmm1
  unsigned __int32 v8; // xmm0_4
  struct tagRECT v9; // [rsp+30h] [rbp-28h] BYREF

  CTopLevelWindow::GetActualWindowRect(
    *(CTopLevelWindow **)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 336LL) + 440LL),
    &v9,
    0,
    1,
    1);
  v3 = 0;
  v4 = 0;
  v5 = _mm_cvtsi32_si128(v9.left);
  result = a2;
  if ( v9.right - v9.left >= 0 )
    v4 = v9.right - v9.left;
  v7 = _mm_cvtsi32_si128(v9.top);
  v8 = _mm_cvtepi32_ps(v5).m128_u32[0];
  if ( v9.bottom - v9.top >= 0 )
    v3 = v9.bottom - v9.top;
  *(_DWORD *)a2 = v8;
  *(_DWORD *)(a2 + 4) = _mm_cvtepi32_ps(v7).m128_u32[0];
  *(float *)(a2 + 8) = (float)v4;
  *(float *)(a2 + 12) = (float)v3;
  return result;
}
