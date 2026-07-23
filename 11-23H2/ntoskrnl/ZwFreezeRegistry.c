/*
 * XREFs of ZwFreezeRegistry @ 0x14041CF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwFreezeRegistry(ULONG TimeOutInSeconds)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&TimeOutInSeconds);
}
