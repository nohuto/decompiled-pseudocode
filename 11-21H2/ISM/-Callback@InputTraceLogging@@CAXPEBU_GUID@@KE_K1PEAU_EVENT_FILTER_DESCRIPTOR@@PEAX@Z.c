/*
 * XREFs of ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180101FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ @ 0x18012B6F4 (-TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ.c)
 *     ?Thresholds@ShellGestures@InputTraceLogging@@SAX_J0000@Z @ 0x18014ED9C (-Thresholds@ShellGestures@InputTraceLogging@@SAX_J0000@Z.c)
 */

void __fastcall InputTraceLogging::Callback(const struct _GUID *a1)
{
  if ( InputTraceLogging::s_registered )
  {
    VirtualTouchpadControllerProxy::TraceCurrentState();
    InputTraceLogging::ShellGestures::Thresholds(
      ShellGesturesRecognizer::s_thresholds,
      (unsigned int)dword_180241FD0,
      qword_180241FD8,
      (unsigned int)dword_180241FE0,
      (unsigned int)dword_180241FE4);
  }
}
