/*
 * XREFs of ?GenerateMouseLeaveEventMessage@CursorProcessor@@AEBAXKK@Z @ 0x180167200
 * Callers:
 *     ?CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z @ 0x180166D1C (-CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z.c)
 * Callees:
 *     ?CursorProcessorGenerateMouseLeave@Cursor@InputTraceLogging@@SAXKK@Z @ 0x180166EB4 (-CursorProcessorGenerateMouseLeave@Cursor@InputTraceLogging@@SAXKK@Z.c)
 */

void __fastcall CursorProcessor::GenerateMouseLeaveEventMessage(CursorProcessor *this, int a2, int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  _DWORD *v6; // rbx

  v4 = *((unsigned int *)this + 29);
  if ( (_DWORD)v4 )
  {
    v5 = 0;
    v6 = (_DWORD *)((char *)this + 112);
    if ( !a3 || *v6 != a2 )
      v5 = 1;
    NtMITPostThreadEventMessage(v4, 0LL, 675LL, v5, 0);
    InputTraceLogging::Cursor::CursorProcessorGenerateMouseLeave((unsigned int)*v6, *((_DWORD *)this + 29));
  }
}
