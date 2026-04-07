/*
 * XREFs of ?MonitorRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x180013060
 * Callers:
 *     ?get_MonitorRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x180013020 (-get_MonitorRect@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITop.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800F87FC (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::MonitorRect(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  BOOL MonitorInfoW; // eax
  void *v5; // rdx
  unsigned int v6; // r8d
  int v7; // r9d
  int v8; // ecx
  __int64 result; // rax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  unsigned __int32 v12; // xmm0_4
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  mi.cbSize = 40;
  v2 = *(_QWORD *)(a1 + 32);
  memset(&mi.rcMonitor, 0, 36);
  MonitorInfoW = GetMonitorInfoW(*(HMONITOR *)(*(_QWORD *)(v2 + 336) + 384LL), &mi);
  v7 = 0;
  if ( !MonitorInfoW )
    wil::details::in1diag3::_Throw_GetLastError(retaddr, v5, v6, 0LL);
  v8 = 0;
  result = a2;
  v10 = _mm_cvtsi32_si128(mi.rcMonitor.left);
  if ( mi.rcMonitor.right - mi.rcMonitor.left >= 0 )
    v8 = mi.rcMonitor.right - mi.rcMonitor.left;
  v11 = _mm_cvtsi32_si128(mi.rcMonitor.top);
  v12 = _mm_cvtepi32_ps(v10).m128_u32[0];
  if ( mi.rcMonitor.bottom - mi.rcMonitor.top >= 0 )
    v7 = mi.rcMonitor.bottom - mi.rcMonitor.top;
  *(_DWORD *)a2 = v12;
  *(_DWORD *)(a2 + 4) = _mm_cvtepi32_ps(v11).m128_u32[0];
  *(float *)(a2 + 8) = (float)v8;
  *(float *)(a2 + 12) = (float)v7;
  return result;
}
