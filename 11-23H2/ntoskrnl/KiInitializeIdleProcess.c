/*
 * XREFs of KiInitializeIdleProcess @ 0x140B5EA40
 * Callers:
 *     KiInitSystem @ 0x140B5E764 (KiInitSystem.c)
 * Callees:
 *     KeInitializeIdealProcessorAssignmentBlock @ 0x140224790 (KeInitializeIdealProcessorAssignmentBlock.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeInitializeProcess @ 0x1406B6898 (KeInitializeProcess.c)
 */

__int64 __fastcall KiInitializeIdleProcess(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[68]; // [rsp+40h] [rbp-128h] BYREF

  v3[0] = 2097153;
  memset(&v3[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v3, 0);
  KeInitializeProcess(a1, 0, 0, (unsigned __int16 *)v3, 0LL, 0LL, 1);
  *(_BYTE *)(a1 + 641) = 127;
  *(_QWORD *)(a1 + 1512) = a1 + 1504;
  *(_QWORD *)(a1 + 1504) = a1 + 1504;
  KeInitializeIdealProcessorAssignmentBlock(a1 + 2560);
  _InterlockedOr(dword_140D4A3A0, 0x8000u);
  _InterlockedOr(dword_140D4A7BC, 0x400000u);
  result = 34404LL;
  *(_WORD *)(a1 + 2412) = -31132;
  return result;
}
