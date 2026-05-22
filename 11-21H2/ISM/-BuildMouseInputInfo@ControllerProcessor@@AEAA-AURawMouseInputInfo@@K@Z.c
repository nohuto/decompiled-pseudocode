/*
 * XREFs of ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AURawMouseInputInfo@@K@Z @ 0x180176724
 * Callers:
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x180176254 (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJXZ @ 0x18017657C (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180179884 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 */

_DWORD *__fastcall ControllerProcessor::BuildMouseInputInfo(__int64 a1, _DWORD *a2, int a3)
{
  _DWORD *result; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  memset_0(a2, 0, 0x218uLL);
  a2[6] = 536;
  *a2 = 4096;
  a2[2] = GetTickCount();
  *((LARGE_INTEGER *)a2 + 2) = PerformanceCount;
  *((_QWORD *)a2 + 4) = *(_QWORD *)(a1 + 304);
  *((_WORD *)a2 + 45) = 0;
  *(_QWORD *)(a2 + 25) = 0LL;
  result = a2;
  a2[23] = a3;
  return result;
}
