/*
 * XREFs of ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x140003420
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@DurationTracker@CAudioDeviceGraph@@QEAA?AUDurationInformation@2@XZ @ 0x1400034EC (-Stop@DurationTracker@CAudioDeviceGraph@@QEAA-AUDurationInformation@2@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140051A78 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAudioDeviceGraph::Pause(CAudioDeviceGraph *this)
{
  char *v1; // rbx
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-59h]
  int v10; // [rsp+30h] [rbp-49h] BYREF
  __int64 v11; // [rsp+38h] [rbp-41h] BYREF
  __int64 v12; // [rsp+40h] [rbp-39h] BYREF
  char *v13; // [rsp+48h] [rbp-31h] BYREF
  int v14; // [rsp+50h] [rbp-29h] BYREF
  __int64 v15; // [rsp+58h] [rbp-21h]
  __int64 v16; // [rsp+60h] [rbp-19h]
  _BYTE v17[32]; // [rsp+70h] [rbp-9h] BYREF
  int *v18; // [rsp+90h] [rbp+17h]
  int v19; // [rsp+98h] [rbp+1Fh]
  int v20; // [rsp+9Ch] [rbp+23h]
  __int64 *v21; // [rsp+A0h] [rbp+27h]
  int v22; // [rsp+A8h] [rbp+2Fh]
  int v23; // [rsp+ACh] [rbp+33h]
  __int64 *v24; // [rsp+B0h] [rbp+37h]
  int v25; // [rsp+B8h] [rbp+3Fh]
  int v26; // [rsp+BCh] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v1 = (char *)this + 264;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v3 = *((_QWORD *)this + 19);
  v13 = v1;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x350,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v4,
      v9);
  }
  else
  {
    CAudioDeviceGraph::DurationTracker::Stop((char *)this + 80, &v14);
    v7 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                       v6,
                       _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                   + 8);
    if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
    {
      v26 = 0;
      v23 = 0;
      v20 = 0;
      v11 = v16;
      v12 = v15;
      v10 = v14;
      v24 = &v11;
      v21 = &v12;
      v18 = &v10;
      v25 = 8;
      v22 = 8;
      v19 = 4;
      tlgWriteTransfer_EtwEventWriteTransfer(v7, (unsigned int)&unk_1400A6566, (_DWORD)this + 352, 0, 5, (__int64)v17);
    }
    v5 = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v13);
  return v5;
}
