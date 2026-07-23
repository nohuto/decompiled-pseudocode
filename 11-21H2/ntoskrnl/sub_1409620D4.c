/*
 * XREFs of sub_1409620D4 @ 0x1409620D4
 * Callers:
 *     sub_1409E39EC @ 0x1409E39EC (sub_1409E39EC.c)
 *     sub_1409E3B04 @ 0x1409E3B04 (sub_1409E3B04.c)
 *     sub_1409F36F4 @ 0x1409F36F4 (sub_1409F36F4.c)
 *     sub_140B5197C @ 0x140B5197C (sub_140B5197C.c)
 * Callees:
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int16 __fastcall sub_1409620D4(unsigned __int16 *a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  memset(a1, 0, 0x160uLL);
  *(_DWORD *)a1 = 23068689;
  *((_QWORD *)a1 + 4) = a2;
  *((_QWORD *)a1 + 5) = a3;
  a1[172] = a4;
  *((_DWORD *)a1 + 19) = 0;
  *((_DWORD *)a1 + 18) = 2097153;
  memset(a1 + 40, 0, 0x100uLL);
  return sub_140300030((__int64)(a1 + 36), a1[37], (unsigned __int16 *)dword_140D06E40);
}
