/*
 * XREFs of _lambda_f4b40b6f621e68311ee3b703040a939f_::_lambda_invoker_cdecl_ @ 0x1C00C12E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E0260 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall lambda_f4b40b6f621e68311ee3b703040a939f_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdi

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
  {
    v4 = *((_QWORD *)a1 + 59);
    if ( *(_DWORD *)(v4 + 24) == 7 )
    {
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 1056);
        if ( v5 )
          goto LABEL_9;
      }
      else
      {
        v5 = 0LL;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, v4);
      v4 = *((_QWORD *)a1 + 59);
LABEL_9:
      CPTPProcessor::UpdateEnvironment(v5, 1LL, v4);
    }
  }
  return 1;
}
