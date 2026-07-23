/*
 * XREFs of sub_14024E2A0 @ 0x14024E2A0
 * Callers:
 *     sub_14024E0F0 @ 0x14024E0F0 (sub_14024E0F0.c)
 *     sub_1403DDD90 @ 0x1403DDD90 (sub_1403DDD90.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14024E2A0(__int64 a1)
{
  _QWORD *v2; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD **)(a1 + 1184);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 1184) = *v2;
    ExFreePoolWithTag(v2 - 4, 0);
  }
}
