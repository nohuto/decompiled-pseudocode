/*
 * XREFs of ?SuppressForDeviceDepartureImpl@CursorSuppressionProcessor@@AEAAXK@Z @ 0x1801588F0
 * Callers:
 *     ?OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z @ 0x180105AE0 (-OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z.c)
 * Callees:
 *     ??$StateChange@AEAY07$$CBG@TestCursorTraceLogging@@SAXAEAY07$$CBG@Z @ 0x180158024 (--$StateChange@AEAY07$$CBG@TestCursorTraceLogging@@SAXAEAY07$$CBG@Z.c)
 *     ?SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z @ 0x1801587CC (-SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z.c)
 *     ?SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z @ 0x180158888 (-SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z.c)
 */

void __fastcall CursorSuppressionProcessor::SuppressForDeviceDepartureImpl(
        CursorSuppressionProcessor *this,
        unsigned int a2)
{
  CursorSuppressionProcessor *v2; // rbx
  __int64 v4; // rcx

  v2 = CursorSuppressionProcessor::s_processor;
  if ( *((_DWORD *)CursorSuppressionProcessor::s_processor + 22) )
  {
    CursorSuppressionProcessor::SuppressCursor(CursorSuppressionProcessor::s_processor, 1);
    *((_DWORD *)v2 + 22) = 1;
    TestCursorTraceLogging::StateChange<unsigned short const (&)[8]>(v4);
    InputTraceLogging::Cursor::SetSuppressionState(a2, *((_DWORD *)v2 + 22));
  }
}
