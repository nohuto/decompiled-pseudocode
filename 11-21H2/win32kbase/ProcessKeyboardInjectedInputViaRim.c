/*
 * XREFs of ProcessKeyboardInjectedInputViaRim @ 0x1C0005350
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C00052B0 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 * Callees:
 *     ProcessKeyboardInjectedInput @ 0x1C00053AC (ProcessKeyboardInjectedInput.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C003EB54 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01DB3B8 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 */

__int64 __fastcall ProcessKeyboardInjectedInputViaRim(__int64 a1, __int64 a2)
{
  if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(
                       1LL,
                       gptiCurrent,
                       *(_QWORD *)(a2 + 392),
                       *(unsigned int *)(a2 + 400)) )
    return ProcessKeyboardInjectedInput(a1, a2, 0LL);
  else
    return InputTraceLogging::Keyboard::DropInput(0LL);
}
