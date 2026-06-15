/*
 * XREFs of ?GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x140058D70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x14004A22C (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetClientReleaseEvent(
        CSystemAudioDeviceSharedBase *this,
        unsigned int a2,
        struct CP_EVENT_METADATA_BLOB *a3,
        struct CP_EVENT_METADATA_BLOB *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // r14
  int v9; // eax
  unsigned int v10; // ebx
  __int128 v12; // [rsp+30h] [rbp-58h] BYREF
  __int128 v13; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v12 = *(_OWORD *)((char *)this + 248);
  v13 = v12;
  EtwEventActivityIdControl(4LL, &v13);
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct CP_EVENT_METADATA_BLOB *, struct CP_EVENT_METADATA_BLOB *))(**((_QWORD **)this + 41) + 32LL))(
         *((_QWORD *)this + 41),
         a2,
         a3,
         a4);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( v8 )
      LeaveCriticalSection(v8);
    EtwEventActivityIdControl(4LL, &v13);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
      (const char *)(unsigned int)v9);
    if ( v8 )
      LeaveCriticalSection(v8);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v12);
    return v10;
  }
}
