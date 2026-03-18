/*
 * XREFs of SynthesizePTPMouseInput @ 0x1C00E8FA4
 * Callers:
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x1C00E8B10 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C01E7880 (ChildProcessRootSynthesizedMouseInput.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C0035AFC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C009A4B4 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall SynthesizePTPMouseInput(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        struct PTPMouseInputData *a6)
{
  CMouseProcessor *MouseProcessor; // rbx
  __int64 v11; // rax
  __int128 v12; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v13; // [rsp+40h] [rbp-99h]
  __int128 v14; // [rsp+50h] [rbp-89h]
  __int64 v15; // [rsp+60h] [rbp-79h]
  __int128 v16; // [rsp+70h] [rbp-69h] BYREF
  __int64 v17; // [rsp+80h] [rbp-59h]
  struct tagPOINT v18; // [rsp+90h] [rbp-49h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, 0LL);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    *((_QWORD *)&v12 + 1) = a1;
    *(_QWORD *)&v14 = a3;
    *((_QWORD *)&v14 + 1) = a4;
    v13 = 0LL;
    v11 = *((_QWORD *)a6 + 3);
    *(_QWORD *)&v12 = a1 != 0 ? 3uLL : 0;
    v15 = v11;
    v17 = 0LL;
    v16 = v12;
    v13 = v11;
    v12 = v14;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v18, a2, &v12, a5, (__int64)&v16, 0LL);
    CMouseProcessor::SynthesizeMouse(MouseProcessor, (struct tagPOINT)&v18, a6);
  }
}
