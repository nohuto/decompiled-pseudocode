/*
 * XREFs of IopLiveDumpAddPfnDatabase @ 0x140A9A110
 * Callers:
 *     <none>
 * Callees:
 *     MmAddPrivateDataToCrashDump @ 0x14062FFF0 (MmAddPrivateDataToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpAddPfnDatabase(__int64 a1, __int64 (__fastcall **a2)(_QWORD, _QWORD, __int64))
{
  return MmAddPrivateDataToCrashDump(a2, 1);
}
