/*
 * XREFs of ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D324C
 * Callers:
 *     ??0SpeechRuntimeListener@@QEAA@PEAVMPCRawInputProvider@@K@Z @ 0x1800D311C (--0SpeechRuntimeListener@@QEAA@PEAVMPCRawInputProvider@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180035CD8 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003965C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$LogSpeechRuntimeListenerFunct@AEAY0BJ@$$CBG@ISMTracing@@SAXAEAY0BJ@$$CBG@Z @ 0x1800D2FC4 (--$LogSpeechRuntimeListenerFunct@AEAY0BJ@$$CBG@ISMTracing@@SAXAEAY0BJ@$$CBG@Z.c)
 *     ??$LogSpeechRuntimeListenerFunct@AEAY0BK@$$CBG@ISMTracing@@SAXAEAY0BK@$$CBG@Z @ 0x1800D3070 (--$LogSpeechRuntimeListenerFunct@AEAY0BK@$$CBG@ISMTracing@@SAXAEAY0BK@$$CBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpeechRuntimeListener::InitializeCoreMessaging(SpeechRuntimeListener *this)
{
  int v2; // eax
  __int64 v3; // rdx
  int Descriptor; // eax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, const wchar_t *, char *); // rbx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, char *); // rbx
  int v11; // eax
  int v12; // eax
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+20h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  ISMTracing::LogSpeechRuntimeListenerFunct<unsigned short const (&)[26]>((__int64)this);
  v16 = 0LL;
  v17 = 0;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this);
  v2 = CoreUICreate(this);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x49,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v2,
      v14);
  Descriptor = InputSecurityDescriptor::QueryDescriptor(
                 (__int64)&v16,
                 v3,
                 (__int64)L"System\\SpeechRuntimeListenerPort");
  if ( Descriptor < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)Descriptor,
      v14);
  v5 = *(_QWORD *)this;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(**(_QWORD **)this + 56LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 2);
  v7 = v6(v5, v16, L"System\\SpeechRuntimeListenerPort", (char *)this + 16);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x52,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v7,
      v14);
  v15 = (_DWORD)this + 24;
  v8 = (*(__int64 (__fastcall **)(_QWORD, int (*)(void *, const void *, int), SpeechRuntimeListener *, _QWORD))(**(_QWORD **)this + 104LL))(
         *(_QWORD *)this,
         SpeechRuntimeListener::OnMessageCallbackStatic,
         this,
         *((_QWORD *)this + 2));
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x58,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v8,
      v15);
  v9 = *(_QWORD *)this;
  v10 = *(__int64 (__fastcall **)(__int64, char *))(**(_QWORD **)this + 24LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 1);
  v11 = v10(v9, (char *)this + 8);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v11,
      v15);
  v12 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, __int64))(**((_QWORD **)this + 1) + 40LL))(
          *((_QWORD *)this + 1),
          L"System\\SpeechRuntimeListener",
          *((_QWORD *)this + 3),
          1LL);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v12,
      v15);
  ISMTracing::LogSpeechRuntimeListenerFunct<unsigned short const (&)[25]>((__int64)retaddr);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v16);
  return 0LL;
}
