/*
 * XREFs of ?Stop@CAudioStream@@QEAAJXZ @ 0x1800172D8
 * Callers:
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180016DD0 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::Stop(CAudioStream *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v5; // rdx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 72);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    if ( v3 >= 0 )
    {
LABEL_3:
      *((_BYTE *)this + 256) = 0;
      return 0LL;
    }
    v5 = 345LL;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 48LL))(
           *((_QWORD *)this + 7),
           *((_QWORD *)this + 6));
    v3 = v6;
    if ( v6 >= 0 || v6 == -2147023174 || v6 == -2147023170 )
      goto LABEL_3;
    v5 = 353LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v3,
    v7);
  return (unsigned int)v3;
}
