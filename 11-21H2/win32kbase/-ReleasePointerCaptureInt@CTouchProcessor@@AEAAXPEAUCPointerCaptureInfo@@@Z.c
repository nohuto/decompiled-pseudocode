/*
 * XREFs of ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C01D3AE4
 * Callers:
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C00E819E (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C01C6030 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C01D3A34 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C01D54BC (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ReleasePointerCaptureInt(
        struct _KTHREAD **this,
        struct CPointerCaptureInfo *a2,
        __int64 a3)
{
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *(_DWORD *)a2 )
  {
    if ( (unsigned int)(*(_DWORD *)a2 - 1) > 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    if ( !*((_DWORD *)a2 + 2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    CInputDest::SetEmpty((struct CPointerCaptureInfo *)((char *)a2 + 8));
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 32) = 0;
  }
  else
  {
    if ( *((_DWORD *)a2 + 2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    if ( *((_DWORD *)a2 + 32) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  }
}
