/*
 * XREFs of Interrupter_ClearBusEdgeInformationRoutineWithIsrSync @ 0x1C000D870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Interrupter_ClearBusEdgeInformationRoutineWithIsrSync(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 1LL;
  *(_BYTE *)(a2 + 57) = 0;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_DWORD *)(a2 + 80) = 0;
  *(_QWORD *)(a2 + 128) = 0LL;
  *(_QWORD *)(a2 + 136) = 0LL;
  *(_DWORD *)(a2 + 144) = 0;
  return result;
}
