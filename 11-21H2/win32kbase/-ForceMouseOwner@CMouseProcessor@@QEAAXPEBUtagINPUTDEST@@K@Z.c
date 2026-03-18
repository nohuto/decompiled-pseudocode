/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C01FA6B0
 * Callers:
 *     ForceCapture @ 0x1C00C5EC0 (ForceCapture.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C00449A8 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ForceMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2, char a3)
{
  const struct tagINPUTDEST *v3; // rsi
  __int64 v5; // r8
  _BYTE v6[128]; // [rsp+50h] [rbp-A8h] BYREF

  v3 = a2;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      6,
      19,
      (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids,
      a3);
  if ( v3 )
  {
    CInputDest::CInputDest((CInputDest *)v6, v3);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3576), (const struct CInputDest *)v6, v5);
    CInputDest::SetEmpty((CInputDest *)v6);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 924, 1, 1) )
  {
    CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 3576));
    _InterlockedExchange((volatile __int32 *)this + 924, 0);
  }
}
