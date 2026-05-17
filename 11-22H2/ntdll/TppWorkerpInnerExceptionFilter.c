/*
 * XREFs of TppWorkerpInnerExceptionFilter @ 0x1801267F8
 * Callers:
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 * Callees:
 *     RtlReportException @ 0x1800E6D10 (RtlReportException.c)
 *     TppExceptionFilter @ 0x180125C7C (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x180125E6C (TppTerminateProcess.c)
 */

__int64 __fastcall TppWorkerpInnerExceptionFilter(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // rcx

  v5 = TppExceptionFilter((const void **)a1, a2);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v7 = *(_DWORD **)a1;
      if ( **(_DWORD **)a1 == -1073741571 )
      {
        RtlReportException((__int64)v7, *(_QWORD *)(a1 + 8), 3u);
      }
      else
      {
        if ( *v7 != -1073740021 && *v7 != -1073740020 && *v7 != -1073740019 && *v7 != -1073740018 && *v7 != -1073740016 )
        {
          TppTerminateProcess();
          __debugbreak();
        }
        return (unsigned int)-1;
      }
    }
  }
  else
  {
    *a3 = 1;
  }
  return v6;
}
