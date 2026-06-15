/*
 * XREFs of ?GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z @ 0x18001FB24
 * Callers:
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180027084 (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180027324 (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::GetProcessFromStreamInfo(
        CApplicationManager *this,
        struct IAudioStreamInfo *a2,
        struct CProcess **a3)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  CApplicationManager *v11; // [rsp+30h] [rbp+10h] BYREF
  __int64 v12; // [rsp+38h] [rbp+18h] BYREF

  v11 = this;
  v4 = *(_QWORD *)a2;
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, CApplicationManager **))(v4 + 24))(a2, &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FF,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v5);
    if ( v11 )
      (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v11 + 16LL))(v11);
    return v6;
  }
  v12 = 0LL;
  v8 = (**(__int64 (__fastcall ***)(CApplicationManager *, GUID *, __int64 *))v11)(
         v11,
         &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4,
         &v12);
  v6 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x302,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v8);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v11 )
      (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v11 + 16LL))(v11);
    return v6;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, struct CProcess **))(*(_QWORD *)v12 + 24LL))(v12, a3);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x304,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v9);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v11 )
      (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v11 + 16LL))(v11);
    return v6;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
    (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
