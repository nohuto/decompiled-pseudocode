/*
 * XREFs of ?ResetEndpoint@CAudioStream@@QEAAJXZ @ 0x1800ECF78
 * Callers:
 *     ?ResetEndpoint@CVADServer@@UEAAJ_K@Z @ 0x18011F0C0 (-ResetEndpoint@CVADServer@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::ResetEndpoint(CAudioStream *this)
{
  __int64 *v1; // rcx
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 72) )
  {
    v1 = (__int64 *)((char *)this + 8);
    v2 = *v1;
    v11 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v2 + 112))(v1, &v11);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 371LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v3);
LABEL_7:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v11);
      return v4;
    }
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 208LL))(v11);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 372LL;
      goto LABEL_6;
    }
  }
  else
  {
    v11 = 0LL;
    v7 = (__int64 *)*((_QWORD *)this + 7);
    v8 = *v7;
    v11 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v8 + 80))(v7, &v11);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 208LL))(v11);
    v4 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17D,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_7;
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v11);
  return 0LL;
}
