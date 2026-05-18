/*
 * XREFs of sub_180086808 @ 0x180086808
 * Callers:
 *     sub_180086BE0 @ 0x180086BE0 (sub_180086BE0.c)
 *     sub_18008BEC0 @ 0x18008BEC0 (sub_18008BEC0.c)
 * Callees:
 *     sub_180086614 @ 0x180086614 (sub_180086614.c)
 */

__int64 __fastcall sub_180086808(__int64 a1, __int64 a2)
{
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  sub_180086614((__int64 *)(a1 + 16), (__int64 *)(a2 + 16));
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  return a1;
}
