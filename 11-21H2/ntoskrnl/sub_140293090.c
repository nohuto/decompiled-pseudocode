/*
 * XREFs of sub_140293090 @ 0x140293090
 * Callers:
 *     sub_1405725CC @ 0x1405725CC (sub_1405725CC.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140293090(__int64 a1, _DWORD *a2)
{
  if ( (*(_DWORD *)(a1 + 1376) & 0x20000) != 0 )
  {
    if ( a2 )
      *a2 = (unsigned __int16)word_140D05018;
    return *(_QWORD *)(a1 + 1616);
  }
  else
  {
    if ( a2 )
      *a2 = 1;
    return a1 + 1616;
  }
}
