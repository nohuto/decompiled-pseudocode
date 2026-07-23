/*
 * XREFs of sub_140550BFC @ 0x140550BFC
 * Callers:
 *     sub_140550E2C @ 0x140550E2C (sub_140550E2C.c)
 *     sub_140550E80 @ 0x140550E80 (sub_140550E80.c)
 *     sub_140550FDC @ 0x140550FDC (sub_140550FDC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140550BFC(__int64 a1, __int64 a2)
{
  if ( qword_140C54D10 && *(_QWORD *)(qword_140C54D10 + 144) )
    return sub_14042A5E0(a1, a2);
  else
    return 2LL;
}
