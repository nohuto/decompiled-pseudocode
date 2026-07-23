/*
 * XREFs of sub_1403699D0 @ 0x1403699D0
 * Callers:
 *     sub_140211750 @ 0x140211750 (sub_140211750.c)
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     sub_14030C870 @ 0x14030C870 (sub_14030C870.c)
 *     sub_140373DA0 @ 0x140373DA0 (sub_140373DA0.c)
 *     sub_140374708 @ 0x140374708 (sub_140374708.c)
 *     sub_1403B171C @ 0x1403B171C (sub_1403B171C.c)
 *     sub_1403DB8D8 @ 0x1403DB8D8 (sub_1403DB8D8.c)
 *     sub_14045EA32 @ 0x14045EA32 (sub_14045EA32.c)
 *     sub_140580088 @ 0x140580088 (sub_140580088.c)
 *     sub_1405801E4 @ 0x1405801E4 (sub_1405801E4.c)
 *     sub_1405802D8 @ 0x1405802D8 (sub_1405802D8.c)
 *     sub_140602478 @ 0x140602478 (sub_140602478.c)
 *     sub_140602808 @ 0x140602808 (sub_140602808.c)
 *     sub_140602AEC @ 0x140602AEC (sub_140602AEC.c)
 *     sub_1406D45B4 @ 0x1406D45B4 (sub_1406D45B4.c)
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 *     sub_1407EE6D0 @ 0x1407EE6D0 (sub_1407EE6D0.c)
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 *     sub_1407EEBA8 @ 0x1407EEBA8 (sub_1407EEBA8.c)
 *     sub_1407EEFE4 @ 0x1407EEFE4 (sub_1407EEFE4.c)
 *     sub_1407FF0A8 @ 0x1407FF0A8 (sub_1407FF0A8.c)
 *     sub_14096BE44 @ 0x14096BE44 (sub_14096BE44.c)
 *     sub_14096C6C4 @ 0x14096C6C4 (sub_14096C6C4.c)
 *     sub_140974B60 @ 0x140974B60 (sub_140974B60.c)
 *     sub_140974FBC @ 0x140974FBC (sub_140974FBC.c)
 *     sub_140975748 @ 0x140975748 (sub_140975748.c)
 *     sub_1409910B0 @ 0x1409910B0 (sub_1409910B0.c)
 *     sub_140994398 @ 0x140994398 (sub_140994398.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_140B084F4 @ 0x140B084F4 (sub_140B084F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403699D0(__int64 a1, const CHAR *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(v2 + 1);
  }
  else
  {
    a2 = &File;
    result = 1LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
