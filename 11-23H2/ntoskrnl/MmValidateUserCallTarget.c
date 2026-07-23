/*
 * XREFs of MmValidateUserCallTarget @ 0x140A43FF8
 * Callers:
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     MmCheckForSafeExecution @ 0x140A3C7C0 (MmCheckForSafeExecution.c)
 * Callees:
 *     MiValidateUserCallTarget @ 0x140A43F38 (MiValidateUserCallTarget.c)
 */

__int64 __fastcall MmValidateUserCallTarget(unsigned __int64 a1, int a2)
{
  unsigned __int64 v2; // rax

  v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
  if ( *(_QWORD *)(v2 + 432) )
    return MiValidateUserCallTarget(a1, v2 + 424 + (a2 != 0 ? 0x20 : 0));
  else
    return 1LL;
}
