/*
 * XREFs of ?BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA?AVShowJumpViewActivity@JumpViewProvider@@PEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z @ 0x18037186C
 * Callers:
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180373BC0 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180100668 (--0-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x180374160 (-StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@.c)
 */

// Hidden C++ exception states: #wind=3
struct wil::details::IFailureCallback *__fastcall CJumpViewExperienceManager::BeginTelemetryActivity(
        __int64 a1,
        struct wil::details::IFailureCallback *a2,
        __int64 a3)
{
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rbx
  int v7; // eax
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rbx
  int v9; // eax
  int v10; // eax
  PCWSTR StringRawBuffer; // rdi
  PCWSTR v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  HSTRING string; // [rsp+60h] [rbp+30h] BYREF
  struct wil::details::IFailureCallback *v16; // [rsp+68h] [rbp+38h] BYREF
  HSTRING v17; // [rsp+70h] [rbp+40h] BYREF

  v16 = a2;
  v17 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 64LL);
  WindowsDeleteString(0LL);
  v17 = 0LL;
  v7 = v6(a3, &v17);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x393,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  string = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 96LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v9 = v8(a3, &string);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x396,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  v10 = (*(__int64 (__fastcall **)(__int64, struct wil::details::IFailureCallback **))(*(_QWORD *)a3 + 288LL))(a3, &v16);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x399,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v12 = WindowsGetStringRawBuffer(v17, 0LL);
  wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(a2);
  *(_QWORD *)a2 = &JumpViewProvider::ShowJumpViewActivity::`vftable';
  JumpViewProvider::ShowJumpViewActivity::StartActivity(
    a2,
    v12,
    StringRawBuffer,
    *(unsigned int *)(a1 + 500),
    (_DWORD)v16);
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v17);
  return a2;
}
