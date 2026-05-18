/*
 * XREFs of sub_18003F5A8 @ 0x18003F5A8
 * Callers:
 *     sub_18003F574 @ 0x18003F574 (sub_18003F574.c)
 *     sub_180042838 @ 0x180042838 (sub_180042838.c)
 *     sub_180042CBC @ 0x180042CBC (sub_180042CBC.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_18003F5A8(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v2; // rcx

  v2 = (volatile signed __int32 *)a2[4];
  if ( v2 )
    sub_180010574(v2);
  return sub_1800100E8(a2, 0x28uLL);
}
