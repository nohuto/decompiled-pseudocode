/*
 * XREFs of ?SignalAndWaitForThread@CAudioPump@@AEAAXXZ @ 0x140073DE0
 * Callers:
 *     wil::details::lambda_call__lambda_022658cf2f51e3c9ab9d305960bdc061___::_lambda_call__lambda_022658cf2f51e3c9ab9d305960bdc061___ @ 0x1400736B0 (wil--details--lambda_call__lambda_022658cf2f51e3c9ab9d305960bdc061___--_lambda_call__lambda_0226.c)
 *     ??1CAudioPump@@QEAA@XZ @ 0x1400736D4 (--1CAudioPump@@QEAA@XZ.c)
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x140073E90 (-Stop@CAudioPump@@UEAAJXZ.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1400260A0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioPump::SignalAndWaitForThread(CAudioPump *this, void *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx

  *((_BYTE *)this + 76) = 1;
  wil::details::SetEvent(*((wil::details **)this + 32), a2);
  v3 = (_QWORD *)((char *)this + 4664);
  if ( *((_QWORD *)this + 584) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 48LL))(*v3);
    *((_QWORD *)this + 584) = 0LL;
  }
  v4 = *v3;
  *v3 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  WaitForSingleObjectEx(*((HANDLE *)this + 14), 0xFFFFFFFF, 0);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 14,
    0LL);
}
