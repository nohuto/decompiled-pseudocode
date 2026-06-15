/*
 * XREFs of ?SetSampleRate@CAudioStream@@QEAAJM@Z @ 0x1800E5850
 * Callers:
 *     ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x1800F06D0 (-SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioStream::SetSampleRate(CAudioStream *this, float a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 24);
  if ( !v2 )
  {
    v3 = -2147024809;
    v4 = 367LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v3);
    return v3;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v3 = v6;
  if ( v6 == -2005139384 )
  {
    v3 = -2147024809;
LABEL_7:
    v4 = 378LL;
    goto LABEL_3;
  }
  if ( v6 < 0 )
    goto LABEL_7;
  return 0LL;
}
