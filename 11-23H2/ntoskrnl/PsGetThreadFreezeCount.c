/*
 * XREFs of PsGetThreadFreezeCount @ 0x14036E8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadFreezeCount(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 544) + 888LL) + ((*(_DWORD *)(*(_QWORD *)(a1 + 544) + 632LL) >> 3) & 1u);
}
