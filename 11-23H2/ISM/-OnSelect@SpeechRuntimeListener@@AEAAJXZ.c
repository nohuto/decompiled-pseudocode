/*
 * XREFs of ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D3594
 * Callers:
 *     ?OnMessageCallbackStatic@SpeechRuntimeListener@@CAJPEAXPEBXH@Z @ 0x1800D3550 (-OnMessageCallbackStatic@SpeechRuntimeListener@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800CDE1C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800CF95C (-QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z.c)
 *     ??$LogSpeechRuntimeListenerFunct@AEAY08$$CBG@ISMTracing@@SAXAEAY08$$CBG@Z @ 0x1800D2F18 (--$LogSpeechRuntimeListenerFunct@AEAY08$$CBG@ISMTracing@@SAXAEAY08$$CBG@Z.c)
 */

__int64 __fastcall SpeechRuntimeListener::OnSelect(SpeechRuntimeListener *this)
{
  int v2; // r9d
  int v3; // eax
  MPCRawInputProvider *v4; // rcx
  int v5; // eax
  int v7; // [rsp+20h] [rbp-BE8h]
  int v8[4]; // [rsp+30h] [rbp-BD8h] BYREF
  __int64 v9; // [rsp+40h] [rbp-BC8h]
  int v10; // [rsp+48h] [rbp-BC0h]
  int v11; // [rsp+9F8h] [rbp-210h]
  __int64 v12; // [rsp+A00h] [rbp-208h]
  int v13; // [rsp+A0Ch] [rbp-1FCh]
  wil::details::in1diag3 *retaddr; // [rsp+C08h] [rbp+0h]

  ISMTracing::LogSpeechRuntimeListenerFunct<unsigned short const (&)[9]>((__int64)this);
  memset_0(v8, 0, 0xBC0uLL);
  v2 = *((_DWORD *)this + 20);
  v10 = 3008;
  v3 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 7, 0x40000, v2, (__int64)v8);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x34,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v3,
      v7);
  v4 = (MPCRawInputProvider *)*((_QWORD *)this + 9);
  v13 = -1;
  v12 = v9;
  v11 = 1;
  v5 = MPCRawInputProvider::QueueInput(v4, (struct LegacyInputInfo *)v8);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v5,
      v7);
  return 0LL;
}
