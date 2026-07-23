/*
 * XREFs of sub_1405398C0 @ 0x1405398C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14053D2E4 @ 0x14053D2E4 (sub_14053D2E4.c)
 */

char __fastcall sub_1405398C0(__int64 a1, __int64 a2, unsigned int *a3)
{
  if ( !dword_140C54C60 || !*(_BYTE *)(a1 + 1300) || !*(_BYTE *)(a2 + 1236) )
    return 0;
  sub_14053D2E4(a2, *a3);
  return 1;
}
