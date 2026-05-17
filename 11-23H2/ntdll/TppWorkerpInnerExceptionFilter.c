/*
 * XREFs of TppWorkerpInnerExceptionFilter @ 0x180127CA8
 * Callers:
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 * Callees:
 *     RtlReportException @ 0x1800E8040 (RtlReportException.c)
 *     TppExceptionFilter @ 0x18012712C (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x18012731C (TppTerminateProcess.c)
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
