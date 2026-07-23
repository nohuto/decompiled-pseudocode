/*
 * XREFs of PsGetThreadSessionId @ 0x1407B6780
 * Callers:
 *     <none>
 * Callees:
 *     sub_140300B40 @ 0x140300B40 (sub_140300B40.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return sub_140300B40(*(_QWORD *)(a1 + 544));
}
