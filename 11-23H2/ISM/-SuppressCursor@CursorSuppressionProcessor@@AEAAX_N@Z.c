/*
 * XREFs of ?SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z @ 0x180158888
 * Callers:
 *     ?OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180158440 (-OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualPro.c)
 *     ?OnInput@CursorSuppressionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180158630 (-OnInput@CursorSuppressionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?SuppressForDeviceDepartureImpl@CursorSuppressionProcessor@@AEAAXK@Z @ 0x1801588F0 (-SuppressForDeviceDepartureImpl@CursorSuppressionProcessor@@AEAAXK@Z.c)
 *     ?UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z @ 0x18015893C (-UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CursorSuppressionProcessor::SuppressCursor(CursorSuppressionProcessor *this, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8

  v3 = *(_QWORD *)(*((_QWORD *)this + 10) + 248LL) + 8LL;
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 232LL))(v3) + 80);
  if ( v4 )
  {
    LOBYTE(v5) = a2;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, 2LL, v5);
  }
}
