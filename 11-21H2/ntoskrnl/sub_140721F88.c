/*
 * XREFs of sub_140721F88 @ 0x140721F88
 * Callers:
 *     sub_140657A88 @ 0x140657A88 (sub_140657A88.c)
 *     sub_140657ADC @ 0x140657ADC (sub_140657ADC.c)
 *     sub_1406A50C8 @ 0x1406A50C8 (sub_1406A50C8.c)
 *     sub_1406EB534 @ 0x1406EB534 (sub_1406EB534.c)
 *     sub_140721D00 @ 0x140721D00 (sub_140721D00.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C3490 @ 0x1407C3490 (sub_1407C3490.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140721F88(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8

  v2 = *a2;
  if ( !*a2 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    *a2 = v2;
  }
  if ( a1 == v2 )
    return 0LL;
  *a2 = *(_QWORD *)(v2 + 8);
  return v2 - 32;
}
