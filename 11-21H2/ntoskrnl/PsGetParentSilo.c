/*
 * XREFs of PsGetParentSilo @ 0x1407FC3C0
 * Callers:
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 *     sub_1406928FC @ 0x1406928FC (sub_1406928FC.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_1407349A0 @ 0x1407349A0 (sub_1407349A0.c)
 *     sub_1409ABCF4 @ 0x1409ABCF4 (sub_1409ABCF4.c)
 *     sub_140A34510 @ 0x140A34510 (sub_140A34510.c)
 *     sub_140A34854 @ 0x140A34854 (sub_140A34854.c)
 * Callees:
 *     sub_140212034 @ 0x140212034 (sub_140212034.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return sub_140212034(*(_QWORD *)(a1 + 1264));
  else
    return 0LL;
}
