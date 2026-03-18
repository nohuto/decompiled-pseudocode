/*
 * XREFs of SynthesizePTPMouseInput @ 0x1C00E5ADE
 * Callers:
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x1C00E5360 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C01E7CE0 (ChildProcessRootSynthesizedMouseInput.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C005304C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C00545FC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0054794 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
  __int128 v12; // [rsp+48h] [rbp-89h] BYREF
  __int64 v13; // [rsp+58h] [rbp-79h]
  __int128 v14; // [rsp+68h] [rbp-69h] BYREF
  __int64 v15; // [rsp+78h] [rbp-59h]
  struct tagPOINT v16; // [rsp+88h] [rbp-49h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1335);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1336);
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( MouseProcessor )
  {
    *((_QWORD *)&v12 + 1) = a1;
    v13 = 0LL;
    v11 = *((_QWORD *)a6 + 3);
    *(_QWORD *)&v12 = a1 != 0 ? 3uLL : 0;
    v13 = v11;
    v14 = v12;
    v15 = 0LL;
    *(_QWORD *)&v12 = a3;
    *((_QWORD *)&v12 + 1) = a4;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v16, a2, &v12, a5, (__int64)&v14, 0LL);
    CMouseProcessor::SynthesizeMouse(MouseProcessor, (struct tagPOINT)&v16, a6);
  }
}
