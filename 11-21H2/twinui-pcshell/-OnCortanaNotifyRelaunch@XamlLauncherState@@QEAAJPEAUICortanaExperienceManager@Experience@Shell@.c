/*
 * XREFs of ?OnCortanaNotifyRelaunch@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x180451410
 * Callers:
 *     <none>
 * Callees:
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180044C00 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall XamlLauncherState::OnCortanaNotifyRelaunch(XamlLauncherState *a1, __int64 a2, const __m128i *a3)
{
  __m128 v3; // xmm2
  float v5; // xmm1_4
  HMONITOR v6; // rax
  RECT rc; // [rsp+20h] [rbp-28h] BYREF

  v3 = (__m128)_mm_loadu_si128(a3);
  v5 = _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  rc.left = (int)v3.m128_f32[0];
  rc.top = (int)v5;
  rc.right = (int)(float)(_mm_shuffle_ps(v3, v3, 170).m128_f32[0] + v3.m128_f32[0]);
  rc.bottom = (int)(float)(_mm_shuffle_ps(v3, v3, 255).m128_f32[0] + v5);
  v6 = MonitorFromRect(&rc, 0);
  *((_QWORD *)a1 + 133) = v6;
  XamlLauncherState::PostCortanaOrSearchVisibility(a1, 1, v6);
  return 0LL;
}
