/*
 * XREFs of wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___ @ 0x1804E92CC
 * Callers:
 *     ?DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18003FC90 (-DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 * Callees:
 *     _lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator() @ 0x1804E949C (_lambda_69f1d5bd17a52b1cfb35c35a1e227214_--operator().c)
 */

__int64 wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___()
{
  wil *v0; // rcx
  __int64 result; // rax

  try
  {
    lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator()();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v0);
  }
  return result;
}
