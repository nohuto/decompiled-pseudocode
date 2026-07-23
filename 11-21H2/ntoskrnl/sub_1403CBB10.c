/*
 * XREFs of sub_1403CBB10 @ 0x1403CBB10
 * Callers:
 *     sub_1403CB7F4 @ 0x1403CB7F4 (sub_1403CB7F4.c)
 *     sub_1403CB9F0 @ 0x1403CB9F0 (sub_1403CB9F0.c)
 *     sub_14056A8C4 @ 0x14056A8C4 (sub_14056A8C4.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 */

void __fastcall sub_1403CBB10(int a1, _GROUP_AFFINITY *a2)
{
  unsigned int v2; // ecx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  v2 = dword_140D0E5E0[a1];
  Affinity.Group = v2 >> 6;
  Affinity.Mask = 1LL << (v2 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, a2);
}
