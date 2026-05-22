/*
 * XREFs of ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800BA474
 * Callers:
 *     ?OnMessageCallbackStatic@SpeechRuntimeListener@@CAJPEAXPEBXH@Z @ 0x1800BA430 (-OnMessageCallbackStatic@SpeechRuntimeListener@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800B5044 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800B6A70 (-QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z.c)
 *     ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x1800BA3BC (-LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall SpeechRuntimeListener::OnSelect(SpeechRuntimeListener *this)
{
  __int64 v2; // rcx
  ISMTracing *v3; // rcx
  int v4; // r9d
  int v5; // eax
  MPCRawInputProvider *v6; // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-BE8h]
  int v10[4]; // [rsp+30h] [rbp-BD8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-BC8h]
  int v12; // [rsp+48h] [rbp-BC0h]
  int v13; // [rsp+9F8h] [rbp-210h]
  __int64 v14; // [rsp+A00h] [rbp-208h]
  int v15; // [rsp+A0Ch] [rbp-1FCh]
  wil::details::in1diag3 *retaddr; // [rsp+C08h] [rbp+0h]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v2, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::LogSpeechRuntimeListenerFunct_(v3, L"OnSelect");
  }
  memset_0(v10, 0, 0xBC0uLL);
  v4 = *((_DWORD *)this + 20);
  v12 = 3008;
  v5 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 7, 0x40000, v4, (__int64)v10);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x34,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v5,
      v9);
  v6 = (MPCRawInputProvider *)*((_QWORD *)this + 9);
  v15 = -1;
  v14 = v11;
  v13 = 1;
  v7 = MPCRawInputProvider::QueueInput(v6, (struct LegacyInputInfo *)v10);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v7,
      v9);
  return 0LL;
}
