/*
 * XREFs of PopDiagTraceDebuggerTransitionRequirements @ 0x140592AD8
 * Callers:
 *     PopPepInitializeDebuggerMasks @ 0x14059F6B0 (PopPepInitializeDebuggerMasks.c)
 * Callees:
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDebuggerTransitionRequirements(__int64 a1, __int64 a2, int a3)
{
  REGHANDLE v5; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  int *v7; // [rsp+50h] [rbp-30h]
  int v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+5Ch] [rbp-24h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]
  __int64 v13; // [rsp+A0h] [rbp+20h] BYREF
  int v14; // [rsp+B0h] [rbp+30h] BYREF

  v14 = a3;
  v13 = a1;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEBUGGER_TRANSITION_REQUIREMENTS) )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&v13;
      UserData.Size = 8;
      v7 = &v14;
      v8 = 4;
      v10 = a2;
      v11 = a3;
      EtwWriteEx(v5, &POP_ETW_EVENT_DEBUGGER_TRANSITION_REQUIREMENTS, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
