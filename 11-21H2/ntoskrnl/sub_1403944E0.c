/*
 * XREFs of sub_1403944E0 @ 0x1403944E0
 * Callers:
 *     sub_14039423C @ 0x14039423C (sub_14039423C.c)
 * Callees:
 *     sub_14037ED14 @ 0x14037ED14 (sub_14037ED14.c)
 *     sub_1403812B0 @ 0x1403812B0 (sub_1403812B0.c)
 *     sub_1403812F8 @ 0x1403812F8 (sub_1403812F8.c)
 */

__int64 __fastcall sub_1403944E0(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebp
  char v9; // al
  unsigned int v10; // ecx
  __int64 result; // rax
  __int64 v12; // rcx

  if ( (a2[1] & 0xFFFFF000) != 0x1000 )
    __int2c();
  v8 = ((_DWORD)a4 - *(_DWORD *)(a1 + 472) - ((unsigned int)a4 & 0xFFFFF000)) / *(_DWORD *)(a1 + 464)
     + (*(_DWORD *)((a4 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456));
  sub_1403812B0(a1, (__int64)a2);
  sub_1403812B0(a1, a4);
  if ( (int)sub_14037ED14(a1, (unsigned __int64)a2, a3) < 0 )
    __int2c();
  *a2 = -1;
  a2[1] = v8;
  v9 = *(_BYTE *)(a1 + 1905);
  v10 = *(_DWORD *)(a1 + 1896) + 1;
  *(_DWORD *)(a1 + 1896) = v10;
  if ( (v9 & 3) == 0 && v10 > 0x400 )
  {
    v12 = *(_QWORD *)(a1 + 1912);
    *(_BYTE *)(a1 + 1905) = v9 & 0xFC | 1;
    sub_1403812F8(v12, 5LL, 0x7530u, 0xFFFFFFFE);
  }
  if ( (*(_DWORD *)(a4 + 4) & 0xFFFFF000) >= 0xFFFFF000 )
    __int2c();
  result = (unsigned int)(*(_DWORD *)(a4 + 4) + 4096);
  *(_DWORD *)(a4 + 4) = result;
  return result;
}
