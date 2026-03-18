/*
 * XREFs of MiDeletePartialVad @ 0x1402ECFD8
 * Callers:
 *     MiFreeVadRange @ 0x1402ECEB0 (MiFreeVadRange.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140281A58 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiDecrementPartialVadSubsections @ 0x1402ED0C4 (MiDecrementPartialVadSubsections.c)
 *     MiPerformVadSplitting @ 0x1402ED194 (MiPerformVadSplitting.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiUnmapVad @ 0x1406F9060 (MiUnmapVad.c)
 *     MiAllocateSplitVads @ 0x14079D6B0 (MiAllocateSplitVads.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 */

__int64 __fastcall MiDeletePartialVad(_DWORD *P, __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rbp
  __int64 result; // rax
  _QWORD v11[10]; // [rsp+20h] [rbp-98h] BYREF

  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( (P[12] & 0x200000) == 0 && *(_QWORD *)(**((_QWORD **)P + 9) + 64LL) && *((__int64 *)P + 15) < 0 )
    return 3221225505LL;
  LODWORD(v11[2]) = a4;
  v11[3] = a2;
  v11[4] = a3;
  v11[1] = P;
  result = MiAllocateSplitVads(v11);
  if ( (int)result >= 0 )
  {
    MiPerformVadSplitting(v11);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    if ( (P[12] & 0x200000) != 0 )
      MiDeleteVad(P);
    else
      MiUnmapVad(P);
    MiDecrementPartialVadSubsections(v11);
    return 0LL;
  }
  return result;
}
