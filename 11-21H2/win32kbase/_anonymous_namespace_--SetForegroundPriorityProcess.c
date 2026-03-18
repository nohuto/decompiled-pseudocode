/*
 * XREFs of _anonymous_namespace_::SetForegroundPriorityProcess @ 0x1C008092C
 * Callers:
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z @ 0x1C0080690 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z.c)
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0080800 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::SetProcessPriorityByClass @ 0x1C0080A00 (_anonymous_namespace_--SetProcessPriorityByClass.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::SetForegroundPriorityProcess(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v6; // rbp
  char v7; // di
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  char ProcessPriorityClass; // al
  __int64 v12; // rdx

  result = *(unsigned int *)(a2 + 488);
  v4 = a3;
  if ( (result & 0xC) != 0 || (result & 1) != 0 || (result & 0x40000) != 0 && (_DWORD)a3 != 1 )
    return result;
  v6 = *a1;
  if ( (*((_DWORD *)a1 + 3) & 0x400000) != 0 )
  {
    v4 = 0;
    ProcessPriorityClass = PsGetProcessPriorityClass(*a1);
    LOBYTE(v12) = 1;
    v7 = ProcessPriorityClass;
    PsSetProcessPriorityClass(v6, v12);
  }
  else
  {
    v7 = 0;
    v8 = (unsigned int)a3;
    if ( (_DWORD)a3 )
    {
      v9 = (unsigned int)(a3 - 1);
      if ( (unsigned int)v9 > 1 )
        return MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, a2, a3);
      goto LABEL_7;
    }
  }
  if ( gppiScreenSaver && (__int64 *)gppiScreenSaver != a1 && (struct tagDESKTOP *)grpdeskIODefault == grpdeskRitInput )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, a2, a3);
LABEL_7:
  anonymous_namespace_::SetProcessPriorityByClass(a1, v4);
  if ( v7 )
  {
    LOBYTE(v10) = v7;
    PsSetProcessPriorityClass(v6, v10);
  }
  result = (__int64)qword_1C029CF40;
  if ( qword_1C029CF40 )
  {
    result = qword_1C029CF40();
    if ( (int)result >= 0 )
    {
      result = (__int64)qword_1C029CF48;
      if ( qword_1C029CF48 )
        return qword_1C029CF48(a1, v4 != 0);
    }
  }
  return result;
}
