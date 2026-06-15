/*
 * XREFs of ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x1800122E8
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180012470 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180023C60 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioStream::UpdateStreamPriority(CAudioStream *this)
{
  int v2; // esi
  char v3; // bp
  __int64 v4; // rbx
  int v5; // edx
  unsigned int v6; // ebx
  unsigned int v7; // esi
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 120LL))(*((_QWORD *)this + 9));
  v3 = *((_BYTE *)this + 240);
  v4 = *((unsigned int *)this + 100);
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 64LL))((char *)this + 8) )
    v5 = dword_180181C90[v4];
  else
    v5 = dword_180181C30[v4];
  v6 = (v3 == 0) + 2 * (v5 + (v2 != 0 ? 0x10 : 0));
  v7 = *((_DWORD *)this + 61);
  if ( v6 == v7 )
    return 0LL;
  *((_DWORD *)this + 61) = v6;
  v15 = 0LL;
  v9 = (__int64 *)*((_QWORD *)this + 7);
  v10 = *v9;
  v15 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v10 + 80))(v9, &v15);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 200LL))(v15, 1LL, v6, v7);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x292,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v11,
    v13);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
  return v12;
}
