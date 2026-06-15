/*
 * XREFs of ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x140038922
 * Callers:
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14000B480 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x140038B10 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x140008D70 (-CancelDeadline@CAudioPump@@AEAAXXZ.c)
 *     ?CancelTimer@CAudioPump@@AEAAXPEAX@Z @ 0x140008DC8 (-CancelTimer@CAudioPump@@AEAAXPEAX@Z.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x140009898 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1400260A0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x140038134 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioPump::CheckForPause(CAudioPump *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rcx
  signed __int32 v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // esi
  CAudioPump *v8; // rcx
  void *v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  wil::details *v12; // rcx
  const char *v13; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+8h] BYREF
  char *v16; // [rsp+58h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 160);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 4);
  lpCriticalSection = v2;
  if ( *((_BYTE *)this + 76) )
  {
    if ( !v2 )
      return;
    v3 = v2;
    goto LABEL_24;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
  v16 = (char *)this + 120;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
    &lpCriticalSection,
    0LL);
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      *((_DWORD *)this + 79) = 40;
  }
  else
  {
    v5 = *((_DWORD *)this + 79);
    if ( v5 && (v6 = v5 - 1, (*((_DWORD *)this + 79) = v6) == 0)
      || CAudioPump::InputPumpWorkRoutine == *((unsigned int (__fastcall **)(CAudioPump *))this + 26)
      || *((_BYTE *)this + 4656) )
    {
      *((_DWORD *)this + 79) = 40;
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 40LL))(*((_QWORD *)this + 25));
      if ( v7 == -2147418113 )
        v7 = 0;
      wil::details::in1diag3::Log_IfFailedMsg(
        retaddr,
        (void *)0x2CE,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
        (const char *)(unsigned int)v7,
        (__int64)"SetPinInactive failed",
        v13);
      if ( v7 >= 0 )
        _InterlockedExchange((volatile __int32 *)this + 78, 0);
      CAudioPump::CancelTimer(v8, *((void **)this + 34));
      CAudioPump::CancelDeadline(this);
      if ( v7 >= 0 )
      {
        v10 = *((_QWORD *)this + 38);
        if ( v10 )
        {
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x2DE,
              (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
              (const char *)(unsigned int)v11);
        }
      }
      v12 = (wil::details *)*((_QWORD *)this + 51);
      if ( v12 )
        wil::details::SetEvent(v12, v9);
    }
  }
  if ( this != (CAudioPump *)-120LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 3);
  v3 = lpCriticalSection;
  if ( lpCriticalSection )
LABEL_24:
    LeaveCriticalSection(v3);
}
