/*
 * XREFs of ?ResetEndpoint@CAudioStream@@QEAAJXZ @ 0x1800E5168
 * Callers:
 *     ?ResetEndpoint@CVADServer@@UEAAJ_K@Z @ 0x1800EF950 (-ResetEndpoint@CVADServer@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::ResetEndpoint(CAudioStream *this)
{
  __int64 *v1; // rcx
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v1 = (__int64 *)*((_QWORD *)this + 7);
  v2 = *v1;
  v7 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v2 + 80))(v1, &v7);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 168LL))(v7);
  v4 = v3;
  if ( v3 >= 0 )
    v4 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13E,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v3);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
  return v4;
}
