/*
 * XREFs of ?ShowTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJHPEAUIImmersiveMonitor@@PEAUITouchEdgeGripperEventHandler@@@Z @ 0x18064D8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     ?ShowGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_N@Z @ 0x18022024C (-ShowGripperAsync@TouchEdgeGripperHost@@QEAA-AUfire_and_forget@winrt@@W4TouchEdgeGestureType@@PE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1804A2E14 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchEdgeGestureManager::ShowTouchEdgeGripper(
        TouchEdgeGestureManager *this,
        int a2,
        struct IImmersiveMonitor *a3,
        struct ITouchEdgeGripperEventHandler *a4)
{
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rcx
  _QWORD *v12; // rsi
  int v13; // edi
  int v14; // ebx
  const char *v15; // r9
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct ITouchEdgeGripperEventHandler *v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+78h] [rbp+10h] BYREF
  struct IImmersiveMonitor *v21; // [rsp+88h] [rbp+20h] BYREF

  v8 = wil::details::static_lazy<TouchGestureLogging>::get(
         (__int64)this,
         (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_);
  v11 = (_DWORD *)v8[1];
  if ( *v11 > 5u )
  {
    v19 = a4;
    v21 = a3;
    v20 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)v11,
      byte_18087120F,
      v9,
      v10,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)&v19);
  }
  try
  {
    v12 = (_QWORD *)((char *)this + 72);
    if ( *((struct ITouchEdgeGripperEventHandler **)this + 9) != a4 )
    {
      if ( *v12 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 9);
      *v12 = a4;
      if ( a4 )
        (*(void (__fastcall **)(struct ITouchEdgeGripperEventHandler *))(*(_QWORD *)a4 + 8LL))(a4);
    }
    v13 = 0;
    v14 = a2 - 2;
    if ( v14 )
    {
      if ( v14 == 1 )
        v13 = 2;
      else
        MicrosoftTelemetryAssertTriggeredNoArgs();
    }
    else
    {
      v13 = 1;
    }
    LOBYTE(v17) = 0;
    TouchEdgeGripperHost::ShowGripperAsync(*((_QWORD *)this + 11), &v20, v13, (__int64)a3, v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x44,
                           (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
                           v15);
  }
  return result;
}
