/*
 * XREFs of ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x1800CED10
 * Callers:
 *     ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800CEE00 (-OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180042E84 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::OnADGProcessTerminated(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  char *v3; // rcx
  __int64 v4; // rdx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  DWORD ExitCode; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+38h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v7 = v2;
  v3 = (char *)*((_QWORD *)this + 11);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( GetExitCodeProcess(v3, &ExitCode) )
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)this + 11,
        0LL);
      *((_DWORD *)this + 24) = 0;
      (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 96LL))(
        ThreadPool,
        *((_QWORD *)this + 16));
      *((_QWORD *)this + 16) = 0LL;
      v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 19);
      if ( v5 )
      {
        LOBYTE(v4) = 1;
        (**v5)(v5, v4);
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
