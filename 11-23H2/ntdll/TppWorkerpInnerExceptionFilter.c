/*
 * XREFs of TppWorkerpInnerExceptionFilter @ 0x180127C78
 * Callers:
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 * Callees:
 *     RtlReportException @ 0x1800E8040 (RtlReportException.c)
 *     TppExceptionFilter @ 0x1801270FC (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x1801272EC (TppTerminateProcess.c)
 */

__int64 __fastcall TppWorkerpInnerExceptionFilter(_EXCEPTION_POINTERS *a1, __int64 a2, _DWORD *a3)
{
  LONG v5; // eax
  unsigned __int32 v6; // ebx
  EXCEPTION_RECORD *ExceptionRecord; // rcx

  v5 = TppExceptionFilter(a1, a2);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      ExceptionRecord = a1->ExceptionRecord;
      if ( a1->ExceptionRecord->ExceptionCode == -1073741571 )
      {
        RtlReportException(ExceptionRecord, a1->ContextRecord, 3u);
      }
      else
      {
        if ( ExceptionRecord->ExceptionCode != -1073740021
          && ExceptionRecord->ExceptionCode != -1073740020
          && ExceptionRecord->ExceptionCode != -1073740019
          && ExceptionRecord->ExceptionCode != -1073740018
          && ExceptionRecord->ExceptionCode != -1073740016 )
        {
          TppTerminateProcess((NTSTATUS **)a1);
          __debugbreak();
        }
        return (unsigned __int32)-1;
      }
    }
  }
  else
  {
    *a3 = 1;
  }
  return v6;
}
