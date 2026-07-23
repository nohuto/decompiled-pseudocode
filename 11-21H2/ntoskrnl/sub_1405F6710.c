/*
 * XREFs of sub_1405F6710 @ 0x1405F6710
 * Callers:
 *     sub_140237D58 @ 0x140237D58 (sub_140237D58.c)
 *     sub_140237ED8 @ 0x140237ED8 (sub_140237ED8.c)
 *     sub_140237F80 @ 0x140237F80 (sub_140237F80.c)
 *     sub_14037F4B4 @ 0x14037F4B4 (sub_14037F4B4.c)
 *     sub_1403803F8 @ 0x1403803F8 (sub_1403803F8.c)
 *     sub_140380950 @ 0x140380950 (sub_140380950.c)
 *     sub_140380E44 @ 0x140380E44 (sub_140380E44.c)
 *     sub_140381960 @ 0x140381960 (sub_140381960.c)
 *     sub_140381A7C @ 0x140381A7C (sub_140381A7C.c)
 *     sub_140381C90 @ 0x140381C90 (sub_140381C90.c)
 *     sub_140381E98 @ 0x140381E98 (sub_140381E98.c)
 *     sub_1403836FC @ 0x1403836FC (sub_1403836FC.c)
 *     sub_1403901F0 @ 0x1403901F0 (sub_1403901F0.c)
 *     sub_1403903B8 @ 0x1403903B8 (sub_1403903B8.c)
 *     sub_1403925F8 @ 0x1403925F8 (sub_1403925F8.c)
 *     sub_140395F60 @ 0x140395F60 (sub_140395F60.c)
 *     sub_140396030 @ 0x140396030 (sub_140396030.c)
 *     sub_140396180 @ 0x140396180 (sub_140396180.c)
 *     sub_1405F5F44 @ 0x1405F5F44 (sub_1405F5F44.c)
 *     sub_1405F6054 @ 0x1405F6054 (sub_1405F6054.c)
 *     sub_1405F616C @ 0x1405F616C (sub_1405F616C.c)
 *     sub_1405F627C @ 0x1405F627C (sub_1405F627C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405F6710(__int64 *a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  unsigned int v5; // ecx
  int v6; // ebx

  result = *a2 ^ (*a2 ^ (4 * (*a2 >> 2) - 4)) & 0xFFCu;
  *a2 = result;
  if ( (result & 0xFFC) == 0 )
  {
    *a2 = result & 0xFFFFFFFD;
    v4 = (__int64)(DesiredTime * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
    v5 = v4 - *(_DWORD *)(*a1 + 52);
    if ( v5 > 0x3FF )
      v5 = 1023;
    result = (*a2 ^ (4 * v5)) & 0xFFC;
    *a2 ^= result;
    if ( v5 >= 0x2FF )
    {
      v6 = v4 - 511;
      sub_14042A5E0(a1, sub_1405F6AD0);
      result = *a1;
      *(_DWORD *)(*a1 + 52) = v6;
    }
  }
  return result;
}
