/*
 * XREFs of sub_1403AFE68 @ 0x1403AFE68
 * Callers:
 *     sub_1403979C4 @ 0x1403979C4 (sub_1403979C4.c)
 *     sub_1403AEB58 @ 0x1403AEB58 (sub_1403AEB58.c)
 *     sub_1403AED64 @ 0x1403AED64 (sub_1403AED64.c)
 *     sub_1403AF5E4 @ 0x1403AF5E4 (sub_1403AF5E4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1403AFE68(_DWORD *a1)
{
  if ( byte_140C2B068 && *a1 == 1 )
    return sub_14042A5E0((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}
