/*
 * XREFs of ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003085C
 * Callers:
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000C280 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800025C0 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180002860 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18000BC80 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F510 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioStreamInfo@@@Z @ 0x180015D58 (--0-$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioStreamInfo@@@.c)
 *     _lambda_78bc9aa717e0c7ae8337a2b0ddd14613_::__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_ @ 0x180016030 (_lambda_78bc9aa717e0c7ae8337a2b0ddd14613_--__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_.c)
 *     ??0?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioSessionInfo@@@Z @ 0x18001FF60 (--0-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioSessionInfo@.c)
 *     ?GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z @ 0x18002CA00 (-GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPlaybackManager::QueueStreamStartedWorkItem(CPlaybackManager *this, struct IAudioStreamInfo *a2)
{
  __int64 v3; // rax
  int v4; // eax
  CApplicationManager *v5; // rcx
  unsigned int v6; // ebx
  int ProcessFromStreamInfo; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14; // [rsp+28h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16[9]; // [rsp+38h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  struct CProcess *v18; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+30h] BYREF

  v18 = this;
  wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>(
    &v20,
    (__int64)a2);
  v3 = *(_QWORD *)a2;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v3 + 32))(a2, &v19);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v18 = 0LL;
    ProcessFromStreamInfo = CApplicationManager::GetProcessFromStreamInfo(v5, a2, &v18);
    v6 = ProcessFromStreamInfo;
    if ( ProcessFromStreamInfo >= 0 )
    {
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
        &v13,
        (__int64 *)&v18);
      wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(
        &v14,
        v19);
      wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>(
        &v15,
        v20);
      v16[0] = (__int64)off_18004ED80;
      v9 = v13;
      v13 = 0LL;
      v16[1] = v9;
      v10 = v14;
      v14 = 0LL;
      v16[2] = v10;
      v11 = v15;
      v15 = 0LL;
      v16[3] = v11;
      v16[7] = (__int64)v16;
      lambda_78bc9aa717e0c7ae8337a2b0ddd14613_::__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_((__int64)&v13);
      ProcessFromStreamInfo = QueueGenericWorkItem(v16);
      v6 = ProcessFromStreamInfo;
      if ( ProcessFromStreamInfo >= 0 )
      {
        wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v18);
        v6 = 0;
        goto LABEL_9;
      }
      v8 = 80LL;
    }
    else
    {
      v8 = 75LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
      (const char *)(unsigned int)ProcessFromStreamInfo);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
      (const char *)(unsigned int)v4);
  }
LABEL_9:
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v19);
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v20);
  return v6;
}
