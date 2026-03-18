/*
 * XREFs of HvAddToLayoutStats @ 0x1407459D0
 * Callers:
 *     HvCheckHive @ 0x14070A0A0 (HvCheckHive.c)
 *     HvCheckBin @ 0x140745770 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
