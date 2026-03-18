/*
 * XREFs of ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0167EA0
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 *     rimStackAttachAndProcessInput @ 0x1C0004590 (rimStackAttachAndProcessInput.c)
 *     RIMWatchDog @ 0x1C0043C80 (RIMWatchDog.c)
 *     RIMStartDeviceSpecificRead @ 0x1C004AF3C (RIMStartDeviceSpecificRead.c)
 *     RIMOpenDevWorker @ 0x1C004B0E0 (RIMOpenDevWorker.c)
 *     rimInputApc @ 0x1C00C06F0 (rimInputApc.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00C4674 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 * Callees:
 *     <none>
 */

void DbgPrintGDI(PCCH Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  vDbgPrintEx(0x70u, 0, Format, va);
}
