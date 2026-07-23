/*
 * XREFs of sub_140839430 @ 0x140839430
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteRange @ 0x1408395F0 (RtlDeleteRange.c)
 */

__int64 __fastcall sub_140839430(__int64 a1, _QWORD *a2)
{
  return RtlDeleteRange(*(_QWORD *)(a1 + 48), *a2, a2[1], *(_QWORD *)(a2[4] + 32LL));
}
