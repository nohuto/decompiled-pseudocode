/*
 * XREFs of ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x180017334
 * Callers:
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180016F54 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     wil::details::lambda_call__lambda_192e387dcf8e46dd73c68c7fa6747328___::_lambda_call__lambda_192e387dcf8e46dd73c68c7fa6747328___ @ 0x18011C648 (wil--details--lambda_call__lambda_192e387dcf8e46dd73c68c7fa6747328___--_lambda_call__lambda_192e.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180017654 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180045820 (-reset@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::CloseAudioHandle(CAudioStream *this)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  void *v7; // rdx
  wil::details *v8; // rcx
  int v10; // eax
  void *v11; // rdx
  wil::details *v12; // rcx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 35) == 2 )
  {
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((char *)this + 184);
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((char *)this + 192);
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((char *)this + 200);
  }
  v2 = *((_QWORD *)this + 72);
  if ( v2 )
  {
    v15 = 0LL;
    v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 96LL);
    wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::reset(&v15);
    v4 = v3(v2, &v15);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x122,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v4,
        v13);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, __int64, unsigned __int64))(*(_QWORD *)g_AudioResourceManager
                                                                                                + 32LL))(
             g_AudioResourceManager,
             v15,
             ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
      v5 = v6;
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x124,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v6);
      v8 = (wil::details *)*((_QWORD *)this + 50);
      if ( v8 )
        wil::details::SetEvent(v8, v7);
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v15);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, unsigned __int64))(*(_QWORD *)g_AudioResourceManager
                                                                                              + 32LL))(
            g_AudioResourceManager,
            *((_QWORD *)this + 7),
            ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    v5 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v10);
    v12 = (wil::details *)*((_QWORD *)this + 50);
    if ( v12 )
      wil::details::SetEvent(v12, v11);
  }
  return v5;
}
