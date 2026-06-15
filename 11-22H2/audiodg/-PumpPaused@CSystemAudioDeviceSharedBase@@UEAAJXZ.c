/*
 * XREFs of ?PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x1400237B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x14004A26C (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::PumpPaused(CSystemAudioDeviceSharedBase *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_OWORD *)v5 = *((_OWORD *)this - 3);
  v6 = *(_OWORD *)v5;
  EtwEventActivityIdControl(4LL, &v6);
  if ( *((_DWORD *)this + 14) == 1
    || (v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 37) + 144LL))((char *)this - 296), v3 = v2, v2 >= 0) )
  {
    EtwEventActivityIdControl(4LL, &v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x226,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
      (const char *)(unsigned int)v2,
      v5[0]);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)v5);
    return v3;
  }
}
