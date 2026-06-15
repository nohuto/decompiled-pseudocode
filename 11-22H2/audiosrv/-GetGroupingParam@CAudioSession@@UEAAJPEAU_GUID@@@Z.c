/*
 * XREFs of ?GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z @ 0x1800DFF80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::GetGroupingParam(CAudioSession *this, struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  _QWORD *v4; // rsi
  _QWORD *i; // rbx
  unsigned int Pid; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(char *, struct _GUID *))(*((_QWORD *)this + 1) + 104LL))((char *)this + 8, a2);
  Pid = 0;
  I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( Pid == *((_DWORD *)this + 51) )
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 664);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
    v4 = (_QWORD *)*((_QWORD *)this + 89);
    for ( i = (_QWORD *)*((_QWORD *)this + 88); i != v4; ++i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 456LL))(*i);
    if ( v3 )
      LeaveCriticalSection(v3);
  }
  return 0LL;
}
