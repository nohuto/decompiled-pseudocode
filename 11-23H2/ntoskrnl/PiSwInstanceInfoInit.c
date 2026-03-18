/*
 * XREFs of PiSwInstanceInfoInit @ 0x140819420
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14081904C (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x1406CCC3C (PnpAllocatePWSTR.c)
 *     PnpConcatPWSTR @ 0x1407FA9A8 (PnpConcatPWSTR.c)
 *     PiSwInstanceInfoFree @ 0x14096749C (PiSwInstanceInfoFree.c)
 */

__int64 __fastcall PiSwInstanceInfoInit(PVOID *a1, __int64 a2)
{
  int PWSTR; // ebx

  PWSTR = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, a1, 2uLL);
  if ( PWSTR < 0 || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16), 0xC8uLL, 0x57706E50u, a1 + 1), PWSTR < 0) )
    PiSwInstanceInfoFree(a1);
  return (unsigned int)PWSTR;
}
