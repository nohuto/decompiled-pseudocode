/*
 * XREFs of sub_140A9C7B0 @ 0x140A9C7B0
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A9C7B0(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)a1 = dword_140C0B1F8;
  *(_DWORD *)(a1 + 4) = dword_140C2A040;
  *(_DWORD *)(a1 + 24) = 1000 * dword_140C1B25C;
  *(_DWORD *)(a1 + 28) = dword_140D5750C;
  return 0LL;
}
