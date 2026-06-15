/*
 * XREFs of ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x14006B19C
 * Callers:
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001A570 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14006B550 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x140001FCC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x14002A894 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x14002C424 (-CancelDeadline@CAudioPump@@AEAAXXZ.c)
 *     ?CancelTimer@CAudioPump@@AEAAXPEAX@Z @ 0x14002D254 (-CancelTimer@CAudioPump@@AEAAXPEAX@Z.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14002DF0C (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioPump::CheckForPause(CAudioPump *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  signed __int32 v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ebx
  CAudioPump *v7; // rcx
  void *v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  wil::details *v11; // rcx
  const char *v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 160);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 4);
  v14 = v2;
  if ( !*((_BYTE *)this + 76) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
    v15 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 120);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
      &v14,
      0LL);
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        *((_DWORD *)this + 79) = 40;
    }
    else
    {
      v4 = *((_DWORD *)this + 79);
      if ( v4 && (v5 = v4 - 1, (*((_DWORD *)this + 79) = v5) == 0)
        || CAudioPump::InputPumpWorkRoutine == *((unsigned int (__fastcall **)(CAudioPump *))this + 26)
        || *((_BYTE *)this + 4648) )
      {
        *((_DWORD *)this + 79) = 40;
        v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 40LL))(*((_QWORD *)this + 25));
        if ( v6 == -2147418113 )
          v6 = 0;
        wil::details::in1diag3::Log_IfFailedMsg(
          retaddr,
          (void *)0x2CE,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
          (const char *)(unsigned int)v6,
          (__int64)"SetPinInactive failed",
          v12);
        if ( v6 >= 0 )
          _InterlockedExchange((volatile __int32 *)this + 78, 0);
        CAudioPump::CancelTimer(v7, *((void **)this + 34));
        CAudioPump::CancelDeadline(this);
        if ( v6 >= 0 )
        {
          v9 = *((_QWORD *)this + 38);
          if ( v9 )
          {
            v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
            if ( v10 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x2DE,
                (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                (const char *)(unsigned int)v10);
          }
        }
        v11 = (wil::details *)*((_QWORD *)this + 51);
        if ( v11 )
          wil::details::SetEvent(v11, v8);
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v15);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v14);
}
