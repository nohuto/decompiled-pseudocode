/*
 * XREFs of ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x180027E3C
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002E318 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180002610 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800028B0 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCProcess@@@Z @ 0x18000BC90 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCProcess@@@Z.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18000BCD0 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180023594 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18002647C (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CProcess::MarkAsTerminated(CProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  volatile signed __int32 *v3; // rax
  int v4; // eax
  __int64 i; // rcx
  __int64 v6; // rbx
  __int64 v7; // r9
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10[8]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  volatile signed __int32 *v12; // [rsp+80h] [rbp+20h] BYREF
  volatile signed __int32 *v13; // [rsp+88h] [rbp+28h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+90h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+98h] [rbp+38h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v14 = v2;
  CProcess::CleanupProcessTerminationWatcher(this, 0);
  *((_DWORD *)this + 104) = 2;
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
    &v13,
    (__int64)this);
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
    &v12,
    (__int64 *)&v13);
  v10[0] = (__int64)off_18004F620;
  v3 = v12;
  v12 = 0LL;
  v10[1] = (__int64)v3;
  v10[7] = (__int64)v10;
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v12);
  v4 = QueueGenericWorkItem(v10);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      3693LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v4);
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v13);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 592));
  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 592);
  if ( *((_QWORD *)this + 80) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 162); i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)(*((_QWORD *)this + 79) + 8 * i) )
      {
        _mm_lfence();
        v6 = *(_QWORD *)(*((_QWORD *)this + 79) + 8 * i);
        while ( v6 )
        {
          v7 = v6;
          if ( *(_QWORD *)(v6 + 16) )
          {
            v6 = *(_QWORD *)(v6 + 16);
          }
          else
          {
            v8 = *((_DWORD *)this + 162);
            LODWORD(v9) = *(_DWORD *)(v6 + 24) % v8;
            do
            {
              v9 = (unsigned int)(v9 + 1);
              v6 = 0LL;
              if ( (unsigned int)v9 >= v8 )
                break;
              v6 = *(_QWORD *)(*((_QWORD *)this + 79) + 8 * v9);
            }
            while ( !v6 );
          }
          (*(void (__fastcall **)(_QWORD, CProcess *, _QWORD))(**(_QWORD **)(v7 + 8) + 24LL))(
            *(_QWORD *)(v7 + 8),
            this,
            *(_QWORD *)v7);
        }
        break;
      }
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
}
