/*
 * XREFs of EditionMouseMoveShellResilience @ 0x1C01073B0
 * Callers:
 *     <none>
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00A9974 (IsAdaptiveQueueDetachExempted.c)
 */

void __fastcall EditionMouseMoveShellResilience(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 672);
  if ( v4
    && (*(_DWORD *)(v3 + 1256) & 0x40000) != 0
    && (*(_DWORD *)(v4 + 200) & 0x100000) != 0
    && *(_QWORD *)(v3 + 1384) )
  {
    if ( !*(_DWORD *)(v4 + 280) )
      *(_DWORD *)(v4 + 280) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !IsAdaptiveQueueDetachExempted(v3, v4, a3) )
      KeSetEvent(*(PRKEVENT *)(v3 + 1384), 1, 0);
  }
}
