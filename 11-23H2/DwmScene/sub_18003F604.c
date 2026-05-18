/*
 * XREFs of sub_18003F604 @ 0x18003F604
 * Callers:
 *     sub_18003F750 @ 0x18003F750 (sub_18003F750.c)
 *     sub_18003F970 @ 0x18003F970 (sub_18003F970.c)
 *     sub_1800429B0 @ 0x1800429B0 (sub_1800429B0.c)
 *     sub_180042B88 @ 0x180042B88 (sub_180042B88.c)
 *     sub_180042CBC @ 0x180042CBC (sub_180042CBC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003F604(__int64 a1)
{
  unsigned __int64 v1; // r9
  __int64 v2; // rcx
  __int64 v3; // rax

  v1 = 0LL;
  v2 = 0xCBF29CE484222325uLL;
  do
  {
    v3 = *(unsigned __int8 *)(v1 + a1);
    ++v1;
    v2 = 0x100000001B3LL * (v3 ^ v2);
  }
  while ( v1 < 8 );
  return v2;
}
