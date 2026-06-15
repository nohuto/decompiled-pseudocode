/*
 * XREFs of ?GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z @ 0x1800EC56C
 * Callers:
 *     ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x18011E1F0 (-GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetStreamLatency(CAudioStream *this, __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 72) )
  {
    v4 = (__int64 *)((char *)this + 8);
    v5 = *v4;
    v14 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 112))(v4, &v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 415LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v6);
LABEL_7:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
      return v7;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 56LL))(v14, *((_QWORD *)this + 6), a2);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 417LL;
      goto LABEL_6;
    }
  }
  else
  {
    v14 = 0LL;
    v10 = (__int64 *)*((_QWORD *)this + 7);
    v11 = *v10;
    v14 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v11 + 80))(v10, &v14);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 56LL))(
            v14,
            *((_QWORD *)this + 6),
            a2);
    v7 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AD,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_7;
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
  return 0LL;
}
