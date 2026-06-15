/*
 * XREFs of ?LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z @ 0x1800C17D0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1800C1704 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioHealthMonitor::LooksLikeWeAreHung(
        CAudioHealthMonitor *this,
        unsigned int a2,
        const unsigned __int16 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r10
  HANDLE CurrentProcess; // rax
  int v16; // [rsp+40h] [rbp-19h] BYREF
  int v17; // [rsp+44h] [rbp-15h] BYREF
  int v18; // [rsp+48h] [rbp-11h] BYREF
  DWORD CurrentProcessId; // [rsp+50h] [rbp-9h] BYREF
  int v20; // [rsp+54h] [rbp-5h]
  void *v21; // [rsp+58h] [rbp-1h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+60h] [rbp+7h] BYREF
  char v23[32]; // [rsp+68h] [rbp+Fh] BYREF
  int *v24; // [rsp+88h] [rbp+2Fh]
  int v25; // [rsp+90h] [rbp+37h]
  int v26; // [rsp+94h] [rbp+3Bh]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v22 = v6;
  v7 = *((_DWORD *)this + 2);
  v8 = v7 + 1;
  if ( (unsigned int)v8 >= v7 )
  {
    *((_DWORD *)this + 2) = v8;
    if ( (unsigned int)v8 >= *((_DWORD *)this + 3) && *((_DWORD *)this + 4) == 16 && !*((_DWORD *)this + 16) )
    {
      v9 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
             v8,
             _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v9 > 4u
        && (*(_QWORD *)(v9 + 16) & 0x400000000001LL) != 0
        && (*(_QWORD *)(v9 + 24) & 0x400000000001LL) == *(_QWORD *)(v9 + 24) )
      {
        v17 = *((_DWORD *)this + 3);
        v18 = *((_DWORD *)this + 2);
        v16 = 0;
        v21 = (void *)a3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v9,
          byte_180187FF4,
          v10,
          v11,
          &v21,
          (__int64)&v16,
          (__int64)&v18,
          (__int64)&v17);
      }
      *((_DWORD *)this + 16) = 1;
      CurrentProcessId = GetCurrentProcessId();
      v20 = (*(__int64 (__fastcall **)(CAudioHealthMonitor *))(*(_QWORD *)this + 16LL))(this);
      v12 = ReportCoreHang(&CurrentProcessId, (unsigned int)(v20 != 0) + 1, a2, 33LL);
      v14 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v13,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v14 > 4u
        && (*(_BYTE *)(v14 + 16) & 1) != 0
        && (*(_QWORD *)(v14 + 24) & 1LL) == *(_QWORD *)(v14 + 24) )
      {
        v16 = v12;
        v24 = &v16;
        v25 = 4;
        v26 = 0;
        tlgWriteTransfer_EtwEventWriteTransfer(v14, byte_180187FD0, 0LL, 0LL, 3, (__int64)v23);
      }
      if ( v12 >= 0 )
        Sleep(0xEA60u);
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0);
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v22);
}
