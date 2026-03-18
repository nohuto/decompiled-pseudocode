/*
 * XREFs of PoFxSetComponentWake @ 0x140588920
 * Callers:
 *     DifPoFxSetComponentWakeWrapper @ 0x1405E9E50 (DifPoFxSetComponentWakeWrapper.c)
 * Callees:
 *     PopDiagTraceFxComponentWake @ 0x1405930E8 (PopDiagTraceFxComponentWake.c)
 *     PopPepComponentSetWakeHint @ 0x14059ED40 (PopPepComponentSetWakeHint.c)
 */

__int64 __fastcall PoFxSetComponentWake(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // r8

  PopDiagTraceFxComponentWake(*(_QWORD *)(a1 + 48));
  LOBYTE(v6) = a3;
  return PopPepComponentSetWakeHint(*(_QWORD *)(a1 + 56), a2, v6);
}
