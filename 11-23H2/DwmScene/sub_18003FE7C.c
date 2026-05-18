/*
 * XREFs of sub_18003FE7C @ 0x18003FE7C
 * Callers:
 *     sub_18003F750 @ 0x18003F750 (sub_18003F750.c)
 *     sub_1800E65F2 @ 0x1800E65F2 (sub_1800E65F2.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_18003FE7C(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(volatile signed __int32 **)(v2 + 32);
    if ( v3 )
      sub_180010574(v3);
  }
  return sub_180029304(a1);
}
