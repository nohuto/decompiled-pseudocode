/*
 * XREFs of IsNVMeControllerOnFatalError @ 0x1C000C17C
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002A40 (NVMeCompletionDpcRoutine.c)
 *     NVMeControllerReset @ 0x1C000E638 (NVMeControllerReset.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BBE0 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

char __fastcall IsNVMeControllerOnFatalError(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL) & 2) == 0 )
    return 0;
  StorPortExtendedFunction(98LL, a1, 0LL);
  return 1;
}
