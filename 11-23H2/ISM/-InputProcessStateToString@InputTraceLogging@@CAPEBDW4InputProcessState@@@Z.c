/*
 * XREFs of ?InputProcessStateToString@InputTraceLogging@@CAPEBDW4InputProcessState@@@Z @ 0x1801B3F2C
 * Callers:
 *     ?ChangeState@InputProcessManager@InputTraceLogging@@SAXW4InputProcessState@@0@Z @ 0x1801B3D54 (-ChangeState@InputProcessManager@InputTraceLogging@@SAXW4InputProcessState@@0@Z.c)
 *     ?StartProcess@InputProcessManager@InputTraceLogging@@SAXW4InputProcessState@@@Z @ 0x1801B4A50 (-StartProcess@InputProcessManager@InputTraceLogging@@SAXW4InputProcessState@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::InputProcessStateToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return "Stopped";
  v1 = a1 - 1;
  if ( !v1 )
    return "Starting";
  v2 = v1 - 1;
  if ( !v2 )
    return "Started";
  v3 = v2 - 1;
  if ( !v3 )
    return "Running";
  if ( v3 == 1 )
    return "Stopping";
  return "UNKNOWN";
}
