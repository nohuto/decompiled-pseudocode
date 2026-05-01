/*
 * XREFs of wil::details::lambda_call__lambda_cbd050c3a2bffbabf931a9f51c6305b9___::_lambda_call__lambda_cbd050c3a2bffbabf931a9f51c6305b9___ @ 0x180658ECC
 * Callers:
 *     _TouchEdgeGripperWindow::GetMonitorDisplayInfo_::_1_::dtor$0 @ 0x18065B432 (_TouchEdgeGripperWindow--GetMonitorDisplayInfo_--_1_--dtor$0.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_cbd050c3a2bffbabf931a9f51c6305b9___::_lambda_call__lambda_cbd050c3a2bffbabf931a9f51c6305b9___(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    return MicrosoftTelemetryAssertTriggeredNoArgs(a1, a2);
  }
  return result;
}
