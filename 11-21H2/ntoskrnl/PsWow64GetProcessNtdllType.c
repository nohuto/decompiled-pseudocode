/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x140672A7C
 * Callers:
 *     PsThawMultiProcess @ 0x140257280 (PsThawMultiProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067259C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406727EC (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThread @ 0x1406747FC (PspWow64InitThread.c)
 *     DbgkCreateThread @ 0x140702604 (DbgkCreateThread.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     PsMapSystemDlls @ 0x140756164 (PsMapSystemDlls.c)
 *     DbgkSendSystemDllMessages @ 0x140927394 (DbgkSendSystemDllMessages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessNtdllType(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1408);
  if ( result )
    return *(unsigned int *)(result + 8);
  return result;
}
