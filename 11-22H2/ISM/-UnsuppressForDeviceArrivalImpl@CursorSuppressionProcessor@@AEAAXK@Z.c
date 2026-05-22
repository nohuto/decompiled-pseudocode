/*
 * XREFs of ?UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z @ 0x180166C1C
 * Callers:
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@@@Z @ 0x180040160 (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@.c)
 * Callees:
 *     ??$StateChange@AEAY0O@$$CBG@TestCursorTraceLogging@@SAXAEAY0O@$$CBG@Z @ 0x18016639C (--$StateChange@AEAY0O@$$CBG@TestCursorTraceLogging@@SAXAEAY0O@$$CBG@Z.c)
 *     ?SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z @ 0x180166AAC (-SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z.c)
 *     ?SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z @ 0x180166B68 (-SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z.c)
 */

void __fastcall CursorSuppressionProcessor::UnsuppressForDeviceArrivalImpl(
        CursorSuppressionProcessor *this,
        unsigned int a2)
{
  CursorSuppressionProcessor *v2; // rbx
  __int64 v4; // rcx

  v2 = CursorSuppressionProcessor::s_processor;
  if ( *((_DWORD *)CursorSuppressionProcessor::s_processor + 22) != 2 )
  {
    CursorSuppressionProcessor::SuppressCursor(CursorSuppressionProcessor::s_processor, 0);
    *((_DWORD *)v2 + 22) = 2;
    TestCursorTraceLogging::StateChange<unsigned short const (&)[14]>(v4);
    InputTraceLogging::Cursor::SetSuppressionState(a2, *((_DWORD *)v2 + 22));
  }
}
