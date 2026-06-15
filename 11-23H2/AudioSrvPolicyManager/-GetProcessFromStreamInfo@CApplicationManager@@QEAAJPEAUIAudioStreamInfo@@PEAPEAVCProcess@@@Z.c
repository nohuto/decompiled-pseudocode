/*
 * XREFs of ?GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z @ 0x18002CA00
 * Callers:
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000E990 (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003085C (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F510 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::GetProcessFromStreamInfo(
        CApplicationManager *this,
        struct IAudioStreamInfo *a2,
        struct CProcess **a3)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CApplicationManager *v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, CApplicationManager **); // [rsp+38h] [rbp+10h] BYREF

  v11 = this;
  v4 = *(_QWORD *)a2;
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 (__fastcall ****)(_QWORD, GUID *, CApplicationManager **)))(v4 + 24))(
         a2,
         &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v11 = 0LL;
    v7 = (**v12)(v12, &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4, &v11);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(CApplicationManager *, struct CProcess **))(*(_QWORD *)v11 + 24LL))(v11, a3);
      v6 = v7;
      if ( v7 >= 0 )
      {
        wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v11);
        v6 = 0;
        goto LABEL_9;
      }
      v8 = 772LL;
    }
    else
    {
      v8 = 770LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v7);
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FF,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v5);
  }
LABEL_9:
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v12);
  return v6;
}
