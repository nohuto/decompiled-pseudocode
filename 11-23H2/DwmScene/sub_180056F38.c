/*
 * XREFs of sub_180056F38 @ 0x180056F38
 * Callers:
 *     sub_180056EE0 @ 0x180056EE0 (sub_180056EE0.c)
 *     sub_18005851C @ 0x18005851C (sub_18005851C.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_180056F38(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v2; // rcx

  v2 = (volatile signed __int32 *)a2[5];
  if ( v2 )
    sub_180010574(v2);
  return sub_1800100E8(a2, 0x48uLL);
}
