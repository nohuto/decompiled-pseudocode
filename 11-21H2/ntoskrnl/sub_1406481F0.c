/*
 * XREFs of sub_1406481F0 @ 0x1406481F0
 * Callers:
 *     sub_14042C390 @ 0x14042C390 (sub_14042C390.c)
 *     sub_14042C3A0 @ 0x14042C3A0 (sub_14042C3A0.c)
 *     sub_14042C3B0 @ 0x14042C3B0 (sub_14042C3B0.c)
 *     sub_14042C3C0 @ 0x14042C3C0 (sub_14042C3C0.c)
 *     sub_14042C3D0 @ 0x14042C3D0 (sub_14042C3D0.c)
 *     sub_14042C3E0 @ 0x14042C3E0 (sub_14042C3E0.c)
 *     sub_14042C3F0 @ 0x14042C3F0 (sub_14042C3F0.c)
 *     sub_14042C400 @ 0x14042C400 (sub_14042C400.c)
 *     sub_14042C410 @ 0x14042C410 (sub_14042C410.c)
 *     sub_14042C420 @ 0x14042C420 (sub_14042C420.c)
 *     sub_14042C430 @ 0x14042C430 (sub_14042C430.c)
 *     sub_14042C440 @ 0x14042C440 (sub_14042C440.c)
 *     sub_14042C450 @ 0x14042C450 (sub_14042C450.c)
 *     sub_14042C460 @ 0x14042C460 (sub_14042C460.c)
 *     sub_14042C470 @ 0x14042C470 (sub_14042C470.c)
 *     sub_14042C480 @ 0x14042C480 (sub_14042C480.c)
 * Callees:
 *     sub_14024B6F8 @ 0x14024B6F8 (sub_14024B6F8.c)
 *     sub_1403FAD10 @ 0x1403FAD10 (sub_1403FAD10.c)
 *     sub_14042C2D0 @ 0x14042C2D0 (sub_14042C2D0.c)
 */

__int64 __fastcall sub_1406481F0(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // [rsp+61h] [rbp-77h]
  __int64 v10; // [rsp+A9h] [rbp-2Fh]
  __int64 v11; // [rsp+B1h] [rbp-27h]

  sub_14024B6F8(a1, a2, a3);
  result = ((__int64)a2 >> 47) + 1;
  if ( (__int64)a2 >> 47 != -1 && result != 1 )
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v11 = a3;
    v9 = __ROL8__(a2, a3);
    v10 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    return sub_14042C2D0(a2);
  }
  return result;
}
