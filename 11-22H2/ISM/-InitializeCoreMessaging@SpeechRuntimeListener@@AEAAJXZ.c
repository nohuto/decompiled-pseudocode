/*
 * XREFs of ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800E21B8
 * Callers:
 *     ??0SpeechRuntimeListener@@QEAA@PEAVMPCRawInputProvider@@K@Z @ 0x1800E2088 (--0SpeechRuntimeListener@@QEAA@PEAVMPCRawInputProvider@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003588C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003DD54 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x1800E23FC (-LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpeechRuntimeListener::InitializeCoreMessaging(SpeechRuntimeListener *this)
{
  __int64 v2; // rcx
  ISMTracing *v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  int Descriptor; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, const wchar_t *, char *); // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, char *); // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  ISMTracing *v16; // rcx
  int v18; // [rsp+20h] [rbp-28h]
  int v19; // [rsp+20h] [rbp-28h]
  __int64 v20; // [rsp+30h] [rbp-18h] BYREF
  char v21; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v2, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::LogSpeechRuntimeListenerFunct_(v3, L"InitializingCoreMessaging");
  }
  v20 = 0LL;
  v21 = 0;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this);
  v4 = CoreUICreate(this);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x49,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v4,
      v18);
  Descriptor = InputSecurityDescriptor::QueryDescriptor(
                 (__int64)&v20,
                 v5,
                 (__int64)L"System\\SpeechRuntimeListenerPort");
  if ( Descriptor < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)Descriptor,
      v18);
  v7 = *(_QWORD *)this;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(**(_QWORD **)this + 56LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 2);
  v9 = v8(v7, v20, L"System\\SpeechRuntimeListenerPort", (char *)this + 16);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x52,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v9,
      v18);
  v19 = (_DWORD)this + 24;
  v10 = (*(__int64 (__fastcall **)(_QWORD, int (*)(void *, const void *, int), SpeechRuntimeListener *, _QWORD))(**(_QWORD **)this + 104LL))(
          *(_QWORD *)this,
          SpeechRuntimeListener::OnMessageCallbackStatic,
          this,
          *((_QWORD *)this + 2));
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x58,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v10,
      v19);
  v11 = *(_QWORD *)this;
  v12 = *(__int64 (__fastcall **)(__int64, char *))(**(_QWORD **)this + 24LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 1);
  v13 = v12(v11, (char *)this + 8);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v13,
      v19);
  v14 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, __int64))(**((_QWORD **)this + 1) + 40LL))(
          *((_QWORD *)this + 1),
          L"System\\SpeechRuntimeListener",
          *((_QWORD *)this + 3),
          1LL);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v14,
      v19);
  if ( ISMTracing::IsEnabled((__int64)retaddr) )
  {
    wil::details::static_lazy<ISMTracing>::get(v15, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::LogSpeechRuntimeListenerFunct_(v16, L"InitializedCoreMessaging");
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v20);
  return 0LL;
}
