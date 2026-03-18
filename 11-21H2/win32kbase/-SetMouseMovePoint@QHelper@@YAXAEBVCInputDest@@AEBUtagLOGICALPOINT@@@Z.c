/*
 * XREFs of ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C00343BC
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C003404C (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00341E0 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0034524 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall QHelper::SetMouseMovePoint(
        QHelper *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3)
{
  __int64 Queue; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8

  Queue = CInputDest::GetQueue((__int64)this, 2, (__int64)a3);
  if ( Queue )
  {
    if ( (((unsigned __int16)(*((_DWORD *)a2 + 2) >> 8) ^ (unsigned __int16)(CInputDest::GetDpiAwarenessContext(this) >> 8)) & 0x1FF) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(511LL, v6, v7);
    *(_QWORD *)(Queue + 184) = *(_QWORD *)a2;
    *(_DWORD *)(Queue + 192) = *((_DWORD *)a2 + 2);
  }
}
