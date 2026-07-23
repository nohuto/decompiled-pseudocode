/*
 * XREFs of EtwpCovSampSafeForUserAddressCapture @ 0x14046A6C8
 * Callers:
 *     EtwpCovSampCaptureApc @ 0x14046A170 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureSample @ 0x140603C70 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     MmCanThreadFault @ 0x14022795C (MmCanThreadFault.c)
 */

__int64 __fastcall EtwpCovSampSafeForUserAddressCapture(int a1, int *a2)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rbx
  int v5; // eax
  int v6; // eax
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 || (v5 = 0, !CurrentThread->Teb) )
    v5 = 1;
  *a2 = v5;
  if ( CurrentIrql >= 2u )
    return 3221225659LL;
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    return 3221225659LL;
  LOBYTE(v6) = MmCanThreadFault();
  if ( !v6 || BYTE6(CurrentThread[1].Queue) && !a1 )
    return 3221225659LL;
  result = 3221225659LL;
  if ( KeGetCurrentThread()->ApcStateIndex != 1 )
    return 0LL;
  return result;
}
