/*
 * XREFs of sub_1800572E0 @ 0x1800572E0
 * Callers:
 *     sub_180056FB8 @ 0x180056FB8 (sub_180056FB8.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_1800572E0(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(volatile signed __int32 **)(v2 + 40);
    if ( v3 )
      sub_180010574(v3);
  }
  return sub_18001D2A8(a1);
}
