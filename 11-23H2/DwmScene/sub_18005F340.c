/*
 * XREFs of sub_18005F340 @ 0x18005F340
 * Callers:
 *     sub_18005F298 @ 0x18005F298 (sub_18005F298.c)
 *     sub_1800615A8 @ 0x1800615A8 (sub_1800615A8.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_18005F340(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v2; // rcx

  v2 = (volatile signed __int32 *)a2[5];
  if ( v2 )
    sub_180010574(v2);
  return sub_1800100E8(a2, 0x30uLL);
}
