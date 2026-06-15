/*
 * XREFs of ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x140002F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ @ 0x140002F10 (-Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140051A78 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAudioDeviceGraph::Resume(CAudioDeviceGraph *this)
{
  char *v1; // rbx
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-48h]
  char *v10; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = (char *)this + 264;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v3 = *((_QWORD *)this + 19);
  v10 = v1;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x365,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v4,
      v9);
  }
  else
  {
    CAudioDeviceGraph::DurationTracker::Start((LARGE_INTEGER *)this + 10);
    v7 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                       v6,
                       _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                   + 8);
    if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
      tlgWriteTransfer_EtwEventWriteTransfer(v7, (unsigned int)&unk_1400A676D, (_DWORD)this + 352, 0, 2, (__int64)v11);
    v5 = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v10);
  return v5;
}
