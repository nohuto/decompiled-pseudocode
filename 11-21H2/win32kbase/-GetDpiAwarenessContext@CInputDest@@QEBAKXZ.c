/*
 * XREFs of ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0034524
 * Callers:
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C00343BC (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00364E4 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C0044884 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputDest::GetDpiAwarenessContext(CInputDest *this)
{
  __int64 result; // rax

  result = 18LL;
  if ( *((_DWORD *)this + 23) == 2 )
    return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 10) + 40LL) + 288LL);
  return result;
}
