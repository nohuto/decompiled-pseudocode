/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x1407A1930
 * Callers:
 *     PsThawMultiProcess @ 0x1402044E4 (PsThawMultiProcess.c)
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     DbgkCreateThread @ 0x14076FE0C (DbgkCreateThread.c)
 *     PspWow64InitThread @ 0x14079F5B4 (PspWow64InitThread.c)
 *     PspSetupUserProcessAddressSpace @ 0x1407A144C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1407A16B8 (PspPrepareSystemDllInitBlock.c)
 *     PsMapSystemDlls @ 0x1407A33B8 (PsMapSystemDlls.c)
 *     DbgkSendSystemDllMessages @ 0x140936FD4 (DbgkSendSystemDllMessages.c)
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
