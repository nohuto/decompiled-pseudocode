/*
 * XREFs of ?GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z @ 0x18000FCC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::GetGroupingParam(CAudioSession *this, struct _GUID *a2)
{
  _QWORD *v3; // rsi
  _QWORD *i; // rbx
  unsigned int Pid; // [rsp+30h] [rbp+8h] BYREF
  char *v7; // [rsp+40h] [rbp+18h] BYREF

  (*(void (__fastcall **)(char *, struct _GUID *))(*((_QWORD *)this + 1) + 104LL))((char *)this + 8, a2);
  Pid = 0;
  I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( Pid == *((_DWORD *)this + 51) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
    v7 = (char *)this + 664;
    v3 = (_QWORD *)*((_QWORD *)this + 89);
    for ( i = (_QWORD *)*((_QWORD *)this + 88); i != v3; ++i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 456LL))(*i);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v7);
  }
  return 0LL;
}
