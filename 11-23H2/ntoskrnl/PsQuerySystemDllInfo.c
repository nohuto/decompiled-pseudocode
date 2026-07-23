/*
 * XREFs of PsQuerySystemDllInfo @ 0x14076F3A4
 * Callers:
 *     PspWow64PickBestNtdll @ 0x14036B4C4 (PspWow64PickBestNtdll.c)
 *     PsIsMachineSupportedNoWow @ 0x1406B7CB8 (PsIsMachineSupportedNoWow.c)
 *     PsWow64IsMachineSupported @ 0x14076F350 (PsWow64IsMachineSupported.c)
 *     DbgkCreateThread @ 0x14076FE0C (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x140936FD4 (DbgkSendSystemDllMessages.c)
 *     ExpSystemErrorHandler2 @ 0x140AAAFC0 (ExpSystemErrorHandler2.c)
 *     PspInitializeSystemDlls @ 0x140B6735C (PspInitializeSystemDlls.c)
 *     MmInitSystemDll @ 0x140B75608 (MmInitSystemDll.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall PsQuerySystemDllInfo(int a1)
{
  _UNKNOWN **v1; // rax

  v1 = PspSystemDlls[a1];
  if ( v1 && v1[4] )
    return v1 + 1;
  else
    return 0LL;
}
