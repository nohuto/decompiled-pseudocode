/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x140302BD0
 * Callers:
 *     sub_1402234C0 @ 0x1402234C0 (sub_1402234C0.c)
 *     sub_14025AFF0 @ 0x14025AFF0 (sub_14025AFF0.c)
 *     sub_140267A5C @ 0x140267A5C (sub_140267A5C.c)
 *     sub_14027E474 @ 0x14027E474 (sub_14027E474.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402DF940 @ 0x1402DF940 (sub_1402DF940.c)
 *     sub_140334400 @ 0x140334400 (sub_140334400.c)
 *     sub_1403591D8 @ 0x1403591D8 (sub_1403591D8.c)
 *     sub_140363D98 @ 0x140363D98 (sub_140363D98.c)
 *     sub_1403CD208 @ 0x1403CD208 (sub_1403CD208.c)
 *     sub_140503F38 @ 0x140503F38 (sub_140503F38.c)
 *     sub_140577D00 @ 0x140577D00 (sub_140577D00.c)
 *     sub_14059854C @ 0x14059854C (sub_14059854C.c)
 *     sub_1405E0E20 @ 0x1405E0E20 (sub_1405E0E20.c)
 *     sub_1406597D0 @ 0x1406597D0 (sub_1406597D0.c)
 *     sub_140681A2C @ 0x140681A2C (sub_140681A2C.c)
 *     sub_14068A6EC @ 0x14068A6EC (sub_14068A6EC.c)
 *     sub_14068F700 @ 0x14068F700 (sub_14068F700.c)
 *     sub_14069CEC8 @ 0x14069CEC8 (sub_14069CEC8.c)
 *     sub_1406CA970 @ 0x1406CA970 (sub_1406CA970.c)
 *     sub_1406FF7C4 @ 0x1406FF7C4 (sub_1406FF7C4.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 *     sub_140700200 @ 0x140700200 (sub_140700200.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     sub_1407B67A0 @ 0x1407B67A0 (sub_1407B67A0.c)
 *     sub_1407B69F0 @ 0x1407B69F0 (sub_1407B69F0.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1407E64AC @ 0x1407E64AC (sub_1407E64AC.c)
 *     sub_1407E7750 @ 0x1407E7750 (sub_1407E7750.c)
 *     sub_1407FAD60 @ 0x1407FAD60 (sub_1407FAD60.c)
 *     sub_1409AFDD8 @ 0x1409AFDD8 (sub_1409AFDD8.c)
 *     sub_1409B04E0 @ 0x1409B04E0 (sub_1409B04E0.c)
 *     sub_1409B49A0 @ 0x1409B49A0 (sub_1409B49A0.c)
 * Callees:
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

char __fastcall ObReferenceObjectSafeWithTag(__int64 a1)
{
  signed __int64 *v1; // rcx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (signed __int64 *)(a1 - 48);
  _m_prefetchw(v1);
  v2 = *v1;
  if ( !*v1 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( !v2 )
      return 0;
  }
  if ( dword_140D05010 )
    sub_1405C5EC8((_DWORD)v1);
  return 1;
}
