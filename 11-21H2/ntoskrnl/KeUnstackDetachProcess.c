/*
 * XREFs of KeUnstackDetachProcess @ 0x1402037B0
 * Callers:
 *     sub_140203950 @ 0x140203950 (sub_140203950.c)
 *     sub_140261354 @ 0x140261354 (sub_140261354.c)
 *     sub_1406EBDB0 @ 0x1406EBDB0 (sub_1406EBDB0.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 *     sub_14085BD34 @ 0x14085BD34 (sub_14085BD34.c)
 *     sub_140960A90 @ 0x140960A90 (sub_140960A90.c)
 *     sub_140988EE4 @ 0x140988EE4 (sub_140988EE4.c)
 * Callees:
 *     sub_1403470F0 @ 0x1403470F0 (sub_1403470F0.c)
 */

void __stdcall KeUnstackDetachProcess(PRKAPC_STATE ApcState)
{
  struct _KPROCESS *Process; // rax

  Process = ApcState->Process;
  if ( Process != (struct _KPROCESS *)1 )
  {
    if ( !Process )
      ApcState = (PRKAPC_STATE)((char *)KeGetCurrentThread() + 600);
    sub_1403470F0(ApcState, 0LL);
  }
}
