/*
 * XREFs of ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01F90E8
 * Callers:
 *     MouseButtonAction @ 0x1C01E80D0 (MouseButtonAction.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C0035AFC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@KA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1C003B4E4 (-GetExecutionEnvironment@CBaseProcessor@@KA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C003C62C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseButtonAction(
        CMouseProcessor *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int16 v13; // dx
  __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // r8
  _BYTE v17[8]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v18; // [rsp+28h] [rbp-90h] BYREF
  __int64 v19; // [rsp+38h] [rbp-80h]
  struct tagPOINT v20; // [rsp+40h] [rbp-78h] BYREF

  v4 = a3;
  v5 = a2;
  if ( (PVOID)PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment() != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  if ( v4 > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  if ( (unsigned int)(v5 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  v19 = 0LL;
  v18 = 0LL;
  v13 = 1;
  if ( v5 != 1 )
    v13 = 4;
  v14 = 2 * v13;
  if ( v4 != 1 )
    v14 = v13;
  WORD2(v18) = v14;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v20, (__int64)&v18, 2, 0x100u);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v17, v15, v16);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v20, 0LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17);
}
