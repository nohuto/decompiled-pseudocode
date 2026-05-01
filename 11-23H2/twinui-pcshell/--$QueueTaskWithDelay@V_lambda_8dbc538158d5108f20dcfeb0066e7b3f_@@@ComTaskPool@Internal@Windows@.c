/*
 * XREFs of ??$QueueTaskWithDelay@V_lambda_8dbc538158d5108f20dcfeb0066e7b3f_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@KPEAPEAUIUnknown@@$$QEAV_lambda_8dbc538158d5108f20dcfeb0066e7b3f_@@@Z @ 0x1800F50FC
 * Callers:
 *     ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1800F4FB4 (--$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@Y.c)
 * Callees:
 *     ??$Make@V?$CTaskWrapper@V_lambda_8dbc538158d5108f20dcfeb0066e7b3f_@@@ComTaskPool@Internal@Windows@@V_lambda_8dbc538158d5108f20dcfeb0066e7b3f_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_8dbc538158d5108f20dcfeb0066e7b3f_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_8dbc538158d5108f20dcfeb0066e7b3f_@@@Z @ 0x1800F5224 (--$Make@V-$CTaskWrapper@V_lambda_8dbc538158d5108f20dcfeb0066e7b3f_@@@ComTaskPool@Internal@Window.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay<_lambda_8dbc538158d5108f20dcfeb0066e7b3f_>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_8dbc538158d5108f20dcfeb0066e7b3f_>,_lambda_8dbc538158d5108f20dcfeb0066e7b3f_>(
                    &v9,
                    a4);
  v5 = *v4;
  *v4 = 0LL;
  if ( v9 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v7;
}
