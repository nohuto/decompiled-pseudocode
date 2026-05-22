/*
 * XREFs of ?OnInput@CursorSuppressionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801386A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18004C898 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$StateChange@AEAY07$$CBG@TestCursorTraceLogging@@SAXAEAY07$$CBG@Z @ 0x180138034 (--$StateChange@AEAY07$$CBG@TestCursorTraceLogging@@SAXAEAY07$$CBG@Z.c)
 *     ??$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z @ 0x180138080 (--$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z.c)
 *     ?SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z @ 0x18013883C (-SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z.c)
 *     ?SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z @ 0x1801388F8 (-SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z.c)
 */

__int64 __fastcall CursorSuppressionProcessor::OnInput(
        CursorSuppressionProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  char *v4; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_DWORD *)a4 + 2) = 0;
  v4 = (char *)a2 + 320;
  gsl::details::extent_type<-1>::extent_type<-1>(v14, *((unsigned int *)a2 + 79), (__int64)a3, (__int64)a4);
  if ( v14[0] == -1LL || !v4 && v14[0] )
  {
    _o_terminate(v9, v8, v10, v11);
    __debugbreak();
    JUMPOUT(0x180138795LL);
  }
  v12 = &v4[144 * v14[0]];
  while ( 1 )
  {
    if ( v4 == v12 )
    {
      if ( *((_DWORD *)this + 20) )
      {
        if ( *((_DWORD *)this + 20) != 3 || (*(_BYTE *)a2 & 0x10) == 0 )
          return 0LL;
        CursorSuppressionProcessor::SuppressCursor((CursorSuppressionProcessor *)((char *)this - 8), 1);
      }
      *((_DWORD *)this + 20) = 1;
      TestCursorTraceLogging::StateChange<unsigned short const (&)[8]>(v9);
      goto LABEL_13;
    }
    if ( (v4[12] & 6) != 0 )
      break;
    v4 += 144;
  }
  *((_DWORD *)a4 + 2) = 4;
  if ( *((_DWORD *)this + 20) == 1 )
    goto LABEL_18;
  if ( *((_DWORD *)this + 20) == 2 )
  {
    CursorSuppressionProcessor::SuppressCursor((CursorSuppressionProcessor *)((char *)this - 8), 1);
LABEL_18:
    *((_DWORD *)this + 20) = 0;
    TestCursorTraceLogging::StateChange<unsigned short const (&)[11]>(v9);
LABEL_13:
    InputTraceLogging::Cursor::SetSuppressionState(*((unsigned int *)a2 + 1), *((unsigned int *)this + 20));
  }
  return 0LL;
}
